// Copyright Epic Games, Inc. All Rights Reserved.

#include "UL231220_CPPGameMode.h"
#include "UL231220_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUL231220_CPPGameMode::AUL231220_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
