// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ColorInteractionDataAsset.generated.h"

/**
 * Class that represents a color used for interaction
 */
UCLASS()
class MULTIPLAYEREXERCISE_API UColorInteractionDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor Color;
};
