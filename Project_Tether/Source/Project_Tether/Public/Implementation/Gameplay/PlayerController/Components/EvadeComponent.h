
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EvadeComponent.generated.h"

class UStateComponent;
class UState;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEvadeEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UEvadeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UEvadeComponent();

	UPROPERTY(BlueprintAssignable)
	FEvadeEvent evadeStarted;

	UPROPERTY(BlueprintAssignable)
	FEvadeEvent evadeEnded;

	UPROPERTY(EditAnywhere)
	TArray<UState*> unavailableStates;

protected:
	
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void StartEvade(FVector currentVelocity, bool shouldRotate);

	UFUNCTION(BlueprintCallable)
	void EndEvade(); // called from whatever system is doing the particular evade
};
