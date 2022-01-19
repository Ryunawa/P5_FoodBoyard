#include "PlayerBehaviour.h"

// Sets default values
APlayerBehaviour::APlayerBehaviour()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerBehaviour::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void APlayerBehaviour::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!CurrentVelocity.IsZero())
    {
        FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime);
        SetActorLocation(NewLocation);
    }
}

// Called to bind functionality to input
void APlayerBehaviour::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Respond every frame to the values of our two movement axes, "MoveX" and "MoveY".
    InputComponent->BindAxis("MoveX", this, &APlayerBehaviour::Move_XAxis);
    InputComponent->BindAxis("MoveY", this, &APlayerBehaviour::Move_YAxis);
}

void APlayerBehaviour::Move_XAxis(float AxisValue)
{

}


void APlayerBehaviour::Move_YAxis(float AxisValue)
{

}