

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CameraCharacter.generated.h"

UCLASS()
class GC_UE4CPP_API ACameraCharacter : public ACharacter
{
	GENERATED_BODY()

	// Camera boom positioning the camera behind the character 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	// Follow camera 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	// Sets default values for this character's properties
	ACameraCharacter();


    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
    float TurnRate;

 
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


	// Returns CameraBoom subobject 
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	// Returns FollowCamera subobject 
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

};
