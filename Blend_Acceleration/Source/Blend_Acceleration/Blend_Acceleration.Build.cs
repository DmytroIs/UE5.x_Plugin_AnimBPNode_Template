// Some copyright should be here...

using UnrealBuildTool;

public class Blend_Acceleration : ModuleRules
{
	public Blend_Acceleration(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
            }
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
                "..\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\",
                "..\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\",
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",				
                "AnimationCore",
                "AnimGraphRuntime",
                "BlueprintGraph",
                "AnimGraph",
				// ... add other public dependencies that you statically link with here ...
			}
            );
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
                //"UnrealEd",
				"Engine",
				//"Slate",
				//"SlateCore",
                //"GraphEditor",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
