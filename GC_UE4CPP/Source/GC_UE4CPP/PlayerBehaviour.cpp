#include "PlayerBehaviour.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
APlayerBehaviour::APlayerBehaviour()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    Speed = 400.0f;


	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	TurnRate = 45.f;
	LookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;



	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true;

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

}



void APlayerBehaviour::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * TurnRate * GetWorld()->GetDeltaSeconds());
}

void APlayerBehaviour::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * LookUpRate * GetWorld()->GetDeltaSeconds());
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


	//camera input
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("TurnRate", this, &APlayerBehaviour::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APlayerBehaviour::LookUpAtRate);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
}

void APlayerBehaviour::Move_XAxis(float AxisValue)
{
    CurrentVelocity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * Speed;
}


void APlayerBehaviour::Move_YAxis(float AxisValue)
{
    CurrentVelocity.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * Speed;
}