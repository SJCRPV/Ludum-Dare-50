// Fill out your copyright notice in the Description page of Project Settings.


#include "DifficultyManager.h"

// Sets default values
ADifficultyManager::ADifficultyManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADifficultyManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADifficultyManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ADifficultyManager::GetDifficultyMultiplier()
{
	return 1.0f;
}

