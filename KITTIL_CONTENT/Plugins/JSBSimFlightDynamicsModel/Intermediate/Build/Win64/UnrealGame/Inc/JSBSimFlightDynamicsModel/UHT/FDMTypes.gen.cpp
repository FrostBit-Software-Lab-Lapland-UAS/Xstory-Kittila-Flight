// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JSBSimFlightDynamicsModel/Public/FDMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFDMTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
JSBSIMFLIGHTDYNAMICSMODEL_API UEnum* Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType();
JSBSIMFLIGHTDYNAMICSMODEL_API UEnum* Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FAircraftState();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FEngineCommand();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FEngineState();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FFlightControlCommands();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FGear();
JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FTank();
UPackage* Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel();
// End Cross Module References

// Begin ScriptStruct FTank
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Tank;
class UScriptStruct* FTank::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Tank.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Tank.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTank, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("Tank"));
	}
	return Z_Registration_Info_UScriptStruct_Tank.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FTank>()
{
	return FTank::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuelDensityPoundsPerGallon_MetaData[] = {
		{ "Category", "Tank" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editable in Initial Conditions\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editable in Initial Conditions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentGallons_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapacityGallons_MetaData[] = {
		{ "Category", "Tank" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic Properties\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillPercentage_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureCelcius_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FuelDensityPoundsPerGallon;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ContentGallons;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CapacityGallons;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FillPercentage;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TemperatureCelcius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTank>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTank_Statics::NewProp_FuelDensityPoundsPerGallon = { "FuelDensityPoundsPerGallon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTank, FuelDensityPoundsPerGallon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuelDensityPoundsPerGallon_MetaData), NewProp_FuelDensityPoundsPerGallon_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTank_Statics::NewProp_ContentGallons = { "ContentGallons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTank, ContentGallons), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentGallons_MetaData), NewProp_ContentGallons_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTank_Statics::NewProp_CapacityGallons = { "CapacityGallons", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTank, CapacityGallons), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapacityGallons_MetaData), NewProp_CapacityGallons_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTank_Statics::NewProp_FillPercentage = { "FillPercentage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTank, FillPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillPercentage_MetaData), NewProp_FillPercentage_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTank_Statics::NewProp_TemperatureCelcius = { "TemperatureCelcius", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTank, TemperatureCelcius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemperatureCelcius_MetaData), NewProp_TemperatureCelcius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTank_Statics::NewProp_FuelDensityPoundsPerGallon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTank_Statics::NewProp_ContentGallons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTank_Statics::NewProp_CapacityGallons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTank_Statics::NewProp_FillPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTank_Statics::NewProp_TemperatureCelcius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTank_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTank_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
	nullptr,
	&NewStructOps,
	"Tank",
	Z_Construct_UScriptStruct_FTank_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTank_Statics::PropPointers),
	sizeof(FTank),
	alignof(FTank),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTank_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTank_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTank()
{
	if (!Z_Registration_Info_UScriptStruct_Tank.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Tank.InnerSingleton, Z_Construct_UScriptStruct_FTank_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Tank.InnerSingleton;
}
// End ScriptStruct FTank

// Begin ScriptStruct FGear
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Gear;
class UScriptStruct* FGear::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Gear.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Gear.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGear, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("Gear"));
	}
	return Z_Registration_Info_UScriptStruct_Gear.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FGear>()
{
	return FGear::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedPosition_MetaData[] = {
		{ "Category", "Gear" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * 1 = Down, 0 = up\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1 = Down, 0 = up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFrontBogey_MetaData[] = {
		{ "Category", "Gear" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n    * Doesn't exist in JSBSim, but need to be set in Editor in case you want to do separate gear animations \n    */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Doesn't exist in JSBSim, but need to be set in Editor in case you want to do separate gear animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRearBogey_MetaData[] = {
		{ "Category", "Gear" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n    * Doesn't exist in JSBSim, but need to be set in Editor in case you want to do separate gear animations\n    */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Doesn't exist in JSBSim, but need to be set in Editor in case you want to do separate gear animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Gear" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic Properties from JSBSim - Read Only\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic Properties from JSBSim - Read Only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsBogey_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasWeightOnWheel_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelRollLinearVelocityMetersPerSec_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsUp_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDown_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "Category", "Gear" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NormalizedPosition;
	static void NewProp_IsFrontBogey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFrontBogey;
	static void NewProp_IsRearBogey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRearBogey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_IsBogey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBogey;
	static void NewProp_HasWeightOnWheel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasWeightOnWheel;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WheelRollLinearVelocityMetersPerSec;
	static void NewProp_IsUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsUp;
	static void NewProp_IsDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGear>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_NormalizedPosition = { "NormalizedPosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, NormalizedPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedPosition_MetaData), NewProp_NormalizedPosition_MetaData) };
void Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsFrontBogey_SetBit(void* Obj)
{
	((FGear*)Obj)->IsFrontBogey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsFrontBogey = { "IsFrontBogey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsFrontBogey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFrontBogey_MetaData), NewProp_IsFrontBogey_MetaData) };
void Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsRearBogey_SetBit(void* Obj)
{
	((FGear*)Obj)->IsRearBogey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsRearBogey = { "IsRearBogey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsRearBogey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRearBogey_MetaData), NewProp_IsRearBogey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsBogey_SetBit(void* Obj)
{
	((FGear*)Obj)->IsBogey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsBogey = { "IsBogey", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsBogey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsBogey_MetaData), NewProp_IsBogey_MetaData) };
void Z_Construct_UScriptStruct_FGear_Statics::NewProp_HasWeightOnWheel_SetBit(void* Obj)
{
	((FGear*)Obj)->HasWeightOnWheel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_HasWeightOnWheel = { "HasWeightOnWheel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_HasWeightOnWheel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasWeightOnWheel_MetaData), NewProp_HasWeightOnWheel_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_WheelRollLinearVelocityMetersPerSec = { "WheelRollLinearVelocityMetersPerSec", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, WheelRollLinearVelocityMetersPerSec), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelRollLinearVelocityMetersPerSec_MetaData), NewProp_WheelRollLinearVelocityMetersPerSec_MetaData) };
void Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsUp_SetBit(void* Obj)
{
	((FGear*)Obj)->IsUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsUp = { "IsUp", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsUp_MetaData), NewProp_IsUp_MetaData) };
void Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsDown_SetBit(void* Obj)
{
	((FGear*)Obj)->IsDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsDown = { "IsDown", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGear), &Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDown_MetaData), NewProp_IsDown_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeLocation_MetaData), NewProp_RelativeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGear_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGear, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_NormalizedPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsFrontBogey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsRearBogey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsBogey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_HasWeightOnWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_WheelRollLinearVelocityMetersPerSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_IsDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_RelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGear_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGear_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
	nullptr,
	&NewStructOps,
	"Gear",
	Z_Construct_UScriptStruct_FGear_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::PropPointers),
	sizeof(FGear),
	alignof(FGear),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGear_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGear_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGear()
{
	if (!Z_Registration_Info_UScriptStruct_Gear.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Gear.InnerSingleton, Z_Construct_UScriptStruct_FGear_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Gear.InnerSingleton;
}
// End ScriptStruct FGear

// Begin Enum EEngineType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEngineType;
static UEnum* EEngineType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEngineType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEngineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("EEngineType"));
	}
	return Z_Registration_Info_UEnum_EEngineType.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UEnum* StaticEnum<EEngineType>()
{
	return EEngineType_StaticEnum();
}
struct Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Electric.Name", "EEngineType::Electric" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
		{ "Piston.Name", "EEngineType::Piston" },
		{ "Rocket.Name", "EEngineType::Rocket" },
		{ "Turbine.Name", "EEngineType::Turbine" },
		{ "Turboprop.Name", "EEngineType::Turboprop" },
		{ "Unknown.Name", "EEngineType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEngineType::Unknown", (int64)EEngineType::Unknown },
		{ "EEngineType::Rocket", (int64)EEngineType::Rocket },
		{ "EEngineType::Piston", (int64)EEngineType::Piston },
		{ "EEngineType::Turbine", (int64)EEngineType::Turbine },
		{ "EEngineType::Turboprop", (int64)EEngineType::Turboprop },
		{ "EEngineType::Electric", (int64)EEngineType::Electric },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
	nullptr,
	"EEngineType",
	"EEngineType",
	Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType()
{
	if (!Z_Registration_Info_UEnum_EEngineType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEngineType.InnerSingleton, Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEngineType.InnerSingleton;
}
// End Enum EEngineType

// Begin Enum EMagnetosMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMagnetosMode;
static UEnum* EMagnetosMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMagnetosMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMagnetosMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("EMagnetosMode"));
	}
	return Z_Registration_Info_UEnum_EMagnetosMode.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UEnum* StaticEnum<EMagnetosMode>()
{
	return EMagnetosMode_StaticEnum();
}
struct Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Name", "EMagnetosMode::Both" },
		{ "Left.Name", "EMagnetosMode::Left" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
		{ "Off.Name", "EMagnetosMode::Off" },
		{ "Right.Name", "EMagnetosMode::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMagnetosMode::Off", (int64)EMagnetosMode::Off },
		{ "EMagnetosMode::Left", (int64)EMagnetosMode::Left },
		{ "EMagnetosMode::Right", (int64)EMagnetosMode::Right },
		{ "EMagnetosMode::Both", (int64)EMagnetosMode::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
	nullptr,
	"EMagnetosMode",
	"EMagnetosMode",
	Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode()
{
	if (!Z_Registration_Info_UEnum_EMagnetosMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMagnetosMode.InnerSingleton, Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMagnetosMode.InnerSingleton;
}
// End Enum EMagnetosMode

// Begin ScriptStruct FEngineCommand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineCommand;
class UScriptStruct* FEngineCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineCommand, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("EngineCommand"));
	}
	return Z_Registration_Info_UScriptStruct_EngineCommand.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FEngineCommand>()
{
	return FEngineCommand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEngineCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mixture_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Starter_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Running_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropellerAdvance_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropellerFeather_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnetos_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Piston Engine Commands\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Piston Engine Commands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Augmentation_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine Engine Commands\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine Engine Commands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Injection_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ignition_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reverse_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine & TurboPropeller Engine Commands\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine & TurboPropeller Engine Commands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutOff_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorPower_MetaData[] = {
		{ "Category", "EngineCommand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TurboPropeller Engine Commands\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TurboPropeller Engine Commands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "EngineCommand" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Throttle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Mixture;
	static void NewProp_Starter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Starter;
	static void NewProp_Running_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Running;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PropellerAdvance;
	static void NewProp_PropellerFeather_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PropellerFeather;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Magnetos_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Magnetos;
	static void NewProp_Augmentation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Augmentation;
	static void NewProp_Injection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Injection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ignition;
	static void NewProp_Reverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Reverse;
	static void NewProp_CutOff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CutOff;
	static void NewProp_GeneratorPower_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GeneratorPower;
	static void NewProp_Condition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineCommand, Throttle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Throttle_MetaData), NewProp_Throttle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Mixture = { "Mixture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineCommand, Mixture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mixture_MetaData), NewProp_Mixture_MetaData) };
void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Starter_SetBit(void* Obj)
{
	((FEngineCommand*)Obj)->Starter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Starter = { "Starter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Starter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Starter_MetaData), NewProp_Starter_MetaData) };
void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Running_SetBit(void* Obj)
{
	((FEngineCommand*)Obj)->Running = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Running = { "Running", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Running_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Running_MetaData), NewProp_Running_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerAdvance = { "PropellerAdvance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineCommand, PropellerAdvance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropellerAdvance_MetaData), NewProp_PropellerAdvance_MetaData) };
void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerFeather_SetBit(void* Obj)
{
	((FEngineCommand*)Obj)->PropellerFeather = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerFeather = { "PropellerFeather", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerFeather_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropellerFeather_MetaData), NewProp_PropellerFeather_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Magnetos_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Magnetos = { "Magnetos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineCommand, Magnetos), Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnetos_MetaData), NewProp_Magnetos_MetaData) }; // 620667625
void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Augmentation_SetBit(void* Obj)
{
	((FEngineCommand*)Obj)->Augmentation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Augmentation = { "Augmentation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Augmentation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Augmentation_MetaData), NewProp_Augmentation_MetaData) };
void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Injection_SetBit(void* Obj)
{
	((FEngineCommand*)Obj)->Injection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Injection = { "Injection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Injection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Injection_MetaData), NewProp_Injection_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Ignition = { "Ignition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineCommand, Ignition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ignition_MetaData), NewProp_Ignition_MetaData) };
void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Reverse_SetBit(void* Obj)
{
	((FEngineCommand*)Obj)->Reverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Reverse = { "Reverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Reverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reverse_MetaData), NewProp_Reverse_MetaData) };
void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_CutOff_SetBit(void* Obj)
{
	((FEngineCommand*)Obj)->CutOff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_CutOff = { "CutOff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_CutOff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutOff_MetaData), NewProp_CutOff_MetaData) };
void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_GeneratorPower_SetBit(void* Obj)
{
	((FEngineCommand*)Obj)->GeneratorPower = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_GeneratorPower = { "GeneratorPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_GeneratorPower_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorPower_MetaData), NewProp_GeneratorPower_MetaData) };
void Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Condition_SetBit(void* Obj)
{
	((FEngineCommand*)Obj)->Condition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineCommand), &Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Throttle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Mixture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Starter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Running,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerAdvance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_PropellerFeather,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Magnetos_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Magnetos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Augmentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Injection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Ignition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Reverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_CutOff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_GeneratorPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineCommand_Statics::NewProp_Condition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
	nullptr,
	&NewStructOps,
	"EngineCommand",
	Z_Construct_UScriptStruct_FEngineCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::PropPointers),
	sizeof(FEngineCommand),
	alignof(FEngineCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEngineCommand()
{
	if (!Z_Registration_Info_UScriptStruct_EngineCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineCommand.InnerSingleton, Z_Construct_UScriptStruct_FEngineCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EngineCommand.InnerSingleton;
}
// End ScriptStruct FEngineCommand

// Begin ScriptStruct FEngineState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineState;
class UScriptStruct* FEngineState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineState, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("EngineState"));
	}
	return Z_Registration_Info_UScriptStruct_EngineState.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FEngineState>()
{
	return FEngineState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEngineState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineType_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Starter_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Common Engine States\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Common Engine States" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Running_MetaData[] = {
		{ "Category", "EngineState" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thrust_MetaData[] = {
		{ "Category", "EngineState" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineRPM_MetaData[] = {
		{ "Category", "EngineState" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_N1_MetaData[] = {
		{ "Category", "EngineState" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_N2_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Augmentation_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reversed_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Injection_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine + TurboProp\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine + TurboProp" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutOff_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ignition_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine + TurboProp\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine + TurboProp" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorPower_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turbine + \n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turbine +" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TurboProp\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TurboProp" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnetos_MetaData[] = {
		{ "Category", "EngineState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TurboProp\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TurboProp" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EngineType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EngineType;
	static void NewProp_Starter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Starter;
	static void NewProp_Running_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Running;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Thrust;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EngineRPM;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_N1;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_N2;
	static void NewProp_Augmentation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Augmentation;
	static void NewProp_Reversed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Reversed;
	static void NewProp_Injection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Injection;
	static void NewProp_CutOff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CutOff;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ignition;
	static void NewProp_GeneratorPower_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GeneratorPower;
	static void NewProp_Condition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Magnetos_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Magnetos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineType = { "EngineType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, EngineType), Z_Construct_UEnum_JSBSimFlightDynamicsModel_EEngineType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineType_MetaData), NewProp_EngineType_MetaData) }; // 2603465560
void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Starter_SetBit(void* Obj)
{
	((FEngineState*)Obj)->Starter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Starter = { "Starter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Starter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Starter_MetaData), NewProp_Starter_MetaData) };
void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Running_SetBit(void* Obj)
{
	((FEngineState*)Obj)->Running = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Running = { "Running", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Running_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Running_MetaData), NewProp_Running_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Thrust = { "Thrust", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, Thrust), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thrust_MetaData), NewProp_Thrust_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineRPM = { "EngineRPM", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, EngineRPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineRPM_MetaData), NewProp_EngineRPM_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N1 = { "N1", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, N1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_N1_MetaData), NewProp_N1_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N2 = { "N2", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, N2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_N2_MetaData), NewProp_N2_MetaData) };
void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Augmentation_SetBit(void* Obj)
{
	((FEngineState*)Obj)->Augmentation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Augmentation = { "Augmentation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Augmentation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Augmentation_MetaData), NewProp_Augmentation_MetaData) };
void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Reversed_SetBit(void* Obj)
{
	((FEngineState*)Obj)->Reversed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Reversed = { "Reversed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Reversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reversed_MetaData), NewProp_Reversed_MetaData) };
void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Injection_SetBit(void* Obj)
{
	((FEngineState*)Obj)->Injection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Injection = { "Injection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Injection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Injection_MetaData), NewProp_Injection_MetaData) };
void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_CutOff_SetBit(void* Obj)
{
	((FEngineState*)Obj)->CutOff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_CutOff = { "CutOff", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_CutOff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutOff_MetaData), NewProp_CutOff_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Ignition = { "Ignition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, Ignition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ignition_MetaData), NewProp_Ignition_MetaData) };
void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_GeneratorPower_SetBit(void* Obj)
{
	((FEngineState*)Obj)->GeneratorPower = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_GeneratorPower = { "GeneratorPower", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_GeneratorPower_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorPower_MetaData), NewProp_GeneratorPower_MetaData) };
void Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Condition_SetBit(void* Obj)
{
	((FEngineState*)Obj)->Condition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineState), &Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Magnetos_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Magnetos = { "Magnetos", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineState, Magnetos), Z_Construct_UEnum_JSBSimFlightDynamicsModel_EMagnetosMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnetos_MetaData), NewProp_Magnetos_MetaData) }; // 620667625
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Starter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Running,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Thrust,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_EngineRPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_N2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Augmentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Reversed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Injection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_CutOff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Ignition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_GeneratorPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Magnetos_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineState_Statics::NewProp_Magnetos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
	nullptr,
	&NewStructOps,
	"EngineState",
	Z_Construct_UScriptStruct_FEngineState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::PropPointers),
	sizeof(FEngineState),
	alignof(FEngineState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEngineState()
{
	if (!Z_Registration_Info_UScriptStruct_EngineState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineState.InnerSingleton, Z_Construct_UScriptStruct_FEngineState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EngineState.InnerSingleton;
}
// End ScriptStruct FEngineState

// Begin ScriptStruct FFlightControlCommands
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlightControlCommands;
class UScriptStruct* FFlightControlCommands::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlightControlCommands.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlightControlCommands.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlightControlCommands, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("FlightControlCommands"));
	}
	return Z_Registration_Info_UScriptStruct_FlightControlCommands.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FFlightControlCommands>()
{
	return FFlightControlCommands::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlightControlCommands_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Aileron_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elevator_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rudder_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawTrim_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchTrim_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollTrim_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steer_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [-1..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [-1..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftBrake_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightBrake_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterBrake_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParkingBrake_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearDown_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flap_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBrake_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spoiler_MetaData[] = {
		{ "Category", "Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Normalized [0..1] value expected */" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized [0..1] value expected" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Aileron;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Elevator;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Rudder;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_YawTrim;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PitchTrim;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RollTrim;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Steer;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LeftBrake;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RightBrake;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CenterBrake;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ParkingBrake;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GearDown;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Flap;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SpeedBrake;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Spoiler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlightControlCommands>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Aileron = { "Aileron", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Aileron), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Aileron_MetaData), NewProp_Aileron_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Elevator = { "Elevator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Elevator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elevator_MetaData), NewProp_Elevator_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Rudder = { "Rudder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Rudder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rudder_MetaData), NewProp_Rudder_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_YawTrim = { "YawTrim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, YawTrim), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawTrim_MetaData), NewProp_YawTrim_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_PitchTrim = { "PitchTrim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, PitchTrim), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchTrim_MetaData), NewProp_PitchTrim_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RollTrim = { "RollTrim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, RollTrim), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollTrim_MetaData), NewProp_RollTrim_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Steer = { "Steer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Steer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steer_MetaData), NewProp_Steer_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_LeftBrake = { "LeftBrake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, LeftBrake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftBrake_MetaData), NewProp_LeftBrake_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RightBrake = { "RightBrake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, RightBrake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightBrake_MetaData), NewProp_RightBrake_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_CenterBrake = { "CenterBrake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, CenterBrake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterBrake_MetaData), NewProp_CenterBrake_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_ParkingBrake = { "ParkingBrake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, ParkingBrake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParkingBrake_MetaData), NewProp_ParkingBrake_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_GearDown = { "GearDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, GearDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearDown_MetaData), NewProp_GearDown_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Flap = { "Flap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Flap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flap_MetaData), NewProp_Flap_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_SpeedBrake = { "SpeedBrake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, SpeedBrake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedBrake_MetaData), NewProp_SpeedBrake_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Spoiler = { "Spoiler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlightControlCommands, Spoiler), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spoiler_MetaData), NewProp_Spoiler_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlightControlCommands_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Aileron,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Elevator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Rudder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_YawTrim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_PitchTrim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RollTrim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Steer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_LeftBrake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_RightBrake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_CenterBrake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_ParkingBrake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_GearDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Flap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_SpeedBrake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewProp_Spoiler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlightControlCommands_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
	nullptr,
	&NewStructOps,
	"FlightControlCommands",
	Z_Construct_UScriptStruct_FFlightControlCommands_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::PropPointers),
	sizeof(FFlightControlCommands),
	alignof(FFlightControlCommands),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlightControlCommands_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlightControlCommands_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlightControlCommands()
{
	if (!Z_Registration_Info_UScriptStruct_FlightControlCommands.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlightControlCommands.InnerSingleton, Z_Construct_UScriptStruct_FFlightControlCommands_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlightControlCommands.InnerSingleton;
}
// End ScriptStruct FFlightControlCommands

// Begin ScriptStruct FAircraftState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AircraftState;
class UScriptStruct* FAircraftState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AircraftState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AircraftState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAircraftState, (UObject*)Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel(), TEXT("AircraftState"));
	}
	return Z_Registration_Info_UScriptStruct_AircraftState.OuterSingleton;
}
template<> JSBSIMFLIGHTDYNAMICSMODEL_API UScriptStruct* StaticStruct<FAircraftState>()
{
	return FAircraftState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAircraftState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElevatorPosition_MetaData[] = {
		{ "Category", "Articulations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Articulated Parts State in degrees\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Articulated Parts State in degrees" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftAileronPosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightAileronPosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RudderPosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlapPosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBrakePosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpoilersPosition_MetaData[] = {
		{ "Category", "Articulations" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalibratedAirSpeedKts_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeedKts_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalVelocityKts_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityNEDfps_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeASLFt_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeAGLFt_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeRateFtps_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StallWarning_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ECEFLocation_MetaData[] = {
		{ "Category", "Transformation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transformation\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transformation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalEulerAngles_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EulerRates_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UEForwardHorizontal_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Crashed_MetaData[] = {
		{ "Category", "Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Misc\n" },
#endif
		{ "ModuleRelativePath", "Public/FDMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Misc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ElevatorPosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LeftAileronPosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RightAileronPosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RudderPosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FlapPosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SpeedBrakePosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SpoilersPosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CalibratedAirSpeedKts;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GroundSpeedKts;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TotalVelocityKts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityNEDfps;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AltitudeASLFt;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AltitudeAGLFt;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AltitudeRateFtps;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StallWarning;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ECEFLocation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Latitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Longitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalEulerAngles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EulerRates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UEForwardHorizontal;
	static void NewProp_Crashed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Crashed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAircraftState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ElevatorPosition = { "ElevatorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, ElevatorPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElevatorPosition_MetaData), NewProp_ElevatorPosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LeftAileronPosition = { "LeftAileronPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, LeftAileronPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftAileronPosition_MetaData), NewProp_LeftAileronPosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RightAileronPosition = { "RightAileronPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, RightAileronPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightAileronPosition_MetaData), NewProp_RightAileronPosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RudderPosition = { "RudderPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, RudderPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RudderPosition_MetaData), NewProp_RudderPosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_FlapPosition = { "FlapPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, FlapPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlapPosition_MetaData), NewProp_FlapPosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpeedBrakePosition = { "SpeedBrakePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, SpeedBrakePosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedBrakePosition_MetaData), NewProp_SpeedBrakePosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpoilersPosition = { "SpoilersPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, SpoilersPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpoilersPosition_MetaData), NewProp_SpoilersPosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_CalibratedAirSpeedKts = { "CalibratedAirSpeedKts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, CalibratedAirSpeedKts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalibratedAirSpeedKts_MetaData), NewProp_CalibratedAirSpeedKts_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_GroundSpeedKts = { "GroundSpeedKts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, GroundSpeedKts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeedKts_MetaData), NewProp_GroundSpeedKts_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_TotalVelocityKts = { "TotalVelocityKts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, TotalVelocityKts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalVelocityKts_MetaData), NewProp_TotalVelocityKts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_VelocityNEDfps = { "VelocityNEDfps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, VelocityNEDfps), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityNEDfps_MetaData), NewProp_VelocityNEDfps_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeASLFt = { "AltitudeASLFt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, AltitudeASLFt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltitudeASLFt_MetaData), NewProp_AltitudeASLFt_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeAGLFt = { "AltitudeAGLFt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, AltitudeAGLFt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltitudeAGLFt_MetaData), NewProp_AltitudeAGLFt_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeRateFtps = { "AltitudeRateFtps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, AltitudeRateFtps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltitudeRateFtps_MetaData), NewProp_AltitudeRateFtps_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_StallWarning = { "StallWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, StallWarning), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StallWarning_MetaData), NewProp_StallWarning_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ECEFLocation = { "ECEFLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, ECEFLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ECEFLocation_MetaData), NewProp_ECEFLocation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, Latitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Latitude_MetaData), NewProp_Latitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, Longitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Longitude_MetaData), NewProp_Longitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LocalEulerAngles = { "LocalEulerAngles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, LocalEulerAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalEulerAngles_MetaData), NewProp_LocalEulerAngles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_EulerRates = { "EulerRates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, EulerRates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EulerRates_MetaData), NewProp_EulerRates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_UEForwardHorizontal = { "UEForwardHorizontal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAircraftState, UEForwardHorizontal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UEForwardHorizontal_MetaData), NewProp_UEForwardHorizontal_MetaData) };
void Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Crashed_SetBit(void* Obj)
{
	((FAircraftState*)Obj)->Crashed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Crashed = { "Crashed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAircraftState), &Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Crashed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Crashed_MetaData), NewProp_Crashed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAircraftState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ElevatorPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LeftAileronPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RightAileronPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_RudderPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_FlapPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpeedBrakePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_SpoilersPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_CalibratedAirSpeedKts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_GroundSpeedKts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_TotalVelocityKts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_VelocityNEDfps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeASLFt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeAGLFt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_AltitudeRateFtps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_StallWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_ECEFLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Latitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Longitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_LocalEulerAngles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_EulerRates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_UEForwardHorizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAircraftState_Statics::NewProp_Crashed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAircraftState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JSBSimFlightDynamicsModel,
	nullptr,
	&NewStructOps,
	"AircraftState",
	Z_Construct_UScriptStruct_FAircraftState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::PropPointers),
	sizeof(FAircraftState),
	alignof(FAircraftState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAircraftState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAircraftState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAircraftState()
{
	if (!Z_Registration_Info_UScriptStruct_AircraftState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AircraftState.InnerSingleton, Z_Construct_UScriptStruct_FAircraftState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AircraftState.InnerSingleton;
}
// End ScriptStruct FAircraftState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEngineType_StaticEnum, TEXT("EEngineType"), &Z_Registration_Info_UEnum_EEngineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2603465560U) },
		{ EMagnetosMode_StaticEnum, TEXT("EMagnetosMode"), &Z_Registration_Info_UEnum_EMagnetosMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 620667625U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTank::StaticStruct, Z_Construct_UScriptStruct_FTank_Statics::NewStructOps, TEXT("Tank"), &Z_Registration_Info_UScriptStruct_Tank, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTank), 3305194172U) },
		{ FGear::StaticStruct, Z_Construct_UScriptStruct_FGear_Statics::NewStructOps, TEXT("Gear"), &Z_Registration_Info_UScriptStruct_Gear, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGear), 3668295248U) },
		{ FEngineCommand::StaticStruct, Z_Construct_UScriptStruct_FEngineCommand_Statics::NewStructOps, TEXT("EngineCommand"), &Z_Registration_Info_UScriptStruct_EngineCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineCommand), 3751187837U) },
		{ FEngineState::StaticStruct, Z_Construct_UScriptStruct_FEngineState_Statics::NewStructOps, TEXT("EngineState"), &Z_Registration_Info_UScriptStruct_EngineState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineState), 687671692U) },
		{ FFlightControlCommands::StaticStruct, Z_Construct_UScriptStruct_FFlightControlCommands_Statics::NewStructOps, TEXT("FlightControlCommands"), &Z_Registration_Info_UScriptStruct_FlightControlCommands, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlightControlCommands), 4262359474U) },
		{ FAircraftState::StaticStruct, Z_Construct_UScriptStruct_FAircraftState_Statics::NewStructOps, TEXT("AircraftState"), &Z_Registration_Info_UScriptStruct_AircraftState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAircraftState), 4213251432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_2403513271(TEXT("/Script/JSBSimFlightDynamicsModel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_FDMTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
