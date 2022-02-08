
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "WidgetVictoryScreen.generated.h"


UCLASS()
class GC_UE4CPP_API UWidgetVictoryScreen : public UUserWidget
{
	GENERATED_BODY()

public:



	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* Text;


	UPROPERTY(meta = (BindWidget))
		class UButton* RestartButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TextRestart;

	UPROPERTY(EditAnywhere)
		FName LevelToOpen;


	UPROPERTY(meta = (BindWidget))
		class UButton* QuitButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TextQuit;



	UFUNCTION()
		void ExitPressed();

	UFUNCTION()
		void LoadButton();

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

protected:
	virtual bool Initialize();



};
