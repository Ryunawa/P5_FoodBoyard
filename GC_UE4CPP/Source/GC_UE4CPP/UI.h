// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "UI.generated.h"


UCLASS()
class GC_UE4CPP_API AUI : public APlayerController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UUserWidget> FoodBarClass;

	UPROPERTY(EditInstanceOnly)
		int sceneEditOnly;

	UUserWidget* FoodBar;

	virtual void BeginPlay() override;
	
};
