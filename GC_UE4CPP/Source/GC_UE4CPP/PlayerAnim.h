#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnim.generated.h"

class AGC_UE4CPPGameModeBase;
class APlayerBehaviour;


UCLASS()
class GC_UE4CPP_API UPlayerAnim : public UAnimInstance
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Animation")
		float Speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
		bool bIsMoving;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
		bool bIsCarrying;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
		bool bIsPickingDropping;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
		bool bIsFinish;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
		bool bHaveLost;
	
	APlayerBehaviour* PlayerCharacter;
	AGameModeBase* GameMode;
	AGC_UE4CPPGameModeBase* Gm;


protected:
	
	
public:
	UPlayerAnim();
	
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	APawn* Owner;
};
