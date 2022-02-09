#pragma once

#include "CoreMinimal.h"
#include "ButtonInteraction.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "WidgetGameOverScreen.generated.h"

UCLASS()
class GC_UE4CPP_API UWidgetGameOverScreen : public UButtonInteraction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* Text;

	UPROPERTY(meta = (BindWidget))
		class UButton* RetryButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TextRetry;
	
	UPROPERTY(meta = (BindWidget))
		class UButton* QuitGameButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TextQuitGame;
	
	UFUNCTION()
		void Restart();
	UFUNCTION()
		void Quit();
	
protected:
	
	virtual void NativeConstruct() override;

public:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;


};
