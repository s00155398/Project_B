// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BioPreparat/Item_Candle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem_Candle() {}
// Cross Module References
	BIOPREPARAT_API UClass* Z_Construct_UClass_AItem_Candle_NoRegister();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AItem_Candle();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_BioPreparat();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AItem_Candle::execToggleFlame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleFlame();
		P_NATIVE_END;
	}
	void AItem_Candle::StaticRegisterNativesAItem_Candle()
	{
		UClass* Class = AItem_Candle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleFlame", &AItem_Candle::execToggleFlame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItem_Candle_ToggleFlame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_Candle_ToggleFlame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item_Candle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_Candle_ToggleFlame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_Candle, nullptr, "ToggleFlame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_Candle_ToggleFlame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_Candle_ToggleFlame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_Candle_ToggleFlame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_Candle_ToggleFlame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItem_Candle_NoRegister()
	{
		return AItem_Candle::StaticClass();
	}
	struct Z_Construct_UClass_AItem_Candle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCandleParticles_MetaData[];
#endif
		static void NewProp_bCandleParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCandleParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEquipSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnEquipSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CandleParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CandleParticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_Candle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_BioPreparat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItem_Candle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_Candle_ToggleFlame, "ToggleFlame" }, // 2965297544
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Candle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item_Candle.h" },
		{ "ModuleRelativePath", "Item_Candle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Candle_Statics::NewProp_bCandleParticles_MetaData[] = {
		{ "Category", "Item | Particles" },
		{ "ModuleRelativePath", "Item_Candle.h" },
	};
#endif
	void Z_Construct_UClass_AItem_Candle_Statics::NewProp_bCandleParticles_SetBit(void* Obj)
	{
		((AItem_Candle*)Obj)->bCandleParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_Candle_Statics::NewProp_bCandleParticles = { "bCandleParticles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItem_Candle), &Z_Construct_UClass_AItem_Candle_Statics::NewProp_bCandleParticles_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_Candle_Statics::NewProp_bCandleParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Candle_Statics::NewProp_bCandleParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Candle_Statics::NewProp_OnEquipSound_MetaData[] = {
		{ "Category", "Item | Sound" },
		{ "ModuleRelativePath", "Item_Candle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Candle_Statics::NewProp_OnEquipSound = { "OnEquipSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Candle, OnEquipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Candle_Statics::NewProp_OnEquipSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Candle_Statics::NewProp_OnEquipSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Candle_Statics::NewProp_CandleParticle_MetaData[] = {
		{ "Category", "Item | Particles" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item_Candle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Candle_Statics::NewProp_CandleParticle = { "CandleParticle", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Candle, CandleParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Candle_Statics::NewProp_CandleParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Candle_Statics::NewProp_CandleParticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Candle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Candle_Statics::NewProp_bCandleParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Candle_Statics::NewProp_OnEquipSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Candle_Statics::NewProp_CandleParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_Candle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem_Candle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItem_Candle_Statics::ClassParams = {
		&AItem_Candle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItem_Candle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Candle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_Candle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Candle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem_Candle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItem_Candle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItem_Candle, 3709502114);
	template<> BIOPREPARAT_API UClass* StaticClass<AItem_Candle>()
	{
		return AItem_Candle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItem_Candle(Z_Construct_UClass_AItem_Candle, &AItem_Candle::StaticClass, TEXT("/Script/BioPreparat"), TEXT("AItem_Candle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem_Candle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
