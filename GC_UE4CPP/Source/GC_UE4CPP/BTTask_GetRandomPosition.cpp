// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_GetRandomPosition.h"
#include "AIController.h"
#include "Enemy.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


EBTNodeResult::Type UBTTask_GetRandomPosition::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UNavigationSystemV1* NavArea = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
	UBlackboardComponent* BB = OwnerComp.GetAIOwner()->GetBlackboardComponent();
	AEnemy* NPC = Cast<AEnemy>(OwnerComp.GetAIOwner()->GetPawn());
	FVector res;
	if(!NavArea->K2_GetRandomLocationInNavigableRadius(GetWorld(), NPC->GetActorLocation(), res, 9999.0f)) return EBTNodeResult::Failed;
	BB->SetValueAsInt("SpotReached", BB->GetValueAsInt("SpotReached") + 1);
	BB->SetValueAsVector("SpotReached", res);
	return EBTNodeResult::Succeeded;
}