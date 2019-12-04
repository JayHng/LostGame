// Fill out your copyright notice in the Description page of Project Settings.


#include "MobilityMechanicCharacter.h"

// Sets default values
AMobilityMechanicCharacter::AMobilityMechanicCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMobilityMechanicCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMobilityMechanicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMobilityMechanicCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
}

