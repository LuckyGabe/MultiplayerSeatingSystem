// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SeatableObjectComponent.generated.h"

class UArrowComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MULTIPLAYERSEATINGSYSTEM_API USeatableObjectComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	USeatableObjectComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** Server-authoritative logic to claim/release - Called by Character Component */
	bool TryClaimSlot(ACharacter* User, int32& OutSlotIndex, int32 RequestedIndex = -1);
	void ReleaseSlot(int32 Index);

	/** Public Getters */
	FTransform GetSlotTransform(int32 Index) const;

	int32 GetClosestAvailableSlotIndex(FVector QueryLocation) const;

	USceneComponent* GetSeatComponent(int32 Index) const;

	/** Used by Actor to register visual components */
	void AddSeatComponent(USceneComponent* SeatComponent);

	void EmptySeatsComponents();

	int32 FindOccupantIndex(ACharacter* InCharacter) const;

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_InitializeSeatsManually(const TArray<USceneComponent*>& InSeatComponents);

protected:
	virtual void BeginPlay() override;


	/** Internal Cleanup callback */
	UFUNCTION()
	void OnOccupantDestroyed(AActor* DestroyedActor);


protected:

	/** Replicated occupancy - Tracks which Character is in which slot */
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Seating")
	TArray<TObjectPtr<ACharacter>> Occupants;

private:
	/** Physical seat transforms. Private to ensure logic goes through GetSeatComponent */
	UPROPERTY()
	TArray<TObjectPtr<USceneComponent>> SeatComponents;
};
