// Fill out your copyright notice in the Description page of Project Settings.


#include "Chest.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"


// Sets default values
AChest::AChest()
{
 	// Set this actor to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = true;

	chest = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	//CollisionBox->SetBoxExtent(FVector(50.f, 50.f, 50.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AChest::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &AChest::OnOverlapEnd);
}




// Called when the game starts or when spawned
void AChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

