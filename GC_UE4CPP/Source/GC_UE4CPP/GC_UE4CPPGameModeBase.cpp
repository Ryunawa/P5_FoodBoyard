#include "GC_UE4CPPGameModeBase.h"
#include "Chest.h"
#include "InGameHUD.h"
#include "Enemy.h"
#include "FoodSpot.h"
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
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	SpawnNPC();
	SpawnNPC();
	GetWorldTimerManager().SetTimer(*new FTimerHandle(), this, &AGC_UE4CPPGameModeBase::SpawnNPC, 60, false);
	TArray<AActor*> SpotArray;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFoodSpot::StaticClass(), SpotArray);
	AFoodBehaviour* Food = GetWorld()->SpawnActor<AFoodBehaviour>(FoodToSpawn, EnemySpawn->GetTransform(), SpawnParams);
	Cast<AFoodSpot>(SpotArray[FMath::RandRange(0, SpotArray.Num() - 1)])->SnapOnPlate(Food);
	
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
	else if(bIsTouched && i < 1)
	{
		if(HUD)
		{
			HUD->LoseScreen();
		}
		bIsGameFinished = true;	
		i++;
	}
}

void AGC_UE4CPPGameModeBase::SpawnNPC() 
{
	NPCCount++;
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	AEnemy* EnemySpawned;
	EnemySpawned = GetWorld()->SpawnActor<AEnemy>(Enemy, EnemySpawn->GetActorTransform(), SpawnParams);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Spawned from gm")); // debug
}

void AGC_UE4CPPGameModeBase::DelayedSpawn() 
{
	if (NPCCount <= 0)SpawnNPC();
	else GetWorldTimerManager().SetTimer(*new FTimerHandle(), this, &AGC_UE4CPPGameModeBase::SpawnNPC, FMath::RandRange(0,5), false);
}
