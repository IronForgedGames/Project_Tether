/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E_Actor.generated.h"

UCLASS()
class PROJECT_TETHER_API AE_Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	AE_Actor();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditAnywhere, Category = "Entity")
	UEntity* entity;

public:	
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "Entity")
	UEntity* GetEntity() { return entity; }
};
