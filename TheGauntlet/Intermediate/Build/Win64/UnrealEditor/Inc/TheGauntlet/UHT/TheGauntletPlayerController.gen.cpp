// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGauntletPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTheGauntletPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
THEGAUNTLET_API UClass* Z_Construct_UClass_ATheGauntletPlayerController();
THEGAUNTLET_API UClass* Z_Construct_UClass_ATheGauntletPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGauntlet();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATheGauntletPlayerController Function ShowGameMode ***********************
struct Z_Construct_UFunction_ATheGauntletPlayerController_ShowGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "TheGauntletPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowGameMode constinit property declarations **************************
// ********** End Function ShowGameMode constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGauntletPlayerController_ShowGameMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGauntletPlayerController, nullptr, "ShowGameMode", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletPlayerController_ShowGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGauntletPlayerController_ShowGameMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATheGauntletPlayerController_ShowGameMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGauntletPlayerController_ShowGameMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGauntletPlayerController::execShowGameMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameMode();
	P_NATIVE_END;
}
// ********** End Class ATheGauntletPlayerController Function ShowGameMode *************************

// ********** Begin Class ATheGauntletPlayerController Function ShowMenuMode ***********************
struct Z_Construct_UFunction_ATheGauntletPlayerController_ShowMenuMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "TheGauntletPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowMenuMode constinit property declarations **************************
// ********** End Function ShowMenuMode constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATheGauntletPlayerController_ShowMenuMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATheGauntletPlayerController, nullptr, "ShowMenuMode", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATheGauntletPlayerController_ShowMenuMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATheGauntletPlayerController_ShowMenuMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATheGauntletPlayerController_ShowMenuMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATheGauntletPlayerController_ShowMenuMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATheGauntletPlayerController::execShowMenuMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMenuMode();
	P_NATIVE_END;
}
// ********** End Class ATheGauntletPlayerController Function ShowMenuMode *************************

// ********** Begin Class ATheGauntletPlayerController *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATheGauntletPlayerController;
UClass* ATheGauntletPlayerController::GetPrivateStaticClass()
{
	using TClass = ATheGauntletPlayerController;
	if (!Z_Registration_Info_UClass_ATheGauntletPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TheGauntletPlayerController"),
			Z_Registration_Info_UClass_ATheGauntletPlayerController.InnerSingleton,
			StaticRegisterNativesATheGauntletPlayerController,
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
	return Z_Registration_Info_UClass_ATheGauntletPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATheGauntletPlayerController_NoRegister()
{
	return ATheGauntletPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATheGauntletPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TheGauntletPlayerController.h" },
		{ "ModuleRelativePath", "TheGauntletPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementMappingContext_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
		{ "ModuleRelativePath", "TheGauntletPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
		{ "ModuleRelativePath", "TheGauntletPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
		{ "ModuleRelativePath", "TheGauntletPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
		{ "ModuleRelativePath", "TheGauntletPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TheGauntletPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceTouchControls_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
		{ "ModuleRelativePath", "TheGauntletPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATheGauntletPlayerController constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileControlsWidget;
	static void NewProp_bForceTouchControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceTouchControls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATheGauntletPlayerController constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ShowGameMode"), .Pointer = &ATheGauntletPlayerController::execShowGameMode },
		{ .NameUTF8 = UTF8TEXT("ShowMenuMode"), .Pointer = &ATheGauntletPlayerController::execShowMenuMode },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATheGauntletPlayerController_ShowGameMode, "ShowGameMode" }, // 1176825026
		{ &Z_Construct_UFunction_ATheGauntletPlayerController_ShowMenuMode, "ShowMenuMode" }, // 410229116
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheGauntletPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATheGauntletPlayerController_Statics

// ********** Begin Class ATheGauntletPlayerController Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_MovementMappingContext = { "MovementMappingContext", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletPlayerController, MovementMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementMappingContext_MetaData), NewProp_MovementMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_MobileControlsWidget = { "MobileControlsWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheGauntletPlayerController, MobileControlsWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidget_MetaData), NewProp_MobileControlsWidget_MetaData) };
void Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_bForceTouchControls_SetBit(void* Obj)
{
	((ATheGauntletPlayerController*)Obj)->bForceTouchControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_bForceTouchControls = { "bForceTouchControls", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATheGauntletPlayerController), &Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_bForceTouchControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceTouchControls_MetaData), NewProp_bForceTouchControls_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATheGauntletPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_MovementMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_MobileControlsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_MobileControlsWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheGauntletPlayerController_Statics::NewProp_bForceTouchControls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletPlayerController_Statics::PropPointers) < 2048);
// ********** End Class ATheGauntletPlayerController Property Definitions **************************
UObject* (*const Z_Construct_UClass_ATheGauntletPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGauntlet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheGauntletPlayerController_Statics::ClassParams = {
	&ATheGauntletPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATheGauntletPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletPlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheGauntletPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheGauntletPlayerController_Statics::Class_MetaDataParams)
};
void ATheGauntletPlayerController::StaticRegisterNativesATheGauntletPlayerController()
{
	UClass* Class = ATheGauntletPlayerController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ATheGauntletPlayerController_Statics::Funcs));
}
UClass* Z_Construct_UClass_ATheGauntletPlayerController()
{
	if (!Z_Registration_Info_UClass_ATheGauntletPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheGauntletPlayerController.OuterSingleton, Z_Construct_UClass_ATheGauntletPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheGauntletPlayerController.OuterSingleton;
}
ATheGauntletPlayerController::ATheGauntletPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATheGauntletPlayerController);
ATheGauntletPlayerController::~ATheGauntletPlayerController() {}
// ********** End Class ATheGauntletPlayerController ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h__Script_TheGauntlet_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheGauntletPlayerController, ATheGauntletPlayerController::StaticClass, TEXT("ATheGauntletPlayerController"), &Z_Registration_Info_UClass_ATheGauntletPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheGauntletPlayerController), 631029514U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h__Script_TheGauntlet_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h__Script_TheGauntlet_3457241980{
	TEXT("/Script/TheGauntlet"),
	Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h__Script_TheGauntlet_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rober_TheGauntlet_TheGauntlet_Source_TheGauntlet_TheGauntletPlayerController_h__Script_TheGauntlet_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
