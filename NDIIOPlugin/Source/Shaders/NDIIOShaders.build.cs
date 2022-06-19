/*
	All rights reserved. Copyright(c) 2018-2021, NewTek Inc.

	This file and it's use within a Product is bound by the terms of NDI SDK license that was provided 
	as part of the NDI SDK. For more information, please review the license and the NDI SDK documentation.
*/

using System;
using System.IO;

using UnrealBuildTool;

public class NDIIOShaders : ModuleRules
{
	public NDIIOShaders(ReadOnlyTargetRules Target) : base(Target)
	{
		bEnforceIWYU = true;
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Engine",
			"Core",
			"CoreUObject",
			"Projects",
			"InputCore",
			//"ShaderCore"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {
			"Renderer",
			"RenderCore",
			"RHI"
		});
	}
}
