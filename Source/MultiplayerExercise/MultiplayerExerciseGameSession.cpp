// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerExerciseGameSession.h"


// Sets default values
AMultiplayerExerciseGameSession::AMultiplayerExerciseGameSession()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMultiplayerExerciseGameSession::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMultiplayerExerciseGameSession::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

