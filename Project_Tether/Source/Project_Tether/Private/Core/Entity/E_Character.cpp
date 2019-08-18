/**
Author: Aaron Hines
Studio: Iron Forged Games
*/
#include "Public/Core/Entity/E_Character.h"
#include "Public/Core/Entity/Entity.h"

AE_Character::AE_Character()
{
	PrimaryActorTick.bCanEverTick = true;

	entity = CreateDefaultSubobject<UEntity>(TEXT("Entity Component"));
}

void AE_Character::BeginPlay()
{
	Super::BeginPlay();
}

void AE_Character::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AE_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AE_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}