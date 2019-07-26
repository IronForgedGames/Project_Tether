// Fill out your copyright notice in the Description page of Project Settings.

#include "ToolComponent.h"
#include "Tool.h"

#include "TopDown_E_Character.h"


// Sets default values for this component's properties
UToolComponent::UToolComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UToolComponent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UToolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}