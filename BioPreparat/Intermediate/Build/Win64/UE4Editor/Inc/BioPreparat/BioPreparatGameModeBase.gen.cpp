// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BioPreparat/BioPreparatGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBioPreparatGameModeBase() {}
// Cross Module References
	BIOPREPARAT_API UClass* Z_Construct_UClass_ABioPreparatGameModeBase_NoRegister();
	BIOPREPARAT_API UClass* Z_Construct_UClass_ABioPreparatGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BioPreparat();
// End Cross Module References
	void ABioPreparatGameModeBase::StaticRegisterNativesABioPreparatGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABioPreparatGameModeBase_NoRegister()
	{
		return ABioPreparatGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABioPreparatGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABioPreparatGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BioPreparat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABioPreparatGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BioPreparatGameModeBase.h" },
		{ "ModuleRelativePath", "BioPreparatGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABioPreparatGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABioPreparatGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABioPreparatGameModeBase_Statics::ClassParams = {
		&ABioPreparatGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABioPreparatGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABioPreparatGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABioPreparatGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABioPreparatGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABioPreparatGameModeBase, 2710489014);
	template<> BIOPREPARAT_API UClass* StaticClass<ABioPreparatGameModeBase>()
	{
		return ABioPreparatGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABioPreparatGameModeBase(Z_Construct_UClass_ABioPreparatGameModeBase, &ABioPreparatGameModeBase::StaticClass, TEXT("/Script/BioPreparat"), TEXT("ABioPreparatGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABioPreparatGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
