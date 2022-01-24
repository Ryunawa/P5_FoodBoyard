#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <iostream>
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

    UPROPERTY(EditAnywhere)
        float SphereRange = 200;

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
    
    // Input variables
    FVector CurrentVelocity;
    TArray<int> ZoomValues;
    float Speed = 400.0f;
    int ZoomIndex = 1;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Returns CameraBoom subobject 
    FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
    // Returns FollowCamera subobject
    FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};