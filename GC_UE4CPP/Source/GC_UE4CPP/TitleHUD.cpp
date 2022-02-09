// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleHUD.h"


ATitleHUD::ATitleHUD()
{

}

void ATitleHUD::BeginPlay()
{
	Super::BeginPlay();



	// Widget
	if (WidgetTitleClass)
	{
		WidgetTitle = CreateWidget<UWidgetTitle>(GetWorld(), WidgetTitleClass);

		// Make sure widget was created 
		if (WidgetTitle)
		{
			// Add it to the viewport 
			WidgetTitle->AddToViewport();
		}

	}


}

void ATitleHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (WidgetTitle)
	{

	}


}

void ATitleHUD::DrawHUD()
{
	Super::DrawHUD();
}

