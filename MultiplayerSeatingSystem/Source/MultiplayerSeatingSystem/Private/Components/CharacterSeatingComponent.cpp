// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CharacterSeatingComponent.h"
#include "Components/SeatableObjectComponent.h"
#include "Widgets/SeatingInteractionWidget.h"

#include "Net/UnrealNetwork.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/UserWidget.h"

// Sets default values for this component's properties
UCharacterSeatingComponent::UCharacterSeatingComponent()
{
	PrimaryComponentTick.bCanEverTick = true; // Enable Tick for detection
	PrimaryComponentTick.TickInterval = 0.1f; // Tick every 0.1 seconds

	SetIsReplicatedByDefault(true);
}

void UCharacterSeatingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate to all clients
	DOREPLIFETIME(UCharacterSeatingComponent, SittingState);
}


void UCharacterSeatingComponent::BeginPlay()
{
	Super::BeginPlay();

	// UI should only exist on the client actually playing this character
	if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
	{
		if (OwnerPawn->IsLocallyControlled())
		{
			SetupInteractionUI();
		}
	}
}



void UCharacterSeatingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Only perform the trace for the local player
	if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
	{
		if (OwnerPawn->IsLocallyControlled())
		{
			PerformInteractionTrace();
		}
	}
}

#pragma region Interaction

void UCharacterSeatingComponent::Interact()
{
	// If we're sitting, stand up
	if (SittingState.bIsSitting)
	{
		RequestStand();
	}
	// If we are looking at a seatable and it's not full, sit down
	else if (LastHoveredSeatable.IsValid() && !bLastOccupiedState)
	{
		RequestSit(LastHoveredSeatable.Get());
	}
}

void UCharacterSeatingComponent::SetupInteractionUI()
{
	if (!PromptWidgetClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("SeatingComponent: PromptWidgetClass is null!"));
		return;
	}
	if (APawn* OwnerPawn = Cast<APawn>(GetOwner()))
	{
		if (!OwnerPawn->IsLocallyControlled())
		{
			return;
		}
		APlayerController* PC = Cast<APlayerController>(OwnerPawn->GetController());
		if (!PC)
		{
			return;
		}

		// Create the widget and add it to the viewport
		PromptWidgetInstance = CreateWidget<USeatingInteractionWidget>(PC, PromptWidgetClass);
		if (PromptWidgetInstance)
		{
			PromptWidgetInstance->AddToViewport();

			OnHoverChanged.AddDynamic(PromptWidgetInstance, &USeatingInteractionWidget::UpdatePromptText);
		}

	}
}


void UCharacterSeatingComponent::PerformInteractionTrace()
{
	ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());
	if (!CharacterOwner || SittingState.bIsSitting)
	{
		if (LastHoveredSeatable.IsValid())
		{
			OnHoverChanged.Broadcast(TEXT(""));
			LastHoveredSeatable = nullptr;
		}
		return;
	}

	// Get the Controller to access the true Player Viewpoint (Camera)
	APlayerController* PC = CharacterOwner->GetLocalViewingPlayerController();
	if (!PC) return;

	FVector ViewLoc;
	FRotator ViewRot;

	// This works for both FP and TP because it retrieves the camera's location/rotation
	PC->GetPlayerViewPoint(ViewLoc, ViewRot);

	FVector TraceEnd = ViewLoc + (ViewRot.Vector() * MaxDistanceToSeat);


	AActor* HitSeatable = nullptr;
	int32 HitSlot = -1;
	bool bIsOccupied = false;

	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(CharacterOwner);
	Params.bTraceComplex = true;

	// Trace
	if (GetWorld()->LineTraceSingleByChannel(Hit, ViewLoc, TraceEnd, ECC_Visibility, Params))
	{
		if (USeatableObjectComponent* Seatable = Hit.GetActor()->FindComponentByClass<USeatableObjectComponent>())
		{
			HitSeatable = Hit.GetActor();

			// Use the impact point to determine which cushion they are looking at
			HitSlot = Seatable->GetClosestAvailableSlotIndex(Hit.ImpactPoint);

			// If less than 0, all slots are taken
			if (HitSlot < 0)
			{
				bIsOccupied = true;
			}
		}
	}

	// Delegate logic
	if (HitSeatable != LastHoveredSeatable || bIsOccupied != bLastOccupiedState)
	{
		LastHoveredSeatable = HitSeatable;
		bLastOccupiedState = bIsOccupied;

		if (HitSeatable)
		{
			FString Msg = bIsOccupied ? OcuppiedPromptMessage : InteractionPromptMessage;
			OnHoverChanged.Broadcast(Msg);
		}
		else
		{
			OnHoverChanged.Broadcast(TEXT(""));
		}
	}
}

#pragma endregion Interaction



#pragma region Request Sit
void UCharacterSeatingComponent::RequestSit(AActor* TargetSeatable, int32 DesiredSlotIndex /* optional */)
{
	// Client-side entry point
	if (TargetSeatable)
	{
		Server_RequestSit(TargetSeatable, DesiredSlotIndex);
	}
}

// Validate the distance on the server to prevent cheating
bool UCharacterSeatingComponent::Server_RequestSit_Validate(AActor* TargetSeatable, int32 DesiredSlotIndex)
{
	float DistSq = FVector::DistSquared(GetOwner()->GetActorLocation(), TargetSeatable->GetActorLocation());

	// Add a small buffer to account for latency and minor discrepancies
	return DistSq < FMath::Square(MaxDistanceToSeat + 50.f);
}


void UCharacterSeatingComponent::Server_RequestSit_Implementation(AActor* TargetSeatable, int32 DesiredSlotIndex)
{
	// Validate basic conditions
	if (!TargetSeatable || SittingState.bIsSitting)
	{
		return;
	}


	USeatableObjectComponent* SeatableComp = TargetSeatable->FindComponentByClass<USeatableObjectComponent>();
	if (!SeatableComp) return;

	int32 AssignedSlot = -1;
	ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());

	if (!CharacterOwner) return;

	// Try to claim the specific slot if one was requested
	if (DesiredSlotIndex >= 0)
	{
		if (!SeatableComp->TryClaimSlot(CharacterOwner, AssignedSlot, DesiredSlotIndex))
		{
			// If requested slot is taken or invalid, set to -1 to trigger fallback search
			DesiredSlotIndex = -1;
		}
	}

	// If no slot specified OR the requested one was taken, find closest
	if (DesiredSlotIndex < 0)
	{
		int32 ClosestSlot = SeatableComp->GetClosestAvailableSlotIndex(GetOwner()->GetActorLocation());

		if (ClosestSlot >= 0)
		{
			SeatableComp->TryClaimSlot(CharacterOwner, AssignedSlot, ClosestSlot);
		}
	}

	//Final check - did we actually get a seat?
	if (AssignedSlot >= 0)
	{
		SittingState.bIsSitting = true;
		SittingState.CurrentSeatable = TargetSeatable;
		SittingState.CurrentSlotIndex = AssignedSlot;

		HandleSittingLogic();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Sit failed: No available slots."));
	}
}

#pragma endregion Request Sit

#pragma region Request Stand
void UCharacterSeatingComponent::RequestStand()
{
	Server_RequestStand();
}

void UCharacterSeatingComponent::Server_RequestStand_Implementation()
{
	if (!SittingState.bIsSitting || !SittingState.CurrentSeatable) return;

	USeatableObjectComponent* SeatableComp = SittingState.CurrentSeatable->FindComponentByClass<USeatableObjectComponent>();
	if (SeatableComp)
	{
		SeatableComp->ReleaseSlot(SittingState.CurrentSlotIndex);
	}

	// Remove the binding 
	SittingState.CurrentSeatable->OnDestroyed.RemoveDynamic(this, &UCharacterSeatingComponent::OnSeatableDestroyed);

	SittingState.bIsSitting = false;
	SittingState.CurrentSeatable = nullptr;
	SittingState.CurrentSlotIndex = -1;

	HandleSittingLogic();
}

#pragma endregion Request Stand

#pragma region State Handling

void UCharacterSeatingComponent::OnRep_SittingState()
{
	HandleSittingLogic();
}

void UCharacterSeatingComponent::HandleSittingLogic()
{
	ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());
	if (!CharacterOwner) return;

	if (SittingState.bIsSitting && SittingState.CurrentSeatable)
	{

		USeatableObjectComponent* SeatableComp = SittingState.CurrentSeatable->FindComponentByClass<USeatableObjectComponent>();
		if (SeatableComp)
		{
			USceneComponent* TargetSlot = SeatableComp ? SeatableComp->GetSeatComponent(SittingState.CurrentSlotIndex) : nullptr;

			if (TargetSlot)
			{
				// Disable movement / set movement mode appropriately 
				if (UCharacterMovementComponent* MoveComp = CharacterOwner->GetCharacterMovement())
				{
					MoveComp->DisableMovement();
					MoveComp->StopMovementImmediately();
				}

				//Adjust Collision to prevent physics jitter between Character and Seatable
				CharacterOwner->SetActorEnableCollision(false);

				if (CharacterOwner->HasAuthority() && SittingState.CurrentSeatable)
				{
					SittingState.CurrentSeatable->OnDestroyed.AddUniqueDynamic(this, &UCharacterSeatingComponent::OnSeatableDestroyed);
				}

				// Position character at seat transform & align rotation
				// We attach specifically to the slot Component
				CharacterOwner->AttachToComponent(TargetSlot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			}
		}
	}
	else
	{
		// Stand Up Logic
		CharacterOwner->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		CharacterOwner->SetActorEnableCollision(true);

		if (UCharacterMovementComponent* MoveComp = CharacterOwner->GetCharacterMovement())
		{
			MoveComp->SetMovementMode(MOVE_Walking);
		}

		// Cleanup the binding if we stand up normally
		if (GetOwnerRole() == ROLE_Authority && SittingState.CurrentSeatable)
		{
			SittingState.CurrentSeatable->OnDestroyed.RemoveDynamic(this, &UCharacterSeatingComponent::OnSeatableDestroyed);
		}

	}
}
#pragma endregion State Handling


#pragma region Cleanup

void UCharacterSeatingComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// If the player disconnects or is destroyed while sitting, free the slot on the server
	if (GetOwnerRole() == ROLE_Authority && SittingState.bIsSitting && SittingState.CurrentSeatable)
	{
		if (USeatableObjectComponent* SeatableComp = SittingState.CurrentSeatable->FindComponentByClass<USeatableObjectComponent>())
		{
			SeatableComp->ReleaseSlot(SittingState.CurrentSlotIndex);
		}
	}

	// Cleanup UI
	if (PromptWidgetInstance)
	{
		OnHoverChanged.RemoveDynamic(PromptWidgetInstance, &USeatingInteractionWidget::UpdatePromptText);
		PromptWidgetInstance->RemoveFromParent();
	}

	Super::EndPlay(EndPlayReason);
}


// Callback for when the Seatable is deleted from the world
void UCharacterSeatingComponent::OnSeatableDestroyed(AActor* DestroyedActor)
{
	// Force stand up state
	SittingState.bIsSitting = false;
	SittingState.CurrentSeatable = nullptr;
	SittingState.CurrentSlotIndex = INDEX_NONE;

	HandleSittingLogic(); // Restores movement/collision
}

#pragma endregion Cleanup