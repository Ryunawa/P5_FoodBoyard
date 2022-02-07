#include "WidgetUI.h"
#include "Components/ProgressBar.h"
#include "Engine.h"
#include "GC_UE4CPPGameModeBase.h"
#include "Kismet/GameplayStatics.h"


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

