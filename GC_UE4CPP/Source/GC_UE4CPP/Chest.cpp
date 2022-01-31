// Fill out your copyright notice in the Description page of Project Settings.


#include "Chest.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"


// Sets default values
AChest::AChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	chest = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	//CollisionBox->SetBoxExtent(FVector(50.f, 50.f, 50.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AChest::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &AChest::OnOverlapEnd);
}



void AChest::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("La fonction Overlap Begin a ete apele"));
	compteur += 1;
	UE_LOG(LogTemp, Warning, TEXT("Output: %f"), compteur);
}

void AChest::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("La fonction Overlap End a ete apele"));
	compteur -= 1;
	UE_LOG(LogTemp, Warning, TEXT("Output: %f"), compteur);
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

