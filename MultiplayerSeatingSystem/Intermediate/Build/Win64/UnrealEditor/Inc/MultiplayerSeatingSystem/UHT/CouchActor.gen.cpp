// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerSeatingSystem/Public/Actors/CouchActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCouchActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MULTIPLAYERSEATINGSYSTEM_API UClass* Z_Construct_UClass_ACouchActor();
MULTIPLAYERSEATINGSYSTEM_API UClass* Z_Construct_UClass_ACouchActor_NoRegister();
MULTIPLAYERSEATINGSYSTEM_API UClass* Z_Construct_UClass_USeatableObjectComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerSeatingSystem();
// End Cross Module References

// Begin Class ACouchActor
void ACouchActor::StaticRegisterNativesACouchActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACouchActor);
UClass* Z_Construct_UClass_ACouchActor_NoRegister()
{
	return ACouchActor::StaticClass();
}
struct Z_Construct_UClass_ACouchActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/CouchActor.h" },
		{ "ModuleRelativePath", "Public/Actors/CouchActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CouchMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Couch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The visual mesh of the couch \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CouchActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The visual mesh of the couch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeatingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Seating" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CouchActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeatArrows_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Seating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// We store pointers here to ensure the Editor \"sees\" them for selection/adjustment\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CouchActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We store pointers here to ensure the Editor \"sees\" them for selection/adjustment" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CouchMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeatingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeatArrows_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SeatArrows;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACouchActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACouchActor_Statics::NewProp_CouchMesh = { "CouchMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACouchActor, CouchMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CouchMesh_MetaData), NewProp_CouchMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACouchActor_Statics::NewProp_SeatingComponent = { "SeatingComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACouchActor, SeatingComponent), Z_Construct_UClass_USeatableObjectComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeatingComponent_MetaData), NewProp_SeatingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACouchActor_Statics::NewProp_SeatArrows_Inner = { "SeatArrows", nullptr, (EPropertyFlags)0x01040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACouchActor_Statics::NewProp_SeatArrows = { "SeatArrows", nullptr, (EPropertyFlags)0x012408800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACouchActor, SeatArrows), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeatArrows_MetaData), NewProp_SeatArrows_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACouchActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACouchActor_Statics::NewProp_CouchMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACouchActor_Statics::NewProp_SeatingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACouchActor_Statics::NewProp_SeatArrows_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACouchActor_Statics::NewProp_SeatArrows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACouchActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACouchActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSeatingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACouchActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACouchActor_Statics::ClassParams = {
	&ACouchActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACouchActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACouchActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACouchActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACouchActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACouchActor()
{
	if (!Z_Registration_Info_UClass_ACouchActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACouchActor.OuterSingleton, Z_Construct_UClass_ACouchActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACouchActor.OuterSingleton;
}
template<> MULTIPLAYERSEATINGSYSTEM_API UClass* StaticClass<ACouchActor>()
{
	return ACouchActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACouchActor);
ACouchActor::~ACouchActor() {}
// End Class ACouchActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Actors_CouchActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACouchActor, ACouchActor::StaticClass, TEXT("ACouchActor"), &Z_Registration_Info_UClass_ACouchActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACouchActor), 583117516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Actors_CouchActor_h_794054816(TEXT("/Script/MultiplayerSeatingSystem"),
	Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Actors_CouchActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Actors_CouchActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
