// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ColorInteractionSetDataAsset.generated.h"

class UColorInteractionDataAsset;
/**
 * Class that represents a set of colors used for interaction
 */
UCLASS()
class MULTIPLAYEREXERCISE_API UColorInteractionSetDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSet<UColorInteractionDataAsset*> ColorInteractions;
};
