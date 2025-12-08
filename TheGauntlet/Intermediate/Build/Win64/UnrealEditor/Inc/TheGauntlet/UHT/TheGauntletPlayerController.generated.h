// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheGauntletPlayerController.h"

#ifdef THEGAUNTLET_TheGauntletPlayerController_generated_h
#error "TheGauntletPlayerController.generated.h already included, missing '#pragma once' in TheGauntletPlayerController.h"
#endif
#define THEGAUNTLET_TheGauntletPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATheGauntletPlayerController *********************************************
#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowGameMode); \
	DECLARE_FUNCTION(execShowMenuMode);


struct Z_Construct_UClass_ATheGauntletPlayerController_Statics;
THEGAUNTLET_API UClass* Z_Construct_UClass_ATheGauntletPlayerController_NoRegister();

#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheGauntletPlayerController(); \
	friend struct ::Z_Construct_UClass_ATheGauntletPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEGAUNTLET_API UClass* ::Z_Construct_UClass_ATheGauntletPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ATheGauntletPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGauntlet"), Z_Construct_UClass_ATheGauntletPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ATheGauntletPlayerController)


#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATheGauntletPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATheGauntletPlayerController(ATheGauntletPlayerController&&) = delete; \
	ATheGauntletPlayerController(const ATheGauntletPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheGauntletPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheGauntletPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATheGauntletPlayerController) \
	NO_API virtual ~ATheGauntletPlayerController();


#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h_16_PROLOG
#define FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATheGauntletPlayerController;

// ********** End Class ATheGauntletPlayerController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
