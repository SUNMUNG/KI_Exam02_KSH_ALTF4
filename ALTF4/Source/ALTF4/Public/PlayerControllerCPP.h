// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerCPP.generated.h"


class UInputAction;
class UInputMappingContext;


/**
 * 
 */
UCLASS()
class ALTF4_API APlayerControllerCPP : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void SetupInputComponent() override;
	void OnCameraLook(const FInputActionValue& Invalue);
protected:
	virtual void BeginPlay() override;
private:





public:

protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TObjectPtr<UInputAction> IA_Look = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UInputMappingContext> defaultMappingContext = nullptr;
private:
	int32 GameInputPriority = 1;
	
};
