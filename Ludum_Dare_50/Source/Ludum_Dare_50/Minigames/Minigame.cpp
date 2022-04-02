// Fill out your copyright notice in the Description page of Project Settings.


#include "Minigame.h"

// Sets default values
AMinigame::AMinigame()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMinigame::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMinigame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMinigame::prepareMinigame()
{
}

FVector AMinigame::GetStartingPosition()
{
	return startPosition;
}

void AMinigame::StartMinigame()
{
	prepareMinigame();
}

