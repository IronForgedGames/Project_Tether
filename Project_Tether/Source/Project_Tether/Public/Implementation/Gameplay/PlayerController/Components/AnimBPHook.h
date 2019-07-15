/**
Author: Aaron Hines
Studio: Iron Forged Games
*/
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimBPHook.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UAnimBPHook : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAnimBPHook();

protected:
	virtual void BeginPlay() override;

	void CalculateVars();

	AActor* owner;

	float speed;
	float direction;
	bool focused;
	bool useLean;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Locomtion")
	float GetSpeed() { return speed; }
	
	UFUNCTION(BlueprintCallable, Category = "Locomtion")
	float GetDirection() { return direction; }

	UFUNCTION(BlueprintCallable, Category = "Locomtion")
	bool GetFocus() { return focused; }
	
	UFUNCTION(BlueprintCallable, Category = "Locomtion")
	void SetFocusTrue() { focused = true; }

	UFUNCTION(BlueprintCallable, Category = "Locomtion")
	void SetFocusFalse() { focused = false; }

};
