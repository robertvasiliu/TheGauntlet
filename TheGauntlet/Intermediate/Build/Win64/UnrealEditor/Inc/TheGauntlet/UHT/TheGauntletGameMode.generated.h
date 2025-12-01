// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheGauntletGameMode.h"

#ifdef THEGAUNTLET_TheGauntletGameMode_generated_h
#error "TheGauntletGameMode.generated.h already included, missing '#pragma once' in TheGauntletGameMode.h"
#endif
#define THEGAUNTLET_TheGauntletGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATheGauntletGameMode *****************************************************
struct Z_Construct_UClass_ATheGauntletGameMode_Statics;
THEGAUNTLET_API UClass* Z_Construct_UClass_ATheGauntletGameMode_NoRegister();

#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheGauntletGameMode(); \
	friend struct ::Z_Construct_UClass_ATheGauntletGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEGAUNTLET_API UClass* ::Z_Construct_UClass_ATheGauntletGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATheGauntletGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGauntlet"), Z_Construct_UClass_ATheGauntletGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATheGauntletGameMode)


#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATheGauntletGameMode(ATheGauntletGameMode&&) = delete; \
	ATheGauntletGameMode(const ATheGauntletGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheGauntletGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheGauntletGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATheGauntletGameMode) \
	NO_API virtual ~ATheGauntletGameMode();


#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h_12_PROLOG
#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATheGauntletGameMode;

// ********** End Class ATheGauntletGameMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
