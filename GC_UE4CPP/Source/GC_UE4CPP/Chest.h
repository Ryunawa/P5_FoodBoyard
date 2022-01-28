// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chest.generated.h"

UCLASS()
class GC_UE4CPP_API AChest : public AActor
{
	GENERATED_BODY()

	
	
public:	
	// Sets default values for this actor's properties
	AChest();

	UPROPERTY(EditAnywhere)
		TArray<UStaticMesh*> chests;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* chest;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
