// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MultiplayerExerciseTarget : TargetRules
{
	public MultiplayerExerciseTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		ExtraModuleNames.Add("MultiplayerExercise");
	}
}
