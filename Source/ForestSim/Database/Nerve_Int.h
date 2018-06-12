// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Nerve_Int.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FORESTSIM_API UNerve_Int : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNerve_Int();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Testing, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* NerveMesh; //This will implement the burnable interactable in the future.

	UStaticMeshComponent* GetMesh();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
