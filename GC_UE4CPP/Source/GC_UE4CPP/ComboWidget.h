
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Runtime/UMG/Public/UMG.h"

#include "ComboWidget.generated.h"


UCLASS()
class GC_UE4CPP_API UComboWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UComboWidget(const FObjectInitializer& ObjectInitializer);

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TXTCombo;

	/*
	UPROPERTY(meta = (BindWidget))
		class UButton* StartGame;
	*/
	

	UPROPERTY(meta = (BindWidget))
		class UProgressBar* BarreDeNourriture;

	
};