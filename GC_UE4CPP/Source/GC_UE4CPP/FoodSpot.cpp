#include "FoodSpot.h"
#include "FoodBehaviour.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AFoodSpot::AFoodSpot()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlateMesh"));
	RootComponent = StaticMesh;

	FoodSnapLocation = FVector(0.f, 0.f, 50.f);
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

// Snap the FoodChoose to the plate and set his position
void AFoodSpot::SnapOnPlate(AFoodBehaviour* FoodChosen)
{
	FoodChosen->AttachToActor(this, FAttachmentTransformRules::SnapToTargetIncludingScale);
	FoodChosen->SetActorRelativeLocation(FoodSnapLocation);
	FoodSnapped = FoodChosen;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Snapped")); // debug
}

//Unsnap the FoodChoose from the plate
void AFoodSpot::DetachFromPlate()
{
	FoodSnapped->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	FoodSnapped = nullptr;
}



