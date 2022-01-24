// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Menu.generated.h"

/**
 * 
 */
UCLASS()
class GC_UE4CPP_API UMenu : public UUserWidget
{
	GENERATED_BODY()

		virtual bool Initialize();

		UPROPERTY(meta = (BindWidget))
		class UButton* StartGame;

		UFUNCTION()
			void StartButtonClicked();


};
