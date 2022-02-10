// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_DestroySelf.h"
#include "AIController.h"
#include "GC_UE4CPPGameModeBase.h"
#include "Kismet/GameplayStatics.h"

EBTNodeResult::Type UBTTask_DestroySelf::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AGC_UE4CPPGameModeBase* GM = Cast<AGC_UE4CPPGameModeBase>(UGameplayStatics::GetGameMode(this));
	GM->DelayedSpawn();	
	GM->NPCCount--;
	OwnerComp.GetAIOwner()->GetPawn()->Destroy();
	return EBTNodeResult::Succeeded;
}