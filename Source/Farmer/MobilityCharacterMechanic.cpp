// Fill out your copyright notice in the Description page of Project Settings.


#include "MobilityCharacterMechanic.h"

// Sets default values
AMobilityCharacterMechanic::AMobilityCharacterMechanic()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMobilityCharacterMechanic::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMobilityCharacterMechanic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMobilityCharacterMechanic::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

