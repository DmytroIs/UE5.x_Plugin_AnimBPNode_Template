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
                "F:\\Games\\UE_5.3\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\",
                "F:\\Games\\UE_5.3\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\",
                //"F:\\Games\\UE_5.3\\Engine\\Source\\Editor\\AnimGraph\\Public\\",
                //"F:\\Games\\UE_5.3\\Engine\\Intermediate\\Build\\Win64\\UnrealEditor\\Inc\\AnimGraph\\UHT\\"
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
