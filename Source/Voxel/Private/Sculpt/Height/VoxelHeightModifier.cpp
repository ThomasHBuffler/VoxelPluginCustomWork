// Copyright Voxel Plugin SAS, 2025. All Rights Reserved.

#include "Sculpt/Height/VoxelHeightModifier.h"

void FVoxelHeightModifier::Initialize_GameThread()
{
	VOXEL_FUNCTION_COUNTER();
	check(IsInGameThread());

	ensure(!bInitialized);
	bInitialized = true;
}