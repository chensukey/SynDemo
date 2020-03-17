
namespace UnrealBuildTool.Rules
{
	public class OctagonVoiceChat : ModuleRules
	{
		public OctagonVoiceChat(ReadOnlyTargetRules Target) : base (Target)
		{
			PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs；
			
			PublicIncludePaths.AddRange(new string[]
			{
				"OctagonVoiceChat/Public"
			});

			PrivateIncludePaths.AddRange(new string[]
			{
				"OctagonVoiceChat/Private"
			});

			PublicDependencyModuleNames.AddRange(new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Voice"
			});

			PrivateDependencyModuleNames.AddRange(new string[] {
			});
		}
	}
}