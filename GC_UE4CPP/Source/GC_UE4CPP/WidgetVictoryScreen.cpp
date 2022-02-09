#include "WidgetVictoryScreen.h"
#include "Components/Button.h"


void UWidgetVictoryScreen::NativeConstruct()
{
	Super::NativeConstruct();
	
	RestartButton->OnClicked.AddDynamic(this, &UWidgetVictoryScreen::Restart);
	QuitButton->OnClicked.AddDynamic(this, &UWidgetVictoryScreen::Quit);
	ShowMouseCursor();
}

void UWidgetVictoryScreen::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	
}

void UWidgetVictoryScreen::Restart()
{
	LoadButton();
}

void UWidgetVictoryScreen::Quit()
{
	ExitButton();
}

