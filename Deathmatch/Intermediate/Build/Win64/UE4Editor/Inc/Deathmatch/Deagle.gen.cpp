// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Deathmatch/Public/Deagle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeagle() {}
// Cross Module References
	DEATHMATCH_API UClass* Z_Construct_UClass_ADeagle_NoRegister();
	DEATHMATCH_API UClass* Z_Construct_UClass_ADeagle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Deathmatch();
// End Cross Module References
	void ADeagle::StaticRegisterNativesADeagle()
	{
	}
	UClass* Z_Construct_UClass_ADeagle_NoRegister()
	{
		return ADeagle::StaticClass();
	}
	struct Z_Construct_UClass_ADeagle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeagle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Deathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeagle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Deagle.h" },
		{ "ModuleRelativePath", "Public/Deagle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeagle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeagle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADeagle_Statics::ClassParams = {
		&ADeagle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADeagle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADeagle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeagle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADeagle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADeagle, 136159588);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeagle(Z_Construct_UClass_ADeagle, &ADeagle::StaticClass, TEXT("/Script/Deathmatch"), TEXT("ADeagle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeagle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
