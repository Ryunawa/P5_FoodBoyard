
#include "InGameHUD.h"
#include <GC_UE4CPP/GC_UE4CPPGameModeBase.h>


AInGameHUD::AInGameHUD()
{

}

void AInGameHUD::BeginPlay()
{
	Super::BeginPlay();



	// Widget
	if (WidgetUIClass)
	{
		WidgetUI = CreateWidget<UWidgetUI>(GetWorld(), WidgetUIClass);

		// Make sure widget was created 
		if (WidgetUI)
		{
			// Add it to the viewport 
			WidgetUI->AddToViewport();
		}

	}



}

void AInGameHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (WidgetUI)
	{

	}

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(this);
	AGC_UE4CPPGameModeBase* MinFood = Cast<AGC_UE4CPPGameModeBase>(GameMode);

	//victory condition
	if (MinFood->FoodCounter == 5 && i < 1)
	{
		if (WidgetVictoryScreenClass)
		{

			WidgetVictoryScreen = CreateWidget<UWidgetVictoryScreen>(GetWorld(), WidgetVictoryScreenClass);

			// Make sure widget was created 
			if (WidgetVictoryScreen)
			{
				// Add it to the viewport 
				WidgetVictoryScreen->AddToViewport();
			
			}
		}

	i++;

	}


	/*
	//defeat condition
	if (//Defeat Variable// && i < 1)
	{

		if (WidgetGameOverScreenClass)
		{

			WidgetGameOverScreen = CreateWidget<UWidgetGameOverScreen>(GetWorld(), WidgetGameOverScreenClass);

			// Make sure widget was created
			if (WidgetGameOverScreen)
			{
				// Add it to the viewport
				WidgetGameOverScreen->AddToViewport();

			}
		}

	i++;

	}
	*/
	

}

void AInGameHUD::DrawHUD()
{
	Super::DrawHUD();



}

