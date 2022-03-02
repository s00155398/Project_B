// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BioPreparat/Protagonist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtagonist() {}
// Cross Module References
	BIOPREPARAT_API UEnum* Z_Construct_UEnum_BioPreparat_EEquipStatus();
	UPackage* Z_Construct_UPackage__Script_BioPreparat();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AProtagonist_NoRegister();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AProtagonist();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	BIOPREPARAT_API UClass* Z_Construct_UClass_AItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
	static UEnum* EEquipStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BioPreparat_EEquipStatus, Z_Construct_UPackage__Script_BioPreparat(), TEXT("EEquipStatus"));
		}
		return Singleton;
	}
	template<> BIOPREPARAT_API UEnum* StaticEnum<EEquipStatus>()
	{
		return EEquipStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEquipStatus(EEquipStatus_StaticEnum, TEXT("/Script/BioPreparat"), TEXT("EEquipStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BioPreparat_EEquipStatus_Hash() { return 4162676702U; }
	UEnum* Z_Construct_UEnum_BioPreparat_EEquipStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BioPreparat();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEquipStatus"), 0, Get_Z_Construct_UEnum_BioPreparat_EEquipStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEquipStatus::EQS_Empty", (int64)EEquipStatus::EQS_Empty },
				{ "EEquipStatus::EQS_Candle", (int64)EEquipStatus::EQS_Candle },
				{ "EEquipStatus::EQS_FlashLight", (int64)EEquipStatus::EQS_FlashLight },
				{ "EEquipStatus::EQS_Pistol", (int64)EEquipStatus::EQS_Pistol },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EQS_Candle.DisplayName", "Candle" },
				{ "EQS_Candle.Name", "EEquipStatus::EQS_Candle" },
				{ "EQS_Empty.DisplayName", "Empty" },
				{ "EQS_Empty.Name", "EEquipStatus::EQS_Empty" },
				{ "EQS_FlashLight.DisplayName", "FlashLight" },
				{ "EQS_FlashLight.Name", "EEquipStatus::EQS_FlashLight" },
				{ "EQS_Pistol.DisplayName", "Pistol" },
				{ "EQS_Pistol.Name", "EEquipStatus::EQS_Pistol" },
				{ "ModuleRelativePath", "Protagonist.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BioPreparat,
				nullptr,
				"EEquipStatus",
				"EEquipStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AProtagonist::execMeleeAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MeleeAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execPickUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execEquip)
	{
		P_GET_OBJECT(AItem,Z_Param_ItemToEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Equip(Z_Param_ItemToEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execReloadWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execFireWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execEquipPistol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipPistol();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execEquipFlashLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipFlashLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execEquipCandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipCandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execEndSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execBeginSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execLookUpAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUpAtRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execTurnAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnAtRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProtagonist::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_input);
		P_NATIVE_END;
	}
	static FName NAME_AProtagonist_AimWeapon = FName(TEXT("AimWeapon"));
	void AProtagonist::AimWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_AProtagonist_AimWeapon),NULL);
	}
	void AProtagonist::StaticRegisterNativesAProtagonist()
	{
		UClass* Class = AProtagonist::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSprint", &AProtagonist::execBeginSprint },
			{ "EndSprint", &AProtagonist::execEndSprint },
			{ "Equip", &AProtagonist::execEquip },
			{ "EquipCandle", &AProtagonist::execEquipCandle },
			{ "EquipFlashLight", &AProtagonist::execEquipFlashLight },
			{ "EquipPistol", &AProtagonist::execEquipPistol },
			{ "FireWeapon", &AProtagonist::execFireWeapon },
			{ "LookUpAtRate", &AProtagonist::execLookUpAtRate },
			{ "MeleeAttack", &AProtagonist::execMeleeAttack },
			{ "MoveForward", &AProtagonist::execMoveForward },
			{ "MoveRight", &AProtagonist::execMoveRight },
			{ "PickUp", &AProtagonist::execPickUp },
			{ "ReloadWeapon", &AProtagonist::execReloadWeapon },
			{ "TurnAtRate", &AProtagonist::execTurnAtRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProtagonist_AimWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_AimWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_AimWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "AimWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_AimWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_AimWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_AimWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_AimWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_BeginSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_BeginSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_BeginSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "BeginSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_BeginSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_BeginSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_BeginSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_BeginSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_EndSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_EndSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_EndSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "EndSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_EndSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_EndSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_EndSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_EndSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_Equip_Statics
	{
		struct Protagonist_eventEquip_Parms
		{
			AItem* ItemToEquip;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemToEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProtagonist_Equip_Statics::NewProp_ItemToEquip = { "ItemToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Protagonist_eventEquip_Parms, ItemToEquip), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProtagonist_Equip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProtagonist_Equip_Statics::NewProp_ItemToEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_Equip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "Equip", nullptr, nullptr, sizeof(Protagonist_eventEquip_Parms), Z_Construct_UFunction_AProtagonist_Equip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_Equip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_Equip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_Equip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_EquipCandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_EquipCandle_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Functions to handle equiping/unequipping items that the player has held\n" },
		{ "ModuleRelativePath", "Protagonist.h" },
		{ "ToolTip", "Functions to handle equiping/unequipping items that the player has held" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_EquipCandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "EquipCandle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_EquipCandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_EquipCandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_EquipCandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_EquipCandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_EquipFlashLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_EquipFlashLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_EquipFlashLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "EquipFlashLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_EquipFlashLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_EquipFlashLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_EquipFlashLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_EquipFlashLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_EquipPistol_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_EquipPistol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_EquipPistol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "EquipPistol", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_EquipPistol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_EquipPistol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_EquipPistol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_EquipPistol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_FireWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_FireWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_FireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "FireWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_FireWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_FireWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_FireWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_FireWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_LookUpAtRate_Statics
	{
		struct Protagonist_eventLookUpAtRate_Parms
		{
			float Rate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProtagonist_LookUpAtRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Protagonist_eventLookUpAtRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProtagonist_LookUpAtRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProtagonist_LookUpAtRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_LookUpAtRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_LookUpAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "LookUpAtRate", nullptr, nullptr, sizeof(Protagonist_eventLookUpAtRate_Parms), Z_Construct_UFunction_AProtagonist_LookUpAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_LookUpAtRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_LookUpAtRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_LookUpAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_LookUpAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_LookUpAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_MeleeAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_MeleeAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_MeleeAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "MeleeAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_MeleeAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_MeleeAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_MeleeAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_MeleeAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_MoveForward_Statics
	{
		struct Protagonist_eventMoveForward_Parms
		{
			float input;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProtagonist_MoveForward_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Protagonist_eventMoveForward_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProtagonist_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProtagonist_MoveForward_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "MoveForward", nullptr, nullptr, sizeof(Protagonist_eventMoveForward_Parms), Z_Construct_UFunction_AProtagonist_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_MoveRight_Statics
	{
		struct Protagonist_eventMoveRight_Parms
		{
			float input;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProtagonist_MoveRight_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Protagonist_eventMoveRight_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProtagonist_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProtagonist_MoveRight_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "MoveRight", nullptr, nullptr, sizeof(Protagonist_eventMoveRight_Parms), Z_Construct_UFunction_AProtagonist_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_PickUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_PickUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_PickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "PickUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_PickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_PickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_PickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_PickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_ReloadWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_ReloadWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_ReloadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "ReloadWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_ReloadWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_ReloadWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_ReloadWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_ReloadWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProtagonist_TurnAtRate_Statics
	{
		struct Protagonist_eventTurnAtRate_Parms
		{
			float Rate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProtagonist_TurnAtRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Protagonist_eventTurnAtRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProtagonist_TurnAtRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProtagonist_TurnAtRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProtagonist_TurnAtRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProtagonist_TurnAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProtagonist, nullptr, "TurnAtRate", nullptr, nullptr, sizeof(Protagonist_eventTurnAtRate_Parms), Z_Construct_UFunction_AProtagonist_TurnAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_TurnAtRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProtagonist_TurnAtRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProtagonist_TurnAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProtagonist_TurnAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProtagonist_TurnAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProtagonist_NoRegister()
	{
		return AProtagonist::StaticClass();
	}
	struct Z_Construct_UClass_AProtagonist_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentEquipment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentEquipment;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeldEquipment_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeldEquipment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickUpItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickUpItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEquippedItem_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentEquippedItem_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEquippedItem_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentEquippedItem_Left;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_Pistol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation_Pistol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimation_Pistol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimation_Pistol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshAnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshAnimInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReloading_MetaData[];
#endif
		static void NewProp_bReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[];
#endif
		static void NewProp_bAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMelee_MetaData[];
#endif
		static void NewProp_bMelee_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMelee;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProtagonist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BioPreparat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProtagonist_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProtagonist_AimWeapon, "AimWeapon" }, // 3364059323
		{ &Z_Construct_UFunction_AProtagonist_BeginSprint, "BeginSprint" }, // 161149906
		{ &Z_Construct_UFunction_AProtagonist_EndSprint, "EndSprint" }, // 2076270020
		{ &Z_Construct_UFunction_AProtagonist_Equip, "Equip" }, // 1779988175
		{ &Z_Construct_UFunction_AProtagonist_EquipCandle, "EquipCandle" }, // 4021479181
		{ &Z_Construct_UFunction_AProtagonist_EquipFlashLight, "EquipFlashLight" }, // 34383288
		{ &Z_Construct_UFunction_AProtagonist_EquipPistol, "EquipPistol" }, // 3069045890
		{ &Z_Construct_UFunction_AProtagonist_FireWeapon, "FireWeapon" }, // 2421389184
		{ &Z_Construct_UFunction_AProtagonist_LookUpAtRate, "LookUpAtRate" }, // 971797880
		{ &Z_Construct_UFunction_AProtagonist_MeleeAttack, "MeleeAttack" }, // 21440517
		{ &Z_Construct_UFunction_AProtagonist_MoveForward, "MoveForward" }, // 3932637973
		{ &Z_Construct_UFunction_AProtagonist_MoveRight, "MoveRight" }, // 1346371926
		{ &Z_Construct_UFunction_AProtagonist_PickUp, "PickUp" }, // 2088448264
		{ &Z_Construct_UFunction_AProtagonist_ReloadWeapon, "ReloadWeapon" }, // 2273444368
		{ &Z_Construct_UFunction_AProtagonist_TurnAtRate, "TurnAtRate" }, // 757692206
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Protagonist.h" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Character | Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Protagonist.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Character | Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Character | Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Character | Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Protagonist.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Character | Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Protagonist.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_BaseLookUpRate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquipment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquipment_MetaData[] = {
		{ "Category", "Character | Equipment" },
		{ "Comment", "// Enum to track what is currently equipped for the player\n" },
		{ "ModuleRelativePath", "Protagonist.h" },
		{ "ToolTip", "Enum to track what is currently equipped for the player" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquipment = { "CurrentEquipment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, CurrentEquipment), Z_Construct_UEnum_BioPreparat_EEquipStatus, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquipment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquipment_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_HeldEquipment_Inner = { "HeldEquipment", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_HeldEquipment_MetaData[] = {
		{ "Category", "Character | Equipment" },
		{ "Comment", "// An array to hold the items that the player has in their possession\n" },
		{ "ModuleRelativePath", "Protagonist.h" },
		{ "ToolTip", "An array to hold the items that the player has in their possession" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_HeldEquipment = { "HeldEquipment", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, HeldEquipment), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_HeldEquipment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_HeldEquipment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_PickUpItem_MetaData[] = {
		{ "Category", "Character | Equipment" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_PickUpItem = { "PickUpItem", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, PickUpItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_PickUpItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_PickUpItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquippedItem_Right_MetaData[] = {
		{ "Category", "Character | Equipment" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquippedItem_Right = { "CurrentEquippedItem_Right", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, CurrentEquippedItem_Right), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquippedItem_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquippedItem_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquippedItem_Left_MetaData[] = {
		{ "Category", "Character | Equipment" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquippedItem_Left = { "CurrentEquippedItem_Left", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, CurrentEquippedItem_Left), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquippedItem_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquippedItem_Left_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_FireAnimation_Pistol_MetaData[] = {
		{ "Category", "Character | Animation" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_FireAnimation_Pistol = { "FireAnimation_Pistol", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, FireAnimation_Pistol), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_FireAnimation_Pistol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_FireAnimation_Pistol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_ReloadAnimation_Pistol_MetaData[] = {
		{ "Category", "Character | Animation" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_ReloadAnimation_Pistol = { "ReloadAnimation_Pistol", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, ReloadAnimation_Pistol), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_ReloadAnimation_Pistol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_ReloadAnimation_Pistol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_MeshAnimInstance_MetaData[] = {
		{ "Category", "Character | Animation" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_MeshAnimInstance = { "MeshAnimInstance", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProtagonist, MeshAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_MeshAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_MeshAnimInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_bReloading_MetaData[] = {
		{ "Category", "Character | Weapon" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	void Z_Construct_UClass_AProtagonist_Statics::NewProp_bReloading_SetBit(void* Obj)
	{
		((AProtagonist*)Obj)->bReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_bReloading = { "bReloading", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProtagonist), &Z_Construct_UClass_AProtagonist_Statics::NewProp_bReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_bReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_bReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_bAiming_MetaData[] = {
		{ "Category", "Character | Weapon" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	void Z_Construct_UClass_AProtagonist_Statics::NewProp_bAiming_SetBit(void* Obj)
	{
		((AProtagonist*)Obj)->bAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProtagonist), &Z_Construct_UClass_AProtagonist_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_bAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_bAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProtagonist_Statics::NewProp_bMelee_MetaData[] = {
		{ "Category", "Character | Weapon" },
		{ "ModuleRelativePath", "Protagonist.h" },
	};
#endif
	void Z_Construct_UClass_AProtagonist_Statics::NewProp_bMelee_SetBit(void* Obj)
	{
		((AProtagonist*)Obj)->bMelee = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProtagonist_Statics::NewProp_bMelee = { "bMelee", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProtagonist), &Z_Construct_UClass_AProtagonist_Statics::NewProp_bMelee_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::NewProp_bMelee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::NewProp_bMelee_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProtagonist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquipment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_HeldEquipment_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_HeldEquipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_PickUpItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquippedItem_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_CurrentEquippedItem_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_FireAnimation_Pistol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_ReloadAnimation_Pistol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_MeshAnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_bReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_bAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProtagonist_Statics::NewProp_bMelee,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProtagonist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProtagonist>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProtagonist_Statics::ClassParams = {
		&AProtagonist::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProtagonist_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProtagonist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProtagonist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProtagonist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProtagonist_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProtagonist, 2633986662);
	template<> BIOPREPARAT_API UClass* StaticClass<AProtagonist>()
	{
		return AProtagonist::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProtagonist(Z_Construct_UClass_AProtagonist, &AProtagonist::StaticClass, TEXT("/Script/BioPreparat"), TEXT("AProtagonist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProtagonist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
