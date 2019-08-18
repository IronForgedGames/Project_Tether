/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#include "Public/Implementation/Gameplay/PlayerController/TopDown_E_Character.h"

#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

#include "DashComponent.h"
#include "Public/Implementation/Gameplay/PlayerController/Components/ToolComponent.h"
#include "Public/Core/Components/StateComponent.h"
#include "Public/Core/Components/Stats/StatComponent.h"
#include "Public/Core/Components/VitalsComponent.h"
#include "Public/Core/Item/InventoryComponent.h"
#include "Public/Core/Components/StateComponent.h"
#include "Public/Implementation/Gameplay/PlayerController/Components/AnimBPHook.h"
#include "Public/Implementation/Gameplay/PlayerController/Components/PlayerComboComponent.h"
#include "Public/Implementation/Gameplay/PlayerController/Components/EvadeComponent.h"

ATopDown_E_Character::ATopDown_E_Character()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 800.0f, 0.0f);
	// if jump is to be added set vars here

	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	springArm->SetupAttachment(RootComponent);
	springArm->bAbsoluteRotation = true; // you dont want the camera to rotate with the player just be attached by position
	springArm->TargetArmLength = 800.f;
	springArm->RelativeRotation = FRotator(-60.f, 0.f, 0.f); 
	springArm->bDoCollisionTest = false; // set this to true if you want cam collision
	springArm->bUsePawnControlRotation;

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(springArm, USpringArmComponent::SocketName);
	camera->bUsePawnControlRotation = false;

	// gameplay
	toolComponent = CreateDefaultSubobject<UToolComponent>(TEXT("Tool Component"));
	statComponent = CreateDefaultSubobject<UStatComponent>(TEXT("Stat Component"));
	vitalsComponent = CreateDefaultSubobject<UVitalsComponent>(TEXT("Vitals Component"));
	inventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory Component"));
	stateComponent = CreateDefaultSubobject<UStateComponent>(TEXT("State Component"));
	animHook = CreateDefaultSubobject<UAnimBPHook>(TEXT("Anim Hook"));
	comboComponent = CreateDefaultSubobject<UPlayerComboComponent>(TEXT("Combo"));
	evadeComponent = CreateDefaultSubobject<UEvadeComponent>(TEXT("Evade"));
	dashComponent = CreateDefaultSubobject<UDashComponent>(TEXT("Dash Component"));
}

void ATopDown_E_Character::MoveForward(float value)
{
	if ((Controller != NULL) && (value != 0.f))
	{
		const FRotator _rotation = Controller->GetControlRotation();
		const FRotator _yawRotation(0, _rotation.Yaw, 0);

		const FVector _direction = FRotationMatrix(_yawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(_direction, value);
	}
}

void ATopDown_E_Character::MoveRight(float value)
{
	if ((Controller != NULL) && (value != 0.f))
	{
		const FRotator _rotation = Controller->GetControlRotation();
		const FRotator _yawRotation(0.f, _rotation.Yaw, 0.f);

		const FVector _direction = FRotationMatrix(_yawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(_direction, value);
	}
}

void ATopDown_E_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FocusTick();
}

void ATopDown_E_Character::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	check(PlayerInputComponent)
	PlayerInputComponent->BindAxis("MoveForward", this, &ATopDown_E_Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATopDown_E_Character::MoveRight);
}

void ATopDown_E_Character::StartFocus()
{
	focused = true;
}

void ATopDown_E_Character::EndFocus()
{
	focused = false;
}

void ATopDown_E_Character::FocusTick()
{
	if (focused && !stateComponent->AnyStateTrue(focusStates))
	{
		if (useExternalTarget)
		{
			// use a physical target
		}
		else if (useDirectionalInput)
		{
			// arrow or joysticks
		}
		else
		{
			APlayerController* _playerController = Cast<APlayerController>(GetController());
			if (_playerController != nullptr)
			{
				FHitResult _hitResult;
				_playerController->GetHitResultUnderCursor(ECC_Visibility, true, _hitResult);
				
				FVector _alteredHitLocation = _hitResult.Location;
				_alteredHitLocation.Z = GetActorLocation().Z;
				focusDirection = _alteredHitLocation - GetActorLocation();

				FMatrix _rotationMatrix = FRotationMatrix::MakeFromXZ(focusDirection, GetActorUpVector());
				FRotator _lerpedRot = FMath::Lerp(GetActorRotation(), _rotationMatrix.Rotator(), focusRotateSpeed);
				
				SetActorRotation(_lerpedRot);
			}
		}
	}
}
