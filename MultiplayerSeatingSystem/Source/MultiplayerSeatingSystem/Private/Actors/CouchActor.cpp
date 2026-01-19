// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/CouchActor.h"

#include "Components/ArrowComponent.h"

#include "Components/SeatableObjectComponent.h"

// Sets default values
ACouchActor::ACouchActor()
{
	PrimaryActorTick.bCanEverTick = false;

	bReplicates = true;

	//Create the Mesh and set it as Root
	CouchMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CouchMesh"));
	SetRootComponent(CouchMesh);

	SeatingComponent = CreateDefaultSubobject<USeatableObjectComponent>(TEXT("SeatableComponent"));


	SeatArrows.Empty();
	SeatingComponent->EmptySeatsComponents();

	FName SlotName;

	// Create 3 ArrowComponents for visual seatable slot placement
	for (int i = 0; i < 3; i++)
	{
		SlotName = FName(*FString::Printf(TEXT("SeatableSlot_%d"), i));
		UArrowComponent* Slot = CreateDefaultSubobject<UArrowComponent>(SlotName);

		// Attach to the Mesh so the slots move relative to the couch
		Slot->SetupAttachment(CouchMesh);

		// Default spacing so they aren't on top of each other initially
		Slot->SetRelativeLocation(FVector(0.f, (i - 1) * 60.f, 50.f));

		// Add to the internal array so they show up in the Component Tree
		SeatArrows.Add(Slot);

		// Register with the logic component
		SeatingComponent->AddSeatComponent(Slot);
	}
}

