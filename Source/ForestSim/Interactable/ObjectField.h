// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Database/Interactable.h"
#include "ObjectField.generated.h"

/**
 * An interactable designed to rest underneath terrain and spawn in objects or interactables on the mesh resting above.
 * Capable of connecting directly into the game controller.
 */
UCLASS()
class FORESTSIM_API AObjectField : public AInteractable
{
	GENERATED_BODY()
	
	/** Number of internal spawn fields. */
	UPROPERTY(BlueprintReadWrite, Category = Setup, meta = (AllowPrivateAccess = "true"))
		int32 Sections;
	
	UPROPERTY(BlueprintReadWrite, Category = Setup, meta = (AllowPrivateAccess = "true"))
		int32 PointsPerSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setup, meta = (AllowPrivateAccess = "true"))
		class UDataTable* ObjectChoices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Output, meta = (AllowPrivateAccess = "true"))
		TArray<int32> ObjectsRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Output, meta = (AllowPrivateAccess = "true"))
		TArray<FVector> PointRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Testing, meta = (AllowPrivateAccess = "true"))
		UStaticMesh* TestMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Testing, meta = (AllowPrivateAccess = "true"))
		bool Testing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Testing, meta = (AllowPrivateAccess = "true"))
		FVector val;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Setup, meta = (AllowPrivateAccess = "true"))
		int32 RaycastLength;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, Category = Output, meta = (AllowPrivateAccess = "true"))
		TArray<class UNerve_Int*> NerveList;

	/**Method called to activate raycasts at a 90/270 degree from the object field's current nerves. 
	*Traces for a landscape mesh and spawns the nerve object at the given location
	*Called automatically upon construction and at will from an editor button.
	*/
	void AdjustNerves();
	void InitializeNerves();

	// AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAARRRRRRRRRRRRRGGGGGGGGGGGHHHHHHHHHHHHHHHH I'M SO SORRY UNIVERSE, BLAME EPIC :(

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve9;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve11;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve12;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve13;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve14;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve15;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve16;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve17;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve18;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve19;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve21;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve22;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve23;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Nerves, meta = (AllowPrivateAccess = "true"))
		class UNerve_Int* Nerve24;

public:
	virtual void Tick(float DeltaTime) override;

	AObjectField();
};