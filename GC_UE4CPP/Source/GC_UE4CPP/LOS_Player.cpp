
#include "LOS_Player.h"





EBTNodeResult::Type ULOS_Player::OnNodeActivation(FBehaviorTreeSearchData& SearchDat...)
{
    UBlackboardComponent* Blackboard = SearchDat.OwnerComp.GetBlackboardComponent();
    if (Blackboard->GetValueAsBool(FName("SeePlayer"))) {

        return EBTNodeResult::Succeeded;
    }
    return EBTNodeResult::Failed;
}