// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "AdorableMagician.generated.h"

/**
 * 
 */
UCLASS()
class LUDUM_DARE_50_API AAdorableMagician : public APaperCharacter
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Category = "Adorable Magician")
	bool isAcceptingMovementInput = true;

public:
	UFUNCTION(BlueprintCallable, Category = "Adorable Magician")
	void SetPlayerCanMoveTo(bool newStatus);
};
