// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CharacterSeatingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MULTIPLAYERSEATINGSYSTEM_CharacterSeatingComponent_generated_h
#error "CharacterSeatingComponent.generated.h already included, missing '#pragma once' in CharacterSeatingComponent.h"
#endif
#define MULTIPLAYERSEATINGSYSTEM_CharacterSeatingComponent_generated_h

#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_10_DELEGATE \
MULTIPLAYERSEATINGSYSTEM_API void FOnHoverChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHoverChanged, const FString& Message);


#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSittingState_Statics; \
	MULTIPLAYERSEATINGSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSEATINGSYSTEM_API UScriptStruct* StaticStruct<struct FSittingState>();

#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_RequestStand_Implementation(); \
	virtual bool Server_RequestSit_Validate(AActor* , int32 ); \
	virtual void Server_RequestSit_Implementation(AActor* TargetSeatable, int32 DesiredSlotIndex); \
	DECLARE_FUNCTION(execOnSeatableDestroyed); \
	DECLARE_FUNCTION(execServer_RequestStand); \
	DECLARE_FUNCTION(execServer_RequestSit); \
	DECLARE_FUNCTION(execOnRep_SittingState); \
	DECLARE_FUNCTION(execRequestStand); \
	DECLARE_FUNCTION(execRequestSit); \
	DECLARE_FUNCTION(execIsSitting); \
	DECLARE_FUNCTION(execInteract);


#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_33_CALLBACK_WRAPPERS
#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterSeatingComponent(); \
	friend struct Z_Construct_UClass_UCharacterSeatingComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterSeatingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerSeatingSystem"), NO_API) \
	DECLARE_SERIALIZER(UCharacterSeatingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SittingState=NETFIELD_REP_START, \
		NETFIELD_REP_END=SittingState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterSeatingComponent(UCharacterSeatingComponent&&); \
	UCharacterSeatingComponent(const UCharacterSeatingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterSeatingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterSeatingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterSeatingComponent) \
	NO_API virtual ~UCharacterSeatingComponent();


#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_30_PROLOG
#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_33_CALLBACK_WRAPPERS \
	FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSEATINGSYSTEM_API UClass* StaticClass<class UCharacterSeatingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_CharacterSeatingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
