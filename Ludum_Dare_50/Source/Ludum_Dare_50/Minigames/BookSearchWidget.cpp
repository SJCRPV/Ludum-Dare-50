// Fill out your copyright notice in the Description page of Project Settings.


#include "BookSearchWidget.h"

void UBookSearchWidget::UpdateColourOfProximityImage(int distanceToSuccess)
{
	FSlateColor newColor;
	if (distanceToSuccess <= 5)
	{
		newColor = FLinearColor::Green;
	}
	else if(distanceToSuccess > 5 && distanceToSuccess <= 25)
	{
		newColor = FLinearColor::Yellow;
	}
	else if (distanceToSuccess > 25 && distanceToSuccess <= 50)
	{
		newColor = FLinearColor::FLinearColor(FColor::Orange);
	}
	else
	{
		newColor = FLinearColor::Red;
	}
	ProximityImage->SetBrushTintColor(newColor);
}
