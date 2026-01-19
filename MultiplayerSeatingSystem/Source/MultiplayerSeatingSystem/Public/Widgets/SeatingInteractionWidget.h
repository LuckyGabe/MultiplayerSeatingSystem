// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SeatingInteractionWidget.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERSEATINGSYSTEM_API USeatingInteractionWidget : public UUserWidget
{
	GENERATED_BODY()
	

public:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdatePromptText(const FString& NewText);

};
