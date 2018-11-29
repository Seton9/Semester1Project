// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Deathmatch/DeathmatchGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathmatchGameModeBase() {}
// Cross Module References
	DEATHMATCH_API UClass* Z_Construct_UClass_ADeathmatchGameModeBase_NoRegister();
	DEATHMATCH_API UClass* Z_Construct_UClass_ADeathmatchGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Deathmatch();
// End Cross Module References
	void ADeathmatchGameModeBase::StaticRegisterNativesADeathmatchGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADeathmatchGameModeBase_NoRegister()
	{
		return ADeathmatchGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADeathmatchGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeathmatchGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Deathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathmatchGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DeathmatchGameModeBase.h" },
		{ "ModuleRelativePath", "DeathmatchGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeathmatchGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeathmatchGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADeathmatchGameModeBase_Statics::ClassParams = {
		&ADeathmatchGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADeathmatchGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADeathmatchGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeathmatchGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADeathmatchGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADeathmatchGameModeBase, 2198600960);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeathmatchGameModeBase(Z_Construct_UClass_ADeathmatchGameModeBase, &ADeathmatchGameModeBase::StaticClass, TEXT("/Script/Deathmatch"), TEXT("ADeathmatchGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeathmatchGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
