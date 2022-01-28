
#include "WidgetUI.h"
#include "Components/ProgressBar.h"
#include "Engine.h"
#include "PlayerBehaviour.h"

UWidgetUI::UWidgetUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UWidgetUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);


	FoodBar->SetPercent(Min / Max);
	
}

