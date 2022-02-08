
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "WidgetGameOverScreen.generated.h"


UCLASS()
class GC_UE4CPP_API UWidgetGameOverScreen : public UUserWidget
{
	GENERATED_BODY()

public:



	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* Text;


	UPROPERTY(meta = (BindWidget))
		class UButton* RetryButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TextRetry;

	UPROPERTY(EditAnywhere)
		FName LevelToOpen;


	UPROPERTY(meta = (BindWidget))
		class UButton* QuitGameButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TextQuitGame;



	UFUNCTION()
		void QuitPressed();

	UFUNCTION()
		void LoadPressed();

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

protected:
	virtual bool Initialize();



};
