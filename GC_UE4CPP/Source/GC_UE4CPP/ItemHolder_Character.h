// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ItemHolder_Character.generated.h"

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

	AActor* EquippedItem;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Interact();

	void PickupItem(AActor* FoodToEquip);

	void StoreItem(AActor* Plate);

	void DropItem();

};
