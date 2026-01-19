// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerSeatingSystem/Public/Components/CharacterSeatingComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSeatingComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MULTIPLAYERSEATINGSYSTEM_API UClass* Z_Construct_UClass_UCharacterSeatingComponent();
MULTIPLAYERSEATINGSYSTEM_API UClass* Z_Construct_UClass_UCharacterSeatingComponent_NoRegister();
MULTIPLAYERSEATINGSYSTEM_API UClass* Z_Construct_UClass_USeatingInteractionWidget_NoRegister();
MULTIPLAYERSEATINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature();
MULTIPLAYERSEATINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSittingState();
UPackage* Z_Construct_UPackage__Script_MultiplayerSeatingSystem();
// End Cross Module References

// Begin Delegate FOnHoverChanged
struct Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics
{
	struct _Script_MultiplayerSeatingSystem_eventOnHoverChanged_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for the UI to bind to\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for the UI to bind to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MultiplayerSeatingSystem_eventOnHoverChanged_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerSeatingSystem, nullptr, "OnHoverChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::_Script_MultiplayerSeatingSystem_eventOnHoverChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::_Script_MultiplayerSeatingSystem_eventOnHoverChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHoverChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHoverChanged, const FString& Message)
{
	struct _Script_MultiplayerSeatingSystem_eventOnHoverChanged_Parms
	{
		FString Message;
	};
	_Script_MultiplayerSeatingSystem_eventOnHoverChanged_Parms Parms;
	Parms.Message=Message;
	OnHoverChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHoverChanged

// Begin ScriptStruct FSittingState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SittingState;
class UScriptStruct* FSittingState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SittingState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SittingState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSittingState, (UObject*)Z_Construct_UPackage__Script_MultiplayerSeatingSystem(), TEXT("SittingState"));
	}
	return Z_Registration_Info_UScriptStruct_SittingState.OuterSingleton;
}
template<> MULTIPLAYERSEATINGSYSTEM_API UScriptStruct* StaticStruct<FSittingState>()
{
	return FSittingState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSittingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSeatable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSlotIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSitting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSeatable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSlotIndex;
	static void NewProp_bIsSitting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSitting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSittingState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSittingState_Statics::NewProp_CurrentSeatable = { "CurrentSeatable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSittingState, CurrentSeatable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSeatable_MetaData), NewProp_CurrentSeatable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSittingState_Statics::NewProp_CurrentSlotIndex = { "CurrentSlotIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSittingState, CurrentSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSlotIndex_MetaData), NewProp_CurrentSlotIndex_MetaData) };
void Z_Construct_UScriptStruct_FSittingState_Statics::NewProp_bIsSitting_SetBit(void* Obj)
{
	((FSittingState*)Obj)->bIsSitting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSittingState_Statics::NewProp_bIsSitting = { "bIsSitting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSittingState), &Z_Construct_UScriptStruct_FSittingState_Statics::NewProp_bIsSitting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSitting_MetaData), NewProp_bIsSitting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSittingState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSittingState_Statics::NewProp_CurrentSeatable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSittingState_Statics::NewProp_CurrentSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSittingState_Statics::NewProp_bIsSitting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSittingState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSittingState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSeatingSystem,
	nullptr,
	&NewStructOps,
	"SittingState",
	Z_Construct_UScriptStruct_FSittingState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSittingState_Statics::PropPointers),
	sizeof(FSittingState),
	alignof(FSittingState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSittingState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSittingState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSittingState()
{
	if (!Z_Registration_Info_UScriptStruct_SittingState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SittingState.InnerSingleton, Z_Construct_UScriptStruct_FSittingState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SittingState.InnerSingleton;
}
// End ScriptStruct FSittingState

// Begin Class UCharacterSeatingComponent Function Interact
struct Z_Construct_UFunction_UCharacterSeatingComponent_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Seating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** External API - Called by Input or UI */" },
#endif
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "External API - Called by Input or UI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSeatingComponent_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSeatingComponent, nullptr, "Interact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSeatingComponent_Interact_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterSeatingComponent_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSeatingComponent_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSeatingComponent::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact();
	P_NATIVE_END;
}
// End Class UCharacterSeatingComponent Function Interact

// Begin Class UCharacterSeatingComponent Function IsSitting
struct Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics
{
	struct CharacterSeatingComponent_eventIsSitting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Seating" },
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterSeatingComponent_eventIsSitting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterSeatingComponent_eventIsSitting_Parms), &Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSeatingComponent, nullptr, "IsSitting", nullptr, nullptr, Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::CharacterSeatingComponent_eventIsSitting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::CharacterSeatingComponent_eventIsSitting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSeatingComponent::execIsSitting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSitting();
	P_NATIVE_END;
}
// End Class UCharacterSeatingComponent Function IsSitting

// Begin Class UCharacterSeatingComponent Function OnRep_SittingState
struct Z_Construct_UFunction_UCharacterSeatingComponent_OnRep_SittingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSeatingComponent_OnRep_SittingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSeatingComponent, nullptr, "OnRep_SittingState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_OnRep_SittingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSeatingComponent_OnRep_SittingState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterSeatingComponent_OnRep_SittingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSeatingComponent_OnRep_SittingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSeatingComponent::execOnRep_SittingState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SittingState();
	P_NATIVE_END;
}
// End Class UCharacterSeatingComponent Function OnRep_SittingState

// Begin Class UCharacterSeatingComponent Function OnSeatableDestroyed
struct Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics
{
	struct CharacterSeatingComponent_eventOnSeatableDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Must be UFUNCTION to work as a dynamic delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Must be UFUNCTION to work as a dynamic delegate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSeatingComponent_eventOnSeatableDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSeatingComponent, nullptr, "OnSeatableDestroyed", nullptr, nullptr, Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::CharacterSeatingComponent_eventOnSeatableDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::CharacterSeatingComponent_eventOnSeatableDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSeatingComponent::execOnSeatableDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeatableDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class UCharacterSeatingComponent Function OnSeatableDestroyed

// Begin Class UCharacterSeatingComponent Function RequestSit
struct Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics
{
	struct CharacterSeatingComponent_eventRequestSit_Parms
	{
		AActor* TargetSeatable;
		int32 DesiredSlotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Seating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal Seating Logic */" },
#endif
		{ "CPP_Default_DesiredSlotIndex", "-1" },
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal Seating Logic" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSeatable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredSlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::NewProp_TargetSeatable = { "TargetSeatable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSeatingComponent_eventRequestSit_Parms, TargetSeatable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::NewProp_DesiredSlotIndex = { "DesiredSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSeatingComponent_eventRequestSit_Parms, DesiredSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::NewProp_TargetSeatable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::NewProp_DesiredSlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSeatingComponent, nullptr, "RequestSit", nullptr, nullptr, Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::CharacterSeatingComponent_eventRequestSit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::CharacterSeatingComponent_eventRequestSit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSeatingComponent::execRequestSit)
{
	P_GET_OBJECT(AActor,Z_Param_TargetSeatable);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestSit(Z_Param_TargetSeatable,Z_Param_DesiredSlotIndex);
	P_NATIVE_END;
}
// End Class UCharacterSeatingComponent Function RequestSit

// Begin Class UCharacterSeatingComponent Function RequestStand
struct Z_Construct_UFunction_UCharacterSeatingComponent_RequestStand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Seating" },
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSeatingComponent_RequestStand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSeatingComponent, nullptr, "RequestStand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_RequestStand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSeatingComponent_RequestStand_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterSeatingComponent_RequestStand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSeatingComponent_RequestStand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSeatingComponent::execRequestStand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestStand();
	P_NATIVE_END;
}
// End Class UCharacterSeatingComponent Function RequestStand

// Begin Class UCharacterSeatingComponent Function Server_RequestSit
struct CharacterSeatingComponent_eventServer_RequestSit_Parms
{
	AActor* TargetSeatable;
	int32 DesiredSlotIndex;
};
static FName NAME_UCharacterSeatingComponent_Server_RequestSit = FName(TEXT("Server_RequestSit"));
void UCharacterSeatingComponent::Server_RequestSit(AActor* TargetSeatable, int32 DesiredSlotIndex)
{
	CharacterSeatingComponent_eventServer_RequestSit_Parms Parms;
	Parms.TargetSeatable=TargetSeatable;
	Parms.DesiredSlotIndex=DesiredSlotIndex;
	ProcessEvent(FindFunctionChecked(NAME_UCharacterSeatingComponent_Server_RequestSit),&Parms);
}
struct Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSeatable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredSlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::NewProp_TargetSeatable = { "TargetSeatable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSeatingComponent_eventServer_RequestSit_Parms, TargetSeatable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::NewProp_DesiredSlotIndex = { "DesiredSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSeatingComponent_eventServer_RequestSit_Parms, DesiredSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::NewProp_TargetSeatable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::NewProp_DesiredSlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSeatingComponent, nullptr, "Server_RequestSit", nullptr, nullptr, Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::PropPointers), sizeof(CharacterSeatingComponent_eventServer_RequestSit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::Function_MetaDataParams) };
static_assert(sizeof(CharacterSeatingComponent_eventServer_RequestSit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSeatingComponent::execServer_RequestSit)
{
	P_GET_OBJECT(AActor,Z_Param_TargetSeatable);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_RequestSit_Validate(Z_Param_TargetSeatable,Z_Param_DesiredSlotIndex))
	{
		RPC_ValidateFailed(TEXT("Server_RequestSit_Validate"));
		return;
	}
	P_THIS->Server_RequestSit_Implementation(Z_Param_TargetSeatable,Z_Param_DesiredSlotIndex);
	P_NATIVE_END;
}
// End Class UCharacterSeatingComponent Function Server_RequestSit

// Begin Class UCharacterSeatingComponent Function Server_RequestStand
static FName NAME_UCharacterSeatingComponent_Server_RequestStand = FName(TEXT("Server_RequestStand"));
void UCharacterSeatingComponent::Server_RequestStand()
{
	ProcessEvent(FindFunctionChecked(NAME_UCharacterSeatingComponent_Server_RequestStand),NULL);
}
struct Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestStand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestStand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSeatingComponent, nullptr, "Server_RequestStand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestStand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestStand_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestStand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestStand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSeatingComponent::execServer_RequestStand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RequestStand_Implementation();
	P_NATIVE_END;
}
// End Class UCharacterSeatingComponent Function Server_RequestStand

// Begin Class UCharacterSeatingComponent
void UCharacterSeatingComponent::StaticRegisterNativesUCharacterSeatingComponent()
{
	UClass* Class = UCharacterSeatingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &UCharacterSeatingComponent::execInteract },
		{ "IsSitting", &UCharacterSeatingComponent::execIsSitting },
		{ "OnRep_SittingState", &UCharacterSeatingComponent::execOnRep_SittingState },
		{ "OnSeatableDestroyed", &UCharacterSeatingComponent::execOnSeatableDestroyed },
		{ "RequestSit", &UCharacterSeatingComponent::execRequestSit },
		{ "RequestStand", &UCharacterSeatingComponent::execRequestStand },
		{ "Server_RequestSit", &UCharacterSeatingComponent::execServer_RequestSit },
		{ "Server_RequestStand", &UCharacterSeatingComponent::execServer_RequestStand },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterSeatingComponent);
UClass* Z_Construct_UClass_UCharacterSeatingComponent_NoRegister()
{
	return UCharacterSeatingComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterSeatingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CharacterSeatingComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHoverChanged_MetaData[] = {
		{ "Category", "Seating|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for UI to bind to */" },
#endif
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for UI to bind to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptWidgetClass_MetaData[] = {
		{ "Category", "Seating|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Configuration variables - Protected so Blueprints can override defaults */" },
#endif
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration variables - Protected so Blueprints can override defaults" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcuppiedPromptMessage_MetaData[] = {
		{ "Category", "Seating|UI" },
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionPromptMessage_MetaData[] = {
		{ "Category", "Seating|UI" },
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceToSeat_MetaData[] = {
		{ "Category", "Seating" },
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SittingState_MetaData[] = {
		{ "Category", "Seating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Replicated state - Protected so subclasses can read state if needed */" },
#endif
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated state - Protected so subclasses can read state if needed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/CharacterSeatingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoverChanged;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PromptWidgetClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OcuppiedPromptMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InteractionPromptMessage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceToSeat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SittingState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterSeatingComponent_Interact, "Interact" }, // 699386190
		{ &Z_Construct_UFunction_UCharacterSeatingComponent_IsSitting, "IsSitting" }, // 2227058885
		{ &Z_Construct_UFunction_UCharacterSeatingComponent_OnRep_SittingState, "OnRep_SittingState" }, // 3661102963
		{ &Z_Construct_UFunction_UCharacterSeatingComponent_OnSeatableDestroyed, "OnSeatableDestroyed" }, // 441386247
		{ &Z_Construct_UFunction_UCharacterSeatingComponent_RequestSit, "RequestSit" }, // 3184222544
		{ &Z_Construct_UFunction_UCharacterSeatingComponent_RequestStand, "RequestStand" }, // 2902510968
		{ &Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestSit, "Server_RequestSit" }, // 2762557690
		{ &Z_Construct_UFunction_UCharacterSeatingComponent_Server_RequestStand, "Server_RequestStand" }, // 691643733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSeatingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_OnHoverChanged = { "OnHoverChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSeatingComponent, OnHoverChanged), Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHoverChanged_MetaData), NewProp_OnHoverChanged_MetaData) }; // 4083415598
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_PromptWidgetClass = { "PromptWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSeatingComponent, PromptWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USeatingInteractionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptWidgetClass_MetaData), NewProp_PromptWidgetClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_OcuppiedPromptMessage = { "OcuppiedPromptMessage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSeatingComponent, OcuppiedPromptMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcuppiedPromptMessage_MetaData), NewProp_OcuppiedPromptMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_InteractionPromptMessage = { "InteractionPromptMessage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSeatingComponent, InteractionPromptMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionPromptMessage_MetaData), NewProp_InteractionPromptMessage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_MaxDistanceToSeat = { "MaxDistanceToSeat", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSeatingComponent, MaxDistanceToSeat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceToSeat_MetaData), NewProp_MaxDistanceToSeat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_SittingState = { "SittingState", "OnRep_SittingState", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSeatingComponent, SittingState), Z_Construct_UScriptStruct_FSittingState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SittingState_MetaData), NewProp_SittingState_MetaData) }; // 2403505985
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_PromptWidgetInstance = { "PromptWidgetInstance", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSeatingComponent, PromptWidgetInstance), Z_Construct_UClass_USeatingInteractionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptWidgetInstance_MetaData), NewProp_PromptWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterSeatingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_OnHoverChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_PromptWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_OcuppiedPromptMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_InteractionPromptMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_MaxDistanceToSeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_SittingState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSeatingComponent_Statics::NewProp_PromptWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSeatingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterSeatingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSeatingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSeatingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterSeatingComponent_Statics::ClassParams = {
	&UCharacterSeatingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterSeatingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSeatingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSeatingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterSeatingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterSeatingComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterSeatingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterSeatingComponent.OuterSingleton, Z_Construct_UClass_UCharacterSeatingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterSeatingComponent.OuterSingleton;
}
template<> MULTIPLAYERSEATINGSYSTEM_API UClass* StaticClass<UCharacterSeatingComponent>()
{
	return UCharacterSeatingComponent::StaticClass();
}
void UCharacterSeatingComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SittingState(TEXT("SittingState"));
	const bool bIsValid = true
		&& Name_SittingState == ClassReps[(int32)ENetFields_Private::SittingState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCharacterSeatingComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterSeatingComponent);
UCharacterSeatingComponent::~UCharacterSeatingComponent() {}
// End Class UCharacterSeatingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSittingState::StaticStruct, Z_Construct_UScriptStruct_FSittingState_Statics::NewStructOps, TEXT("SittingState"), &Z_Registration_Info_UScriptStruct_SittingState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSittingState), 2403505985U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterSeatingComponent, UCharacterSeatingComponent::StaticClass, TEXT("UCharacterSeatingComponent"), &Z_Registration_Info_UClass_UCharacterSeatingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterSeatingComponent), 1123512344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_484068749(TEXT("/Script/MultiplayerSeatingSystem"),
	Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
