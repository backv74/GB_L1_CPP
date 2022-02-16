// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GB_L1_CPP : ModuleRules
{
	public GB_L1_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
