
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
	UWidgetVictoryScreen(const FObjectInitializer& ObjectInitializer);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* Text;

	/*
	UPROPERTY(meta = (BindWidget))
		class UButton* Restart;
	*/

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

protected:



};
