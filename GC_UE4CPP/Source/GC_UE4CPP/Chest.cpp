// Fill out your copyright notice in the Description page of Project Settings.


#include "Chest.h"
#include "Components/BoxComponent.h"

#include "Kismet/GameplayStatics.h"
#include "GC_UE4CPPGameModeBase.h"

#include "Engine.h"
#include "PlayerBehaviour.h"
#include "Engine/Engine.h"


// Sets default values
AChest::AChest()
{
 	// Set this actor to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = true;

	

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	RootComponent = CollisionBox;
	CollisionBox->SetBoxExtent(FVector(50.f, 50.f, 50.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	
	chest = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	chest->SetupAttachment(RootComponent);

	chestTop = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshTopComponent"));
	chestTop->SetupAttachment(RootComponent);

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AChest::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &AChest::OnOverlapEnd);



}

//Call when a food overlaps the box and add +1 to the FoodCounter variable
void AChest::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(this);

	AGC_UE4CPPGameModeBase* MinFood = Cast<AGC_UE4CPPGameModeBase>(GameMode);

	if (MinFood != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Counter != nullptr"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Counter == nullptr"));
	}

	

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("the food is IN the box"));
	MinFood->FoodCounter += 1;
	UE_LOG(LogTemp, Warning, TEXT("Chest Food message: %f"), MinFood->FoodCounter);
}

void AChest::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(this);

	AGC_UE4CPPGameModeBase* MinFood = Cast<AGC_UE4CPPGameModeBase>(GameMode);

	if (MinFood != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Counter != nullptr"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Counter == nullptr"));
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("the food is OUTSIDE the box"));
	//MinFood->FoodCounter -= 1;
	UE_LOG(LogTemp, Warning, TEXT("Chest Food message: %f"), MinFood->FoodCounter);
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
