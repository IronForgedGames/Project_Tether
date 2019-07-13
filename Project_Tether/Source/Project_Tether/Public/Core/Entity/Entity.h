/**
Author: Aaron Hines
Studio: Iron Forged Games
*/

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Entity.generated.h"

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
	TSubclassOf<UIdentity> identity;

	UPROPERTY(EditAnywhere, Category = "Entity")
	FGuid id;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Entity")
	TSubclassOf<UIdentity> GetIdentity() { return identity; }

	UFUNCTION(BlueprintCallable, Category = "Entity")
	TSubclassOf<UGroup> GetGroup();
	
	UFUNCTION(BlueprintCallable, Category = "Entity")
	FGuid GetId() { return id; }
};
