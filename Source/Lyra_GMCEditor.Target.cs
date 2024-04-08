

using UnrealBuildTool;
using System.Collections.Generic;

public class Lyra_GMCEditorTarget : TargetRules
{
	public Lyra_GMCEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Lyra_GMC" } );
	}
}
