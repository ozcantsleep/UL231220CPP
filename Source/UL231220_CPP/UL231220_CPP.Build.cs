// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UL231220_CPP : ModuleRules
{
	public UL231220_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
