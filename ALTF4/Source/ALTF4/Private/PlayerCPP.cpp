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

	
}

void APlayerCPP::CreateDefaultInit()
{
	CharacterMovement = GetCharacterMovement();

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

	GetMesh()->SetRelativeScale3D(FVector(0.4f, 0.4f, 0.4f));
	GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -95.0f), FRotator(0, -90.0f, 0));
	GetCapsuleComponent()->SetCapsuleHalfHeight(95.0f);

	GrainBag->SetRelativeLocationAndRotation(FVector(0, 0, -15.0f), FRotator(-90.0f, 0, 0));
	GrainBag->SetRelativeScale3D(FVector(0.2f, 0.25f, 0.2f));


	Chicken->SetRelativeLocationAndRotation(FVector(0, -10.0f, -40.0f), FRotator(0.2f, -0.015f, -0.4f));
	Chicken->SetRelativeScale3D(FVector(1.1f, 0.78f, 1.1f));

	SpringArm->TargetArmLength = 500.0f;
	SpringArm->TargetOffset = FVector(0, 0, 150.0f);

	bUseControllerRotationYaw = false;
	SpringArm->bUsePawnControlRotation = true;
	CharacterMovement->bOrientRotationToMovement = true;
	CharacterMovement->GravityScale = 1.4f;
	CharacterMovement->Mass = 30.0f;
	CharacterMovement->MaxAcceleration = 1000.0f;
	CharacterMovement->JumpZVelocity = 1000.0f;
	CharacterMovement->AirControl = 1.0f;
	


}

void APlayerCPP::OnMoveInput(const FInputActionValue& Invalue)
{
	// Invalue에서 입력 값을 가져옵니다.
	FVector2D inputDir = Invalue.Get<FVector2d>();

	// 1. 컨트롤러의 회전값(카메라가 보는 방향)을 가져옵니다.
	const FRotator ControlRotation = GetControlRotation();

	// 2. Pitch(위/아래)는 무시하고 Yaw(좌/우) 회전값만으로 '평평한' 회전값을 만듭니다.
	const FRotator YawRotation(0, ControlRotation.Yaw, 0);

	// 3. 이 Yaw 회전값을 기준으로 '순수한' 앞쪽과 오른쪽 벡터를 계산합니다.
	//    (카메라가 하늘을 봐도 이 벡터들은 Z=0 입니다.)
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	// 4. AddMovementInput을 방향별로 각각 호출합니다. (벡터를 합산할 필요X)
	AddMovementInput(ForwardDirection, inputDir.Y); // W/S (앞/뒤) 입력
	AddMovementInput(RightDirection, inputDir.X); // A/D (좌/우) 입력


}

void APlayerCPP::OnJumpInput(const FInputActionValue& Invalue)
{
	Jump();
}

void APlayerCPP::SprintMode()
{
	CharacterMovement->MaxWalkSpeed = 1000.0f;
	UE_LOG(LogTemp, Warning, TEXT("달리기"));
}

void APlayerCPP::WalkMode()
{
	CharacterMovement->MaxWalkSpeed = 600.0f;
	UE_LOG(LogTemp, Warning, TEXT("%.1f"), CharacterMovement->GetLastUpdateVelocity().Length());
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
		enhanced->BindAction(IA_Jump, ETriggerEvent::Triggered, this, &APlayerCPP::OnJumpInput);
		enhanced->BindAction(IA_Sprint, ETriggerEvent::Started, this, &APlayerCPP::SprintMode);
		enhanced->BindAction(IA_Sprint, ETriggerEvent::Completed, this, &APlayerCPP::WalkMode);

	}
}



