// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AI_Behaviour.generated.h"

UCLASS()
class GC_UE4CPP_API AAI_Behaviour : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAI_Behaviour();

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* FoodMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
