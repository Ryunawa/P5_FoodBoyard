#include "PlayerAnim.h"
#include "GC_UE4CPPGameModeBase.h"
#include "PlayerBehaviour.h"
#include "Kismet/GameplayStatics.h"
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
	GameMode = UGameplayStatics::GetGameMode(this);
	Gm = Cast<AGC_UE4CPPGameModeBase>(GameMode);
	
	if(PlayerCharacter && Gm)
	{
		Speed = PlayerCharacter->GetVelocity().Size();
		bIsMoving = PlayerCharacter->GetVelocity().Size() > 0 ? true : false;
		bIsPickingDropping = PlayerCharacter->bInteracting;
		bIsCarrying = PlayerCharacter->bIsCarryingFood;
		bIsFinish = Gm->bIsGameFinished;
		bHaveLost = Gm->bIsTouched;
	}
}


