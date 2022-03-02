// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BIOPREPARAT_Item_Pistol_generated_h
#error "Item_Pistol.generated.h already included, missing '#pragma once' in Item_Pistol.h"
#endif
#define BIOPREPARAT_Item_Pistol_generated_h

#define BioPreparat_Source_BioPreparat_Item_Pistol_h_12_SPARSE_DATA
#define BioPreparat_Source_BioPreparat_Item_Pistol_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnProjectile); \
	DECLARE_FUNCTION(execReloadPistol); \
	DECLARE_FUNCTION(execFirePistol);


#define BioPreparat_Source_BioPreparat_Item_Pistol_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnProjectile); \
	DECLARE_FUNCTION(execReloadPistol); \
	DECLARE_FUNCTION(execFirePistol);


#define BioPreparat_Source_BioPreparat_Item_Pistol_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem_Pistol(); \
	friend struct Z_Construct_UClass_AItem_Pistol_Statics; \
public: \
	DECLARE_CLASS(AItem_Pistol, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BioPreparat"), NO_API) \
	DECLARE_SERIALIZER(AItem_Pistol)


#define BioPreparat_Source_BioPreparat_Item_Pistol_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAItem_Pistol(); \
	friend struct Z_Construct_UClass_AItem_Pistol_Statics; \
public: \
	DECLARE_CLASS(AItem_Pistol, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BioPreparat"), NO_API) \
	DECLARE_SERIALIZER(AItem_Pistol)


#define BioPreparat_Source_BioPreparat_Item_Pistol_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem_Pistol(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem_Pistol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem_Pistol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem_Pistol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem_Pistol(AItem_Pistol&&); \
	NO_API AItem_Pistol(const AItem_Pistol&); \
public:


#define BioPreparat_Source_BioPreparat_Item_Pistol_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem_Pistol(AItem_Pistol&&); \
	NO_API AItem_Pistol(const AItem_Pistol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem_Pistol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem_Pistol); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem_Pistol)


#define BioPreparat_Source_BioPreparat_Item_Pistol_h_12_PRIVATE_PROPERTY_OFFSET
#define BioPreparat_Source_BioPreparat_Item_Pistol_h_9_PROLOG
#define BioPreparat_Source_BioPreparat_Item_Pistol_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BioPreparat_Source_BioPreparat_Item_Pistol_h_12_PRIVATE_PROPERTY_OFFSET \
	BioPreparat_Source_BioPreparat_Item_Pistol_h_12_SPARSE_DATA \
	BioPreparat_Source_BioPreparat_Item_Pistol_h_12_RPC_WRAPPERS \
	BioPreparat_Source_BioPreparat_Item_Pistol_h_12_INCLASS \
	BioPreparat_Source_BioPreparat_Item_Pistol_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BioPreparat_Source_BioPreparat_Item_Pistol_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BioPreparat_Source_BioPreparat_Item_Pistol_h_12_PRIVATE_PROPERTY_OFFSET \
	BioPreparat_Source_BioPreparat_Item_Pistol_h_12_SPARSE_DATA \
	BioPreparat_Source_BioPreparat_Item_Pistol_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BioPreparat_Source_BioPreparat_Item_Pistol_h_12_INCLASS_NO_PURE_DECLS \
	BioPreparat_Source_BioPreparat_Item_Pistol_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIOPREPARAT_API UClass* StaticClass<class AItem_Pistol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BioPreparat_Source_BioPreparat_Item_Pistol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
