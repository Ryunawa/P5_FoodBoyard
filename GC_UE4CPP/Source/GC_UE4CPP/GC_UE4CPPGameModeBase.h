#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GC_UE4CPPGameModeBase.generated.h"

UCLASS()
class GC_UE4CPP_API AGC_UE4CPPGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:
	// Sets default values for this actor's properties
	AGC_UE4CPPGameModeBase();


	// variable for food counting
	float FoodCounter = 2;





protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
