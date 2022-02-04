// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_DropFood.h"
#include "AIController.h"
#include "AI_Behaviour.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTask_DropFood::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AActor* tmpPtr = Cast<AAI_Behaviour>(OwnerComp.GetAIOwner())->FoodToStore;
	tmpPtr->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	OwnerComp.GetAIOwner()->GetBlackboardComponent()->SetValueAsObject("DroppedFood", tmpPtr);
	return EBTNodeResult::Succeeded;
}