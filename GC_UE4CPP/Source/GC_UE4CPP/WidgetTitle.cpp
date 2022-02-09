// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetTitle.h"
#include "Components/Button.h"
#include <GC_UE4CPP/PlayerBehaviour.h>
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>



void UWidgetTitle::NativeConstruct()
{
	Super::NativeConstruct();

	StartButton->OnClicked.AddDynamic(this, &UWidgetTitle::LoadButton);

	QuitButton->OnClicked.AddDynamic(this, &UWidgetTitle::ExitPressed);
}



void UWidgetTitle::LoadButton()
{

	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);

	if (LevelToOpen != "")
	{
		UGameplayStatics::OpenLevel(this, LevelToOpen, false);
	}
}

void UWidgetTitle::ExitPressed()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;
	APlayerController* PlayerController = World->GetFirstPlayerController();

	if (!ensure(PlayerController != nullptr)) return;
	PlayerController->ConsoleCommand("quit");
}


void UWidgetTitle::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
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