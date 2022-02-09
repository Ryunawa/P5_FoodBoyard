#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "WidgetTitle.h"
#include "TitleHUD.generated.h"

UCLASS()
class GC_UE4CPP_API ATitleHUD : public AHUD
{
	GENERATED_BODY()


public:
	ATitleHUD();

	// Primary draw call for the HUD.
	virtual void DrawHUD() override;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;



	UPROPERTY(EditDefaultsOnly, Category = "Interactive")
		TSubclassOf<UUserWidget> WidgetTitleClass;



private:
	UWidgetTitle* WidgetTitle;
};