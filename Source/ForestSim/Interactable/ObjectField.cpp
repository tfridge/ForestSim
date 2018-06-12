// Fill out your copyright notice in the Description page of Project Settings.

#include "ObjectField.h"
#include "Engine/DataTable.h"
#include "Engine/World.h"
#include "Engine/StaticMeshActor.h"
#include "Database/Nerve_Int.h"
#include "DrawDebugHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Landscape.h"
#include "Engine/World.h"
#include "LandscapeComponent.h"

void AObjectField::BeginPlay()
{
	Super::BeginPlay();

	AdjustNerves();
}

void AObjectField::AdjustNerves()
{
	Testing = false;
	for (int32 index = 0; index < NerveList.Num(); index++) {
		{
			NerveList[index]->GetMesh()->Deactivate();
			//Hit contains information about what the raycast hit.
			FHitResult Hit;

			//The length of the ray in units.
			//For more flexibility you can expose a public variable in the editor

			//The Origin of the raycast
			FVector CurPos = NerveList[index]->GetComponentLocation();

			FVector StartLocation = CurPos;

			//The EndLocation of the raycast
			FVector EndLocation = StartLocation + (FVector(0,0, -RaycastLength));

			//Collision parameters. The following syntax means that we don't want the trace to be complex

			ECollisionChannel collision = ECollisionChannel::ECC_WorldStatic;

			GetWorld()->LineTraceSingleByChannel(Hit, StartLocation, EndLocation, collision);

			if (Hit.bBlockingHit) {
				//DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green, true, -1, 0, 5.f);
				EndLocation = Hit.ImpactPoint;
				FRotator newAngle = FRotator(FMath::Min(Hit.ImpactNormal.X, 20.f),0, FMath::Min(Hit.ImpactNormal.Z, 20.f));
				NerveList[index]->SetWorldLocation(EndLocation);
				NerveList[index]->AddRelativeRotation(newAngle);
				val = EndLocation;
				Testing = true;
			}
			NerveList[index]->GetMesh()->Activate();
		}
	}
}

void AObjectField::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AObjectField::AObjectField() 
{
	PrimaryActorTick.bCanEverTick = false;
	RaycastLength = 4000;
	Sections = 5;
	PointsPerSection = 5;
	unsigned choices;
	if (ObjectChoices != nullptr) {choices = ObjectChoices->GetRowNames().Num();}
	else {choices = 4;}
	for (int32 i = 0; i < Sections*PointsPerSection; i++)
	{
		ObjectsRef.Add(FMath::RandRange(0, choices));
	}
	int32 count = 0;
	FString carry;
	for (int32 j = 0; j < Sections; j++)
	{
		for (int32 k = 0; k < PointsPerSection; k++)
		{
			FVector location; 
			location.Set(j*500, k*500, 0);
			PointRef.Add(location);
		}
	}
	InitializeNerves();
}

//Don't look at this if you value your sanity.
void AObjectField::InitializeNerves()
{
	int count = 0;
	FAttachmentTransformRules rule = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

	Nerve0 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve0->SetupAttachment(RootComponent);
	NerveList.Add(Nerve0);
	Nerve1 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve1->SetupAttachment(RootComponent);
	NerveList.Add(Nerve1);
	Nerve2 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve2->SetupAttachment(RootComponent);
	NerveList.Add(Nerve2);
	Nerve3 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve3->SetupAttachment(RootComponent);
	NerveList.Add(Nerve3);
	Nerve4 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve4->SetupAttachment(RootComponent);
	NerveList.Add(Nerve4);
	Nerve5 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve5->SetupAttachment(RootComponent);
	NerveList.Add(Nerve5);
	Nerve6 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve6->SetupAttachment(RootComponent);
	NerveList.Add(Nerve6);
	Nerve7 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve7->SetupAttachment(RootComponent);
	NerveList.Add(Nerve7);
	Nerve8 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve8->SetupAttachment(RootComponent);
	NerveList.Add(Nerve8);
	Nerve9 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve9->SetupAttachment(RootComponent);
	NerveList.Add(Nerve9);
	Nerve10 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve10->SetupAttachment(RootComponent);
	NerveList.Add(Nerve10);
	Nerve11 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve11->SetupAttachment(RootComponent);
	NerveList.Add(Nerve11);
	Nerve12 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve12->SetupAttachment(RootComponent);
	NerveList.Add(Nerve12);
	Nerve13 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve13->SetupAttachment(RootComponent);
	NerveList.Add(Nerve13);
	Nerve14 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve14->SetupAttachment(RootComponent);
	NerveList.Add(Nerve14);
	Nerve15 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve15->SetupAttachment(RootComponent);
	NerveList.Add(Nerve15);
	Nerve16 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve16->SetupAttachment(RootComponent);
	NerveList.Add(Nerve16);
	Nerve17 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve17->SetupAttachment(RootComponent);
	NerveList.Add(Nerve17);
	Nerve18 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve18->SetupAttachment(RootComponent);
	NerveList.Add(Nerve18);
	Nerve19 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve19->SetupAttachment(RootComponent);
	NerveList.Add(Nerve19);
	Nerve20 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve20->SetupAttachment(RootComponent);
	NerveList.Add(Nerve20);
	Nerve21 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve21->SetupAttachment(RootComponent);
	NerveList.Add(Nerve21);
	Nerve22 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve22->SetupAttachment(RootComponent);
	NerveList.Add(Nerve22);
	Nerve23 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve23->SetupAttachment(RootComponent);
	NerveList.Add(Nerve23);
	Nerve24 = CreateDefaultSubobject<UNerve_Int>(FName(*(FString::FromInt(++count))));
	Nerve24->SetupAttachment(RootComponent);
	NerveList.Add(Nerve24);

	//Just a check to prevent probs, yo
	if (PointRef.Num() == NerveList.Num()) {
		for (int32 i = 0; i < NerveList.Num(); i++)
		{
			float roll = FMath::FRandRange(-180.f, 180.f);
			NerveList[i]->SetRelativeLocation(PointRef[i]);
			NerveList[i]->SetRelativeRotation(FRotator(0,roll,0));
		}
	}
}