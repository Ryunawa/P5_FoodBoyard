#include "FoodBehaviour.h"
#include <iostream>
#include "Components/StaticMeshComponent.h"
#include "random"
#include "ThirdParty/openexr/Deploy/OpenEXR-2.3.0/OpenEXR/include/ImathMath.h"

using namespace std;

// Sets default values
AFoodBehaviour::AFoodBehaviour()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Food = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	
	
}

// Called when the game starts or when spawned
void AFoodBehaviour::BeginPlay()
{
	Super::BeginPlay();
	PickFood();
	
}

// Called every frame
void AFoodBehaviour::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFoodBehaviour::PickFood()
{
	RandIndex = FMath::RandRange(0, 5);
	cout << RandIndex << endl;
	ChosenFood = Foods[RandIndex];
	cout << Foods[RandIndex] << endl;
	Food->SetStaticMesh(ChosenFood);
}

