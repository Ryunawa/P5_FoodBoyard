#include "GC_UE4CPPGameModeBase.h"
#include "Chest.h"
#include "InGameHUD.h"
#include "Enemy.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGC_UE4CPPGameModeBase::AGC_UE4CPPGameModeBase()
{
	TArray<AActor*> res;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Spawner", res);
	if(res.Num()>0)	EnemySpawn = res[0];
}

void AGC_UE4CPPGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	SpawnNPC();
	SpawnNPC();
	GetWorldTimerManager().SetTimer(*new FTimerHandle(), this, &AGC_UE4CPPGameModeBase::SpawnNPC, 60, false);
}

void AGC_UE4CPPGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGC_UE4CPPGameModeBase::WinLoseCondition()
{
	AInGameHUD* HUD = Cast<AInGameHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AInGameHUD>());
	
	// Victory condition
	if(FoodCounter == 5)
	{
		bIsGameFinished = true;
		if(HUD)
		{
			HUD->WinScreen();
		}
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Aled ?")); // debug
	}
	// Lose condition
	else if(bIsTouched)
	{
		if(HUD)
		{
			HUD->LoseScreen();
		}
		bIsGameFinished = true;		
	}
}

void AGC_UE4CPPGameModeBase::SpawnNPC() 
{
	NPCCount++;
	FActorSpawnParameters SpawnParams;
	AEnemy* EnemySpawned;
	if(EnemySpawn)EnemySpawned = GetWorld()->SpawnActor<AEnemy>(Enemy, EnemySpawn->GetActorTransform(), SpawnParams);
	else GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("spawnpoint not set"));
}

void AGC_UE4CPPGameModeBase::DelayedSpawn() 
{
	if (NPCCount <= 0)SpawnNPC();
	else GetWorldTimerManager().SetTimer(*new FTimerHandle(), this, &AGC_UE4CPPGameModeBase::SpawnNPC, FMath::RandRange(0,5), false);
}
