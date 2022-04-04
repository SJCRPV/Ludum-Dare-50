// Fill out your copyright notice in the Description page of Project Settings.


#include "BookSearch.h"

bool ABookSearch::IsItTheCorrectPage(int pageToCheck)
{
	return pageToCheck == CorrectPage;
}

int ABookSearch::GetCorrectPage()
{
	return CorrectPage;
}

int ABookSearch::GetNumberOfPagesInBook()
{
	return NumberOfPagesInBook;
}

void ABookSearch::StartMinigame()
{
	NumberOfPagesInBook = 100 * DifficultyManager->GetDifficultyMultiplier();
	CorrectPage = FMath::RoundToInt(FMath::RandRange(1, NumberOfPagesInBook));
}

