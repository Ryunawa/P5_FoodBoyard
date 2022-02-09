
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Components/WidgetComponent.h"
#include "WidgetUI.h"
#include "WidgetVictoryScreen.h"
#include "WidgetGameOverScreen.h"
#include "InGameHUD.generated.h"



UCLASS()
class GC_UE4CPP_API AInGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	AInGameHUD();

	// Primary draw call for the HUD.
	virtual void DrawHUD() override;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;



	UPROPERTY(EditDefaultsOnly, Category = "Interactive")
		TSubclassOf<UUserWidget> WidgetUIClass;

	UPROPERTY(EditDefaultsOnly, Category = "Interactive")
		TSubclassOf<UUserWidget> WidgetVictoryScreenClass;

	UPROPERTY(EditDefaultsOnly, Category = "Interactive")
		TSubclassOf<UUserWidget> WidgetGameOverScreenClass;

	int i = 0;

private:
	UWidgetUI* WidgetUI;
	UWidgetVictoryScreen* WidgetVictoryScreen;
	UWidgetGameOverScreen* WidgetGameOverScreen;
};