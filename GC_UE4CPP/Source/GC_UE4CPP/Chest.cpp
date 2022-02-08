#include "Chest.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GC_UE4CPPGameModeBase.h"
#include "Engine.h"
#include "FoodBehaviour.h"
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

	FoodSnapLocation = FVector(0.f, 0.f, 20.f);
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

// Snap the FoodChoose inside the chest
void AChest::SnapInChest(AFoodBehaviour* FoodChoose)
{
	FoodChoose->Destroy();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Snapped")); // debug
	FoodCounter();
}

// Update the UI bar food
void AChest::FoodCounter()
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

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("the food is in the box"));
	MinFood->FoodCounter += 1;
	UE_LOG(LogTemp, Warning, TEXT("Chest Food message: %f"), MinFood->FoodCounter);
}
