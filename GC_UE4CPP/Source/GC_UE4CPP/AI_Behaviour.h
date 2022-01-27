// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FoodSpot.h"
#include "Enemy.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI_Behaviour.generated.h"

/**
 * 
 */
UCLASS()
class GC_UE4CPP_API AAI_Behaviour : public AAIController
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

	UBlackboardData* BBAsset;


	UPROPERTY(VisibleAnywhere)
		UAIPerceptionComponent* AIPer;
	
	UPROPERTY(VisibleAnywhere)
		UBlackboardComponent* BBComp;

	int SpotId;

	TArray<AActor*> SpotArray;

public:

	AAI_Behaviour();

	void GetNewSpot();

	virtual void OnPossess(APawn* pawn);

	void Tick(float DeltaTime) override;

};
