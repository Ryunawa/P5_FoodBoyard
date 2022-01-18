// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_Behaviour.h"

// Sets default values
AAI_Behaviour::AAI_Behaviour()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FoodMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FoodMesh"));

	FoodMesh->ToggleVisibility(false);

}

// Called when the game starts or when spawned
void AAI_Behaviour::BeginPlay()
{
	Super::BeginPlay();
}
 
// Called every frame
void AAI_Behaviour::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

