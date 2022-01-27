

#include "AI_Behaviour.h"

AAI_Behaviour::AAI_Behaviour()
{
	AIPer = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));


}

void AAI_Behaviour::BeginPlay()
{
	Super::BeginPlay();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFoodSpot::StaticClass(), SpotArray); BBAsset = NewObject<UBlackboardData>();
	BBAsset = NewObject<UBlackboardData>();

	SpotId = rand() % SpotArray.Num();
}

void AAI_Behaviour::OnPossess(APawn* InPawn)
{
	
	Super::OnPossess(InPawn);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, InPawn->GetName());
	RunBehaviorTree(Cast<AEnemy>(InPawn)->BehaviorTree);
	if (InPawn) {
		BBComp = GetBlackboardComponent();
		BBComp->SetValueAsBool("SeePlayer", false);
		BBComp->SetValueAsObject("SelfActor", GetOwner());
		BBComp->SetValueAsObject("SelectedSpot", SpotArray[SpotId]);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("pute"));
	}
}

void AAI_Behaviour::GetNewSpot()
{
	int NewSpot;
	do {
		NewSpot = rand() % SpotArray.Num();
	} while (NewSpot == SpotId);
	SpotId = NewSpot;
	BBComp->SetValueAsObject("SelectedSpot", SpotArray[SpotId]);
}



void AAI_Behaviour::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, AActor::GetActorLocation().ToString());
	//MoveToLocation(SpotArray[SelectedSpot]->GetActorLocation());
}
