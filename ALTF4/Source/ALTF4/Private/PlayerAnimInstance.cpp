// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"

void UPlayerAnimInstance::NativeInitializeAnimation()
{

	Super::NativeInitializeAnimation();

	OwnerPawn = TryGetPawnOwner();

	if (IsValid(OwnerPawn)) {
		OwnerCharacter = Cast<ACharacter>(OwnerPawn);
		
		if (OwnerCharacter) {

			MovementComponent = OwnerCharacter->GetCharacterMovement();

		}

	}



}

void UPlayerAnimInstance::NativeUpdateAnimation(float deltatime)
{
	Super::NativeUpdateAnimation(deltatime);


	if (OwnerCharacter) {
		MoveSpeed = OwnerCharacter->GetVelocity().Length();
		isInAir = MovementComponent->IsFlying();
	}

	
}
