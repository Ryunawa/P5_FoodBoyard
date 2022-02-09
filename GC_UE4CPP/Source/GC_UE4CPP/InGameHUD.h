#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "InGameHUD.generated.h"

class UWidgetUI;
class UWidgetVictoryScreen;
class UWidgetGameOverScreen;

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

	void WinScreen();
	void LoseScreen();


	UPROPERTY(EditDefaultsOnly, Category = "Interactive")
		TSubclassOf<UUserWidget> WidgetUIClass;

	UPROPERTY(EditDefaultsOnly, Category = "Interactive")
		TSubclassOf<UUserWidget> WidgetVictoryScreenClass;

	UPROPERTY(EditDefaultsOnly, Category = "Interactive")
		TSubclassOf<UUserWidget> WidgetGameOverScreenClass;

private:
	UWidgetUI* WidgetUI;
	UWidgetVictoryScreen* WidgetVictoryScreen;
	UWidgetGameOverScreen* WidgetGameOverScreen;
};