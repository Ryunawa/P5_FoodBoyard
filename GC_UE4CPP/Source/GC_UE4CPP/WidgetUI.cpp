
#include "WidgetUI.h"
#include "Components/ProgressBar.h"
#include "Engine.h"
#include "PlayerBehaviour.h"
#include "GC_UE4CPPGameModeBase.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"


UWidgetUI::UWidgetUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UWidgetUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	/*
	AChest* MinFood = Cast<AChest>();
	MinFood->Counter;
	*/

	UGameplayStatics::GetGameMode(this);
	AGC_UE4CPPGameModeBase* GameMode = 0;

		AGC_UE4CPPGameModeBase* MinFood = Cast<AGC_UE4CPPGameModeBase>(GameMode);

	//FoodBar->SetPercent(MinFood->FoodCounter / MaxFood);
	//UE_LOG(LogTemp, Warning, TEXT("Widget UI Food Output: %f"), MinFood->FoodCounter);
	
}

