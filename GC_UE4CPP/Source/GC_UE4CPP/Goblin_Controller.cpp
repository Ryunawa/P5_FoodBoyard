

#include "Goblin_Controller.h"
#include "Enemy.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionSystem.h"
#include "FoodSpot.h"
#include "Kismet/GameplayStatics.h"
#include "MainLevel_LevelScriptActor.h"
#include "Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"

AGoblin_Controller::AGoblin_Controller()
{
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	PerceptionComponent->ConfigureSense(*SightConfig);
	PerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
}

void AGoblin_Controller::BeginPlay()
{
	Super::BeginPlay();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFoodSpot::StaticClass(), SpotArray);

}

void AGoblin_Controller::SetSpawnPoint(AActor* spawnpoint)
{
}

void AGoblin_Controller::OnPossess(APawn* InPawn)
{	
	Super::OnPossess(InPawn);
	FActorSpawnParameters SpawnParams;
	
	if (InPawn) {
		
		//starts the bt and configs the aiperceptioncomponent
		RunBehaviorTree(BehaviorTree);
		Blackboard->SetValueAsObject("SelfActor", GetOwner());
		Blackboard->SetValueAsObject("DroppedFood", nullptr);
		Blackboard->SetValueAsVector("SpawnPoint", InPawn->GetActorLocation());
		GetNewSpot();
		
		SightConfig->SightRadius = 1000;
		SightConfig->LoseSightRadius = 1050;
		SightConfig->PeripheralVisionAngleDegrees = 65.0f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		PerceptionComponent->ConfigureSense(*SightConfig);
		PerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
		PerceptionComponent->OnPerceptionUpdated.AddDynamic(this, &AGoblin_Controller::SeePlayer);
		
		//FoodToStore = GetWorld()->SpawnActor<AFoodBehaviour>(FoodToSpawn, InPawn->GetActorTransform(), SpawnParams);
		//FoodToStore->AttachToComponent(Cast<AEnemy>(InPawn)->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("Fist_RSocket"));
	}
}



void AGoblin_Controller::GetNewSpot() 
{
	int NewSpot;
	do {
		NewSpot = rand() % SpotArray.Num();
	} while (NewSpot == SpotId);
	SpotId = NewSpot;
	Blackboard->SetValueAsObject("SelectedSpot", SpotArray[SpotId]);
}

void AGoblin_Controller::ForgetPlayer()
{
	Blackboard->SetValueAsObject("Player",nullptr);
}

void AGoblin_Controller::SeePlayer(const TArray<AActor*>& UpdatedActors)
{
	Blackboard->SetValueAsObject("Player", GetWorld()->GetFirstPlayerController()->GetPawn());
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AGoblin_Controller::ForgetPlayer, 3, false);
}

void AGoblin_Controller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, AActor::GetActorLocation().ToString());
}