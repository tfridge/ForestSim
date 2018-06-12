// Fill out your copyright notice in the Description page of Project Settings.

#include "Nerve_Int.h"
#include "ConstructorHelpers.h"
#include "Engine/StaticMesh.h"


// Sets default values for this component's properties
UNerve_Int::UNerve_Int()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	NerveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nerved Mesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("/Game/ForestFire/Models/Foliage/SM_Birch_Large_02"));
	NerveMesh->SetStaticMesh(mesh.Object);
	NerveMesh->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);
	NerveMesh->AddLocalOffset(FVector(0, 0, -10));
}


UStaticMeshComponent * UNerve_Int::GetMesh()
{
	return NerveMesh;
}

// Called when the game starts
void UNerve_Int::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UNerve_Int::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

