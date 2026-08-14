// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH3_1_PROJECT_MoveItem_generated_h
#error "MoveItem.generated.h already included, missing '#pragma once' in MoveItem.h"
#endif
#define CH3_1_PROJECT_MoveItem_generated_h

#define FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoveItem(); \
	friend struct Z_Construct_UClass_AMoveItem_Statics; \
public: \
	DECLARE_CLASS(AMoveItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_1_Project"), NO_API) \
	DECLARE_SERIALIZER(AMoveItem)


#define FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMoveItem(AMoveItem&&); \
	AMoveItem(const AMoveItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoveItem) \
	NO_API virtual ~AMoveItem();


#define FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_17_PROLOG
#define FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_1_PROJECT_API UClass* StaticClass<class AMoveItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h


#define FOREACH_ENUM_EMOVEAXIS(op) \
	op(EMoveAxis::x) \
	op(EMoveAxis::y) \
	op(EMoveAxis::z) 

enum class EMoveAxis : uint8;
template<> struct TIsUEnumClass<EMoveAxis> { enum { Value = true }; };
template<> CH3_1_PROJECT_API UEnum* StaticEnum<EMoveAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
