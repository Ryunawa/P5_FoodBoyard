// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_DropFood.h"
#include "AIController.h"
#include "Enemy.h"
#include "BehaviorTree/BlackboardComponent.h"


EBTNodeResult::Type UBTTask_DropFood::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemy* NPC = Cast<AEnemy>(OwnerComp.GetAIOwner()->GetPawn());
	OwnerComp.GetAIOwner()->GetBlackboardComponent()->SetValueAsObject("DroppedFood", Cast<UObject>(NPC->GetItem()));
	NPC->DropItem();
	return EBTNodeResult::Succeeded;
}