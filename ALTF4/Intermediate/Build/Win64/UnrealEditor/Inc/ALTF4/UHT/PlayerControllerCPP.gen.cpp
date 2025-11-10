// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALTF4/Public/PlayerControllerCPP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerControllerCPP() {}

// Begin Cross Module References
ALTF4_API UClass* Z_Construct_UClass_APlayerControllerCPP();
ALTF4_API UClass* Z_Construct_UClass_APlayerControllerCPP_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_ALTF4();
// End Cross Module References

// Begin Class APlayerControllerCPP
void APlayerControllerCPP::StaticRegisterNativesAPlayerControllerCPP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerControllerCPP);
UClass* Z_Construct_UClass_APlayerControllerCPP_NoRegister()
{
	return APlayerControllerCPP::StaticClass();
}
struct Z_Construct_UClass_APlayerControllerCPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerControllerCPP.h" },
		{ "ModuleRelativePath", "Public/PlayerControllerCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[] = {
		{ "Category", "PlayerControllerCPP" },
		{ "ModuleRelativePath", "Public/PlayerControllerCPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_defaultMappingContext_MetaData[] = {
		{ "Category", "PlayerControllerCPP" },
		{ "ModuleRelativePath", "Public/PlayerControllerCPP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_defaultMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerCPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerCPP_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerCPP, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerCPP_Statics::NewProp_defaultMappingContext = { "defaultMappingContext", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerCPP, defaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_defaultMappingContext_MetaData), NewProp_defaultMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerControllerCPP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerCPP_Statics::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerCPP_Statics::NewProp_defaultMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerCPP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerControllerCPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ALTF4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerCPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerControllerCPP_Statics::ClassParams = {
	&APlayerControllerCPP::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerControllerCPP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerCPP_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerCPP_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerControllerCPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerControllerCPP()
{
	if (!Z_Registration_Info_UClass_APlayerControllerCPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerControllerCPP.OuterSingleton, Z_Construct_UClass_APlayerControllerCPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerControllerCPP.OuterSingleton;
}
template<> ALTF4_API UClass* StaticClass<APlayerControllerCPP>()
{
	return APlayerControllerCPP::StaticClass();
}
APlayerControllerCPP::APlayerControllerCPP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerCPP);
APlayerControllerCPP::~APlayerControllerCPP() {}
// End Class APlayerControllerCPP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerControllerCPP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerControllerCPP, APlayerControllerCPP::StaticClass, TEXT("APlayerControllerCPP"), &Z_Registration_Info_UClass_APlayerControllerCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerControllerCPP), 4221870841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerControllerCPP_h_934751476(TEXT("/Script/ALTF4"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerControllerCPP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerControllerCPP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
