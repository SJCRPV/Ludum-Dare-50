// Fill out your copyright notice in the Description page of Project Settings.


#include "WizardCharacter.h"

// Sets default values
AWizardCharacter::AWizardCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWizardCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWizardCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation(GetActorLocation() + rateOfPositionChange);
}

void AWizardCharacter::MoveLeft(float value)
{
	UE_LOG(LogTemp, Display, TEXT("MoveLeft"));
	rateOfPositionChange.X = value;
}

void AWizardCharacter::MoveRight(float value)
{
	UE_LOG(LogTemp, Display, TEXT("MoveRight"));
	rateOfPositionChange.X = value;
}

void AWizardCharacter::MoveUp(float value)
{
	UE_LOG(LogTemp, Display, TEXT("MoveUp"));
	rateOfPositionChange.Z = -value;
}

void AWizardCharacter::MoveDown(float value)
{
	UE_LOG(LogTemp, Display, TEXT("MoveDown"));
	rateOfPositionChange.Z = -value;
}


// Called to bind functionality to input
void AWizardCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveCharacterLeft", this, &AWizardCharacter::MoveLeft);
	InputComponent->BindAxis("MoveCharacterRight", this, &AWizardCharacter::MoveRight);
	InputComponent->BindAxis("MoveCharacterUp", this, &AWizardCharacter::MoveUp);
	InputComponent->BindAxis("MoveCharacterDown", this, &AWizardCharacter::MoveDown);
}

