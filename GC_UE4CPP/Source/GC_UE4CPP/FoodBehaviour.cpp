#include "FoodBehaviour.h"
#include "Components/StaticMeshComponent.h"

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
	//TogglePhysics(true);
}

// Called every frame
void AFoodBehaviour::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFoodBehaviour::RandomFood()
{
	RandIndex = FMath::RandRange(0, Foods.Num()-1); // Choose a random number between 0 and 12
	Food->SetStaticMesh(Foods[RandIndex]); // Set the static mesh component of the BP_Food
}

void AFoodBehaviour::TogglePhysics(bool PhysicEnable)
{	
	Food->SetSimulatePhysics(PhysicEnable);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, TEXT("Physic simulated disable")); // debug
}




