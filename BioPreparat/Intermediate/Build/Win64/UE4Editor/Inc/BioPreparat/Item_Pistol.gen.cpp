// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BioPreparat/Item_Pistol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem_Pistol() {}
// Cross Module References
	BIOPREPARAT_API UClass* Z_Construct_UClass_AItem_Pistol_NoRegister();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AItem_Pistol();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_BioPreparat();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AItem_Pistol::execSpawnProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem_Pistol::execReloadPistol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadPistol();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem_Pistol::execFirePistol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FirePistol();
		P_NATIVE_END;
	}
	void AItem_Pistol::StaticRegisterNativesAItem_Pistol()
	{
		UClass* Class = AItem_Pistol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FirePistol", &AItem_Pistol::execFirePistol },
			{ "ReloadPistol", &AItem_Pistol::execReloadPistol },
			{ "SpawnProjectile", &AItem_Pistol::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItem_Pistol_FirePistol_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_Pistol_FirePistol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_Pistol_FirePistol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_Pistol, nullptr, "FirePistol", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_Pistol_FirePistol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_Pistol_FirePistol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_Pistol_FirePistol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_Pistol_FirePistol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_Pistol_ReloadPistol_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_Pistol_ReloadPistol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_Pistol_ReloadPistol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_Pistol, nullptr, "ReloadPistol", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_Pistol_ReloadPistol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_Pistol_ReloadPistol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_Pistol_ReloadPistol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_Pistol_ReloadPistol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_Pistol_SpawnProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_Pistol_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_Pistol_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem_Pistol, nullptr, "SpawnProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_Pistol_SpawnProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_Pistol_SpawnProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_Pistol_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_Pistol_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItem_Pistol_NoRegister()
	{
		return AItem_Pistol::StaticClass();
	}
	struct Z_Construct_UClass_AItem_Pistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PistolMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PistolMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PistolFireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PistolFireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PistolDryFireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PistolDryFireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pistol_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pistol_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pistol_FireToEmptyAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pistol_FireToEmptyAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PistolAnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PistolAnimInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReloading_MetaData[];
#endif
		static void NewProp_bReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_Pistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_BioPreparat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItem_Pistol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_Pistol_FirePistol, "FirePistol" }, // 2998766606
		{ &Z_Construct_UFunction_AItem_Pistol_ReloadPistol, "ReloadPistol" }, // 2847404468
		{ &Z_Construct_UFunction_AItem_Pistol_SpawnProjectile, "SpawnProjectile" }, // 592520458
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item_Pistol.h" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolMesh_MetaData[] = {
		{ "Category", "Item | Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolMesh = { "PistolMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Pistol, PistolMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Item | Particle" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Pistol_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Pistol, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_MuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolFireSound_MetaData[] = {
		{ "Category", "Item | Sound" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolFireSound = { "PistolFireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Pistol, PistolFireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolFireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolFireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolDryFireSound_MetaData[] = {
		{ "Category", "Item | Sound" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolDryFireSound = { "PistolDryFireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Pistol, PistolDryFireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolDryFireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolDryFireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Pistol_FireAnimation_MetaData[] = {
		{ "Category", "Item | Animation" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Pistol_FireAnimation = { "Pistol_FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Pistol, Pistol_FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Pistol_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Pistol_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Pistol_FireToEmptyAnimation_MetaData[] = {
		{ "Category", "Item | Animation" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Pistol_FireToEmptyAnimation = { "Pistol_FireToEmptyAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Pistol, Pistol_FireToEmptyAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Pistol_FireToEmptyAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Pistol_FireToEmptyAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolAnimInstance_MetaData[] = {
		{ "Category", "Item | Animation" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolAnimInstance = { "PistolAnimInstance", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Pistol, PistolAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolAnimInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::NewProp_bReloading_MetaData[] = {
		{ "Category", "Item | Weapon" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	void Z_Construct_UClass_AItem_Pistol_Statics::NewProp_bReloading_SetBit(void* Obj)
	{
		((AItem_Pistol*)Obj)->bReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_Pistol_Statics::NewProp_bReloading = { "bReloading", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItem_Pistol), &Z_Construct_UClass_AItem_Pistol_Statics::NewProp_bReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_bReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_bReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "Item | Weapon" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AItem_Pistol_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Pistol, MaxAmmo), METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "Item | Weapon" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AItem_Pistol_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Pistol, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "Item | Weapon" },
		{ "ModuleRelativePath", "Item_Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem_Pistol, Projectile), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Projectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Pistol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Pistol_Statics::NewProp_MuzzleFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolFireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolDryFireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Pistol_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Pistol_FireToEmptyAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Pistol_Statics::NewProp_PistolAnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Pistol_Statics::NewProp_bReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Pistol_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Pistol_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Pistol_Statics::NewProp_Projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_Pistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem_Pistol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItem_Pistol_Statics::ClassParams = {
		&AItem_Pistol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItem_Pistol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_Pistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Pistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem_Pistol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItem_Pistol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItem_Pistol, 1627763339);
	template<> BIOPREPARAT_API UClass* StaticClass<AItem_Pistol>()
	{
		return AItem_Pistol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItem_Pistol(Z_Construct_UClass_AItem_Pistol, &AItem_Pistol::StaticClass, TEXT("/Script/BioPreparat"), TEXT("AItem_Pistol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem_Pistol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
