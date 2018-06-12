// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldSpace.h"


// Sets default values for this component's properties
UWorldSpace::UWorldSpace()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldSpace::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWorldSpace::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

