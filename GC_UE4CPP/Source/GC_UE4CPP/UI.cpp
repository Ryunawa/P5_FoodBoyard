#include "UI.h"

void AUI::BeginPlay() 
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("BeginPlay"));

	if (!FoodBarClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("FoodBar was undefined"));
		return;
	}
	FoodBar = CreateWidget(this, FoodBarClass);

	if (!FoodBar) 
	{
		UE_LOG(LogTemp, Warning, TEXT("FoodBar widget could not be created"));
	}
	FoodBar->AddToViewport();
	FoodBar->SetVisibility(ESlateVisibility::Visible);
}