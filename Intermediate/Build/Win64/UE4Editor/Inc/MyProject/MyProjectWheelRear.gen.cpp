// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyProjectWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectWheelRear() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UMyProjectWheelRear_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyProjectWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UMyProjectWheelRear::StaticRegisterNativesUMyProjectWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UMyProjectWheelRear_NoRegister()
	{
		return UMyProjectWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UMyProjectWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyProjectWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyProjectWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyProjectWheelRear.h" },
		{ "ModuleRelativePath", "MyProjectWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyProjectWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyProjectWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyProjectWheelRear_Statics::ClassParams = {
		&UMyProjectWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyProjectWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyProjectWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyProjectWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyProjectWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyProjectWheelRear, 3505100760);
	template<> MYPROJECT_API UClass* StaticClass<UMyProjectWheelRear>()
	{
		return UMyProjectWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyProjectWheelRear(Z_Construct_UClass_UMyProjectWheelRear, &UMyProjectWheelRear::StaticClass, TEXT("/Script/MyProject"), TEXT("UMyProjectWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyProjectWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
