// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyProjectWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectWheelFront() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UMyProjectWheelFront_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyProjectWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UMyProjectWheelFront::StaticRegisterNativesUMyProjectWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UMyProjectWheelFront_NoRegister()
	{
		return UMyProjectWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UMyProjectWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyProjectWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyProjectWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyProjectWheelFront.h" },
		{ "ModuleRelativePath", "MyProjectWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyProjectWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyProjectWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyProjectWheelFront_Statics::ClassParams = {
		&UMyProjectWheelFront::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyProjectWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyProjectWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyProjectWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyProjectWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyProjectWheelFront, 3248812138);
	template<> MYPROJECT_API UClass* StaticClass<UMyProjectWheelFront>()
	{
		return UMyProjectWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyProjectWheelFront(Z_Construct_UClass_UMyProjectWheelFront, &UMyProjectWheelFront::StaticClass, TEXT("/Script/MyProject"), TEXT("UMyProjectWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyProjectWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
