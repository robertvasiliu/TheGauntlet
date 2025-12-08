// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GauntletGameMode.h"

#ifdef THEGAUNTLET_GauntletGameMode_generated_h
#error "GauntletGameMode.generated.h already included, missing '#pragma once' in GauntletGameMode.h"
#endif
#define THEGAUNTLET_GauntletGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Delegate FOnLevelCompleted *****************************************************
#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h_7_DELEGATE \
THEGAUNTLET_API void FOnLevelCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnLevelCompleted);


// ********** End Delegate FOnLevelCompleted *******************************************************

// ********** Begin Class AGauntletGameMode ********************************************************
#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterLeverState); \
	DECLARE_FUNCTION(execCloseGate); \
	DECLARE_FUNCTION(execOpenGateTimed); \
	DECLARE_FUNCTION(execHandlePlayerDeath); \
	DECLARE_FUNCTION(execHandleLevelCompleted);


struct Z_Construct_UClass_AGauntletGameMode_Statics;
THEGAUNTLET_API UClass* Z_Construct_UClass_AGauntletGameMode_NoRegister();

#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGauntletGameMode(); \
	friend struct ::Z_Construct_UClass_AGauntletGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEGAUNTLET_API UClass* ::Z_Construct_UClass_AGauntletGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AGauntletGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGauntlet"), Z_Construct_UClass_AGauntletGameMode_NoRegister) \
	DECLARE_SERIALIZER(AGauntletGameMode)


#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGauntletGameMode(AGauntletGameMode&&) = delete; \
	AGauntletGameMode(const AGauntletGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGauntletGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGauntletGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGauntletGameMode) \
	NO_API virtual ~AGauntletGameMode();


#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h_9_PROLOG
#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGauntletGameMode;

// ********** End Class AGauntletGameMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
