// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JSBSimMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JSBSIMFLIGHTDYNAMICSMODEL_JSBSimMovementComponent_generated_h
#error "JSBSimMovementComponent.generated.h already included, missing '#pragma once' in JSBSimMovementComponent.h"
#endif
#define JSBSIMFLIGHTDYNAMICSMODEL_JSBSimMovementComponent_generated_h

#define FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_38_DELEGATE \
JSBSIMFLIGHTDYNAMICSMODEL_API void FDelegateAircraftCrashed_DelegateWrapper(const FMulticastScriptDelegate& DelegateAircraftCrashed);


#define FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCommandConsoleBatch); \
	DECLARE_FUNCTION(execCommandConsole); \
	DECLARE_FUNCTION(execPropertyManagerNode); \
	DECLARE_FUNCTION(execLoadAircraft);


#define FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJSBSimMovementComponent(); \
	friend struct Z_Construct_UClass_UJSBSimMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UJSBSimMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JSBSimFlightDynamicsModel"), NO_API) \
	DECLARE_SERIALIZER(UJSBSimMovementComponent)


#define FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJSBSimMovementComponent(UJSBSimMovementComponent&&); \
	UJSBSimMovementComponent(const UJSBSimMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJSBSimMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJSBSimMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJSBSimMovementComponent) \
	NO_API virtual ~UJSBSimMovementComponent();


#define FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_40_PROLOG
#define FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_43_INCLASS_NO_PURE_DECLS \
	FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JSBSIMFLIGHTDYNAMICSMODEL_API UClass* StaticClass<class UJSBSimMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kittil_Plugins_JSBSimFlightDynamicsModel_Source_JSBSimFlightDynamicsModel_Public_JSBSimMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
