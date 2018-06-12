// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorDataCore.h"
#include "Interactable.h"
#include "Nerve.h"
#include "Protocol.h"
#include "CharacterData.h"
#include "WorldSpace.h"


// Sets default values
AActorDataCore::AActorDataCore()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorDataCore::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorDataCore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

