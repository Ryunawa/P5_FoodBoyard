// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_GrabFood.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Enemy.h"
#include "AIController.h"

EBTNodeResult::Type UBTTask_GrabFood::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	USkeletalMeshComponent* NPCMesh = Cast<AEnemy>(OwnerComp.GetAIOwner()->GetPawn())->GetMesh(); // Get the SkeletalMesh of the NPC
	AActor* FoodToGrab = Cast<AActor>(OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsObject("DroppedFood"));
	FoodToGrab->AttachToComponent(NPCMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("Fist_RSocket")); // Attach the food to the right hand
	FoodToGrab->SetActorRelativeScale3D(FVector(0.025f, 0.025f, 0.025f)); // Set a smaller size to the food
	OwnerComp.GetAIOwner()->GetBlackboardComponent()->SetValueAsObject("DroppedFood",nullptr);
	return EBTNodeResult::Succeeded;
}