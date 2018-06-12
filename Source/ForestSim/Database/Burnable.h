// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Database/Interactable.h"
#include "Burnable.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FORESTSIM_API ABurnable : public AInteractable
{
	GENERATED_BODY()
	
	//Data table storage for rapid-fire (lol) changes

	//Method for activating data table values as needed (wind included)

	//Wind updater (rotating particles, maybe some scale work as well)

	//Burn & spread method

	//Burn enum for expressed values
	
	//Internal burn enum for dynamic events

	//Adjusted tick method (for dynamic fire-catching)

	//Nerve reference for updating the interactable (needs to be implemented there as well

	//Sound located in field itself

	//Data table return value for updating object field
};
