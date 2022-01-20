#include "PlayerBehaviour.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
APlayerBehaviour::APlayerBehaviour()
{
    // Set this character to call Tick() every frame.
    PrimaryActorTick.bCanEverTick = true;
	ZoomValues.Add(400);
	ZoomValues.Add(700);
	ZoomValues.Add(1000);
	ZoomValues.Add(1400);

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	
	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;



	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = ZoomValues[ZoomIndex]; // Set the distance between the camera and the character	
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

    // Respond every frame to the values of our two movement axes, MoveX and MoveY.
    InputComponent->BindAxis("MoveX", this, &APlayerBehaviour::Move_XAxis);
    InputComponent->BindAxis("MoveY", this, &APlayerBehaviour::Move_YAxis);


	//camera input
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("TurnRate", this, &APlayerBehaviour::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APlayerBehaviour::LookUpAtRate);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Zoom", this, &APlayerBehaviour::Zoom);
}


void APlayerBehaviour::Move_XAxis(float Rate)
{
    CurrentVelocity.X = FMath::Clamp(Rate, -1.0f, 1.0f) * Speed;
}

void APlayerBehaviour::Move_YAxis(float Rate)
{
    CurrentVelocity.Y = FMath::Clamp(Rate, -1.0f, 1.0f) * Speed;
}


//Add 1 to the value of ZoomIndex
void APlayerBehaviour::Zoom(float Rate)
{
	if(ZoomIndex < 3 && Rate < 0)
	{
		ZoomIndex++;
		UE_LOG(LogTemp, Warning, TEXT("Niveau de zoom: %d"), ZoomIndex);
		SetCameraDistance(ZoomIndex);
	}

	if(ZoomIndex > 0 && Rate > 0)
	{
		ZoomIndex--;
		UE_LOG(LogTemp, Warning, TEXT("Niveau de zoom: %d"), ZoomIndex);
		SetCameraDistance(ZoomIndex);
	}
}


void APlayerBehaviour::SetCameraDistance(int Index)
{
	CameraBoom->TargetArmLength = ZoomValues[Index];
}
