#include "PlayerAnim.h"
#include "PlayerBehaviour.h"
#include "Microsoft/AllowMicrosoftPlatformTypes.h"

UPlayerAnim::UPlayerAnim()
{
	
}

void UPlayerAnim::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

void UPlayerAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	Owner = TryGetPawnOwner();
	PlayerCharacter = Cast<APlayerBehaviour>(Owner);
	
	if(PlayerCharacter)
	{
		Speed = PlayerCharacter->GetVelocity().Size();
		bIsMoving = PlayerCharacter->GetVelocity().Size() > 0 ? true : false;
		bIsPickingDropping = PlayerCharacter->bInteracting;
		bIsCarrying = PlayerCharacter->bIsCarryingFood;
	}	
}


