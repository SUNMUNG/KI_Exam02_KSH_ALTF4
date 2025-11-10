// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerCPP.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"

void APlayerControllerCPP::BeginPlay()
{
	Super::BeginPlay();

	UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (IsValid(Subsystem)) {
		Subsystem->AddMappingContext(defaultMappingContext, GameInputPriority);
	}
}

void APlayerControllerCPP::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* enhanced = Cast<UEnhancedInputComponent>(InputComponent);

	if (IsValid(enhanced)) {
		enhanced->BindAction(IA_Look, ETriggerEvent::Triggered, this, &APlayerControllerCPP::OnCameraLook);
	}
}

void APlayerControllerCPP::OnCameraLook(const FInputActionValue& Invalue)
{
	FVector2d InputDir = Invalue.Get<FVector2d>();

	AddYawInput(InputDir.X);
	AddPitchInput(-InputDir.Y);

}


