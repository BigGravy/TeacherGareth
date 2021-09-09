// Copyright Epic Games, Inc. All Rights Reserved.

#include "TeacherGarethGameMode.h"
#include "TeacherGarethCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeacherGarethGameMode::ATeacherGarethGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
