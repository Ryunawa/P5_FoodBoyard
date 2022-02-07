// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AISenseConfig_Sight.h"
#include "FoodBehaviour.h"
#include "Goblin_Controller.generated.h"

/**
 *
 */
UCLASS()
class GC_UE4CPP_API AGoblin_Controller : public AAIController
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

	int SpotId = -1;

	TArray<AActor*> SpotArray;

	UPROPERTY(EditAnywhere)
		UBehaviorTree* BehaviorTree;

	UPROPERTY(VisibleAnywhere)
		UAISenseConfig_Sight* SightConfig;

	FTimerHandle TimerHandle;

	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> FoodToSpawn;


public:

	AFoodBehaviour* FoodToStore;

	AGoblin_Controller();

	void GetNewSpot();
	
	UFUNCTION()
		void ForgetPlayer();

	UFUNCTION()
		void SeePlayer(const TArray<AActor*>& UpdatedActors);

	UFUNCTION()
		void SetSpawnPoint(AActor* spawnpoint);

	virtual void OnPossess(APawn* pawn);

	void Tick(float DeltaTime) override;

};
