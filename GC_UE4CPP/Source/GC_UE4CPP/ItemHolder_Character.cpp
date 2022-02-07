// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemHolder_Character.h"

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

// Called to bind functionality to input
void AItemHolder_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

