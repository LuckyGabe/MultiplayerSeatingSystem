// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterSeatingComponent.generated.h"

// Delegate for the UI to bind to
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoverChanged, const FString&, Message);

USTRUCT(BlueprintType)
struct FSittingState
{
	GENERATED_BODY()

	UPROPERTY()
	AActor* CurrentSeatable = nullptr;

	UPROPERTY()
	int32 CurrentSlotIndex = -1;

	UPROPERTY()
	bool bIsSitting = false;
};


class USeatingInteractionWidget;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MULTIPLAYERSEATINGSYSTEM_API UCharacterSeatingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCharacterSeatingComponent();

	// AActorComponent Interface
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** External API - Called by Input or UI */
	UFUNCTION(BlueprintCallable, Category = "Seating")
	void Interact();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Seating")
	bool IsSitting() const { return SittingState.bIsSitting; }

	/** Internal Seating Logic */
	UFUNCTION(BlueprintCallable, Category = "Seating")
	void RequestSit(AActor* TargetSeatable, int32 DesiredSlotIndex = -1);

	UFUNCTION(BlueprintCallable, Category = "Seating")
	void RequestStand();
protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:

	UFUNCTION()
	void OnRep_SittingState();

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_RequestSit(AActor* TargetSeatable, int32 DesiredSlotIndex);

	UFUNCTION(Server, Reliable)
	void Server_RequestStand();

	void HandleSittingLogic();

	/** UI & Trace Helpers */
	void PerformInteractionTrace();
	void SetupInteractionUI();

	UFUNCTION() // Must be UFUNCTION to work as a dynamic delegate
		void OnSeatableDestroyed(AActor* DestroyedActor);

public:

	/** Delegate for UI to bind to */
	UPROPERTY(BlueprintAssignable, Category = "Seating|UI")
	FOnHoverChanged OnHoverChanged;

protected:
	/** Configuration variables - Protected so Blueprints can override defaults */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Seating|UI")
	TSubclassOf<USeatingInteractionWidget> PromptWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Seating|UI")
	FString OcuppiedPromptMessage = FString("Occupied");

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Seating|UI")
	FString InteractionPromptMessage = FString("Press [E] to Sit");

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Seating")
	float MaxDistanceToSeat = 300.f;

	/** Replicated state - Protected so subclasses can read state if needed */
	UPROPERTY(ReplicatedUsing = OnRep_SittingState, BlueprintReadOnly, Category = "Seating")
	FSittingState SittingState;

private:
	/** Internal Cached State */
	TWeakObjectPtr<AActor> LastHoveredSeatable;
	bool bLastOccupiedState = false;

	UPROPERTY()
	TObjectPtr<USeatingInteractionWidget> PromptWidgetInstance;

};
