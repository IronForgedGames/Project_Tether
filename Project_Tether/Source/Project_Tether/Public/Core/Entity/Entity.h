/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#pragma once

#include "CoreMinimal.h"
#include "Identity.h"
#include "Components/ActorComponent.h"
#include "Entity.generated.h"

class UIdenitity;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_TETHER_API UEntity : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEntity();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void RegisterEntity();
	void DeRegisterEntity();

	UPROPERTY(EditAnywhere, Category = "Entity")
	UIdentity* identity;

	UPROPERTY(EditAnywhere, Category = "Entity")
	FGuid id;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Entity")
	UIdentity* GetIdentity() { return identity; }

	UFUNCTION(BlueprintCallable, Category = "Entity")
	UGroup* GetGroup() { return identity->group; }
	
	UFUNCTION(BlueprintCallable, Category = "Entity")
	FGuid GetId() { return id; }
};
