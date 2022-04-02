// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Minigame.generated.h"

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
private:
	FVector startPosition;
	void prepareMinigame();

public:
	FVector GetStartingPosition();
	void StartMinigame();

};
