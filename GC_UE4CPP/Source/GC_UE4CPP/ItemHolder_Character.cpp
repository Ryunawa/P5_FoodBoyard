#include "ItemHolder_Character.h"
#include "FoodBehaviour.h"
#include "FoodSpot.h"
#include "Chest.h"

// Sets default values
AItemHolder_Character::AItemHolder_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItemHolder_Character::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AItemHolder_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AFoodBehaviour* AItemHolder_Character::GetItem()
{
	return EquippedItem;
}

// Called to bind functionality to input
void AItemHolder_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

// To pick up food
void AItemHolder_Character::PickupItem(AFoodBehaviour* FoodToEquip)
{
	FoodToEquip->TogglePhysics(false);
	FoodToEquip->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("Fist_RSocket")); // Attach the food to the right hand
	FoodToEquip->SetActorRelativeScale3D(FVector(0.03f, 0.03f, 0.03f)); // Set a smaller size to the food
	EquippedItem = FoodToEquip;
	bIsCarryingFood = true;
	MovementSpeed /= 2.0f;
}

// To drop the food in a plate
void AItemHolder_Character::StorePlate(AFoodSpot* Plate)
{
	if (Plate->FoodSnapped)return;
	EquippedItem->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform); // Call the method to unsnap from the player hand
	EquippedItem->TogglePhysics(false);
	Plate->SnapOnPlate(EquippedItem);
	EquippedItem = nullptr;
	bIsCarryingFood = false;
	MovementSpeed *= 2.0f;
}

// To drop the food in the chest
void AItemHolder_Character::StoreChest(AChest* Chest)
{
	EquippedItem->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform); // Call the method to unsnap from the player hand
	EquippedItem->TogglePhysics(false);
	Chest->SnapInChest(EquippedItem);
	EquippedItem = nullptr;
	bIsCarryingFood = false;
	MovementSpeed *= 2.0f;
}

//To drop the food on the floor 
void AItemHolder_Character::DropItem()
{
	if (EquippedItem) 
	{
		EquippedItem->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform); // Call the method to unsnap from the player hand
		EquippedItem->TogglePhysics(true);
	}
	EquippedItem = nullptr;
	bIsCarryingFood = false;
	MovementSpeed *= 2.0f;
}
