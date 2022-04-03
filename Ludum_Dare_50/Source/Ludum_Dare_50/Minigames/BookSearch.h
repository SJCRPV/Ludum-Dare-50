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

	int NumberOfPagesToLook = 100;

	//void StartMinigame() override;

protected:

private:


};
