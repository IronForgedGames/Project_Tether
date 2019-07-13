/**
Author: Aaron Hines
Studio: Iron Forged Games
*/
#include "Entity.h"
#include "Public/Core/Entity/E_GameModeBase.h"
#include "Public/Core/Entity/EntityManager.h"
#include "Public/Core/Entity/Identity.h"
#include "Public/Core/Entity/Group.h"


// Sets default values for this component's properties
UEntity::UEntity()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UEntity::BeginPlay()
{
	Super::BeginPlay();

	RegisterEntity();
}

void UEntity::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	DeRegisterEntity();
}

void UEntity::RegisterEntity()
{
	AE_GameModeBase* e_gameMode = Cast<AE_GameModeBase>(GetWorld()->GetAuthGameMode());
	if (e_gameMode != nullptr)
	{
		e_gameMode->GetEntityManager()->RegisterEntity(this);
	}
}

void UEntity::DeRegisterEntity()
{
	AE_GameModeBase* e_gameMode = Cast<AE_GameModeBase>(GetWorld()->GetAuthGameMode());
	if (e_gameMode != nullptr)
	{
		e_gameMode->GetEntityManager()->DeRegisterEntity(this);
	}
}

void UEntity::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

TSubclassOf<UGroup> UEntity::GetGroup()
{
	//return TSubclassOf<UGroup>();
	return Cast<UIdentity>(identity)->GetGroup();
}

