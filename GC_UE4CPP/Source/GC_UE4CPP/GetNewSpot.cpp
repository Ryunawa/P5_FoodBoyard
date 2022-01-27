// Fill out your copyright notice in the Description page of Project Settings.


#include "GetNewSpot.h"

EBTNodeResult::Type UGetNewSpot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Cast<AAI_Behaviour>(OwnerComp.GetAIOwner())->GetNewSpot();
    return EBTNodeResult::Succeeded;
}
