// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "Enemy.h"
#include "MainLevel_LevelScriptActor.generated.h"

/**
 * 
 */
UCLASS()
class GC_UE4CPP_API AMainLevel_LevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		AActor* EnemySpawn;

	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> Enemy;

	//TArray<AActor*> SpotArray;

public:

	UFUNCTION()
		void SpawnEnemy();



};
