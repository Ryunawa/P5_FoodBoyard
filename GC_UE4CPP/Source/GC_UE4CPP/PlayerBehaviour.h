#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <iostream>
#include "FoodBehaviour.h"
#include "Components/SphereComponent.h"
#include "PlayerBehaviour.generated.h"

using namespace std;

UCLASS()
class GC_UE4CPP_API APlayerBehaviour : public ACharacter
{
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
        class USpringArmComponent* CameraBoom;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
        class UCameraComponent* FollowCamera;
    UPROPERTY(VisibleAnywhere)
        USphereComponent* SphereDetection;
public:
    // Sets default values for this character's properties
    APlayerBehaviour();
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
        float TurnRate = 45.0f;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
        float LookUpRate = 45.0f;
    UPROPERTY(EditAnywhere)
        float MovementSpeed;
    UPROPERTY(EditAnywhere)
        int ZoomSpeed;
    UPROPERTY(EditAnywhere)
        bool bIsPickingDroppingFood;


    // Input methods
    void Move_XAxis(float Rate);
    void Move_YAxis(float Rate);
    void TurnAtRate(float Rate);
    void LookUpAtRate(float Rate);
    void Zoom(float Rate);
    void InteractFood();
    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    
    float SphereRange = 300;
    bool bHit;
    
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