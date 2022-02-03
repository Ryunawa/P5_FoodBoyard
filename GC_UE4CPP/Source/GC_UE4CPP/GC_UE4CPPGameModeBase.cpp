// Copyright Epic Games, Inc. All Rights Reserved.


#include "GC_UE4CPPGameModeBase.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"



// Sets default values
AGC_UE4CPPGameModeBase::AGC_UE4CPPGameModeBase()
{
	// Set this actor to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = true;

	chest = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	//CollisionBox->SetBoxExtent(FVector(50.f, 50.f, 50.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	//RootComponent = chest;

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AGC_UE4CPPGameModeBase::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &AGC_UE4CPPGameModeBase::OnOverlapEnd);
	
}


void AGC_UE4CPPGameModeBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("the food is IN the box"));
	FoodCounter += 1;
	UE_LOG(LogTemp, Warning, TEXT("Food message: %f"), FoodCounter);
}

void AGC_UE4CPPGameModeBase::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("the food is OUTSIDE the box"));
	FoodCounter -= 1;
	UE_LOG(LogTemp, Warning, TEXT("Food message: %f"), FoodCounter);
}

void AGC_UE4CPPGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void AGC_UE4CPPGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
