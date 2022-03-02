// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AItem;
#ifdef BIOPREPARAT_Protagonist_generated_h
#error "Protagonist.generated.h already included, missing '#pragma once' in Protagonist.h"
#endif
#define BIOPREPARAT_Protagonist_generated_h

#define BioPreparat_Source_BioPreparat_Protagonist_h_21_SPARSE_DATA
#define BioPreparat_Source_BioPreparat_Protagonist_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMeleeAttack); \
	DECLARE_FUNCTION(execPickUp); \
	DECLARE_FUNCTION(execEquip); \
	DECLARE_FUNCTION(execReloadWeapon); \
	DECLARE_FUNCTION(execFireWeapon); \
	DECLARE_FUNCTION(execEquipPistol); \
	DECLARE_FUNCTION(execEquipFlashLight); \
	DECLARE_FUNCTION(execEquipCandle); \
	DECLARE_FUNCTION(execEndSprint); \
	DECLARE_FUNCTION(execBeginSprint); \
	DECLARE_FUNCTION(execLookUpAtRate); \
	DECLARE_FUNCTION(execTurnAtRate); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define BioPreparat_Source_BioPreparat_Protagonist_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMeleeAttack); \
	DECLARE_FUNCTION(execPickUp); \
	DECLARE_FUNCTION(execEquip); \
	DECLARE_FUNCTION(execReloadWeapon); \
	DECLARE_FUNCTION(execFireWeapon); \
	DECLARE_FUNCTION(execEquipPistol); \
	DECLARE_FUNCTION(execEquipFlashLight); \
	DECLARE_FUNCTION(execEquipCandle); \
	DECLARE_FUNCTION(execEndSprint); \
	DECLARE_FUNCTION(execBeginSprint); \
	DECLARE_FUNCTION(execLookUpAtRate); \
	DECLARE_FUNCTION(execTurnAtRate); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define BioPreparat_Source_BioPreparat_Protagonist_h_21_EVENT_PARMS
#define BioPreparat_Source_BioPreparat_Protagonist_h_21_CALLBACK_WRAPPERS
#define BioPreparat_Source_BioPreparat_Protagonist_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProtagonist(); \
	friend struct Z_Construct_UClass_AProtagonist_Statics; \
public: \
	DECLARE_CLASS(AProtagonist, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BioPreparat"), NO_API) \
	DECLARE_SERIALIZER(AProtagonist)


#define BioPreparat_Source_BioPreparat_Protagonist_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAProtagonist(); \
	friend struct Z_Construct_UClass_AProtagonist_Statics; \
public: \
	DECLARE_CLASS(AProtagonist, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BioPreparat"), NO_API) \
	DECLARE_SERIALIZER(AProtagonist)


#define BioPreparat_Source_BioPreparat_Protagonist_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProtagonist(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProtagonist) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProtagonist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProtagonist); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProtagonist(AProtagonist&&); \
	NO_API AProtagonist(const AProtagonist&); \
public:


#define BioPreparat_Source_BioPreparat_Protagonist_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProtagonist(AProtagonist&&); \
	NO_API AProtagonist(const AProtagonist&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProtagonist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProtagonist); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProtagonist)


#define BioPreparat_Source_BioPreparat_Protagonist_h_21_PRIVATE_PROPERTY_OFFSET
#define BioPreparat_Source_BioPreparat_Protagonist_h_18_PROLOG \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_EVENT_PARMS


#define BioPreparat_Source_BioPreparat_Protagonist_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_PRIVATE_PROPERTY_OFFSET \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_SPARSE_DATA \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_RPC_WRAPPERS \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_CALLBACK_WRAPPERS \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_INCLASS \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BioPreparat_Source_BioPreparat_Protagonist_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_PRIVATE_PROPERTY_OFFSET \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_SPARSE_DATA \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_CALLBACK_WRAPPERS \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_INCLASS_NO_PURE_DECLS \
	BioPreparat_Source_BioPreparat_Protagonist_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIOPREPARAT_API UClass* StaticClass<class AProtagonist>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BioPreparat_Source_BioPreparat_Protagonist_h


#define FOREACH_ENUM_EEQUIPSTATUS(op) \
	op(EEquipStatus::EQS_Empty) \
	op(EEquipStatus::EQS_Candle) \
	op(EEquipStatus::EQS_FlashLight) \
	op(EEquipStatus::EQS_Pistol) 

enum class EEquipStatus : uint8;
template<> BIOPREPARAT_API UEnum* StaticEnum<EEquipStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
