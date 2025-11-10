// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCPP.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "InputActionValue.h"
#include "Components/CapsuleComponent.h"





// Sets default values
APlayerCPP::APlayerCPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CreateDefaultInit();

	GetMesh()->SetRelativeScale3D(FVector(0.4f, 0.4f, 0.4f));
	GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -90.0f), FRotator(0,-90.0f,0));
	GetCapsuleComponent()->SetCapsuleHalfHeight(95.0f);
	
	GrainBag->SetRelativeLocationAndRotation(FVector(0,0,-15.0f),FRotator(-90.0f,0,0));
	GrainBag->SetRelativeScale3D(FVector(0.2f,0.25f,0.2f));


	Chicken->SetRelativeLocationAndRotation(FVector(0, -10.0f, -40.0f), FRotator(0.2f, -0.015f, -0.4f));
	Chicken->SetRelativeScale3D(FVector(1.1f, 0.78f, 1.1f));

	SpringArm->TargetArmLength = 500.0f;
	SpringArm->TargetOffset = FVector(0, 0, 150.0f);

	bUseControllerRotationYaw = false;
	SpringArm->bUsePawnControlRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}

void APlayerCPP::CreateDefaultInit()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetMesh());


	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	PlayerCamera->SetupAttachment(SpringArm);

	ThrowPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ThrowPoint"));
	ThrowPoint->SetupAttachment(RootComponent);

	GrainBag = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrainBag"));
	//GrainBag->SetupAttachment(GetMesh());
	GrainBag->AttachToComponent(GetMesh(), AttachRules, GrainBagSocketName);
	Chicken = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Chicken"));
	Chicken->SetupAttachment(GrainBag);


}

void APlayerCPP::OnMoveInput(const FInputActionValue& Invalue)
{

	FVector CameraDir = PlayerCamera->GetForwardVector() + PlayerCamera->GetRightVector();

	FVector Dir = CameraDir;

	AddMovementInput(Dir);
}

// Called when the game starts or when spawned
void APlayerCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhanced = Cast< UEnhancedInputComponent>(PlayerInputComponent);
	if (IsValid(enhanced)) { //입력 컴포넌트가 향상된 입력 컴포넌트일 때 
		enhanced->BindAction(IA_Move, ETriggerEvent::Triggered, this, &APlayerCPP::OnMoveInput);

	}
}



