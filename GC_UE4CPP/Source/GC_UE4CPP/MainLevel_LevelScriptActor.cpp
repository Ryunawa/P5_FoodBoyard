// Fill out your copyright notice in the Description page of Project Settings.


#include "MainLevel_LevelScriptActor.h"
#include "Goblin_Controller.h"


void AMainLevel_LevelScriptActor::BeginPlay()
{
	Super::BeginPlay();
	SpawnEnemy();
}
void AMainLevel_LevelScriptActor::SpawnEnemy()
{
	FActorSpawnParameters SpawnParams;
	AEnemy* EnemySpawned;
	EnemySpawned = GetWorld()->SpawnActor<AEnemy>(Enemy, EnemySpawn->GetActorTransform(), SpawnParams);

}

AActor* AMainLevel_LevelScriptActor::GetSpawnPoint()
{
	return EnemySpawn;
}

