// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MyProject : ModuleRules
{
	public MyProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] 	{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"AnimationCore", 
			"InputCore", 
		});

		PrivateDependencyModuleNames.AddRange(new string[] {
            "TraceLog",
          //  "AnimNode/Private",
        });


        SetupModulePhysicsSupport(Target);

        // External users of this library do not need to know about Eigen.
        AddEngineThirdPartyPrivateStaticDependencies(Target,
                "Eigen"
                );

        PublicDependencyModuleNames.AddRange(
            new string[] {
                "GeometryCollectionEngine",
            }
        );

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
