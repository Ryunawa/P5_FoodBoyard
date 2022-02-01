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


	// Called when the food enters the box
void AChest::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("the food is IN the box"));
	food_counter += 1;
	UE_LOG(LogTemp, Warning, TEXT("Food Output: %f"), food_counter);
}

	// Called when the food leaves the box
void AChest::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("the food is OUTSIDE the box"));
	food_counter -= 1;
	UE_LOG(LogTemp, Warning, TEXT("Food Output: %f"), food_counter);
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

