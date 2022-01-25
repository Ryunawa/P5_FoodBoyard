// Fill out your copyright notice in the Description page of Project Settings.

#include "InGameHUD.h"

AInGameHUD::AInGameHUD()
{

}

void AInGameHUD::BeginPlay()
{
	Super::BeginPlay();

	if (ComboWidgetClass)
	{
		ComboWidget = CreateWidget<UComboWidget>(GetWorld(), ComboWidgetClass);

		/** Make sure widget was created */
		if (ComboWidget)
		{
			/** Add it to the viewport */
			ComboWidget->AddToViewport();
		}
	}
}

void AInGameHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (ComboWidget)
	{

	}
}

void AInGameHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AInGameHUD::UpdateComboCount(int32 Value)
{
	if (ComboWidget)
	{
		ComboWidget->UpdateComboCount(Value);
	}
}

void AInGameHUD::ResetCombo()
{
	if (ComboWidget)
	{
		ComboWidget->ResetCombo();
	}
}