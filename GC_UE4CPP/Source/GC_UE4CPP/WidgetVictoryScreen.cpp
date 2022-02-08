

#include "WidgetVictoryScreen.h"
#include "Components/Button.h"
#include <GC_UE4CPP/PlayerBehaviour.h>




bool UWidgetVictoryScreen::Initialize()
{
	if (!Super::Initialize()) return false;

	if (!ensure(RestartButton != nullptr)) return false;
	RestartButton->OnClicked.AddDynamic(this, &UWidgetVictoryScreen::LoadButton);

	if (!ensure(QuitButton != nullptr)) return false;
	QuitButton->OnClicked.AddDynamic(this, &UWidgetVictoryScreen::ExitPressed);


	return true;
}

//click restart button
void UWidgetVictoryScreen::LoadButton()
{

	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);

	if (LevelToOpen != "")
	{
		UGameplayStatics::OpenLevel(this, LevelToOpen, false);
	}
}

//click quit button
void UWidgetVictoryScreen::ExitPressed()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;
	APlayerController* PlayerController = World->GetFirstPlayerController();

	if (!ensure(PlayerController != nullptr)) return;
	PlayerController->ConsoleCommand("quit");
}

//enable mousse and disable player behavior
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