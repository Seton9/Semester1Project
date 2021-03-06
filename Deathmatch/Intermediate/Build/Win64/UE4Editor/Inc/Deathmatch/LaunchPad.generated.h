// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DEATHMATCH_LaunchPad_generated_h
#error "LaunchPad.generated.h already included, missing '#pragma once' in LaunchPad.h"
#endif
#define DEATHMATCH_LaunchPad_generated_h

#define Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapLaunchPad) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverlapLaunchPad(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapLaunchPad) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverlapLaunchPad(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaunchPad(); \
	friend struct Z_Construct_UClass_ALaunchPad_Statics; \
public: \
	DECLARE_CLASS(ALaunchPad, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Deathmatch"), NO_API) \
	DECLARE_SERIALIZER(ALaunchPad)


#define Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALaunchPad(); \
	friend struct Z_Construct_UClass_ALaunchPad_Statics; \
public: \
	DECLARE_CLASS(ALaunchPad, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Deathmatch"), NO_API) \
	DECLARE_SERIALIZER(ALaunchPad)


#define Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALaunchPad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALaunchPad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaunchPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaunchPad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaunchPad(ALaunchPad&&); \
	NO_API ALaunchPad(const ALaunchPad&); \
public:


#define Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaunchPad(ALaunchPad&&); \
	NO_API ALaunchPad(const ALaunchPad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaunchPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaunchPad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaunchPad)


#define Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_PRIVATE_PROPERTY_OFFSET
#define Deathmatch_Source_Deathmatch_Public_LaunchPad_h_11_PROLOG
#define Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_PRIVATE_PROPERTY_OFFSET \
	Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_RPC_WRAPPERS \
	Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_INCLASS \
	Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_PRIVATE_PROPERTY_OFFSET \
	Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_INCLASS_NO_PURE_DECLS \
	Deathmatch_Source_Deathmatch_Public_LaunchPad_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Deathmatch_Source_Deathmatch_Public_LaunchPad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
