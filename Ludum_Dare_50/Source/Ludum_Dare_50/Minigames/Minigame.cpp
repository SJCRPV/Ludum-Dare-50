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

	magician = Cast<AAdorableMagician>(UGameplayStatics::GetActorOfClass(GetWorld(), AAdorableMagician::StaticClass()));
	TArray<AActor*> child;
	GetAttachedActors(child);
	if (child.IsValidIndex(0))
	{
		StartPosition = child[0]->GetActorLocation();
	}
}

// Called every frame
void AMinigame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//bool AMinigame::SetIsNextMinigameTo(bool newStatus)
//{
//	isNextMinigame = newStatus;
//	return isNextMinigame;
//}

void AMinigame::teleportCameraTo(FVector position)
{
	magician->SetActorLocation(position);
	//magician->GetComponentByClass(TSubclassOf<UPaperFlipbookComponent>())
}

void AMinigame::PrepareMinigame()
{
	magician->SetPlayerCanMoveTo(false);
	teleportCameraTo(StartPosition);
}

FVector AMinigame::GetStartingPosition()
{
	return StartPosition;
}

void AMinigame::WinMinigame()
{
	//QuotaManager->CompletedTask();

	TArray<AActor*> spawnPoint;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Spawn"), spawnPoint);
	if (spawnPoint.IsValidIndex(0))
	{
		teleportCameraTo(spawnPoint[0]->GetActorLocation());
	}
}

void AMinigame::StartMinigame()
{
	PrepareMinigame();
}

