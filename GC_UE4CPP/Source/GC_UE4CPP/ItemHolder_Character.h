// Fill out your copyright notice in the Description page of Project Settings.

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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AFoodBehaviour* EquippedItem;

	float MovementSpeed;


public:

	bool bIsCarryingFood;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void PickupItem(AFoodBehaviour* FoodToEquip);

	void StorePlate(AFoodSpot* Plate);

	void StoreChest(AChest* Chest);

	void DropItem();

};
