#pragma once

#include "CoreMinimal.h"
#include "ButtonInteraction.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "WidgetTitle.generated.h"


UCLASS()
class GC_UE4CPP_API UWidgetTitle : public UButtonInteraction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* Title;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* Text;

	UPROPERTY(meta = (BindWidget))
		class UButton* StartButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TextStart;
	
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
