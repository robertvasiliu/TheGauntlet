// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheGauntletCharacter.h"

#ifdef THEGAUNTLET_TheGauntletCharacter_generated_h
#error "TheGauntletCharacter.generated.h already included, missing '#pragma once' in TheGauntletCharacter.h"
#endif
#define THEGAUNTLET_TheGauntletCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATheGauntletCharacter ****************************************************
#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHasKey); \
	DECLARE_FUNCTION(execAddStones); \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execApplyFallDamage);


struct Z_Construct_UClass_ATheGauntletCharacter_Statics;
THEGAUNTLET_API UClass* Z_Construct_UClass_ATheGauntletCharacter_NoRegister();

#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheGauntletCharacter(); \
	friend struct ::Z_Construct_UClass_ATheGauntletCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEGAUNTLET_API UClass* ::Z_Construct_UClass_ATheGauntletCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATheGauntletCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGauntlet"), Z_Construct_UClass_ATheGauntletCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATheGauntletCharacter)


#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATheGauntletCharacter(ATheGauntletCharacter&&) = delete; \
	ATheGauntletCharacter(const ATheGauntletCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheGauntletCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheGauntletCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATheGauntletCharacter) \
	NO_API virtual ~ATheGauntletCharacter();


#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h_21_PROLOG
#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATheGauntletCharacter;

// ********** End Class ATheGauntletCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
