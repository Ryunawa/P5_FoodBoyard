#include "EndAnimationsAnimNotify.h"

#include "PlayerBehaviour.h"
#include "GameFramework/CharacterMovementComponent.h"

void UEndAnimationsAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if(MeshComp && MeshComp->GetOwner())
	{
		APlayerBehaviour* Player = Cast<APlayerBehaviour>(MeshComp->GetOwner());
		if(Player)
		{
			Player->bIsPickingDroppingFood = false;
			Player->GetCharacterMovement()->SetMovementMode((EMovementMode::MOVE_Walking));
		}
	}
}
