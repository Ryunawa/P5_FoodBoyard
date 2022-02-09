#include "WidgetGameOverScreen.h"
#include "Components/Button.h"


void UWidgetGameOverScreen::NativeConstruct()
{
	Super::NativeConstruct();
	
	RetryButton->OnClicked.AddDynamic(this, &UWidgetGameOverScreen::Restart);
	QuitGameButton->OnClicked.AddDynamic(this, &UWidgetGameOverScreen::Quit);
	ShowMouseCursor();
}

void UWidgetGameOverScreen::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	
}

void UWidgetGameOverScreen::Restart()
{
	LoadButton();
}

void UWidgetGameOverScreen::Quit()
{
	ExitButton();
}