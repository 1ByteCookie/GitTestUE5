// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitTestUE5GameMode.h"
#include "GitTestUE5Character.h"
#include "UObject/ConstructorHelpers.h"

AGitTestUE5GameMode::AGitTestUE5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
