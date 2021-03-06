// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Minigame.h"
#include <Ludum_Dare_50/Minigames/BookSearchWidget.h>
#include "BookSearch.generated.h"

/**
 * 
 */
UCLASS()
class LUDUM_DARE_50_API ABookSearch : public AMinigame
{
	GENERATED_BODY()


	//USER PROPERTIES AND FUNCTIONS BELOW

public:
	UBookSearchWidget* MinigameWidget;

	void StartMinigame() override;

	UFUNCTION(BlueprintCallable, Category = "Book Search")
	bool IsItTheCorrectPage(int pageToCheck);
	UFUNCTION(BlueprintCallable, Category = "Book Search")
	int GetCorrectPage();
	UFUNCTION(BlueprintCallable, Category = "Book Search")
	int GetNumberOfPagesInBook();

protected:

private:
	int NumberOfPagesInBook = 100;
	int CorrectPage;

};
