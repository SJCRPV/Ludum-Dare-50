// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BookSearchWidget.generated.h"

/**
 * 
 */
UCLASS()
class LUDUM_DARE_50_API UBookSearchWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class USlider* BookPageSlider;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* ProximityImage;

	UPROPERTY(BlueprintReadWrite)
	float previousRecordedPageNumber;
};
