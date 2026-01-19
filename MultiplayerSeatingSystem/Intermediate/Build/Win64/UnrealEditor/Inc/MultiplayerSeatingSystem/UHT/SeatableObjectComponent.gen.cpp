// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerSeatingSystem/Public/Components/SeatableObjectComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeatableObjectComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
MULTIPLAYERSEATINGSYSTEM_API UClass* Z_Construct_UClass_USeatableObjectComponent();
MULTIPLAYERSEATINGSYSTEM_API UClass* Z_Construct_UClass_USeatableObjectComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerSeatingSystem();
// End Cross Module References

// Begin Class USeatableObjectComponent Function OnOccupantDestroyed
struct Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics
{
	struct SeatableObjectComponent_eventOnOccupantDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal Cleanup callback */" },
#endif
		{ "ModuleRelativePath", "Public/Components/SeatableObjectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal Cleanup callback" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeatableObjectComponent_eventOnOccupantDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeatableObjectComponent, nullptr, "OnOccupantDestroyed", nullptr, nullptr, Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::SeatableObjectComponent_eventOnOccupantDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::SeatableObjectComponent_eventOnOccupantDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USeatableObjectComponent::execOnOccupantDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOccupantDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class USeatableObjectComponent Function OnOccupantDestroyed

// Begin Class USeatableObjectComponent Function Server_InitializeSeatsManually
struct SeatableObjectComponent_eventServer_InitializeSeatsManually_Parms
{
	TArray<USceneComponent*> InSeatComponents;
};
static FName NAME_USeatableObjectComponent_Server_InitializeSeatsManually = FName(TEXT("Server_InitializeSeatsManually"));
void USeatableObjectComponent::Server_InitializeSeatsManually(TArray<USceneComponent*> const& InSeatComponents)
{
	SeatableObjectComponent_eventServer_InitializeSeatsManually_Parms Parms;
	Parms.InSeatComponents=InSeatComponents;
	ProcessEvent(FindFunctionChecked(NAME_USeatableObjectComponent_Server_InitializeSeatsManually),&Parms);
}
struct Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SeatableObjectComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSeatComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSeatComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSeatComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::NewProp_InSeatComponents_Inner = { "InSeatComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::NewProp_InSeatComponents = { "InSeatComponents", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeatableObjectComponent_eventServer_InitializeSeatsManually_Parms, InSeatComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSeatComponents_MetaData), NewProp_InSeatComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::NewProp_InSeatComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::NewProp_InSeatComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeatableObjectComponent, nullptr, "Server_InitializeSeatsManually", nullptr, nullptr, Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::PropPointers), sizeof(SeatableObjectComponent_eventServer_InitializeSeatsManually_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::Function_MetaDataParams) };
static_assert(sizeof(SeatableObjectComponent_eventServer_InitializeSeatsManually_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USeatableObjectComponent::execServer_InitializeSeatsManually)
{
	P_GET_TARRAY(USceneComponent*,Z_Param_InSeatComponents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_InitializeSeatsManually_Implementation(Z_Param_InSeatComponents);
	P_NATIVE_END;
}
// End Class USeatableObjectComponent Function Server_InitializeSeatsManually

// Begin Class USeatableObjectComponent
void USeatableObjectComponent::StaticRegisterNativesUSeatableObjectComponent()
{
	UClass* Class = USeatableObjectComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOccupantDestroyed", &USeatableObjectComponent::execOnOccupantDestroyed },
		{ "Server_InitializeSeatsManually", &USeatableObjectComponent::execServer_InitializeSeatsManually },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeatableObjectComponent);
UClass* Z_Construct_UClass_USeatableObjectComponent_NoRegister()
{
	return USeatableObjectComponent::StaticClass();
}
struct Z_Construct_UClass_USeatableObjectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SeatableObjectComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SeatableObjectComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Occupants_MetaData[] = {
		{ "Category", "Seating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Replicated occupancy - Tracks which Character is in which slot */" },
#endif
		{ "ModuleRelativePath", "Public/Components/SeatableObjectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated occupancy - Tracks which Character is in which slot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeatComponents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Physical seat transforms. Private to ensure logic goes through GetSeatComponent */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SeatableObjectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physical seat transforms. Private to ensure logic goes through GetSeatComponent" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Occupants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Occupants;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeatComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SeatComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USeatableObjectComponent_OnOccupantDestroyed, "OnOccupantDestroyed" }, // 4099918627
		{ &Z_Construct_UFunction_USeatableObjectComponent_Server_InitializeSeatsManually, "Server_InitializeSeatsManually" }, // 3865348004
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeatableObjectComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USeatableObjectComponent_Statics::NewProp_Occupants_Inner = { "Occupants", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USeatableObjectComponent_Statics::NewProp_Occupants = { "Occupants", nullptr, (EPropertyFlags)0x0124080000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USeatableObjectComponent, Occupants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Occupants_MetaData), NewProp_Occupants_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USeatableObjectComponent_Statics::NewProp_SeatComponents_Inner = { "SeatComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USeatableObjectComponent_Statics::NewProp_SeatComponents = { "SeatComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USeatableObjectComponent, SeatComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeatComponents_MetaData), NewProp_SeatComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USeatableObjectComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeatableObjectComponent_Statics::NewProp_Occupants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeatableObjectComponent_Statics::NewProp_Occupants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeatableObjectComponent_Statics::NewProp_SeatComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeatableObjectComponent_Statics::NewProp_SeatComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeatableObjectComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USeatableObjectComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSeatingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeatableObjectComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USeatableObjectComponent_Statics::ClassParams = {
	&USeatableObjectComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USeatableObjectComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USeatableObjectComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USeatableObjectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USeatableObjectComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USeatableObjectComponent()
{
	if (!Z_Registration_Info_UClass_USeatableObjectComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeatableObjectComponent.OuterSingleton, Z_Construct_UClass_USeatableObjectComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USeatableObjectComponent.OuterSingleton;
}
template<> MULTIPLAYERSEATINGSYSTEM_API UClass* StaticClass<USeatableObjectComponent>()
{
	return USeatableObjectComponent::StaticClass();
}
void USeatableObjectComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Occupants(TEXT("Occupants"));
	const bool bIsValid = true
		&& Name_Occupants == ClassReps[(int32)ENetFields_Private::Occupants].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USeatableObjectComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USeatableObjectComponent);
USeatableObjectComponent::~USeatableObjectComponent() {}
// End Class USeatableObjectComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USeatableObjectComponent, USeatableObjectComponent::StaticClass, TEXT("USeatableObjectComponent"), &Z_Registration_Info_UClass_USeatableObjectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeatableObjectComponent), 1815470654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_484346974(TEXT("/Script/MultiplayerSeatingSystem"),
	Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
