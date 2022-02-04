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


void AChest::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("the food is IN the box"));
	FoodCounter += 1;
	UE_LOG(LogTemp, Warning, TEXT("Chest Food message: %f"), FoodCounter);
}

void AChest::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("the food is OUTSIDE the box"));
	FoodCounter -= 1;
	UE_LOG(LogTemp, Warning, TEXT("Chest Food message: %f"), FoodCounter);
}

void AGC_UE4CPPGameModeBase::BeginPlay()
{
	Super::BeginPlay();


}

void AGC_UE4CPPGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	

}
