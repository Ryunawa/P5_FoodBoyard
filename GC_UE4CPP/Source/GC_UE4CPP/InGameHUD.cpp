
#include "InGameHUD.h"
#include <GC_UE4CPP/GC_UE4CPPGameModeBase.h>


AInGameHUD::AInGameHUD()
{

}

void AInGameHUD::BeginPlay()
{
	Super::BeginPlay();

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(this);
	AGC_UE4CPPGameModeBase* MinFood = Cast<AGC_UE4CPPGameModeBase>(GameMode);

	if (MinFood != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("MinFood != nullptr"));
		//FoodBar->SetPercent(MinFood->FoodCounter / MaxFood);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MinFood == nullptr"));
	}


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

		//if (MinFood->FoodCounter == 5)
		//{
			WidgetVictoryScreen = CreateWidget<UWidgetVictoryScreen>(GetWorld(), WidgetUIClass);

			// Make sure widget was created 
			if (WidgetVictoryScreen)
			{
				// Add it to the viewport 
				WidgetVictoryScreen->AddToViewport();
			}
		//}


	}
}

void AInGameHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (WidgetUI)
	{

	}
}

void AInGameHUD::DrawHUD()
{
	Super::DrawHUD();
}

