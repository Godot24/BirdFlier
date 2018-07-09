// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FlyingPrototypeGameMode.h"
#include "FlyingPrototypePawn.h"

AFlyingPrototypeGameMode::AFlyingPrototypeGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFlyingPrototypePawn::StaticClass();
}
