#include "GC_UE4CPPGameModeBase.h"
#include "Chest.h"
#include "InGameHUD.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGC_UE4CPPGameModeBase::AGC_UE4CPPGameModeBase()
{
	
}

void AGC_UE4CPPGameModeBase::BeginPlay()
{
	Super::BeginPlay();
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
	else if(FoodCounter < 5 && bIsTouched)
	{
		if(HUD)
		{
			HUD->LoseScreen();
		}
		bIsGameFinished = true;
		
	}
}

