// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CockedPistolGameMode.h"
#include "CockedPistolPlayerController.h"
#include "CockedPistolCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACockedPistolGameMode::ACockedPistolGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACockedPistolPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}