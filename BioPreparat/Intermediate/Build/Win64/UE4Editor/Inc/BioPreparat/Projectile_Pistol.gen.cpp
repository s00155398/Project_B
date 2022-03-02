// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BioPreparat/Projectile_Pistol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile_Pistol() {}
// Cross Module References
	BIOPREPARAT_API UClass* Z_Construct_UClass_AProjectile_Pistol_NoRegister();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AProjectile_Pistol();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_BioPreparat();
// End Cross Module References
	void AProjectile_Pistol::StaticRegisterNativesAProjectile_Pistol()
	{
	}
	UClass* Z_Construct_UClass_AProjectile_Pistol_NoRegister()
	{
		return AProjectile_Pistol::StaticClass();
	}
	struct Z_Construct_UClass_AProjectile_Pistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectile_Pistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_BioPreparat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectile_Pistol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Projectile_Pistol.h" },
		{ "ModuleRelativePath", "Projectile_Pistol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectile_Pistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile_Pistol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectile_Pistol_Statics::ClassParams = {
		&AProjectile_Pistol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectile_Pistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Pistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectile_Pistol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectile_Pistol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectile_Pistol, 82816364);
	template<> BIOPREPARAT_API UClass* StaticClass<AProjectile_Pistol>()
	{
		return AProjectile_Pistol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile_Pistol(Z_Construct_UClass_AProjectile_Pistol, &AProjectile_Pistol::StaticClass, TEXT("/Script/BioPreparat"), TEXT("AProjectile_Pistol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile_Pistol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
