// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_1_Project/Public/MoveItem.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveItem() {}

// Begin Cross Module References
CH3_1_PROJECT_API UClass* Z_Construct_UClass_AMoveItem();
CH3_1_PROJECT_API UClass* Z_Construct_UClass_AMoveItem_NoRegister();
CH3_1_PROJECT_API UEnum* Z_Construct_UEnum_CH3_1_Project_EMoveAxis();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_CH3_1_Project();
// End Cross Module References

// Begin Enum EMoveAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoveAxis;
static UEnum* EMoveAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoveAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoveAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CH3_1_Project_EMoveAxis, (UObject*)Z_Construct_UPackage__Script_CH3_1_Project(), TEXT("EMoveAxis"));
	}
	return Z_Registration_Info_UEnum_EMoveAxis.OuterSingleton;
}
template<> CH3_1_PROJECT_API UEnum* StaticEnum<EMoveAxis>()
{
	return EMoveAxis_StaticEnum();
}
struct Z_Construct_UEnum_CH3_1_Project_EMoveAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveItem.h" },
		{ "x.Name", "EMoveAxis::x" },
		{ "y.Name", "EMoveAxis::y" },
		{ "z.Name", "EMoveAxis::z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoveAxis::x", (int64)EMoveAxis::x },
		{ "EMoveAxis::y", (int64)EMoveAxis::y },
		{ "EMoveAxis::z", (int64)EMoveAxis::z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CH3_1_Project_EMoveAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CH3_1_Project,
	nullptr,
	"EMoveAxis",
	"EMoveAxis",
	Z_Construct_UEnum_CH3_1_Project_EMoveAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CH3_1_Project_EMoveAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CH3_1_Project_EMoveAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CH3_1_Project_EMoveAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CH3_1_Project_EMoveAxis()
{
	if (!Z_Registration_Info_UEnum_EMoveAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoveAxis.InnerSingleton, Z_Construct_UEnum_CH3_1_Project_EMoveAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoveAxis.InnerSingleton;
}
// End Enum EMoveAxis

// Begin Class AMoveItem
void AMoveItem::StaticRegisterNativesAMoveItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveItem);
UClass* Z_Construct_UClass_AMoveItem_NoRegister()
{
	return AMoveItem::StaticClass();
}
struct Z_Construct_UClass_AMoveItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoveItem.h" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "MoveItem|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "MoveItem|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "MoveItem|Properties" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MoveItem|Properties" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "MoveItem|Properties" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMoved_MetaData[] = {
		{ "Category", "MoveItem|Properties" },
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoveItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceMoved;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_DistanceMoved = { "DistanceMoved", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, DistanceMoved), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMoved_MetaData), NewProp_DistanceMoved_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_CurrentAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_CurrentAxis = { "CurrentAxis", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, CurrentAxis), Z_Construct_UEnum_CH3_1_Project_EMoveAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAxis_MetaData), NewProp_CurrentAxis_MetaData) }; // 2529698570
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveItem, MoveDirection), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirection_MetaData), NewProp_MoveDirection_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_DistanceMoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_CurrentAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_CurrentAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveItem_Statics::NewProp_MoveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoveItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_1_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveItem_Statics::ClassParams = {
	&AMoveItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMoveItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoveItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoveItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoveItem()
{
	if (!Z_Registration_Info_UClass_AMoveItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveItem.OuterSingleton, Z_Construct_UClass_AMoveItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoveItem.OuterSingleton;
}
template<> CH3_1_PROJECT_API UClass* StaticClass<AMoveItem>()
{
	return AMoveItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveItem);
AMoveItem::~AMoveItem() {}
// End Class AMoveItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoveAxis_StaticEnum, TEXT("EMoveAxis"), &Z_Registration_Info_UEnum_EMoveAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2529698570U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoveItem, AMoveItem::StaticClass, TEXT("AMoveItem"), &Z_Registration_Info_UClass_AMoveItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveItem), 1235598672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_2224066061(TEXT("/Script/CH3_1_Project"),
	Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_MoveItem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
