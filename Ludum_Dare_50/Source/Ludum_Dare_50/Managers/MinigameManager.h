// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Kismet/GameplayStatics.h>
#include <Ludum_Dare_50/Minigames/Minigame.h>
#include <Ludum_Dare_50/AdorableMagician.h>
#include "MinigameManager.generated.h"

UCLASS()
class LUDUM_DARE_50_API AMinigameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMinigameManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//USER PROPERTIES AND FUNCTIONS BELOW
protected: 
	UPROPERTY(EditAnywhere, Category = "Minigame Manager")
	AActor* minigameStationBlueprint;
	
	UPROPERTY(EditAnywhere, Category = "Minigame Manager")
	TArray<AActor*> possibleMinigameStationPositions;
	
	UPROPERTY(EditAnywhere, Category = "Minigame Manager")
	TArray<AMinigame*> possibleMinigames;	
	TArray<AMinigame*> remainingUnpickedMinigames;

	AAdorableMagician* magician;

private:
	void spawnMinigameStations();
	void teleportCameraTo(FVector position);
	void resetMinigameChoices();
	void pickNextMinigame();
};
