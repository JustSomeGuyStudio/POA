

using UnrealBuildTool;
using System.Collections.Generic;

public class Lyra_GMCTarget : TargetRules
{
	public Lyra_GMCTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Lyra_GMC" } );
	}
}
