
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


	//Cast to get the FoodCounter variable
	AActor* Actor = UGameplayStatics::GetActorOfClass(GetWorld(), AChest::StaticClass());
	AChest* MinFood = Cast<AChest>(Actor);

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

