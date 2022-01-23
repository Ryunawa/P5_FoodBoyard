#include "FoodBehaviour.h"
#include <iostream>
#include "Components/StaticMeshComponent.h"

using namespace std;

// Sets default values
AFoodBehaviour::AFoodBehaviour()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Food = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent")); // Create a static mesh component to the BP_Food
}

// Called when the game starts or when spawned
void AFoodBehaviour::BeginPlay()
{
	Super::BeginPlay();
	RandomFood();
	
}

// Called every frame
void AFoodBehaviour::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFoodBehaviour::RandomFood()
{
	RandIndex = FMath::RandRange(0,4); // Choose a random number between 0 and 4
	Food->SetStaticMesh(Foods[RandIndex]); // Set the static mesh component of the BP_Food
}


