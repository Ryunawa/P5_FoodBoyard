#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "PlayerBehaviour.generated.h"

class AFoodBehaviour;

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
    UPROPERTY(VisibleAnywhere)
        UAIPerceptionStimuliSourceComponent* PerSource;

public:
    // Sets default values for this character's properties
    APlayerBehaviour();
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
        float TurnRate = 45.0f;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
        float LookUpRate = 45.0f;

    // Input methods
    void Move_XAxis(float Rate);
    void Move_YAxis(float Rate);
    void TurnAtRate(float Rate);
    void LookUpAtRate(float Rate);
    void Zoom(float Rate);
    void InteractFood();

    bool bInteracting;
    bool bIsCarryingFood;
    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    
    int ZoomSpeed;
    float MovementSpeed;
    float SphereRange = 200;
    bool bHit;
    
    AFoodBehaviour* CarriedFood;
    FVector CurrentVelocity;
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