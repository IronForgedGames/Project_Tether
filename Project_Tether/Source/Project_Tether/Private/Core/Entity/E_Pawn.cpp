/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#include "E_Pawn.h"
#include "Public/Core/Entity/Entity.h"

// Sets default values
AE_Pawn::AE_Pawn()
{
	PrimaryActorTick.bCanEverTick = true;
	entity = CreateDefaultSubobject<UEntity>(TEXT("Entity Component"));
}

void AE_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void AE_Pawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AE_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AE_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

