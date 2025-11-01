// Copyright Voxel Plugin SAS, 2025. All Rights Reserved.

#include "VoxelMinimal.h"

FPrimaryAssetId UVoxelAsset::GetPrimaryAssetId() const
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		return FPrimaryAssetId();
	}

	return FPrimaryAssetId(GetClass()->GetFName(), GetFName());
}