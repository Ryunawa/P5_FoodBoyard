#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoodBehaviour.generated.h"

UCLASS()
class GC_UE4CPP_API AFoodBehaviour : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFoodBehaviour();
	
	UPROPERTY(EditAnywhere)
		TArray<UStaticMesh*> Foods;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Food;

	void RandomFood();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int RandIndex;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
