// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blend_Acceleration/Public/AnimGraphNode_BlendAccl.h"
#include "Blend_Acceleration/Public/AnimNode_BlendAccl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_BlendAccl() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	BLEND_ACCELERATION_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendAccl();
	BLEND_ACCELERATION_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendAccl_NoRegister();
	BLEND_ACCELERATION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendAccl();
	UPackage* Z_Construct_UPackage__Script_Blend_Acceleration();
// End Cross Module References
	void UAnimGraphNode_BlendAccl::StaticRegisterNativesUAnimGraphNode_BlendAccl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_BlendAccl);
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendAccl_NoRegister()
	{
		return UAnimGraphNode_BlendAccl::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Blend_Acceleration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_BlendAccl.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BlendAccl.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::NewProp_BlendNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BlendAccl.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::NewProp_BlendNode = { "BlendNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_BlendAccl, BlendNode), Z_Construct_UScriptStruct_FAnimNode_BlendAccl, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::NewProp_BlendNode_MetaData), Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::NewProp_BlendNode_MetaData) }; // 1561842470
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::NewProp_BlendNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_BlendAccl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::ClassParams = {
		&UAnimGraphNode_BlendAccl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendAccl()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_BlendAccl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_BlendAccl.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_BlendAccl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_BlendAccl.OuterSingleton;
	}
	template<> BLEND_ACCELERATION_API UClass* StaticClass<UAnimGraphNode_BlendAccl>()
	{
		return UAnimGraphNode_BlendAccl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_BlendAccl);
	UAnimGraphNode_BlendAccl::~UAnimGraphNode_BlendAccl() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_AnimGraphNode_BlendAccl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_AnimGraphNode_BlendAccl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_BlendAccl, UAnimGraphNode_BlendAccl::StaticClass, TEXT("UAnimGraphNode_BlendAccl"), &Z_Registration_Info_UClass_UAnimGraphNode_BlendAccl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_BlendAccl), 1762939581U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_AnimGraphNode_BlendAccl_h_674785065(TEXT("/Script/Blend_Acceleration"),
		Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_AnimGraphNode_BlendAccl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_AnimGraphNode_BlendAccl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
