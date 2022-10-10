// Fill out your copyright notice in the Description page of Project Settings.


#include "AriaCharacter.h"

// Sets default values
AAriaCharacter::AAriaCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAriaCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAriaCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAriaCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Move Forward / Backward"), this, &AAriaCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("Move Right / Left"), this, &AAriaCharacter::MoveSideways);
	PlayerInputComponent->BindAxis(TEXT("Turn Right / Left Mouse"), this, &AAriaCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("Look Up / Down Mouse"), this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this,  &ACharacter::Jump);
}

void AAriaCharacter::MoveForward(float _AxisValue)
{
	AddMovementInput(GetActorForwardVector() * _AxisValue);
}

void AAriaCharacter::MoveSideways(float _AxisValue)
{
	AddMovementInput(GetActorRightVector() * _AxisValue);
}