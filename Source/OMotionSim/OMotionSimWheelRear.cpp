// Copyright Epic Games, Inc. All Rights Reserved.

#include "OMotionSimWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UOMotionSimWheelRear::UOMotionSimWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}