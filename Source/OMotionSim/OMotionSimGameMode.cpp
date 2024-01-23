// Copyright Epic Games, Inc. All Rights Reserved.

#include "OMotionSimGameMode.h"
#include "OMotionSimPlayerController.h"

AOMotionSimGameMode::AOMotionSimGameMode()
{
	PlayerControllerClass = AOMotionSimPlayerController::StaticClass();
}
