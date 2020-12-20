// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HotReloadBugs : ModuleRules
{
	public HotReloadBugs(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivatePCHHeaderFile = "HotReloadBugs.h";

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
		PrivateDependencyModuleNames.AddRange(new string[] { "BlueprintsFunctions" });
		PrivateIncludePathModuleNames.AddRange(new string[] { "BlueprintsFunctions" });
	}
}
