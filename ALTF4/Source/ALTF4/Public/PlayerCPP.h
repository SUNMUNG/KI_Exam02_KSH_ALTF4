// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "PlayerCPP.generated.h"

class FInputActionValue;
class UCharacterMovementComponent;
class UInputAction;
class USpringArmComponent;
class UCameraComponent;
UCLASS()
class ALTF4_API APlayerCPP : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCPP();

	void CreateDefaultInit();

protected:
	// Called when the game starts or when spawned
	void OnMoveInput(const FInputActionValue& Invalue);
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UCameraComponent* PlayerCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USceneComponent* ThrowPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* GrainBag;
	FName GrainBagSocketName = TEXT("ChickEquip소켓");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* Chicken;
	FName ChickenSocketName = TEXT("Socket");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInputAction* IA_Move;

	FAttachmentTransformRules AttachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;
	UCharacterMovementComponent* CharacterMovement;
private:


};
