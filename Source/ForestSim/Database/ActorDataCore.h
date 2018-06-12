// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorDataCore.generated.h"

UCLASS()
/*
*Class responsible for connecting database-enabled components to each other in a Blueprint environment.
*Base object responsible for gathering relevant interactables in a scene and generating data from them.
*/
class FORESTSIM_API AActorDataCore : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Database_Generation, meta = (AllowPrivateAccess = "true"))
		/**An array of interactables capable of representing this data core.*/
		TArray<TSubclassOf<class AInteractable>> Interactables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Database_Generation, meta = (AllowPrivateAccess = "true"))
		/**An array of protocols this data core can be exposed to.*/
		TArray<TSubclassOf<class UProtocol>> Protocols;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Database_Generation, meta = (AllowPrivateAccess = "true"))
		/**An array of nerves attatched to the interactables for accessing protocols.*/
		TArray<TSubclassOf<class UNerve>> Nerves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Database_Generation, meta = (AllowPrivateAccess = "true"))
		/**An array of world spaces this data core relates to.*/
		TArray<TSubclassOf<class UWorldSpace>> TargetWorldSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Database_Generation, meta = (AllowPrivateAccess = "true"))
		/**An array of character data bases this data core relates to.*/
		TArray<TSubclassOf<class UCharacterData>> TargetCharacter;
	
public:	
	// Sets default values for this actor's properties
	AActorDataCore();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
