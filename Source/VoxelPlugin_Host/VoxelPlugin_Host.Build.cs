// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VoxelPlugin_Host : ModuleRules
{
	public VoxelPlugin_Host(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"VoxelPlugin_Host",
			"VoxelPlugin_Host/Variant_Horror",
			"VoxelPlugin_Host/Variant_Horror/UI",
			"VoxelPlugin_Host/Variant_Shooter",
			"VoxelPlugin_Host/Variant_Shooter/AI",
			"VoxelPlugin_Host/Variant_Shooter/UI",
			"VoxelPlugin_Host/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
