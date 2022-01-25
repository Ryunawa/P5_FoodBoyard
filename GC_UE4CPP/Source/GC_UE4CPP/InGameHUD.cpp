
#include "InGameHUD.h"

AInGameHUD::AInGameHUD()
{

}

void AInGameHUD::BeginPlay()
{
	Super::BeginPlay();

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
}

void AInGameHUD::DrawHUD()
{
	Super::DrawHUD();
}

