// Copyright Epic Games, Inc. All Rights Reserved.

#include "OMotionSimWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UOMotionSimWheelFront::UOMotionSimWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}