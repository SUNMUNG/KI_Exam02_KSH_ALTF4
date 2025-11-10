// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALTF4/Public/PlayerCPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCPP() {}

// Begin Cross Module References
ALTF4_API UClass* Z_Construct_UClass_APlayerCPP();
ALTF4_API UClass* Z_Construct_UClass_APlayerCPP_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_ALTF4();
// End Cross Module References

// Begin Class APlayerCPP
void APlayerCPP::StaticRegisterNativesAPlayerCPP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCPP);
UClass* Z_Construct_UClass_APlayerCPP_NoRegister()
{
	return APlayerCPP::StaticClass();
}
struct Z_Construct_UClass_APlayerCPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCPP.h" },
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "PlayerCPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "PlayerCPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowPoint_MetaData[] = {
		{ "Category", "PlayerCPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrainBag_MetaData[] = {
		{ "Category", "PlayerCPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chicken_MetaData[] = {
		{ "Category", "PlayerCPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "Category", "PlayerCPP" },
		{ "ModuleRelativePath", "Public/PlayerCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrainBag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Chicken;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCPP_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCPP, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCPP_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCPP, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCamera_MetaData), NewProp_PlayerCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCPP_Statics::NewProp_ThrowPoint = { "ThrowPoint", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCPP, ThrowPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowPoint_MetaData), NewProp_ThrowPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCPP_Statics::NewProp_GrainBag = { "GrainBag", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCPP, GrainBag), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrainBag_MetaData), NewProp_GrainBag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCPP_Statics::NewProp_Chicken = { "Chicken", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCPP, Chicken), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chicken_MetaData), NewProp_Chicken_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCPP_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCPP, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCPP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCPP_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCPP_Statics::NewProp_PlayerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCPP_Statics::NewProp_ThrowPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCPP_Statics::NewProp_GrainBag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCPP_Statics::NewProp_Chicken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCPP_Statics::NewProp_IA_Move,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCPP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ALTF4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCPP_Statics::ClassParams = {
	&APlayerCPP::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerCPP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCPP_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCPP_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCPP()
{
	if (!Z_Registration_Info_UClass_APlayerCPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCPP.OuterSingleton, Z_Construct_UClass_APlayerCPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCPP.OuterSingleton;
}
template<> ALTF4_API UClass* StaticClass<APlayerCPP>()
{
	return APlayerCPP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCPP);
APlayerCPP::~APlayerCPP() {}
// End Class APlayerCPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerCPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCPP, APlayerCPP::StaticClass, TEXT("APlayerCPP"), &Z_Registration_Info_UClass_APlayerCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCPP), 547927038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerCPP_h_2090468781(TEXT("/Script/ALTF4"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerCPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerCPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
