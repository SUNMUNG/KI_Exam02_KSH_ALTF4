// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

class UCharacterMovementComponent;
/**
 * 
 */
UCLASS()
class ALTF4_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

protected:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float deltatime) override;
private:





public:
protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	UCharacterMovementComponent* MovementComponent=nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	APawn* OwnerPawn = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ACharacter* OwnerCharacter = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MoveSpeed=0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool isInAir = false;

	
private:



};
