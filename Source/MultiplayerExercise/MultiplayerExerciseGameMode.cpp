// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerExerciseGameMode.h"
#include "MultiplayerExerciseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerExerciseGameMode::AMultiplayerExerciseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
