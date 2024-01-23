// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "OMotionSimPawn.h"
#include "OMotionSimSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class OMOTIONSIM_API AOMotionSimSportsCar : public AOMotionSimPawn
{
	GENERATED_BODY()
	
public:

	AOMotionSimSportsCar();
};
