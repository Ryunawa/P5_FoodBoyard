#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonInteraction.generated.h"


UCLASS()
class GC_UE4CPP_API UButtonInteraction : public UUserWidget
{
	GENERATED_BODY()
	
	public:

	UPROPERTY(EditAnywhere)
		FName LevelToOpen;
	
	void LoadButton();
	void ExitButton();
	void ShowMouseCursor();
	
	protected:
	
	
	
	public:
	
	
	
	
	
};
