// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BioPreparat/Item_FlashLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem_FlashLight() {}
// Cross Module References
	BIOPREPARAT_API UClass* Z_Construct_UClass_AItem_FlashLight_NoRegister();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AItem_FlashLight();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_BioPreparat();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AItem_FlashLight::execToggleLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLight();
		P_NATIVE_END;
	}
	void AItem_FlashLight::StaticRegisterNativesAItem_FlashLight()
	{
		UClass* Class = AItem_FlashLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleLight", &AItem_FlashLight::execToggleLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItem_FlashLight_ToggleLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_FlashLight_ToggleLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item_FlashLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_FlashLight_ToggleLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_FlashLight, nullptr, "ToggleLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_FlashLight_ToggleLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_FlashLight_ToggleLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_FlashLight_ToggleLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_FlashLight_ToggleLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItem_FlashLight_NoRegister()
	{
		return AItem_FlashLight::StaticClass();
	}
	struct Z_Construct_UClass_AItem_FlashLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEquipSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnEquipSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlashLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_FlashLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_BioPreparat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItem_FlashLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_FlashLight_ToggleLight, "ToggleLight" }, // 1056828775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_FlashLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item_FlashLight.h" },
		{ "ModuleRelativePath", "Item_FlashLight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_FlashLight_Statics::NewProp_OnEquipSound_MetaData[] = {
		{ "Category", "Item | Sound" },
		{ "ModuleRelativePath", "Item_FlashLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_FlashLight_Statics::NewProp_OnEquipSound = { "OnEquipSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_FlashLight, OnEquipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_FlashLight_Statics::NewProp_OnEquipSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_FlashLight_Statics::NewProp_OnEquipSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_FlashLight_Statics::NewProp_FlashLight_MetaData[] = {
		{ "Category", "Item | Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item_FlashLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_FlashLight_Statics::NewProp_FlashLight = { "FlashLight", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_FlashLight, FlashLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_FlashLight_Statics::NewProp_FlashLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_FlashLight_Statics::NewProp_FlashLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_FlashLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_FlashLight_Statics::NewProp_OnEquipSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_FlashLight_Statics::NewProp_FlashLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_FlashLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem_FlashLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItem_FlashLight_Statics::ClassParams = {
		&AItem_FlashLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItem_FlashLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItem_FlashLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_FlashLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_FlashLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem_FlashLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItem_FlashLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItem_FlashLight, 1524383067);
	template<> BIOPREPARAT_API UClass* StaticClass<AItem_FlashLight>()
	{
		return AItem_FlashLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItem_FlashLight(Z_Construct_UClass_AItem_FlashLight, &AItem_FlashLight::StaticClass, TEXT("/Script/BioPreparat"), TEXT("AItem_FlashLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem_FlashLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
