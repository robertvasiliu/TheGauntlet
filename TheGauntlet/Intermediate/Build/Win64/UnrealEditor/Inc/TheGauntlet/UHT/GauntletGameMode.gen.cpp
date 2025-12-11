// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GauntletGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGauntletGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THEGAUNTLET_API UClass* Z_Construct_UClass_AGauntletGameMode();
THEGAUNTLET_API UClass* Z_Construct_UClass_AGauntletGameMode_NoRegister();
THEGAUNTLET_API UFunction* Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompletedSimple__DelegateSignature();
THEGAUNTLET_API UFunction* Z_Construct_UDelegateFunction_TheGauntlet_OnPlayerDied__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_TheGauntlet();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPlayerDied *********************************************************
struct Z_Construct_UDelegateFunction_TheGauntlet_OnPlayerDied__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPlayerDied constinit property declarations *************************
// ********** End Delegate FOnPlayerDied constinit property declarations ***************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TheGauntlet_OnPlayerDied__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TheGauntlet, nullptr, "OnPlayerDied__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheGauntlet_OnPlayerDied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TheGauntlet_OnPlayerDied__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TheGauntlet_OnPlayerDied__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TheGauntlet_OnPlayerDied__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerDied_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerDied)
{
	OnPlayerDied.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPlayerDied ***********************************************************

// ********** Begin Delegate FOnLevelCompletedSimple ***********************************************
struct Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompletedSimple__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLevelCompletedSimple constinit property declarations ***************
// ********** End Delegate FOnLevelCompletedSimple constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompletedSimple__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TheGauntlet, nullptr, "OnLevelCompletedSimple__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompletedSimple__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompletedSimple__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompletedSimple__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompletedSimple__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLevelCompletedSimple_DelegateWrapper(const FMulticastScriptDelegate& OnLevelCompletedSimple)
{
	OnLevelCompletedSimple.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnLevelCompletedSimple *************************************************

// ********** Begin Class AGauntletGameMode Function CloseGate *************************************
struct Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics
{
	struct GauntletGameMode_eventCloseGate_Parms
	{
		AActor* GateActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CloseGate constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GateActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CloseGate constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CloseGate Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::NewProp_GateActor = { "GateActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GauntletGameMode_eventCloseGate_Parms, GateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::NewProp_GateActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::PropPointers) < 2048);
// ********** End Function CloseGate Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGauntletGameMode, nullptr, "CloseGate", 	Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::GauntletGameMode_eventCloseGate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::GauntletGameMode_eventCloseGate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGauntletGameMode_CloseGate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGauntletGameMode_CloseGate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGauntletGameMode::execCloseGate)
{
	P_GET_OBJECT(AActor,Z_Param_GateActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseGate(Z_Param_GateActor);
	P_NATIVE_END;
}
// ********** End Class AGauntletGameMode Function CloseGate ***************************************

// ********** Begin Class AGauntletGameMode Function HandleLevelCompleted **************************
struct Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics
{
	struct GauntletGameMode_eventHandleLevelCompleted_Parms
	{
		AActor* GoalActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleLevelCompleted constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleLevelCompleted constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleLevelCompleted Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::NewProp_GoalActor = { "GoalActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GauntletGameMode_eventHandleLevelCompleted_Parms, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::NewProp_GoalActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::PropPointers) < 2048);
// ********** End Function HandleLevelCompleted Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGauntletGameMode, nullptr, "HandleLevelCompleted", 	Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::GauntletGameMode_eventHandleLevelCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::GauntletGameMode_eventHandleLevelCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGauntletGameMode::execHandleLevelCompleted)
{
	P_GET_OBJECT(AActor,Z_Param_GoalActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLevelCompleted(Z_Param_GoalActor);
	P_NATIVE_END;
}
// ********** End Class AGauntletGameMode Function HandleLevelCompleted ****************************

// ********** Begin Class AGauntletGameMode Function HandlePlayerDeath *****************************
struct Z_Construct_UFunction_AGauntletGameMode_HandlePlayerDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePlayerDeath constinit property declarations *********************
// ********** End Function HandlePlayerDeath constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGauntletGameMode_HandlePlayerDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGauntletGameMode, nullptr, "HandlePlayerDeath", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_HandlePlayerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGauntletGameMode_HandlePlayerDeath_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGauntletGameMode_HandlePlayerDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGauntletGameMode_HandlePlayerDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGauntletGameMode::execHandlePlayerDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePlayerDeath();
	P_NATIVE_END;
}
// ********** End Class AGauntletGameMode Function HandlePlayerDeath *******************************

// ********** Begin Class AGauntletGameMode Function OpenGateTimed *********************************
struct Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics
{
	struct GauntletGameMode_eventOpenGateTimed_Parms
	{
		AActor* GateActor;
		float OpenTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gate" },
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenGateTimed constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GateActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpenTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenGateTimed constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenGateTimed Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::NewProp_GateActor = { "GateActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GauntletGameMode_eventOpenGateTimed_Parms, GateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::NewProp_OpenTime = { "OpenTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GauntletGameMode_eventOpenGateTimed_Parms, OpenTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::NewProp_GateActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::NewProp_OpenTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::PropPointers) < 2048);
// ********** End Function OpenGateTimed Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGauntletGameMode, nullptr, "OpenGateTimed", 	Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::GauntletGameMode_eventOpenGateTimed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::GauntletGameMode_eventOpenGateTimed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGauntletGameMode::execOpenGateTimed)
{
	P_GET_OBJECT(AActor,Z_Param_GateActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OpenTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenGateTimed(Z_Param_GateActor,Z_Param_OpenTime);
	P_NATIVE_END;
}
// ********** End Class AGauntletGameMode Function OpenGateTimed ***********************************

// ********** Begin Class AGauntletGameMode Function RegisterLeverState ****************************
struct Z_Construct_UFunction_AGauntletGameMode_RegisterLeverState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterLeverState constinit property declarations ********************
// ********** End Function RegisterLeverState constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGauntletGameMode_RegisterLeverState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGauntletGameMode, nullptr, "RegisterLeverState", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_RegisterLeverState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGauntletGameMode_RegisterLeverState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGauntletGameMode_RegisterLeverState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGauntletGameMode_RegisterLeverState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGauntletGameMode::execRegisterLeverState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterLeverState();
	P_NATIVE_END;
}
// ********** End Class AGauntletGameMode Function RegisterLeverState ******************************

// ********** Begin Class AGauntletGameMode Function ReturnToMainMenu ******************************
struct Z_Construct_UFunction_AGauntletGameMode_ReturnToMainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReturnToMainMenu constinit property declarations **********************
// ********** End Function ReturnToMainMenu constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGauntletGameMode_ReturnToMainMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGauntletGameMode, nullptr, "ReturnToMainMenu", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGauntletGameMode_ReturnToMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGauntletGameMode_ReturnToMainMenu_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGauntletGameMode_ReturnToMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGauntletGameMode_ReturnToMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGauntletGameMode::execReturnToMainMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnToMainMenu();
	P_NATIVE_END;
}
// ********** End Class AGauntletGameMode Function ReturnToMainMenu ********************************

// ********** Begin Class AGauntletGameMode ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGauntletGameMode;
UClass* AGauntletGameMode::GetPrivateStaticClass()
{
	using TClass = AGauntletGameMode;
	if (!Z_Registration_Info_UClass_AGauntletGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GauntletGameMode"),
			Z_Registration_Info_UClass_AGauntletGameMode.InnerSingleton,
			StaticRegisterNativesAGauntletGameMode,
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
	return Z_Registration_Info_UClass_AGauntletGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGauntletGameMode_NoRegister()
{
	return AGauntletGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGauntletGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GauntletGameMode.h" },
		{ "ModuleRelativePath", "GauntletGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PuzzleLevers_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PuzzleGate_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDied_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelCompleted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AGauntletGameMode constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PuzzleLevers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PuzzleLevers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PuzzleGate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDied;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGauntletGameMode constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CloseGate"), .Pointer = &AGauntletGameMode::execCloseGate },
		{ .NameUTF8 = UTF8TEXT("HandleLevelCompleted"), .Pointer = &AGauntletGameMode::execHandleLevelCompleted },
		{ .NameUTF8 = UTF8TEXT("HandlePlayerDeath"), .Pointer = &AGauntletGameMode::execHandlePlayerDeath },
		{ .NameUTF8 = UTF8TEXT("OpenGateTimed"), .Pointer = &AGauntletGameMode::execOpenGateTimed },
		{ .NameUTF8 = UTF8TEXT("RegisterLeverState"), .Pointer = &AGauntletGameMode::execRegisterLeverState },
		{ .NameUTF8 = UTF8TEXT("ReturnToMainMenu"), .Pointer = &AGauntletGameMode::execReturnToMainMenu },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGauntletGameMode_CloseGate, "CloseGate" }, // 492703082
		{ &Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted, "HandleLevelCompleted" }, // 621240607
		{ &Z_Construct_UFunction_AGauntletGameMode_HandlePlayerDeath, "HandlePlayerDeath" }, // 1491690236
		{ &Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed, "OpenGateTimed" }, // 3547817767
		{ &Z_Construct_UFunction_AGauntletGameMode_RegisterLeverState, "RegisterLeverState" }, // 2363786009
		{ &Z_Construct_UFunction_AGauntletGameMode_ReturnToMainMenu, "ReturnToMainMenu" }, // 3213886197
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGauntletGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGauntletGameMode_Statics

// ********** Begin Class AGauntletGameMode Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGauntletGameMode_Statics::NewProp_PuzzleLevers_Inner = { "PuzzleLevers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGauntletGameMode_Statics::NewProp_PuzzleLevers = { "PuzzleLevers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGauntletGameMode, PuzzleLevers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PuzzleLevers_MetaData), NewProp_PuzzleLevers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGauntletGameMode_Statics::NewProp_PuzzleGate = { "PuzzleGate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGauntletGameMode, PuzzleGate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PuzzleGate_MetaData), NewProp_PuzzleGate_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGauntletGameMode_Statics::NewProp_OnPlayerDied = { "OnPlayerDied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGauntletGameMode, OnPlayerDied), Z_Construct_UDelegateFunction_TheGauntlet_OnPlayerDied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerDied_MetaData), NewProp_OnPlayerDied_MetaData) }; // 674935493
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGauntletGameMode_Statics::NewProp_OnLevelCompleted = { "OnLevelCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGauntletGameMode, OnLevelCompleted), Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompletedSimple__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLevelCompleted_MetaData), NewProp_OnLevelCompleted_MetaData) }; // 2112683126
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGauntletGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntletGameMode_Statics::NewProp_PuzzleLevers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntletGameMode_Statics::NewProp_PuzzleLevers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntletGameMode_Statics::NewProp_PuzzleGate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntletGameMode_Statics::NewProp_OnPlayerDied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntletGameMode_Statics::NewProp_OnLevelCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGauntletGameMode_Statics::PropPointers) < 2048);
// ********** End Class AGauntletGameMode Property Definitions *************************************
UObject* (*const Z_Construct_UClass_AGauntletGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGauntlet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGauntletGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGauntletGameMode_Statics::ClassParams = {
	&AGauntletGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGauntletGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGauntletGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGauntletGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGauntletGameMode_Statics::Class_MetaDataParams)
};
void AGauntletGameMode::StaticRegisterNativesAGauntletGameMode()
{
	UClass* Class = AGauntletGameMode::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AGauntletGameMode_Statics::Funcs));
}
UClass* Z_Construct_UClass_AGauntletGameMode()
{
	if (!Z_Registration_Info_UClass_AGauntletGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGauntletGameMode.OuterSingleton, Z_Construct_UClass_AGauntletGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGauntletGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGauntletGameMode);
AGauntletGameMode::~AGauntletGameMode() {}
// ********** End Class AGauntletGameMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h__Script_TheGauntlet_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGauntletGameMode, AGauntletGameMode::StaticClass, TEXT("AGauntletGameMode"), &Z_Registration_Info_UClass_AGauntletGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGauntletGameMode), 3824842091U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h__Script_TheGauntlet_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h__Script_TheGauntlet_198318972{
	TEXT("/Script/TheGauntlet"),
	Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h__Script_TheGauntlet_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h__Script_TheGauntlet_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
