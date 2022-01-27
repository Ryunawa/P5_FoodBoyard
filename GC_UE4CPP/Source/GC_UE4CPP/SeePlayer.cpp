// Fill out your copyright notice in the Description page of Project Settings.


#include "SeePlayer.h"

EBTNodeResult::Type USeePlayer::OnNodeActivation(FBehaviorTreeSearchData& SearchDat...)
{
    UBlackboardComponent* Blackboard = SearchDat.OwnerComp.GetBlackboardComponent();
    if (Blackboard->GetValueAsBool(FName("SeePlayer"))) {
        return EBTNodeResult::Succeeded;
    }
    return EBTNodeResult::Failed;
}