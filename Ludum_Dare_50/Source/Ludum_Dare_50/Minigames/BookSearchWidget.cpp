// Fill out your copyright notice in the Description page of Project Settings.


#include "BookSearchWidget.h"

void UBookSearchWidget::UpdateColourOfProximityImage(int distanceToSuccess)
{
	FSlateColor newColor;
	TextToFadeIn->SetBrushFromTexture(gibberishPages->GetSourceTexture(), /*MatchSize*/ true);
	if (distanceToSuccess == 0)
	{
		newColor = FLinearColor::Blue;
		TextToFadeIn->SetBrushFromTexture(clearTextPages->GetSourceTexture(), /*MatchSize*/ true);
	}
	else if (distanceToSuccess <= 5)
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
