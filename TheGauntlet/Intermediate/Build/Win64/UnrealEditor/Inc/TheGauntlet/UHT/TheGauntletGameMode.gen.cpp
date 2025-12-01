// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGauntletGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTheGauntletGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THEGAUNTLET_API UClass* Z_Construct_UClass_ATheGauntletGameMode();
THEGAUNTLET_API UClass* Z_Construct_UClass_ATheGauntletGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGauntlet();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATheGauntletGameMode *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATheGauntletGameMode;
UClass* ATheGauntletGameMode::GetPrivateStaticClass()
{
	using TClass = ATheGauntletGameMode;
	if (!Z_Registration_Info_UClass_ATheGauntletGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TheGauntletGameMode"),
			Z_Registration_Info_UClass_ATheGauntletGameMode.InnerSingleton,
			StaticRegisterNativesATheGauntletGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATheGauntletGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATheGauntletGameMode_NoRegister()
{
	return ATheGauntletGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATheGauntletGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheGauntletGameMode.h" },
		{ "ModuleRelativePath", "TheGauntletGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ATheGauntletGameMode constinit property declarations *********************
// ********** End Class ATheGauntletGameMode constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheGauntletGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATheGauntletGameMode_Statics
UObject* (*const Z_Construct_UClass_ATheGauntletGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGauntlet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheGauntletGameMode_Statics::ClassParams = {
	&ATheGauntletGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheGauntletGameMode_Statics::Class_MetaDataParams)
};
void ATheGauntletGameMode::StaticRegisterNativesATheGauntletGameMode()
{
}
UClass* Z_Construct_UClass_ATheGauntletGameMode()
{
	if (!Z_Registration_Info_UClass_ATheGauntletGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheGauntletGameMode.OuterSingleton, Z_Construct_UClass_ATheGauntletGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheGauntletGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATheGauntletGameMode);
ATheGauntletGameMode::~ATheGauntletGameMode() {}
// ********** End Class ATheGauntletGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h__Script_TheGauntlet_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheGauntletGameMode, ATheGauntletGameMode::StaticClass, TEXT("ATheGauntletGameMode"), &Z_Registration_Info_UClass_ATheGauntletGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheGauntletGameMode), 3340143905U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h__Script_TheGauntlet_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h__Script_TheGauntlet_3446912448{
	TEXT("/Script/TheGauntlet"),
	Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h__Script_TheGauntlet_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h__Script_TheGauntlet_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
