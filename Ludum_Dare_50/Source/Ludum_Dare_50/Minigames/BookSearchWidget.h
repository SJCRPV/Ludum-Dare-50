// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Slider.h"
#include "Components/Image.h"
#include "Styling/SlateColor.h"
#include "Math/Color.h"
#include "BookSearchWidget.generated.h"

//class USlider;
//class UImage;

/**
 * 
 */
UCLASS()
class LUDUM_DARE_50_API UBookSearchWidget : public UUserWidget
{
	GENERATED_BODY()

	//USER PROPERTIES AND FUNCTIONS BELOW
public:
	UFUNCTION(BlueprintCallable, Category = "Book Search Widget")
	void UpdateColourOfProximityImage(int distanceToSuccess);

protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class USlider* BookPageSlider;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* ProximityImage;

	UPROPERTY(BlueprintReadWrite)
	float previousRecordedPageNumber;
private:
};
