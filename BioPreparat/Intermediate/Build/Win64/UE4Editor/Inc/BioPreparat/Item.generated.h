// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AProtagonist;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BIOPREPARAT_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define BIOPREPARAT_Item_generated_h

#define BioPreparat_Source_BioPreparat_Item_h_17_SPARSE_DATA
#define BioPreparat_Source_BioPreparat_Item_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEquipOnPrompt); \
	DECLARE_FUNCTION(execAttachToLeft); \
	DECLARE_FUNCTION(execAttachToRight); \
	DECLARE_FUNCTION(execEquip); \
	DECLARE_FUNCTION(execSwap); \
	DECLARE_FUNCTION(execPlayEquipSound); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define BioPreparat_Source_BioPreparat_Item_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEquipOnPrompt); \
	DECLARE_FUNCTION(execAttachToLeft); \
	DECLARE_FUNCTION(execAttachToRight); \
	DECLARE_FUNCTION(execEquip); \
	DECLARE_FUNCTION(execSwap); \
	DECLARE_FUNCTION(execPlayEquipSound); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define BioPreparat_Source_BioPreparat_Item_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BioPreparat"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define BioPreparat_Source_BioPreparat_Item_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BioPreparat"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define BioPreparat_Source_BioPreparat_Item_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define BioPreparat_Source_BioPreparat_Item_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define BioPreparat_Source_BioPreparat_Item_h_17_PRIVATE_PROPERTY_OFFSET
#define BioPreparat_Source_BioPreparat_Item_h_14_PROLOG
#define BioPreparat_Source_BioPreparat_Item_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BioPreparat_Source_BioPreparat_Item_h_17_PRIVATE_PROPERTY_OFFSET \
	BioPreparat_Source_BioPreparat_Item_h_17_SPARSE_DATA \
	BioPreparat_Source_BioPreparat_Item_h_17_RPC_WRAPPERS \
	BioPreparat_Source_BioPreparat_Item_h_17_INCLASS \
	BioPreparat_Source_BioPreparat_Item_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BioPreparat_Source_BioPreparat_Item_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BioPreparat_Source_BioPreparat_Item_h_17_PRIVATE_PROPERTY_OFFSET \
	BioPreparat_Source_BioPreparat_Item_h_17_SPARSE_DATA \
	BioPreparat_Source_BioPreparat_Item_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BioPreparat_Source_BioPreparat_Item_h_17_INCLASS_NO_PURE_DECLS \
	BioPreparat_Source_BioPreparat_Item_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIOPREPARAT_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BioPreparat_Source_BioPreparat_Item_h


#define FOREACH_ENUM_EITEMSTATE(op) \
	op(EItemState::EIS_Pickup) \
	op(EItemState::EIS_Equipped) \
	op(EItemState::EIS_DefaultMax) 

enum class EItemState : uint8;
template<> BIOPREPARAT_API UEnum* StaticEnum<EItemState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
