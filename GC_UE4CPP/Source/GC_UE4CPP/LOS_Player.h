#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "LOS_Player.generated.h"

/**
 * 
 */

UCLASS(Blueprintable)
class GC_UE4CPP_API ULOS_Player : public UBTDecorator
{
	GENERATED_BODY()

public:
	//virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual EBTNodeResult::Type OnNodeActivation(FBehaviorTreeSearchData& SearchDat...);


};
