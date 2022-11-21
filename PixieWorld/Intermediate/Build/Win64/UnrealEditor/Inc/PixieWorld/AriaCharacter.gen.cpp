// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixieWorld/AriaCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAriaCharacter() {}
// Cross Module References
	PIXIEWORLD_API UClass* Z_Construct_UClass_AAriaCharacter_NoRegister();
	PIXIEWORLD_API UClass* Z_Construct_UClass_AAriaCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PixieWorld();
// End Cross Module References
	void AAriaCharacter::StaticRegisterNativesAAriaCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAriaCharacter);
	UClass* Z_Construct_UClass_AAriaCharacter_NoRegister()
	{
		return AAriaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAriaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAriaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PixieWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAriaCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AriaCharacter.h" },
		{ "ModuleRelativePath", "AriaCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAriaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAriaCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAriaCharacter_Statics::ClassParams = {
		&AAriaCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAriaCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAriaCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAriaCharacter()
	{
		if (!Z_Registration_Info_UClass_AAriaCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAriaCharacter.OuterSingleton, Z_Construct_UClass_AAriaCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAriaCharacter.OuterSingleton;
	}
	template<> PIXIEWORLD_API UClass* StaticClass<AAriaCharacter>()
	{
		return AAriaCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAriaCharacter);
	struct Z_CompiledInDeferFile_FID_PixieWorld_Source_PixieWorld_AriaCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PixieWorld_Source_PixieWorld_AriaCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAriaCharacter, AAriaCharacter::StaticClass, TEXT("AAriaCharacter"), &Z_Registration_Info_UClass_AAriaCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAriaCharacter), 2240401573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PixieWorld_Source_PixieWorld_AriaCharacter_h_3201697459(TEXT("/Script/PixieWorld"),
		Z_CompiledInDeferFile_FID_PixieWorld_Source_PixieWorld_AriaCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PixieWorld_Source_PixieWorld_AriaCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
