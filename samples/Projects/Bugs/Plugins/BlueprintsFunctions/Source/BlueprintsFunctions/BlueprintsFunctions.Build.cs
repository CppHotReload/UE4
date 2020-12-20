//
//  Copyright (c) since 2014 - 2020 C++ Hot Reload SL. All rights reserved
//

using System.IO;
using System.Collections.Generic;
using UnrealBuildTool;

public class BlueprintsFunctions : ModuleRules
{
	public BlueprintsFunctions(ReadOnlyTargetRules Target) : base(Target)
    {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivatePCHHeaderFile = "Private/BlueprintsFunctions/BlueprintsFunctionsPCH.h";
		//
		// Dependencies
		//
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"EditorStyle",
			"Projects",
			"UnrealEd",
			"DesktopPlatform",
			"Json",
			"JsonUtilities"
		});
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"InputCore",
			"Engine",
			"Slate",
			"SlateCore",
		});
		//
		// Include paths of the plugin
		//
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));
	}
}
