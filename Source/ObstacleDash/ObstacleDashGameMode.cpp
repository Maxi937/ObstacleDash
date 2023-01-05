// Copyright Epic Games, Inc. All Rights Reserved.

#include "ObstacleDashGameMode.h"
#include "ObstacleDashCharacter.h"
#include "UObject/ConstructorHelpers.h"

AObstacleDashGameMode::AObstacleDashGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/MyContent/Blueprints/PlayerCharacter/BP_PlayerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}