// Copyright Voxel Plugin SAS, 2025. All Rights Reserved.

#pragma once

#include "VoxelEditorMinimal.h"

class FVoxelGraphSelectionCustomization_FunctionOutput : public FVoxelDetailCustomization
{
public:
	const FGuid Guid;

	explicit FVoxelGraphSelectionCustomization_FunctionOutput(const FGuid& Guid)
		: Guid(Guid)
	{
	}

	//~ Begin IDetailCustomization Interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
	//~ End IDetailCustomization Interface
};