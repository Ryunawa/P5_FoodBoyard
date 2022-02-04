

#include "AI_Behaviour.h"
#include "Enemy.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionSystem.h"
#include "FoodSpot.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

AAI_Behaviour::AAI_Behaviour()
{
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	PerceptionComponent->ConfigureSense(*SightConfig);
	PerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
}

void AAI_Behaviour::BeginPlay()
{
	Super::BeginPlay();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFoodSpot::StaticClass(), SpotArray);

}

void AAI_Behaviour::OnPossess(APawn* InPawn)
{	
	Super::OnPossess(InPawn);
	//AFoodBehaviour* FoodSpawned;
	FActorSpawnParameters SpawnParams;

	if (InPawn) {
		RunBehaviorTree(BehaviorTree);
		Blackboard->SetValueAsObject("SelfActor", GetOwner());
		GetNewSpot();
		SightConfig->SightRadius = 1000;
		SightConfig->LoseSightRadius = 1500;
		SightConfig->PeripheralVisionAngleDegrees = 360.0f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		PerceptionComponent->ConfigureSense(*SightConfig);
		PerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
		PerceptionComponent->OnPerceptionUpdated.AddDynamic(this, &AAI_Behaviour::SeePlayer);

		FoodToStore = GetWorld()->SpawnActor<AFoodBehaviour>(FoodToSpawn, InPawn->GetActorTransform(), SpawnParams);
		FoodToStore->AttachToComponent(Cast<AEnemy>(InPawn)->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("Fist_RSocket"));
		GetBlackboardComponent()->SetValueAsObject("DroppedFood", nullptr);
	}
}

void AAI_Behaviour::GetNewSpot()
{
	int NewSpot;
	do {
		NewSpot = rand() % SpotArray.Num();
	} while (NewSpot == SpotId);
	SpotId = NewSpot;
	Blackboard->SetValueAsObject("SelectedSpot", SpotArray[SpotId]);
}

void AAI_Behaviour::ForgetPlayer()
{
	Blackboard->SetValueAsObject("Player",nullptr);

}
void AAI_Behaviour::SeePlayer(const TArray<AActor*>& UpdatedActors)
{
	Blackboard->SetValueAsObject("Player", GetWorld()->GetFirstPlayerController()->GetPawn());
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AAI_Behaviour::ForgetPlayer, 3, false);
}



void AAI_Behaviour::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, AActor::GetActorLocation().ToString());
}
