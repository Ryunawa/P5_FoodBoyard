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
	Toggle = false;
	RandomFood();
	TogglePhysics();
}

// Called every frame
void AFoodBehaviour::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFoodBehaviour::RandomFood()
{
	RandIndex = FMath::RandRange(0, 12); // Choose a random number between 0 and 12
	Food->SetStaticMesh(Foods[RandIndex]); // Set the static mesh component of the BP_Food
}

void AFoodBehaviour::TogglePhysics()
{
	Toggle = !Toggle;
	
	if(Toggle == false)
	{
		Food->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		Food->SetSimulatePhysics(false);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, TEXT("Physic simulated disable")); // debug
	}
	else
	{
		Food->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Food->SetSimulatePhysics(true);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, TEXT("Physic simulated enable")); // debug
	}
}




