#include "MyPlayerController.h"

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("BeginPlay"));

	if (!ExampleUIClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("ExampleUIClass was undefined"));
		return;
	}

	ExampleUI = CreateWidget(this, ExampleUIClass);

	if (!ExampleUI)
	{
		UE_LOG(LogTemp, Warning, TEXT("ExampleUI widget could not be created"));
	}

	ExampleUI->AddToViewport();
	ExampleUI->SetVisibility(ESlateVisibility::Visible);
}