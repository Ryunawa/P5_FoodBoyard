
#include "WidgetUI.h"
#include "Chest.h"
#include "Components/ProgressBar.h"
#include "Engine.h"
#include "PlayerBehaviour.h"


UWidgetUI::UWidgetUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UWidgetUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	/*
	AChest* Min_food = Cast<AChest>();
	Min_food->food_counter;
	*/

	FoodBar->SetPercent(food / Max_food);
	
}

