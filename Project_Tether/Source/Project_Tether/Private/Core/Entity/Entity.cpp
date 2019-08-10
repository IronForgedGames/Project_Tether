/**
Author: Aaron Hines
Studio: Iron Forged Games
*/
#include "Entity.h"
#include "Public/Core/Entity/E_GameModeBase.h"
#include "Public/Core/Entity/EntityManager.h"
#include "Public/Core/Entity/Identity.h"
#include "Public/Core/Entity/Group.h"
#include "E_GameInstance.h"
#include "Engine/World.h"


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
	UE_GameInstance* _gameInstance = Cast<UE_GameInstance>(GetWorld()->GetGameInstance());
	if (_gameInstance != nullptr)
	{
		_gameInstance->GetEntityManager()->RegisterEntity(this);
	}
}

void UEntity::DeRegisterEntity()
{
	UE_GameInstance* _gameInstance = Cast<UE_GameInstance>(GetWorld()->GetGameInstance());
	if (_gameInstance != nullptr)
	{
		_gameInstance->GetEntityManager()->DeRegisterEntity(this);
	}
}

void UEntity::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}
