// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Deathmatch/Public/Weapons.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapons() {}
// Cross Module References
	DEATHMATCH_API UClass* Z_Construct_UClass_AWeapons_NoRegister();
	DEATHMATCH_API UClass* Z_Construct_UClass_AWeapons();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Deathmatch();
// End Cross Module References
	void AWeapons::StaticRegisterNativesAWeapons()
	{
	}
	UClass* Z_Construct_UClass_AWeapons_NoRegister()
	{
		return AWeapons::StaticClass();
	}
	struct Z_Construct_UClass_AWeapons_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapons_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Deathmatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons.h" },
		{ "ModuleRelativePath", "Public/Weapons.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapons_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapons>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapons_Statics::ClassParams = {
		&AWeapons::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapons()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapons_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapons, 1972454103);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapons(Z_Construct_UClass_AWeapons, &AWeapons::StaticClass, TEXT("/Script/Deathmatch"), TEXT("AWeapons"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapons);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
