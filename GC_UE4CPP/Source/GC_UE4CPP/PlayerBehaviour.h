#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerBehaviour.generated.h"

UCLASS()
class GC_UE4CPP_API APlayerBehaviour : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    APlayerBehaviour();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // Input functions
    void Move_XAxis(float AxisValue); //ligne qui crée problème
    void Move_YAxis(float AxisValue); //ligne qui crée problème

    // Input variables
    FVector CurrentVelocity;

};