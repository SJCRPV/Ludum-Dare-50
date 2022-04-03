// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include <Ludum_Dare_50/AdorableMagician.h>
#include <Runtime/Engine/Classes/Camera/CameraComponent.h>
#include "Minigame.generated.h"

//class AMinigameManager;

UCLASS()
class LUDUM_DARE_50_API AMinigame : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMinigame();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//USER PROPERTIES AND FUNCTIONS BELOW
public:
	virtual FVector GetStartingPosition();

	UFUNCTION(BlueprintCallable, Category = "Minigame Base")
	bool GetIsNextMinigame();

	UFUNCTION(BlueprintCallable, Category = "Minigame Base")
	virtual void StartMinigame();

protected:

	AAdorableMagician* magician;

	UPROPERTY(EditAnywhere, Category = "Minigame Base")
	FVector StartPosition;

	UFUNCTION(BlueprintCallable, Category = "Minigame Base")
	bool SetIsNextMinigameTo(bool newStatus);

	virtual void PrepareMinigame();


private:
	UPROPERTY(EditAnywhere, Category = "Minigame Base")
	bool isNextMinigame;

	void teleportCameraTo(FVector position);
};
