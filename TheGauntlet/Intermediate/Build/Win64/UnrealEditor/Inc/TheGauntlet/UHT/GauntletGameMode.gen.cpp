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
THEGAUNTLET_API UFunction* Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompleted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_TheGauntlet();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnLevelCompleted *****************************************************
struct Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GauntletGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLevelCompleted constinit property declarations *********************
// ********** End Delegate FOnLevelCompleted constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TheGauntlet, nullptr, "OnLevelCompleted__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TheGauntlet_OnLevelCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLevelCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnLevelCompleted)
{
	OnLevelCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnLevelCompleted *******************************************************

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
#endif // WITH_METADATA

// ********** Begin Class AGauntletGameMode constinit property declarations ************************
// ********** End Class AGauntletGameMode constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CloseGate"), .Pointer = &AGauntletGameMode::execCloseGate },
		{ .NameUTF8 = UTF8TEXT("HandleLevelCompleted"), .Pointer = &AGauntletGameMode::execHandleLevelCompleted },
		{ .NameUTF8 = UTF8TEXT("HandlePlayerDeath"), .Pointer = &AGauntletGameMode::execHandlePlayerDeath },
		{ .NameUTF8 = UTF8TEXT("OpenGateTimed"), .Pointer = &AGauntletGameMode::execOpenGateTimed },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGauntletGameMode_CloseGate, "CloseGate" }, // 492703082
		{ &Z_Construct_UFunction_AGauntletGameMode_HandleLevelCompleted, "HandleLevelCompleted" }, // 621240607
		{ &Z_Construct_UFunction_AGauntletGameMode_HandlePlayerDeath, "HandlePlayerDeath" }, // 1491690236
		{ &Z_Construct_UFunction_AGauntletGameMode_OpenGateTimed, "OpenGateTimed" }, // 3547817767
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGauntletGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGauntletGameMode_Statics
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
		{ Z_Construct_UClass_AGauntletGameMode, AGauntletGameMode::StaticClass, TEXT("AGauntletGameMode"), &Z_Registration_Info_UClass_AGauntletGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGauntletGameMode), 26074815U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h__Script_TheGauntlet_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h__Script_TheGauntlet_3125478780{
	TEXT("/Script/TheGauntlet"),
	Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h__Script_TheGauntlet_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_GauntletGameMode_h__Script_TheGauntlet_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
