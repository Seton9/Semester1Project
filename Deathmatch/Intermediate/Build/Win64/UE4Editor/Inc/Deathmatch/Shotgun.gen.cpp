// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Deathmatch/Public/Shotgun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgun() {}
// Cross Module References
	DEATHMATCH_API UClass* Z_Construct_UClass_AShotgun_NoRegister();
	DEATHMATCH_API UClass* Z_Construct_UClass_AShotgun();
	DEATHMATCH_API UClass* Z_Construct_UClass_AWeapons();
	UPackage* Z_Construct_UPackage__Script_Deathmatch();
// End Cross Module References
	void AShotgun::StaticRegisterNativesAShotgun()
	{
	}
	UClass* Z_Construct_UClass_AShotgun_NoRegister()
	{
		return AShotgun::StaticClass();
	}
	struct Z_Construct_UClass_AShotgun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShotgun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapons,
		(UObject* (*)())Z_Construct_UPackage__Script_Deathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shotgun.h" },
		{ "ModuleRelativePath", "Public/Shotgun.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShotgun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShotgun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShotgun_Statics::ClassParams = {
		&AShotgun::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AShotgun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShotgun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShotgun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShotgun, 2206534104);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShotgun(Z_Construct_UClass_AShotgun, &AShotgun::StaticClass, TEXT("/Script/Deathmatch"), TEXT("AShotgun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShotgun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
