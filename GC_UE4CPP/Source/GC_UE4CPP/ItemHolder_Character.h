#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ItemHolder_Character.generated.h"

class AFoodBehaviour;
class AFoodSpot;
class AChest;

UCLASS()
class GC_UE4CPP_API AItemHolder_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AItemHolder_Character();

	void PickupItem(AFoodBehaviour* FoodToEquip);
	void StorePlate(AFoodSpot* Plate);
	void StoreChest(AChest* Chest);
	void DropItem();

	bool bIsCarryingFood;

	float MovementSpeed;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AFoodBehaviour* EquippedItem;

	


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
