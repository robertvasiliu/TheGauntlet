// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGauntletCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTheGauntletCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
THEGAUNTLET_API UClass* Z_Construct_UClass_ATheGauntletCharacter();
THEGAUNTLET_API UClass* Z_Construct_UClass_ATheGauntletCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGauntlet();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATheGauntletCharacter Function AddStones *********************************
struct Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics
{
	struct TheGauntletCharacter_eventAddStones_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddStones constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddStones constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddStones Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TheGauntletCharacter_eventAddStones_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::PropPointers) < 2048);
// ********** End Function AddStones Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGauntletCharacter, nullptr, "AddStones", 	Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::TheGauntletCharacter_eventAddStones_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::TheGauntletCharacter_eventAddStones_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATheGauntletCharacter_AddStones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGauntletCharacter_AddStones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGauntletCharacter::execAddStones)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStones(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class ATheGauntletCharacter Function AddStones ***********************************

// ********** Begin Class ATheGauntletCharacter Function ApplyDamage *******************************
struct Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics
{
	struct TheGauntletCharacter_eventApplyDamage_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyDamage constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyDamage constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyDamage Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TheGauntletCharacter_eventApplyDamage_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::PropPointers) < 2048);
// ********** End Function ApplyDamage Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGauntletCharacter, nullptr, "ApplyDamage", 	Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::TheGauntletCharacter_eventApplyDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::TheGauntletCharacter_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGauntletCharacter::execApplyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class ATheGauntletCharacter Function ApplyDamage *********************************

// ********** Begin Class ATheGauntletCharacter Function ApplyFallDamage ***************************
struct Z_Construct_UFunction_ATheGauntletCharacter_ApplyFallDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyFallDamage constinit property declarations ***********************
// ********** End Function ApplyFallDamage constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGauntletCharacter_ApplyFallDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGauntletCharacter, nullptr, "ApplyFallDamage", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_ApplyFallDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGauntletCharacter_ApplyFallDamage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATheGauntletCharacter_ApplyFallDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGauntletCharacter_ApplyFallDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGauntletCharacter::execApplyFallDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFallDamage();
	P_NATIVE_END;
}
// ********** End Class ATheGauntletCharacter Function ApplyFallDamage *****************************

// ********** Begin Class ATheGauntletCharacter Function DoJumpEnd *********************************
struct Z_Construct_UFunction_ATheGauntletCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoJumpEnd constinit property declarations *****************************
// ********** End Function DoJumpEnd constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGauntletCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGauntletCharacter, nullptr, "DoJumpEnd", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGauntletCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATheGauntletCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGauntletCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGauntletCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class ATheGauntletCharacter Function DoJumpEnd ***********************************

// ********** Begin Class ATheGauntletCharacter Function DoJumpStart *******************************
struct Z_Construct_UFunction_ATheGauntletCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoJumpStart constinit property declarations ***************************
// ********** End Function DoJumpStart constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGauntletCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGauntletCharacter, nullptr, "DoJumpStart", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGauntletCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATheGauntletCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGauntletCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGauntletCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class ATheGauntletCharacter Function DoJumpStart *********************************

// ********** Begin Class ATheGauntletCharacter Function DoLook ************************************
struct Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics
{
	struct TheGauntletCharacter_eventDoLook_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoLook constinit property declarations ********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoLook constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoLook Property Definitions *******************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TheGauntletCharacter_eventDoLook_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TheGauntletCharacter_eventDoLook_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::PropPointers) < 2048);
// ********** End Function DoLook Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGauntletCharacter, nullptr, "DoLook", 	Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::TheGauntletCharacter_eventDoLook_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::TheGauntletCharacter_eventDoLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATheGauntletCharacter_DoLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGauntletCharacter_DoLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGauntletCharacter::execDoLook)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLook(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class ATheGauntletCharacter Function DoLook **************************************

// ********** Begin Class ATheGauntletCharacter Function DoMove ************************************
struct Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics
{
	struct TheGauntletCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoMove constinit property declarations ********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoMove constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoMove Property Definitions *******************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TheGauntletCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TheGauntletCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::PropPointers) < 2048);
// ********** End Function DoMove Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGauntletCharacter, nullptr, "DoMove", 	Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::TheGauntletCharacter_eventDoMove_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::TheGauntletCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATheGauntletCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGauntletCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGauntletCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class ATheGauntletCharacter Function DoMove **************************************

// ********** Begin Class ATheGauntletCharacter Function SetHasKey *********************************
struct Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics
{
	struct TheGauntletCharacter_eventSetHasKey_Parms
	{
		bool bNewHasKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHasKey constinit property declarations *****************************
	static void NewProp_bNewHasKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHasKey constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHasKey Property Definitions ****************************************
void Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::NewProp_bNewHasKey_SetBit(void* Obj)
{
	((TheGauntletCharacter_eventSetHasKey_Parms*)Obj)->bNewHasKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::NewProp_bNewHasKey = { "bNewHasKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TheGauntletCharacter_eventSetHasKey_Parms), &Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::NewProp_bNewHasKey_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::NewProp_bNewHasKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::PropPointers) < 2048);
// ********** End Function SetHasKey Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGauntletCharacter, nullptr, "SetHasKey", 	Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::TheGauntletCharacter_eventSetHasKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::TheGauntletCharacter_eventSetHasKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGauntletCharacter::execSetHasKey)
{
	P_GET_UBOOL(Z_Param_bNewHasKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHasKey(Z_Param_bNewHasKey);
	P_NATIVE_END;
}
// ********** End Class ATheGauntletCharacter Function SetHasKey ***********************************

// ********** Begin Class ATheGauntletCharacter ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATheGauntletCharacter;
UClass* ATheGauntletCharacter::GetPrivateStaticClass()
{
	using TClass = ATheGauntletCharacter;
	if (!Z_Registration_Info_UClass_ATheGauntletCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TheGauntletCharacter"),
			Z_Registration_Info_UClass_ATheGauntletCharacter.InnerSingleton,
			StaticRegisterNativesATheGauntletCharacter,
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
	return Z_Registration_Info_UClass_ATheGauntletCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ATheGauntletCharacter_NoRegister()
{
	return ATheGauntletCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATheGauntletCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Player character: movimento + attributi (salute, inventario chiavi/pietre)\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TheGauntletCharacter.h" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player character: movimento + attributi (salute, inventario chiavi/pietre)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallDamagePerSecond_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillZ_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasKey_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stones_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "TheGauntletCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATheGauntletCharacter constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallDamagePerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KillZ;
	static void NewProp_bHasKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stones;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATheGauntletCharacter constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddStones"), .Pointer = &ATheGauntletCharacter::execAddStones },
		{ .NameUTF8 = UTF8TEXT("ApplyDamage"), .Pointer = &ATheGauntletCharacter::execApplyDamage },
		{ .NameUTF8 = UTF8TEXT("ApplyFallDamage"), .Pointer = &ATheGauntletCharacter::execApplyFallDamage },
		{ .NameUTF8 = UTF8TEXT("DoJumpEnd"), .Pointer = &ATheGauntletCharacter::execDoJumpEnd },
		{ .NameUTF8 = UTF8TEXT("DoJumpStart"), .Pointer = &ATheGauntletCharacter::execDoJumpStart },
		{ .NameUTF8 = UTF8TEXT("DoLook"), .Pointer = &ATheGauntletCharacter::execDoLook },
		{ .NameUTF8 = UTF8TEXT("DoMove"), .Pointer = &ATheGauntletCharacter::execDoMove },
		{ .NameUTF8 = UTF8TEXT("SetHasKey"), .Pointer = &ATheGauntletCharacter::execSetHasKey },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATheGauntletCharacter_AddStones, "AddStones" }, // 4010426300
		{ &Z_Construct_UFunction_ATheGauntletCharacter_ApplyDamage, "ApplyDamage" }, // 250351990
		{ &Z_Construct_UFunction_ATheGauntletCharacter_ApplyFallDamage, "ApplyFallDamage" }, // 2720781220
		{ &Z_Construct_UFunction_ATheGauntletCharacter_DoJumpEnd, "DoJumpEnd" }, // 3123558230
		{ &Z_Construct_UFunction_ATheGauntletCharacter_DoJumpStart, "DoJumpStart" }, // 3047557386
		{ &Z_Construct_UFunction_ATheGauntletCharacter_DoLook, "DoLook" }, // 3889902038
		{ &Z_Construct_UFunction_ATheGauntletCharacter_DoMove, "DoMove" }, // 1199626018
		{ &Z_Construct_UFunction_ATheGauntletCharacter_SetHasKey, "SetHasKey" }, // 236509209
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheGauntletCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATheGauntletCharacter_Statics

// ********** Begin Class ATheGauntletCharacter Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_FallDamagePerSecond = { "FallDamagePerSecond", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, FallDamagePerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallDamagePerSecond_MetaData), NewProp_FallDamagePerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_KillZ = { "KillZ", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, KillZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillZ_MetaData), NewProp_KillZ_MetaData) };
void Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_bHasKey_SetBit(void* Obj)
{
	((ATheGauntletCharacter*)Obj)->bHasKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_bHasKey = { "bHasKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATheGauntletCharacter), &Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_bHasKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasKey_MetaData), NewProp_bHasKey_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_Stones = { "Stones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletCharacter, Stones), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stones_MetaData), NewProp_Stones_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATheGauntletCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_MouseLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_FallDamagePerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_KillZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_bHasKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletCharacter_Statics::NewProp_Stones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletCharacter_Statics::PropPointers) < 2048);
// ********** End Class ATheGauntletCharacter Property Definitions *********************************
UObject* (*const Z_Construct_UClass_ATheGauntletCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGauntlet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheGauntletCharacter_Statics::ClassParams = {
	&ATheGauntletCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATheGauntletCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheGauntletCharacter_Statics::Class_MetaDataParams)
};
void ATheGauntletCharacter::StaticRegisterNativesATheGauntletCharacter()
{
	UClass* Class = ATheGauntletCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ATheGauntletCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_ATheGauntletCharacter()
{
	if (!Z_Registration_Info_UClass_ATheGauntletCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheGauntletCharacter.OuterSingleton, Z_Construct_UClass_ATheGauntletCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheGauntletCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATheGauntletCharacter);
ATheGauntletCharacter::~ATheGauntletCharacter() {}
// ********** End Class ATheGauntletCharacter ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h__Script_TheGauntlet_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheGauntletCharacter, ATheGauntletCharacter::StaticClass, TEXT("ATheGauntletCharacter"), &Z_Registration_Info_UClass_ATheGauntletCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheGauntletCharacter), 924408152U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h__Script_TheGauntlet_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h__Script_TheGauntlet_2073601809{
	TEXT("/Script/TheGauntlet"),
	Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h__Script_TheGauntlet_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletCharacter_h__Script_TheGauntlet_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
