// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CouchActor.generated.h"

class USeatableObjectComponent;
class UArrowComponent;
class UStaticMeshComponent;

UCLASS()
class MULTIPLAYERSEATINGSYSTEM_API ACouchActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACouchActor();

protected:

	// The visual mesh of the couch 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Couch", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> CouchMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Seating", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USeatableObjectComponent> SeatingComponent;

	// We store pointers here to ensure the Editor "sees" them for selection/adjustment
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Seating", meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<UArrowComponent>> SeatArrows;
};
