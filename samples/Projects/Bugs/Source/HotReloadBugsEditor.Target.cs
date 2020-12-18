// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class HotReloadBugsEditorTarget : TargetRules
{
	public HotReloadBugsEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		bUseUnityBuild = false;
		bUsePCHFiles = true;
		ExtraModuleNames.AddRange( new string[] { "HotReloadBugs" } );
	}
}
