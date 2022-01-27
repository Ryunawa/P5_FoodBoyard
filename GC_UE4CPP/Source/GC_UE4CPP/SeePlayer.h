// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SeePlayer.generated.h"

/**
 * 
 */
UCLASS()
class GC_UE4CPP_API USeePlayer : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	virtual EBTNodeResult::Type OnNodeActivation(FBehaviorTreeSearchData& SearchDat...);


};
