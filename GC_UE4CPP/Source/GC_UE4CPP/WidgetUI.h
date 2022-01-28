
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Runtime/UMG/Public/UMG.h"

#include "WidgetUI.generated.h"


UCLASS()
class GC_UE4CPP_API UWidgetUI : public UUserWidget
{
	GENERATED_BODY()
public:
	UWidgetUI(const FObjectInitializer& ObjectInitializer);

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* Text;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
		class UProgressBar* FoodBar;

	/*
	UPROPERTY(meta = (BindWidget))
		class UButton* StartGame;
	*/

	
};