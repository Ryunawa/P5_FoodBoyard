#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chest.generated.h"

class AFoodBehaviour;

UCLASS()
class GC_UE4CPP_API AChest : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AChest();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UBoxComponent* CollisionBox;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* chest;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* chestTop;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMesh;
		
	void SnapInChest(AFoodBehaviour* FoodChoose);
	void FoodIncrement();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	FVector FoodSnapLocation;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
