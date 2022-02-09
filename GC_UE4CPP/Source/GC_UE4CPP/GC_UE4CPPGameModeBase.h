#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GC_UE4CPPGameModeBase.generated.h"

class AInGameHUD;

UCLASS()
class GC_UE4CPP_API AGC_UE4CPPGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:
	// Sets default values for this actor's properties
	AGC_UE4CPPGameModeBase();

	void WinLoseCondition();
	
	// variable for food counting (use in Chest.cpp and Widget.cpp)
	float FoodCounter = 0;
	bool bIsGameFinished = false;
	bool bIsTouched = false;

protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
