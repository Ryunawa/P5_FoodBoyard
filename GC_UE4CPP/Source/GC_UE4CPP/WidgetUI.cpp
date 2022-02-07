
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




	
	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(this);


	AGC_UE4CPPGameModeBase* MinFood = Cast<AGC_UE4CPPGameModeBase>(GameMode);

	if (MinFood != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("MinFood != nullptr"));
		FoodBar->SetPercent(MinFood->FoodCounter / MaxFood);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MinFood == nullptr"));
	}
	
}

