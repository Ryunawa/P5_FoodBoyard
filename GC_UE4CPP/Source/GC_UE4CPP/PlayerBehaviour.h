#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerBehaviour.generated.h"

UCLASS()
class GC_UE4CPP_API APlayerBehaviour : public ACharacter
{
    GENERATED_BODY()

    /** Camera boom positioning the camera behind the character */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
    class USpringArmComponent* CameraBoom;

    /** Follow camera */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
    class UCameraComponent* FollowCamera;

public:
    // Sets default values for this character's properties
    APlayerBehaviour();

    /** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
    float TurnRate;

    /** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
    float LookUpRate;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


    void TurnAtRate(float Rate);
    void LookUpAtRate(float Rate);

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;


    // Input functions
    void Move_XAxis(float AxisValue); //ligne qui crée problème
    void Move_YAxis(float AxisValue); //ligne qui crée problème

    // Input variables
    FVector CurrentVelocity;
    float Speed;

    /** Returns CameraBoom subobject **/
    FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
    /** Returns FollowCamera subobject **/
    FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

};