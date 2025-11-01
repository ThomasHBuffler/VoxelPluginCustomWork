// Copyright Voxel Plugin SAS, 2025. All Rights Reserved.

using UnrealBuildTool;

public class VoxelBlueprintEditor : ModuleRules
{
	public VoxelBlueprintEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		SetupVoxelModule(this);

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"VoxelBlueprint",
			"Voxel",
			"VoxelEditor",
			"VoxelGraph",
			"VoxelGraphEditor",
			"GraphEditor",
			"BlueprintGraph",
		});
	}
}