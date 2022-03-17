// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoloProjectGameMode.h"
#include "SoloProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASoloProjectGameMode::ASoloProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
