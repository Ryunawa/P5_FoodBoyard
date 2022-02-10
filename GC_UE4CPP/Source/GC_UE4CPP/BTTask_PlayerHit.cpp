// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_PlayerHit.h"
#include "GC_UE4CPPGameModeBase.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

EBTNodeResult::Type UBTTask_PlayerHit::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AGC_UE4CPPGameModeBase* GM = Cast<AGC_UE4CPPGameModeBase>(UGameplayStatics::GetGameMode(this));
	OwnerComp.GetAIOwner()->GetBlackboardComponent()->SetValueAsBool("bKnightLost", true);
	GM->bIsTouched = true;
	GM->WinLoseCondition();
	return EBTNodeResult::Succeeded;
}