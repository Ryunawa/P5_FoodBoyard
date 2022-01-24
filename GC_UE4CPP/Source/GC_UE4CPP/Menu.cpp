// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu.h"
#include "Components/Button.h"

bool UMenu::Initialize()
{
	Super::Initialize();

	StartGame->OnClicked.AddDynamic(this, &UMenu::StartButtonClicked);

	return true;

}

void UMenu::StartButtonClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Our button is working!"));
}


