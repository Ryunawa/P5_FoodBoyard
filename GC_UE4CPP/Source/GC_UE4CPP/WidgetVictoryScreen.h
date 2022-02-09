#pragma once

#include "CoreMinimal.h"
#include "ButtonInteraction.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "WidgetVictoryScreen.generated.h"

class UButtonInteraction;

UCLASS()
class GC_UE4CPP_API UWidgetVictoryScreen : public UButtonInteraction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* Text;
	
	UPROPERTY(meta = (BindWidget))
		class UButton* RestartButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TextRestart;

	UPROPERTY(meta = (BindWidget))
		class UButton* QuitButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TextQuit;

	UFUNCTION()
		void Restart();
	UFUNCTION()
		void Quit();
protected:
	virtual void NativeConstruct() override;

public:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	

};
