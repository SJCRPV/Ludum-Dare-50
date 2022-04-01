// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludum_Dare_50/Ludum_Dare_50GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLudum_Dare_50GameModeBase() {}
// Cross Module References
	LUDUM_DARE_50_API UClass* Z_Construct_UClass_ALudum_Dare_50GameModeBase_NoRegister();
	LUDUM_DARE_50_API UClass* Z_Construct_UClass_ALudum_Dare_50GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Ludum_Dare_50();
// End Cross Module References
	void ALudum_Dare_50GameModeBase::StaticRegisterNativesALudum_Dare_50GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALudum_Dare_50GameModeBase_NoRegister()
	{
		return ALudum_Dare_50GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALudum_Dare_50GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALudum_Dare_50GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Ludum_Dare_50,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALudum_Dare_50GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Ludum_Dare_50GameModeBase.h" },
		{ "ModuleRelativePath", "Ludum_Dare_50GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALudum_Dare_50GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALudum_Dare_50GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALudum_Dare_50GameModeBase_Statics::ClassParams = {
		&ALudum_Dare_50GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALudum_Dare_50GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALudum_Dare_50GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALudum_Dare_50GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALudum_Dare_50GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALudum_Dare_50GameModeBase, 3123634942);
	template<> LUDUM_DARE_50_API UClass* StaticClass<ALudum_Dare_50GameModeBase>()
	{
		return ALudum_Dare_50GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALudum_Dare_50GameModeBase(Z_Construct_UClass_ALudum_Dare_50GameModeBase, &ALudum_Dare_50GameModeBase::StaticClass, TEXT("/Script/Ludum_Dare_50"), TEXT("ALudum_Dare_50GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALudum_Dare_50GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
