// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MpPlatformerGameMode.h"
#include "MpPlatformerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMpPlatformerGameMode::AMpPlatformerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
