// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALTF4/Public/PlayerAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}

// Begin Cross Module References
ALTF4_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
ALTF4_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ALTF4();
// End Cross Module References

// Begin Class UPlayerAnimInstance
void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInstance);
UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
{
	return UPlayerAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPlayerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isInAir_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static void NewProp_isInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isInAir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPawn_MetaData), NewProp_OwnerPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_isInAir_SetBit(void* Obj)
{
	((UPlayerAnimInstance*)Obj)->isInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_isInAir = { "isInAir", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_isInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isInAir_MetaData), NewProp_isInAir_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_OwnerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_isInAir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ALTF4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
	&UPlayerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton;
}
template<> ALTF4_API UClass* StaticClass<UPlayerAnimInstance>()
{
	return UPlayerAnimInstance::StaticClass();
}
UPlayerAnimInstance::UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInstance);
UPlayerAnimInstance::~UPlayerAnimInstance() {}
// End Class UPlayerAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 3668075374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerAnimInstance_h_1695518766(TEXT("/Script/ALTF4"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KI_Exam02_KSH_ALTF4_ALTF4_Source_ALTF4_Public_PlayerAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
