// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blend_Acceleration/Public/Blend_AccelerationBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlend_AccelerationBPLibrary() {}
// Cross Module References
	BLEND_ACCELERATION_API UClass* Z_Construct_UClass_UBlend_AccelerationBPLibrary();
	BLEND_ACCELERATION_API UClass* Z_Construct_UClass_UBlend_AccelerationBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Blend_Acceleration();
// End Cross Module References
	DEFINE_FUNCTION(UBlend_AccelerationBPLibrary::execBlend_AccelerationSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UBlend_AccelerationBPLibrary::Blend_AccelerationSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UBlend_AccelerationBPLibrary::StaticRegisterNativesUBlend_AccelerationBPLibrary()
	{
		UClass* Class = UBlend_AccelerationBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Blend_AccelerationSampleFunction", &UBlend_AccelerationBPLibrary::execBlend_AccelerationSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics
	{
		struct Blend_AccelerationBPLibrary_eventBlend_AccelerationSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Blend_AccelerationBPLibrary_eventBlend_AccelerationSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Blend_AccelerationBPLibrary_eventBlend_AccelerationSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blend_Acceleration" },
		{ "DisplayName", "Dmytro_Test_Function" },
		{ "Keywords", "Blend_Acceleration testing" },
		{ "ModuleRelativePath", "Public/Blend_AccelerationBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlend_AccelerationBPLibrary, nullptr, "Blend_AccelerationSampleFunction", nullptr, nullptr, Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::Blend_AccelerationBPLibrary_eventBlend_AccelerationSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::Blend_AccelerationBPLibrary_eventBlend_AccelerationSampleFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlend_AccelerationBPLibrary);
	UClass* Z_Construct_UClass_UBlend_AccelerationBPLibrary_NoRegister()
	{
		return UBlend_AccelerationBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlend_AccelerationBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlend_AccelerationBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Blend_Acceleration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlend_AccelerationBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlend_AccelerationBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlend_AccelerationBPLibrary_Blend_AccelerationSampleFunction, "Blend_AccelerationSampleFunction" }, // 3226784307
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlend_AccelerationBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlend_AccelerationBPLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "Blend_AccelerationBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Blend_AccelerationBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlend_AccelerationBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlend_AccelerationBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlend_AccelerationBPLibrary_Statics::ClassParams = {
		&UBlend_AccelerationBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlend_AccelerationBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlend_AccelerationBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBlend_AccelerationBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlend_AccelerationBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlend_AccelerationBPLibrary.OuterSingleton, Z_Construct_UClass_UBlend_AccelerationBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlend_AccelerationBPLibrary.OuterSingleton;
	}
	template<> BLEND_ACCELERATION_API UClass* StaticClass<UBlend_AccelerationBPLibrary>()
	{
		return UBlend_AccelerationBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlend_AccelerationBPLibrary);
	UBlend_AccelerationBPLibrary::~UBlend_AccelerationBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_Blend_AccelerationBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_Blend_AccelerationBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlend_AccelerationBPLibrary, UBlend_AccelerationBPLibrary::StaticClass, TEXT("UBlend_AccelerationBPLibrary"), &Z_Registration_Info_UClass_UBlend_AccelerationBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlend_AccelerationBPLibrary), 3191444413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_Blend_AccelerationBPLibrary_h_3821928173(TEXT("/Script/Blend_Acceleration"),
		Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_Blend_AccelerationBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Blend_Acceleration_Source_Blend_Acceleration_Public_Blend_AccelerationBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
