#include "WidgetTitle.h"
#include "Components/Button.h"


void UWidgetTitle::NativeConstruct()
{
	Super::NativeConstruct();

	StartButton->OnClicked.AddDynamic(this, &UWidgetTitle::Restart);

	QuitButton->OnClicked.AddDynamic(this, &UWidgetTitle::Quit);
}

void UWidgetTitle::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	
}

void UWidgetTitle::Restart()
{
	LoadButton();
}

void UWidgetTitle::Quit()
{
	ExitButton();
}
