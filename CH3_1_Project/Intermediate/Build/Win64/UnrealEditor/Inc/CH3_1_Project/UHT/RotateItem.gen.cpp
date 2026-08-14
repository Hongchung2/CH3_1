// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_1_Project/Public/RotateItem.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotateItem() {}

// Begin Cross Module References
CH3_1_PROJECT_API UClass* Z_Construct_UClass_ARotateItem();
CH3_1_PROJECT_API UClass* Z_Construct_UClass_ARotateItem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_CH3_1_Project();
// End Cross Module References

// Begin Class ARotateItem
void ARotateItem::StaticRegisterNativesARotateItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotateItem);
UClass* Z_Construct_UClass_ARotateItem_NoRegister()
{
	return ARotateItem::StaticClass();
}
struct Z_Construct_UClass_ARotateItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotateItem.h" },
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "RotateItem|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "RotateItem|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "RotateItem|Properties" },
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetActiveTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/RotateItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static void NewProp_isActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isActive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotateTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SetActiveTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotateItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotateItem_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateItem, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotateItem_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateItem, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateItem_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateItem, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
void Z_Construct_UClass_ARotateItem_Statics::NewProp_isActive_SetBit(void* Obj)
{
	((ARotateItem*)Obj)->isActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARotateItem_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARotateItem), &Z_Construct_UClass_ARotateItem_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isActive_MetaData), NewProp_isActive_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotateItem_Statics::NewProp_RotateTimerHandle = { "RotateTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateItem, RotateTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateTimerHandle_MetaData), NewProp_RotateTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotateItem_Statics::NewProp_SetActiveTimerHandle = { "SetActiveTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotateItem, SetActiveTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetActiveTimerHandle_MetaData), NewProp_SetActiveTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotateItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateItem_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateItem_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateItem_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateItem_Statics::NewProp_isActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateItem_Statics::NewProp_RotateTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateItem_Statics::NewProp_SetActiveTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotateItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotateItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_1_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotateItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotateItem_Statics::ClassParams = {
	&ARotateItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotateItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotateItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotateItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotateItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotateItem()
{
	if (!Z_Registration_Info_UClass_ARotateItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotateItem.OuterSingleton, Z_Construct_UClass_ARotateItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotateItem.OuterSingleton;
}
template<> CH3_1_PROJECT_API UClass* StaticClass<ARotateItem>()
{
	return ARotateItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotateItem);
ARotateItem::~ARotateItem() {}
// End Class ARotateItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_RotateItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotateItem, ARotateItem::StaticClass, TEXT("ARotateItem"), &Z_Registration_Info_UClass_ARotateItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotateItem), 2174706989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_RotateItem_h_3305555311(TEXT("/Script/CH3_1_Project"),
	Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_RotateItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_RotateItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
