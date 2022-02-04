#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <iostream>
#include "FoodBehaviour.h"
#include "Components/SphereComponent.h"
#include "Perception/AIPerceptionSystem.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISense_Sight.h"
#include "PlayerBehaviour.generated.h"

using namespace std;

UCLASS()
class GC_UE4CPP_API APlayerBehaviour : public ACharacter
{
    GENERATED_BODY()

    // Camera boom positioning the camera behind the character 
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
        class USpringArmComponent* CameraBoom;

    // Follow camera
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
        class UCameraComponent* FollowCamera;

    UPROPERTY(VisibleAnywhere)
       USphereComponent* SphereDetection;

    UPROPERTY(VisibleAnywhere)
        UAIPerceptionStimuliSourceComponent* PerSource;

public:
    // Sets default values for this character's properties
    APlayerBehaviour();
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
    float TurnRate = 45.0f;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
    float LookUpRate = 45.0f;


protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    
    // Input methods
    void Move_XAxis(float Rate);
    void Move_YAxis(float Rate);
    void TurnAtRate(float Rate);
    void LookUpAtRate(float Rate);
    void Zoom(float Rate);
    void InteractFood();

    UPROPERTY(VisibleAnywhere)
        float Speed;
    
    float SphereRange = 300;
    bool Hit;
    
    
    FVector CurrentVelocity;

    AFoodBehaviour* Result;
    
    TArray<AActor*> ActorsToIgnore;
    TArray<FHitResult> HitArray;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Returns CameraBoom subobject 
    FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
    // Returns FollowCamera subobject
    FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};