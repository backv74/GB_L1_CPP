// Copyright Epic Games, Inc. All Rights Reserved.

#include "GB_L1_CPPGameMode.h"
#include "GB_L1_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGB_L1_CPPGameMode::AGB_L1_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
