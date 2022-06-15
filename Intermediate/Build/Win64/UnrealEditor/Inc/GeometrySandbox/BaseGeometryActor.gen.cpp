// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/Public/BaseGeometryActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGeometryActor() {}
// Cross Module References
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ABaseGeometryActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABaseGeometryActor::StaticRegisterNativesABaseGeometryActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGeometryActor);
	UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister()
	{
		return ABaseGeometryActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGeometryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponsNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KillsNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KillsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasWeapon_MetaData[];
#endif
		static void NewProp_HasWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGeometryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGeometryActor.h" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "BaseGeometryActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, Amplitude), METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, Frequency), METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_WeaponsNum_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_WeaponsNum = { "WeaponsNum", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, WeaponsNum), METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_WeaponsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_WeaponsNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_KillsNum_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_KillsNum = { "KillsNum", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, KillsNum), METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_KillsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_KillsNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseGeometryActor, Health), METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	void Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((ABaseGeometryActor*)Obj)->isDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseGeometryActor), &Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	void Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon_SetBit(void* Obj)
	{
		((ABaseGeometryActor*)Obj)->HasWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon = { "HasWeapon", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseGeometryActor), &Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_WeaponsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_KillsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_isDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGeometryActor_Statics::NewProp_HasWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGeometryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGeometryActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGeometryActor_Statics::ClassParams = {
		&ABaseGeometryActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGeometryActor()
	{
		if (!Z_Registration_Info_UClass_ABaseGeometryActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGeometryActor.OuterSingleton, Z_Construct_UClass_ABaseGeometryActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseGeometryActor.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<ABaseGeometryActor>()
	{
		return ABaseGeometryActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGeometryActor);
	struct Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGeometryActor, ABaseGeometryActor::StaticClass, TEXT("ABaseGeometryActor"), &Z_Registration_Info_UClass_ABaseGeometryActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGeometryActor), 3691860941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_4051735775(TEXT("/Script/GeometrySandbox"),
		Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
