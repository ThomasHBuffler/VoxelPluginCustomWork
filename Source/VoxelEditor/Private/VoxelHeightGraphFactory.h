// Copyright Voxel Plugin SAS, 2025. All Rights Reserved.

#pragma once

#include "VoxelEditorMinimal.h"
#include "VoxelGraphFactory.h"
#include "Graphs/VoxelHeightGraph.h"
#include "VoxelHeightGraphFactory.generated.h"

UCLASS()
class UVoxelHeightGraphFactory : public UVoxelGraphBaseFactory
{
	GENERATED_BODY()

public:
	UVoxelHeightGraphFactory()
	{
		SupportedClass = UVoxelHeightGraph::StaticClass();
	}
};