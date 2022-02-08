


#include "WidgetGameOverScreen.h"
#include "Components/Button.h"
#include <GC_UE4CPP/PlayerBehaviour.h>



void UWidgetGameOverScreen::NativeConstruct()
{
	Super::NativeConstruct();

	RetryButton->OnClicked.AddDynamic(this, &UWidgetGameOverScreen::LoadPressed);

	QuitGameButton->OnClicked.AddDynamic(this, &UWidgetGameOverScreen::QuitPressed);
}



//click retry button
void UWidgetGameOverScreen::LoadPressed()
{

	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);

	if (LevelToOpen != "")
	{
		UGameplayStatics::OpenLevel(this, LevelToOpen, false);
	}
}

//click quit button
void UWidgetGameOverScreen::QuitPressed()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;
	APlayerController* PlayerController = World->GetFirstPlayerController();

	if (!ensure(PlayerController != nullptr)) return;
	PlayerController->ConsoleCommand("quit");
}

//enable mousse and disable player behavior
void UWidgetGameOverScreen::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
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