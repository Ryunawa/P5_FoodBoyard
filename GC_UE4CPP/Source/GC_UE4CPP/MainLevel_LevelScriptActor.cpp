// Fill out your copyright notice in the Description page of Project Settings.


#include "MainLevel_LevelScriptActor.h"


void AMainLevel_LevelScriptActor::BeginPlay()
{
	Super::BeginPlay();
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFoodSpot::StaticClass(), SpotArray);
	SpawnEnemy();
}
void AMainLevel_LevelScriptActor::SpawnEnemy()
{
	AEnemy* EnemySpawned;
	FActorSpawnParameters SpawnParams;
	EnemySpawned = GetWorld()->SpawnActor<AEnemy>(Enemy, EnemySpawn->GetActorTransform(), SpawnParams);
	//GetWorld()->SpawnActor<AEnemy>(Enemy, EnemySpawn->GetActorTransform(), SpawnParams);

}
