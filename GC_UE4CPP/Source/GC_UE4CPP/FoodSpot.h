#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoodBehaviour.h"
#include "FoodSpot.generated.h"

UCLASS()
class GC_UE4CPP_API AFoodSpot : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFoodSpot();

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMesh;
	UPROPERTY(EditAnywhere)
		AFoodBehaviour* FoodSnapped;
	
	void SnapOnPlate(AFoodBehaviour* FoodChoose);
	void DetachFromPlate();



	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector FoodSnapLocation;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
