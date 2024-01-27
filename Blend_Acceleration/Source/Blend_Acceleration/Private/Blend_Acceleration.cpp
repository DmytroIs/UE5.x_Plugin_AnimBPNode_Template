// Copyright Epic Games, Inc. All Rights Reserved.

#include "Blend_Acceleration.h"
#include "AnimNodeBase.h"


#define LOCTEXT_NAMESPACE "FBlend_AccelerationModule"

void FBlend_AccelerationModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FBlend_AccelerationModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBlend_AccelerationModule, Blend_Acceleration)