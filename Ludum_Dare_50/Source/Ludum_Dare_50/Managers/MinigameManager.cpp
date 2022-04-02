// Fill out your copyright notice in the Description page of Project Settings.


#include "MinigameManager.h"

// Sets default values
AMinigameManager::AMinigameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMinigameManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMinigameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

