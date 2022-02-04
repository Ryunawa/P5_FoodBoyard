// Fill out your copyright notice in the Description page of Project Settings.


#include "SeePlayer.h"

USeePlayer::USeePlayer()
{
    bCreateNodeInstance = true;
}

void USeePlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
    bool res = Blackboard->GetValueAsBool(FName("SeePlayer"));
    if (res) {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "vois");
        //return EBTNodeResult::Failed;

    }
    else GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "vois pas");
    //return EBTNodeResult::Succeeded;
}