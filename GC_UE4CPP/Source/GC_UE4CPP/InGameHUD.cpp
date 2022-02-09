#include "InGameHUD.h"
#include "WidgetUI.h"
#include "WidgetVictoryScreen.h"
#include "Blueprint/UserWidget.h"
#include "WidgetGameOverScreen.h"

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
}

void AInGameHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AInGameHUD::WinScreen()
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
}

void AInGameHUD::LoseScreen()
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
}
