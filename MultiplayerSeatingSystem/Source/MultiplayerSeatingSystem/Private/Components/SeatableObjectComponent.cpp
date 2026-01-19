// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SeatableObjectComponent.h"

#include "Net/UnrealNetwork.h"

#include "GameFramework/Character.h"

// Sets default values for this component's properties
USeatableObjectComponent::USeatableObjectComponent()
{
	SetIsReplicatedByDefault(true); // Crucial for components
}


void USeatableObjectComponent::BeginPlay()
{
	Super::BeginPlay();

	// Initialize the occupancy array based on the number of seat components provided
	if (GetOwnerRole() == ROLE_Authority)
	{
		Occupants.SetNum(SeatComponents.Num());
		for (int32 i = 0; i < Occupants.Num(); i++)
		{
			Occupants[i] = nullptr;
		}
	}
}

void USeatableObjectComponent::Server_InitializeSeatsManually_Implementation(const TArray<USceneComponent*>& InSeatComponents)
{
	for(USceneComponent* Slot : InSeatComponents)
	{
		SeatComponents.Add(Slot);
	}

	Occupants.SetNum(InSeatComponents.Num());
	for (int32 i = 0; i < Occupants.Num(); i++)
	{
		Occupants[i] = nullptr;
	}
}


void USeatableObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(USeatableObjectComponent, Occupants);

}


void USeatableObjectComponent::AddSeatComponent(USceneComponent* SeatComponent)
{
	if (SeatComponent)
	{
		SeatComponents.Add(SeatComponent);
	}
}

void USeatableObjectComponent::EmptySeatsComponents()
{
	SeatComponents.Empty();
}


bool USeatableObjectComponent::TryClaimSlot(ACharacter* User, int32& OutSlotIndex, int32 RequestedIndex)
{
	// Authority and Null check
	if (!User || !GetOwner()->HasAuthority()) return false;

	//Ensure this user isn't already occupying a slot
	// If they are already in the array, we reject the claim.
	int32 ExistingIndex = Occupants.Find(User);
	if (ExistingIndex != INDEX_NONE)
	{
		UE_LOG(LogTemp, Warning, TEXT("Claim Rejected: User %s is already seated."), *User->GetName());
		return false;
	}

	//If a specific valid slot is requested
	if (RequestedIndex >= 0 && Occupants.IsValidIndex(RequestedIndex))
	{
		if (Occupants[RequestedIndex] == nullptr)
		{
			Occupants[RequestedIndex] = User;
			OutSlotIndex = RequestedIndex;

			User->OnDestroyed.AddUniqueDynamic(this, &USeatableObjectComponent::OnOccupantDestroyed);

			return true;
		}
		return false; // If the specific slot is taken, return false so caller can decide to fallback
	}

	// Fallback: Find first available 
	for (int32 i = 0; i < Occupants.Num(); i++)
	{
		if (Occupants[i] == nullptr)
		{
			Occupants[i] = User;
			OutSlotIndex = i;

			User->OnDestroyed.AddUniqueDynamic(this, &USeatableObjectComponent::OnOccupantDestroyed);

			return true;
		}
	}

	return false; // Full
}

void USeatableObjectComponent::ReleaseSlot(int32 Index)
{
	if (GetOwnerRole() == ROLE_Authority && Occupants.IsValidIndex(Index))
	{
		ACharacter* LeavingChar = Occupants[Index];
		if (LeavingChar)
		{
			// We don't need to listen anymore because they left normally
			LeavingChar->OnDestroyed.RemoveDynamic(this, &USeatableObjectComponent::OnOccupantDestroyed);
		}

		Occupants[Index] = nullptr;
	}
}

FTransform USeatableObjectComponent::GetSlotTransform(int32 Index) const
{
	if (SeatComponents.IsValidIndex(Index) && SeatComponents[Index])
	{
		return SeatComponents[Index]->GetComponentTransform();
	}
	return GetOwner()->GetActorTransform();
}

int32 USeatableObjectComponent::GetClosestAvailableSlotIndex(FVector QueryLocation) const
{
	int32 BestIndex = -1;
	float BestDistSq = TNumericLimits<float>::Max();

	for (int32 i = 0; i < SeatComponents.Num(); i++)
	{
		// Skip if occupied
		if (Occupants.IsValidIndex(i) && Occupants[i] != nullptr)
		{
			continue;
		}
			

		if (SeatComponents[i])
		{
			float DistSq = FVector::DistSquared(QueryLocation, SeatComponents[i]->GetComponentLocation());
			if (DistSq < BestDistSq)
			{
				BestDistSq = DistSq;
				BestIndex = i;
			}
		}
	}
	return BestIndex;
}

USceneComponent* USeatableObjectComponent::GetSeatComponent(int32 Index) const
{
	return SeatComponents.IsValidIndex(Index) ? SeatComponents[Index] : nullptr;
}

int32 USeatableObjectComponent::FindOccupantIndex(ACharacter* InCharacter) const
{
	return Occupants.Find(InCharacter);
}

void USeatableObjectComponent::OnOccupantDestroyed(AActor* DestroyedActor)
{
	if (!GetOwner()->HasAuthority()) return;

	// Find which slot the destroyed actor was in
	for (int32 i = 0; i < Occupants.Num(); i++)
	{
		if (Occupants[i] == DestroyedActor)
		{
			UE_LOG(LogTemp, Log, TEXT("Cleaning up slot %d because occupant was destroyed."), i);

			// We don't call ReleaseSlot here because the Actor is already mid-destruction; 
			// we just null out our reference.
			Occupants[i] = nullptr;
			break;
		}
	}
}