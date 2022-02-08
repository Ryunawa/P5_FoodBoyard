#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoodSpot.generated.h"

class AFoodBehaviour;

UCLASS()
class GC_UE4CPP_API AFoodSpot : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFoodSpot();

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* StaticMesh;
	
	AFoodBehaviour* FoodSnapped;
	
	void SnapOnPlate(AFoodBehaviour* FoodChosen);
	void DetachFromPlate();

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector FoodSnapLocation;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
