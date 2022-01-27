// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodSpot.h"

// Sets default values
AFoodSpot::AFoodSpot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlateMesh"));
	RootComponent = StaticMesh;
}

// Called when the game starts or when spawned
void AFoodSpot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFoodSpot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

