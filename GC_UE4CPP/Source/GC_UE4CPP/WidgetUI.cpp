
#include "WidgetUI.h"
#include "Components/ProgressBar.h"
#include "Engine.h"
#include "PlayerBehaviour.h"
#include "GC_UE4CPPGameModeBase.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include <GC_UE4CPP/Chest.h>


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
	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(this);

	//AGameModeBase* UE4CPPGameMode = Cast<AGameModeBase>(GameMode);

	AGC_UE4CPPGameModeBase* MinFood = Cast<AGC_UE4CPPGameModeBase>(GameMode);

	if (MinFood == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("MinFood == nullptr"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MinFood != nullptr"));
		FoodBar->SetPercent(MinFood->FoodCounter / MaxFood);
	}

	//FoodBar->SetPercent(MinFood->FoodCounter / MaxFood);

	//FoodBar->SetPercent(Food / MaxFood);
	//UE_LOG(LogTemp, Warning, TEXT("Widget UI Food Output: %f"), MinFood->FoodCounter);
	
}

