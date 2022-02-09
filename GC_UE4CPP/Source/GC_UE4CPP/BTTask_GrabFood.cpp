// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_GrabFood.h"
#include "AIController.h"
#include "Enemy.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "FoodBehaviour.h"

EBTNodeResult::Type UBTTask_GrabFood::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemy* NPC = Cast<AEnemy>(OwnerComp.GetAIOwner()->GetPawn());
	NPC->PickupItem(Cast<AFoodBehaviour>(OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsObject("DroppedFood")));
	OwnerComp.GetAIOwner()->GetBlackboardComponent()->SetValueAsObject("DroppedFood",nullptr);
	return EBTNodeResult::Succeeded;
}