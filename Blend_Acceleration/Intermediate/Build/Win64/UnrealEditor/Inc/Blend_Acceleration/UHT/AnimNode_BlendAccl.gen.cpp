// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blend_Acceleration/Public/AnimNode_BlendAccl.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendAccl() {}
// Cross Module References
	BLEND_ACCELERATION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendAccl();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_Blend_Acceleration();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_BlendAccl>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_BlendAccl cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendAccl;
class UScriptStruct* FAnimNode_BlendAccl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendAccl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendAccl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendAccl, (UObject*)Z_Construct_UPackage__Script_Blend_Acceleration(), TEXT("AnimNode_BlendAccl"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendAccl.OuterSingleton;
}
template<> BLEND_ACCELERATION_API UScriptStruct* StaticStruct<FAnimNode_BlendAccl>()
{
	return FAnimNode_BlendAccl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_BlendAccl.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendAccl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base Pose */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_BlendAccl.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Pose" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendAccl, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_BasePose_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_BasePose_MetaData) }; // 1465313103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_ExtraPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_BlendAccl.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_ExtraPose = { "ExtraPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendAccl, ExtraPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_ExtraPose_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_ExtraPose_MetaData) }; // 3609499842
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_BlendDuration_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNode_BlendAccl.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_BlendDuration = { "BlendDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendAccl, BlendDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_BlendDuration_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_BlendDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_BasePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_ExtraPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewProp_BlendDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Blend_Acceleration,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_BlendAccl",
		Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::PropPointers),
		sizeof(FAnimNode_BlendAccl),
		alignof(FAnimNode_BlendAccl),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendAccl()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendAccl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendAccl.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendAccl.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_AnimNode_BlendAccl_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_AnimNode_BlendAccl_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_BlendAccl::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendAccl_Statics::NewStructOps, TEXT("AnimNode_BlendAccl"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendAccl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendAccl), 1561842470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_AnimNode_BlendAccl_h_930146484(TEXT("/Script/Blend_Acceleration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_AnimNode_BlendAccl_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_AnimNode_BlendAccl_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
