// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TeacherGareth : ModuleRules
{
	public TeacherGareth(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
