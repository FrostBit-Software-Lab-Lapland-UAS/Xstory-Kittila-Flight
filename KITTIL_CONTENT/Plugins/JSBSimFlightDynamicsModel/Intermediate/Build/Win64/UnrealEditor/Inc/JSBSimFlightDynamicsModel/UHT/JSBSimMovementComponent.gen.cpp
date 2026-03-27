// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JSBSimFlightDynamicsModel/Public/JSBSimMovementComponent.h"
#include "JSBSimFlightDynamicsModel/Public/FDMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJSBSimMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GEOREFERENCING_API UClass* Z_Construct_UClass_AGeoReferencingSystem_NoRegister();
JSBSIMFLIGHTDYNAMICSMODEL_API UClass* Z_Construct_UClass_UJSBSimMovementComponent();
JSBSIMFLIGHTDYNAMICSMODEL_API UClass* Z_Construct_UClass_UJSBSimMovementComponent_NoRegister();
JSBSIMFLIGHTDYNAMICSMODEL_API UFunction* Z_Construct_UDelegateFunction_JSBSimFlightDynamicsModel_DelegateAircraftCrashed__DelegateSignature();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FAircraftState();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FEngineCommand();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FEngineState();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FFlightControlCommands();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FGear();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FTank();
UPackage* Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel();
// End Cross Module References

// Begin Delegate FDelegateAircraftCrashed
struct Z_Construct_UDelegateFunction_JSBSimFlightDynamicsModel_DelegateAircraftCrashed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_JSBSimFlightDynamicsModel_DelegateAircraftCrashed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel, nullptr, "DelegateAircraftCrashed__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JSBSimFlightDynamicsModel_DelegateAircraftCrashed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_JSBSimFlightDynamicsModel_DelegateAircraftCrashed__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_JSBSimFlightDynamicsModel_DelegateAircraftCrashed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_JSBSimFlightDynamicsModel_DelegateAircraftCrashed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDelegateAircraftCrashed_DelegateWrapper(const FMulticastScriptDelegate& DelegateAircraftCrashed)
{
	DelegateAircraftCrashed.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FDelegateAircraftCrashed

// Begin Class UJSBSimMovementComponent Function CommandConsole
struct Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics
{
	struct JSBSimMovementComponent_eventCommandConsole_Parms
	{
		FString Property;
		FString InValue;
		FString OutValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Command Input & Output from Property Manger\n  *   -Enter name of property, e.g. gear/unit/wheel-speed-fps\n  *   -OutValue of blank/empty means property name does not exist.\n  *   -InValue of blank/empty if you wish to only lookup a property value,\n  *     otherwise you will override the system value!*/" },
#endif
		{ "DisplayName", "Command Console" },
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Command Input & Output from Property Manger\n  -Enter name of property, e.g. gear/unit/wheel-speed-fps\n  -OutValue of blank/empty means property name does not exist.\n  -InValue of blank/empty if you wish to only lookup a property value,\n    otherwise you will override the system value!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Property;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSBSimMovementComponent_eventCommandConsole_Parms, Property), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSBSimMovementComponent_eventCommandConsole_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSBSimMovementComponent_eventCommandConsole_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::NewProp_OutValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSBSimMovementComponent, nullptr, "CommandConsole", nullptr, nullptr, Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::JSBSimMovementComponent_eventCommandConsole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::JSBSimMovementComponent_eventCommandConsole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJSBSimMovementComponent::execCommandConsole)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Property);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CommandConsole(Z_Param_Property,Z_Param_InValue,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UJSBSimMovementComponent Function CommandConsole

// Begin Class UJSBSimMovementComponent Function CommandConsoleBatch
struct Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics
{
	struct JSBSimMovementComponent_eventCommandConsoleBatch_Parms
	{
		TArray<FString> Property;
		TArray<FString> InValue;
		TArray<FString> OutValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Command Inputs & Outputs in Batch to Property Manger\n  *   -Enter name of property, e.g. gear/unit/wheel-speed-fps\n  *   -OutValue of blank/empty means property name does not exist.\n  *   -InValue of blank/empty if you wish to only lookup a property value,\n  *     otherwise you will override the system value! */" },
#endif
		{ "DisplayName", "Command Console Batch" },
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Command Inputs & Outputs in Batch to Property Manger\n  -Enter name of property, e.g. gear/unit/wheel-speed-fps\n  -OutValue of blank/empty means property name does not exist.\n  -InValue of blank/empty if you wish to only lookup a property value,\n    otherwise you will override the system value!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Property_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Property;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_Property_Inner = { "Property", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSBSimMovementComponent_eventCommandConsoleBatch_Parms, Property), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSBSimMovementComponent_eventCommandConsoleBatch_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_OutValue_Inner = { "OutValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSBSimMovementComponent_eventCommandConsoleBatch_Parms, OutValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_Property_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_Property,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_InValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_OutValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::NewProp_OutValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSBSimMovementComponent, nullptr, "CommandConsoleBatch", nullptr, nullptr, Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::JSBSimMovementComponent_eventCommandConsoleBatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::JSBSimMovementComponent_eventCommandConsoleBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJSBSimMovementComponent::execCommandConsoleBatch)
{
	P_GET_TARRAY(FString,Z_Param_Property);
	P_GET_TARRAY(FString,Z_Param_InValue);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CommandConsoleBatch(Z_Param_Property,Z_Param_InValue,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UJSBSimMovementComponent Function CommandConsoleBatch

// Begin Class UJSBSimMovementComponent Function LoadAircraft
struct Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics
{
	struct JSBSimMovementComponent_eventLoadAircraft_Parms
	{
		bool ResetToDefaultSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This function is used in different contexts : \n    *  - When the used changed the Aircraft Model string - In that case, we call it with ResetToDefaultSettings to rebuild Engine, Tanks and Gears UE structures from the new aircraft\n    *  - On begin play, in that case, we don't touch the UE structures because the user can have overriden some properties. */" },
#endif
		{ "DisplayName", "Reset Initial Conditions" },
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is used in different contexts :\n   *  - When the used changed the Aircraft Model string - In that case, we call it with ResetToDefaultSettings to rebuild Engine, Tanks and Gears UE structures from the new aircraft\n   *  - On begin play, in that case, we don't touch the UE structures because the user can have overriden some properties." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ResetToDefaultSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetToDefaultSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::NewProp_ResetToDefaultSettings_SetBit(void* Obj)
{
	((JSBSimMovementComponent_eventLoadAircraft_Parms*)Obj)->ResetToDefaultSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::NewProp_ResetToDefaultSettings = { "ResetToDefaultSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JSBSimMovementComponent_eventLoadAircraft_Parms), &Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::NewProp_ResetToDefaultSettings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::NewProp_ResetToDefaultSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSBSimMovementComponent, nullptr, "LoadAircraft", nullptr, nullptr, Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::JSBSimMovementComponent_eventLoadAircraft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::JSBSimMovementComponent_eventLoadAircraft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJSBSimMovementComponent::execLoadAircraft)
{
	P_GET_UBOOL(Z_Param_ResetToDefaultSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadAircraft(Z_Param_ResetToDefaultSettings);
	P_NATIVE_END;
}
// End Class UJSBSimMovementComponent Function LoadAircraft

// Begin Class UJSBSimMovementComponent Function PropertyManagerNode
struct Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics
{
	struct JSBSimMovementComponent_eventPropertyManagerNode_Parms
	{
		TArray<FString> Catalog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Gets Catalog of all properties in Property Manger\n  *   -Returns names of all properties that JSBSim created/loaded\n  *   -Currently not very useful other than to see what exists\n  *   -Returns a big list, probably should not call often  */" },
#endif
		{ "DisplayName", "Property Manager Get Catalog" },
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets Catalog of all properties in Property Manger\n  -Returns names of all properties that JSBSim created/loaded\n  -Currently not very useful other than to see what exists\n  -Returns a big list, probably should not call often" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Catalog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::NewProp_Catalog_Inner = { "Catalog", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::NewProp_Catalog = { "Catalog", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSBSimMovementComponent_eventPropertyManagerNode_Parms, Catalog), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::NewProp_Catalog_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::NewProp_Catalog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSBSimMovementComponent, nullptr, "PropertyManagerNode", nullptr, nullptr, Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::JSBSimMovementComponent_eventPropertyManagerNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::JSBSimMovementComponent_eventPropertyManagerNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJSBSimMovementComponent::execPropertyManagerNode)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Catalog);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PropertyManagerNode(Z_Param_Out_Catalog);
	P_NATIVE_END;
}
// End Class UJSBSimMovementComponent Function PropertyManagerNode

// Begin Class UJSBSimMovementComponent
void UJSBSimMovementComponent::StaticRegisterNativesUJSBSimMovementComponent()
{
	UClass* Class = UJSBSimMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CommandConsole", &UJSBSimMovementComponent::execCommandConsole },
		{ "CommandConsoleBatch", &UJSBSimMovementComponent::execCommandConsoleBatch },
		{ "LoadAircraft", &UJSBSimMovementComponent::execLoadAircraft },
		{ "PropertyManagerNode", &UJSBSimMovementComponent::execPropertyManagerNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJSBSimMovementComponent);
UClass* Z_Construct_UClass_UJSBSimMovementComponent_NoRegister()
{
	return UJSBSimMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UJSBSimMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "JSBSimMovementComponent.h" },
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AircraftModel_MetaData[] = {
		{ "Category", "Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09The Aircraft model name as expected in JSBSim (Name of folder/xml file)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Aircraft model name as expected in JSBSim (Name of folder/xml file)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructuralFrameOrigin_MetaData[] = {
		{ "Category", "Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * JSBSim does its computations in its own set or reference frames. All these frames are related to a \"Structural Frame\"\n\x09 * https://jsbsim-team.github.io/jsbsim-reference-manual/mypages/user-manual-frames-of-reference/\n\x09 * This structural frame is not aligned with the 3D modeling frame. This offset is meant to manually guess the offset between the 3D model and the internal logical model. \n\x09 * Activate debug mode, and tune this value to align reference points with your 3D model \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "JSBSim does its computations in its own set or reference frames. All these frames are related to a \"Structural Frame\"\nhttps://jsbsim-team.github.io/jsbsim-reference-manual/mypages/user-manual-frames-of-reference/\nThis structural frame is not aligned with the 3D modeling frame. This offset is meant to manually guess the offset between the 3D model and the internal logical model.\nActivate debug mode, and tune this value to align reference points with your 3D model" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebug_MetaData[] = {
		{ "Category", "Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Display the reference points and debug text at runtime. \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display the reference points and debug text at runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AGLThresholdMeters_MetaData[] = {
		{ "Category", "Model|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When querying for the Above Ground Level, JSBSim can throw raycasts from several points, sometimes under the StructuralFrameOrigin. \n    *  By doing that, some of them can fail if they start below the ground. This value is a vertical offset added to each AGL Query to make sure we hit the ground. \n    *  (Aircraft geometry is of course ignored during the process - 15m should be sufficient for all kind of aircrafts - Issue #786)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When querying for the Above Ground Level, JSBSim can throw raycasts from several points, sometimes under the StructuralFrameOrigin.\n By doing that, some of them can fail if they start below the ground. This value is a vertical offset added to each AGL Query to make sure we hit the ground.\n (Aircraft geometry is of course ignored during the process - 15m should be sufficient for all kind of aircrafts - Issue #786)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CGLocalPosition_MetaData[] = {
		{ "Category", "Model|Reference Points" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Center of Gravity Location in Actor local frame\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Center of Gravity Location in Actor local frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EPLocalPosition_MetaData[] = {
		{ "Category", "Model|Reference Points" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * JSBSim's Eye Position in Actor local frame\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "JSBSim's Eye Position in Actor local frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRPLocalPosition_MetaData[] = {
		{ "Category", "Model|Reference Points" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * JSBSim's Visual Reference Point Position in Actor local frame\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "JSBSim's Visual Reference Point Position in Actor local frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOnGround_MetaData[] = {
		{ "Category", "Initial Conditions|Aircraft" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Control the behavior of initial Aircraft Trim. If true, an initial stall state will be computed. \n\x09 * If false, the aircraft will be considered active. Depending on its precise location on ground, you could see some damping. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control the behavior of initial Aircraft Trim. If true, an initial stall state will be computed.\nIf false, the aircraft will be considered active. Depending on its precise location on ground, you could see some damping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartWithGearDown_MetaData[] = {
		{ "Category", "Initial Conditions|Aircraft" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gear Position on play\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gear Position on play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartWithEngineRunning_MetaData[] = {
		{ "Category", "Initial Conditions|Aircraft" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Engine state at start\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Engine state at start" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlapPositionAtStart_MetaData[] = {
		{ "Category", "Initial Conditions|Aircraft" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Flaps Normalized Position on play [0..1]\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flaps Normalized Position on play [0..1]" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCalibratedAirSpeedKts_MetaData[] = {
		{ "Category", "Initial Conditions|Aircraft" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calibrated Air Speed wanted on Play. (In knots)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calibrated Air Speed wanted on Play. (In knots)" },
#endif
		{ "UIMax", "600" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindHeading_MetaData[] = {
		{ "Category", "Initial Conditions|Atmosphere" },
		{ "ClampMax", "360" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Wind Heading Degrees\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wind Heading Degrees" },
#endif
		{ "UIMax", "360" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindIntensityKts_MetaData[] = {
		{ "Category", "Initial Conditions|Atmosphere" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Wind Intensity knots\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wind Intensity knots" },
#endif
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlFDMAtmosphere_MetaData[] = {
		{ "Category", "Initial Conditions|Atmosphere" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If false, the atmosphere model will be the one from JSBSim. \n\x09 * If true, you can define it with custom properties\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false, the atmosphere model will be the one from JSBSim.\nIf true, you can define it with custom properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureCelsius_MetaData[] = {
		{ "Category", "Initial Conditions|Atmosphere" },
		{ "ClampMin", "-273" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Atmosphere temperature around the Aircraft (Celsius)\n\x09 */" },
#endif
		{ "EditCondition", "ControlFDMAtmosphere" },
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Atmosphere temperature around the Aircraft (Celsius)" },
#endif
		{ "UIMin", "-80" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressureSeaLevelhPa_MetaData[] = {
		{ "Category", "Initial Conditions|Atmosphere" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Atmosphere pressure at Sea level (HectoPascals)\n\x09*/" },
#endif
		{ "EditCondition", "ControlFDMAtmosphere" },
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Atmosphere pressure at Sea level (HectoPascals)" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tanks_MetaData[] = {
		{ "Category", "Model|Tanks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tanks Properties \n" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tanks Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuelFreeze_MetaData[] = {
		{ "Category", "Model|Tanks" },
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gears_MetaData[] = {
		{ "Category", "Model|Gears" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gear Properties \n" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
		{ "TitleProperty", "{Name} Bogey = {IsBogey}" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gear Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineCommands_MetaData[] = {
		{ "Category", "Model|Engines" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Engine Properties \n" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Engine Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineStates_MetaData[] = {
		{ "Category", "Model|Engines" },
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flight Control Commands and State\n" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flight Control Commands and State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AircraftState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AircraftCrashed_MetaData[] = {
		{ "Category", "JSBSimMovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoReferencingSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/JSBSimMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AircraftModel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructuralFrameOrigin;
	static void NewProp_DrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AGLThresholdMeters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CGLocalPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EPLocalPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VRPLocalPosition;
	static void NewProp_StartOnGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartOnGround;
	static void NewProp_bStartWithGearDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartWithGearDown;
	static void NewProp_bStartWithEngineRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartWithEngineRunning;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FlapPositionAtStart;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InitialCalibratedAirSpeedKts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WindHeading;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WindIntensityKts;
	static void NewProp_ControlFDMAtmosphere_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ControlFDMAtmosphere;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TemperatureCelsius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PressureSeaLevelhPa;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tanks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tanks;
	static void NewProp_FuelFreeze_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FuelFreeze;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gears_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Gears;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EngineCommands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EngineCommands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EngineStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EngineStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Commands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AircraftState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AircraftCrashed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeoReferencingSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsole, "CommandConsole" }, // 373519603
		{ &Z_Construct_UFunction_UJSBSimMovementComponent_CommandConsoleBatch, "CommandConsoleBatch" }, // 662685133
		{ &Z_Construct_UFunction_UJSBSimMovementComponent_LoadAircraft, "LoadAircraft" }, // 3999360309
		{ &Z_Construct_UFunction_UJSBSimMovementComponent_PropertyManagerNode, "PropertyManagerNode" }, // 1194851642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJSBSimMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_AircraftModel = { "AircraftModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, AircraftModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AircraftModel_MetaData), NewProp_AircraftModel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_StructuralFrameOrigin = { "StructuralFrameOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, StructuralFrameOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructuralFrameOrigin_MetaData), NewProp_StructuralFrameOrigin_MetaData) };
void Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_DrawDebug_SetBit(void* Obj)
{
	((UJSBSimMovementComponent*)Obj)->DrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJSBSimMovementComponent), &Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebug_MetaData), NewProp_DrawDebug_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_AGLThresholdMeters = { "AGLThresholdMeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, AGLThresholdMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AGLThresholdMeters_MetaData), NewProp_AGLThresholdMeters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_CGLocalPosition = { "CGLocalPosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, CGLocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CGLocalPosition_MetaData), NewProp_CGLocalPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_EPLocalPosition = { "EPLocalPosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, EPLocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EPLocalPosition_MetaData), NewProp_EPLocalPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_VRPLocalPosition = { "VRPLocalPosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, VRPLocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRPLocalPosition_MetaData), NewProp_VRPLocalPosition_MetaData) };
void Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_StartOnGround_SetBit(void* Obj)
{
	((UJSBSimMovementComponent*)Obj)->StartOnGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_StartOnGround = { "StartOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJSBSimMovementComponent), &Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_StartOnGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOnGround_MetaData), NewProp_StartOnGround_MetaData) };
void Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_bStartWithGearDown_SetBit(void* Obj)
{
	((UJSBSimMovementComponent*)Obj)->bStartWithGearDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_bStartWithGearDown = { "bStartWithGearDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJSBSimMovementComponent), &Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_bStartWithGearDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartWithGearDown_MetaData), NewProp_bStartWithGearDown_MetaData) };
void Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_bStartWithEngineRunning_SetBit(void* Obj)
{
	((UJSBSimMovementComponent*)Obj)->bStartWithEngineRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_bStartWithEngineRunning = { "bStartWithEngineRunning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJSBSimMovementComponent), &Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_bStartWithEngineRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartWithEngineRunning_MetaData), NewProp_bStartWithEngineRunning_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_FlapPositionAtStart = { "FlapPositionAtStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, FlapPositionAtStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlapPositionAtStart_MetaData), NewProp_FlapPositionAtStart_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_InitialCalibratedAirSpeedKts = { "InitialCalibratedAirSpeedKts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, InitialCalibratedAirSpeedKts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCalibratedAirSpeedKts_MetaData), NewProp_InitialCalibratedAirSpeedKts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_WindHeading = { "WindHeading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, WindHeading), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindHeading_MetaData), NewProp_WindHeading_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_WindIntensityKts = { "WindIntensityKts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, WindIntensityKts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindIntensityKts_MetaData), NewProp_WindIntensityKts_MetaData) };
void Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_ControlFDMAtmosphere_SetBit(void* Obj)
{
	((UJSBSimMovementComponent*)Obj)->ControlFDMAtmosphere = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_ControlFDMAtmosphere = { "ControlFDMAtmosphere", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJSBSimMovementComponent), &Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_ControlFDMAtmosphere_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlFDMAtmosphere_MetaData), NewProp_ControlFDMAtmosphere_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_TemperatureCelsius = { "TemperatureCelsius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, TemperatureCelsius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemperatureCelsius_MetaData), NewProp_TemperatureCelsius_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_PressureSeaLevelhPa = { "PressureSeaLevelhPa", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, PressureSeaLevelhPa), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressureSeaLevelhPa_MetaData), NewProp_PressureSeaLevelhPa_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_Tanks_Inner = { "Tanks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTank, METADATA_PARAMS(0, nullptr) }; // 3305194172
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_Tanks = { "Tanks", nullptr, (EPropertyFlags)0x0010000000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, Tanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tanks_MetaData), NewProp_Tanks_MetaData) }; // 3305194172
void Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_FuelFreeze_SetBit(void* Obj)
{
	((UJSBSimMovementComponent*)Obj)->FuelFreeze = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_FuelFreeze = { "FuelFreeze", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJSBSimMovementComponent), &Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_FuelFreeze_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuelFreeze_MetaData), NewProp_FuelFreeze_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_Gears_Inner = { "Gears", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGear, METADATA_PARAMS(0, nullptr) }; // 3668295248
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_Gears = { "Gears", nullptr, (EPropertyFlags)0x0010000000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, Gears), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gears_MetaData), NewProp_Gears_MetaData) }; // 3668295248
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_EngineCommands_Inner = { "EngineCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEngineCommand, METADATA_PARAMS(0, nullptr) }; // 3751187837
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_EngineCommands = { "EngineCommands", nullptr, (EPropertyFlags)0x0010000000002055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, EngineCommands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineCommands_MetaData), NewProp_EngineCommands_MetaData) }; // 3751187837
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_EngineStates_Inner = { "EngineStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEngineState, METADATA_PARAMS(0, nullptr) }; // 687671692
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_EngineStates = { "EngineStates", nullptr, (EPropertyFlags)0x0010000000002055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, EngineStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineStates_MetaData), NewProp_EngineStates_MetaData) }; // 687671692
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, Commands), Z_Construct_UScriptStruct_FFlightControlCommands, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Commands_MetaData), NewProp_Commands_MetaData) }; // 4262359474
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_AircraftState = { "AircraftState", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, AircraftState), Z_Construct_UScriptStruct_FAircraftState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AircraftState_MetaData), NewProp_AircraftState_MetaData) }; // 4213251432
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_AircraftCrashed = { "AircraftCrashed", nullptr, (EPropertyFlags)0x00100000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, AircraftCrashed), Z_Construct_UDelegateFunction_JSBSimFlightDynamicsModel_DelegateAircraftCrashed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AircraftCrashed_MetaData), NewProp_AircraftCrashed_MetaData) }; // 3840772272
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_GeoReferencingSystem = { "GeoReferencingSystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJSBSimMovementComponent, GeoReferencingSystem), Z_Construct_UClass_AGeoReferencingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoReferencingSystem_MetaData), NewProp_GeoReferencingSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJSBSimMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_AircraftModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_StructuralFrameOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_AGLThresholdMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_CGLocalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_EPLocalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_VRPLocalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_StartOnGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_bStartWithGearDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_bStartWithEngineRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_FlapPositionAtStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_InitialCalibratedAirSpeedKts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_WindHeading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_WindIntensityKts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_ControlFDMAtmosphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_TemperatureCelsius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_PressureSeaLevelhPa,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_Tanks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_Tanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_FuelFreeze,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_Gears_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_Gears,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_EngineCommands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_EngineCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_EngineStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_EngineStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_Commands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_AircraftState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_AircraftCrashed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJSBSimMovementComponent_Statics::NewProp_GeoReferencingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJSBSimMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJSBSimMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJSBSimMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJSBSimMovementComponent_Statics::ClassParams = {
	&UJSBSimMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UJSBSimMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UJSBSimMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJSBSimMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UJSBSimMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJSBSimMovementComponent()
{
	if (!Z_Registration_Info_UClass_UJSBSimMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJSBSimMovementComponent.OuterSingleton, Z_Construct_UClass_UJSBSimMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJSBSimMovementComponent.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UClass* StaticClass<UJSBSimMovementComponent>()
{
	return UJSBSimMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJSBSimMovementComponent);
UJSBSimMovementComponent::~UJSBSimMovementComponent() {}
// End Class UJSBSimMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_henri_Documents_UE_jsbsim_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJSBSimMovementComponent, UJSBSimMovementComponent::StaticClass, TEXT("UJSBSimMovementComponent"), &Z_Registration_Info_UClass_UJSBSimMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJSBSimMovementComponent), 2409844257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_henri_Documents_UE_jsbsim_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_4189893502(TEXT("/Script/JSBSimFlightDynamicsModel"),
	Z_CompiledInDeferFile_FID_Users_henri_Documents_UE_jsbsim_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_henri_Documents_UE_jsbsim_UnrealEngine_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
