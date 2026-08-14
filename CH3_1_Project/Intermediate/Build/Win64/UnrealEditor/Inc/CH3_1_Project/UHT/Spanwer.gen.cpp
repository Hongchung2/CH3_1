// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_1_Project/Public/Spanwer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpanwer() {}

// Begin Cross Module References
CH3_1_PROJECT_API UClass* Z_Construct_UClass_ASpanwer();
CH3_1_PROJECT_API UClass* Z_Construct_UClass_ASpanwer_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_1_Project();
// End Cross Module References

// Begin Class ASpanwer
void ASpanwer::StaticRegisterNativesASpanwer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpanwer);
UClass* Z_Construct_UClass_ASpanwer_NoRegister()
{
	return ASpanwer::StaticClass();
}
struct Z_Construct_UClass_ASpanwer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spanwer.h" },
		{ "ModuleRelativePath", "Public/Spanwer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/Spanwer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/Spanwer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpanwer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpanwer_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpanwer, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpanwer_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpanwer, SpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRadius_MetaData), NewProp_SpawnRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpanwer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpanwer_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpanwer_Statics::NewProp_SpawnRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpanwer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpanwer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_1_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpanwer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpanwer_Statics::ClassParams = {
	&ASpanwer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpanwer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpanwer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpanwer_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpanwer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpanwer()
{
	if (!Z_Registration_Info_UClass_ASpanwer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpanwer.OuterSingleton, Z_Construct_UClass_ASpanwer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpanwer.OuterSingleton;
}
template<> CH3_1_PROJECT_API UClass* StaticClass<ASpanwer>()
{
	return ASpanwer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpanwer);
ASpanwer::~ASpanwer() {}
// End Class ASpanwer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_Spanwer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpanwer, ASpanwer::StaticClass, TEXT("ASpanwer"), &Z_Registration_Info_UClass_ASpanwer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpanwer), 3961970993U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_Spanwer_h_3238649808(TEXT("/Script/CH3_1_Project"),
	Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_Spanwer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_UnrealEngine_CH3_1_CH3_1_Project_Source_CH3_1_Project_Public_Spanwer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
