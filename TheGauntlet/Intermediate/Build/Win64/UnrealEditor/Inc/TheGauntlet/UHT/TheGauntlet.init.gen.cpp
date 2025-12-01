// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheGauntlet_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	THEGAUNTLET_API UFunction* Z_Construct_UDelegateFunction_TheGauntlet_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TheGauntlet;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TheGauntlet()
	{
		if (!Z_Registration_Info_UPackage__Script_TheGauntlet.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_TheGauntlet_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/TheGauntlet",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xA9EA5E5B,
			0x321E5DC8,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TheGauntlet.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_TheGauntlet.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TheGauntlet(Z_Construct_UPackage__Script_TheGauntlet, TEXT("/Script/TheGauntlet"), Z_Registration_Info_UPackage__Script_TheGauntlet, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA9EA5E5B, 0x321E5DC8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
