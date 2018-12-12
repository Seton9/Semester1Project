// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Deathmatch/Public/LaunchPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchPad() {}
// Cross Module References
	DEATHMATCH_API UClass* Z_Construct_UClass_ALaunchPad_NoRegister();
	DEATHMATCH_API UClass* Z_Construct_UClass_ALaunchPad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Deathmatch();
	DEATHMATCH_API UFunction* Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALaunchPad::StaticRegisterNativesALaunchPad()
	{
		UClass* Class = ALaunchPad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverlapLaunchPad", &ALaunchPad::execOverlapLaunchPad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics
	{
		struct LaunchPad_eventOverlapLaunchPad_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(LaunchPad_eventOverlapLaunchPad_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LaunchPad_eventOverlapLaunchPad_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LaunchPad_eventOverlapLaunchPad_Parms), &Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LaunchPad_eventOverlapLaunchPad_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LaunchPad_eventOverlapLaunchPad_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LaunchPad_eventOverlapLaunchPad_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LaunchPad_eventOverlapLaunchPad_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LaunchPad.h" },
		{ "ToolTip", "Marked with ufunction to bind to overlap event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaunchPad, "OverlapLaunchPad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(LaunchPad_eventOverlapLaunchPad_Parms), Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALaunchPad_NoRegister()
	{
		return ALaunchPad::StaticClass();
	}
	struct Z_Construct_UClass_ALaunchPad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateLaunchPadEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivateLaunchPadEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchPitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaunchPad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Deathmatch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALaunchPad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad, "OverlapLaunchPad" }, // 3213740776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LaunchPad.h" },
		{ "ModuleRelativePath", "Public/LaunchPad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_ActivateLaunchPadEffect_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "Public/LaunchPad.h" },
		{ "ToolTip", "Effect to play when activating launch pad" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_ActivateLaunchPadEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ActivateLaunchPadEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(ALaunchPad, ActivateLaunchPadEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_ActivateLaunchPadEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_ActivateLaunchPadEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "Public/LaunchPad.h" },
		{ "ToolTip", "Angle added on top of actor rotation to launch the character.\n              Marked 'EditInstanceOnly' to allow in-level editing of this property per instance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_LaunchPitchAngle = { UE4CodeGen_Private::EPropertyClass::Float, "LaunchPitchAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000801, 1, nullptr, STRUCT_OFFSET(ALaunchPad, LaunchPitchAngle), METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_LaunchPitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_LaunchStrength_MetaData[] = {
		{ "Category", "LaunchPad" },
		{ "ModuleRelativePath", "Public/LaunchPad.h" },
		{ "ToolTip", "Total impulse added to the character on overlap\n              Marked 'EditInstanceOnly' to allow in-level editing of this property per instance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_LaunchStrength = { UE4CodeGen_Private::EPropertyClass::Float, "LaunchStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000801, 1, nullptr, STRUCT_OFFSET(ALaunchPad, LaunchStrength), METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_LaunchStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_LaunchStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_OverlapComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LaunchPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_OverlapComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ALaunchPad, OverlapComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_OverlapComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_OverlapComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPad_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LaunchPad.h" },
		{ "ToolTip", "Called every frame\nvirtual void Tick(float DeltaTime) override;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaunchPad_Statics::NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ALaunchPad, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaunchPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_ActivateLaunchPadEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_LaunchPitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_LaunchStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_OverlapComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPad_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaunchPad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaunchPad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaunchPad_Statics::ClassParams = {
		&ALaunchPad::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALaunchPad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALaunchPad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALaunchPad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaunchPad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaunchPad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaunchPad, 3405637793);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaunchPad(Z_Construct_UClass_ALaunchPad, &ALaunchPad::StaticClass, TEXT("/Script/Deathmatch"), TEXT("ALaunchPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaunchPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
