
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "WidgetTitle.generated.h"


UCLASS()
class GC_UE4CPP_API UWidgetTitle : public UUserWidget
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
	virtual void NativeConstruct() override;



};
