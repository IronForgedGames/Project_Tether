/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#include "E_Actor.h"
#include "Public/Core/Entity/Entity.h"


// Sets default values
AE_Actor::AE_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	entity = CreateDefaultSubobject<UEntity>(TEXT("Entity Component"));
}

// Called when the game starts or when spawned
void AE_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AE_Actor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

// Called every frame
void AE_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

