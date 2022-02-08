// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetVictoryScreen.h"
#include "Components/Button.h"
#include <GC_UE4CPP/PlayerBehaviour.h>



UWidgetVictoryScreen::UWidgetVictoryScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

bool UWidgetVictoryScreen::Initialize()
{
	if (!Super::Initialize()) return false;

	if (!ensure(RestartButton != nullptr)) return false;
	RestartButton->OnClicked.AddDynamic(this, &UWidgetVictoryScreen::LoadButton);

	if (!ensure(QuitButton != nullptr)) return false;
	QuitButton->OnClicked.AddDynamic(this, &UWidgetVictoryScreen::ExitPressed);


	return true;
}

void UWidgetVictoryScreen::LoadButton()
{

	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);

	if (LevelToOpen != "")
	{
		UGameplayStatics::OpenLevel(this, LevelToOpen, false);
	}
}

void UWidgetVictoryScreen::ExitPressed()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;
	APlayerController* PlayerController = World->GetFirstPlayerController();

	if (!ensure(PlayerController != nullptr)) return;
	PlayerController->ConsoleCommand("quit");
}


void UWidgetVictoryScreen::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{

	AActor* ControllerOfPlayerController = UGameplayStatics::GetActorOfClass(GetWorld(), APlayerController::StaticClass());
	APlayerController* PC = Cast<APlayerController>(ControllerOfPlayerController);

	if (PC)
	{
		PC->bShowMouseCursor = true;
		PC->bEnableClickEvents = true;
		PC->bEnableMouseOverEvents = true;
	}

	AActor* ControllerOfPlayerBehaviour = UGameplayStatics::GetActorOfClass(GetWorld(), APlayerBehaviour::StaticClass());
	APlayerBehaviour* PB = Cast<APlayerBehaviour>(ControllerOfPlayerBehaviour);

	if (PB)
	{
		PB->MovementSpeed = 0;
		PB->ZoomSpeed = 0;
		PB->TurnRate = 0;
		PB->LookUpRate = 0;
	}

}