// Copyright Epic Games, Inc. All Rights Reserved.


#include "GC_UE4CPPGameModeBase.h"
#include "Chest.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "PlayerBehaviour.h"




// Sets default values
AGC_UE4CPPGameModeBase::AGC_UE4CPPGameModeBase()
{

	
}




void AGC_UE4CPPGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	/*
	GetWorldTimerManager().SetTimer(Timer, this, &AGC_UE4CPPGameModeBase::BeginPlay, 2.0f, false);
	FoodCounter += 1;
	*/

}

void AGC_UE4CPPGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	

}
