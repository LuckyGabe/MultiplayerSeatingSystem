// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SeatableObjectComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
#ifdef MULTIPLAYERSEATINGSYSTEM_SeatableObjectComponent_generated_h
#error "SeatableObjectComponent.generated.h already included, missing '#pragma once' in SeatableObjectComponent.h"
#endif
#define MULTIPLAYERSEATINGSYSTEM_SeatableObjectComponent_generated_h

#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_InitializeSeatsManually_Implementation(TArray<USceneComponent*> const& InSeatComponents); \
	DECLARE_FUNCTION(execOnOccupantDestroyed); \
	DECLARE_FUNCTION(execServer_InitializeSeatsManually);


#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_14_CALLBACK_WRAPPERS
#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSeatableObjectComponent(); \
	friend struct Z_Construct_UClass_USeatableObjectComponent_Statics; \
public: \
	DECLARE_CLASS(USeatableObjectComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerSeatingSystem"), NO_API) \
	DECLARE_SERIALIZER(USeatableObjectComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Occupants=NETFIELD_REP_START, \
		NETFIELD_REP_END=Occupants	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USeatableObjectComponent(USeatableObjectComponent&&); \
	USeatableObjectComponent(const USeatableObjectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USeatableObjectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USeatableObjectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USeatableObjectComponent) \
	NO_API virtual ~USeatableObjectComponent();


#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_11_PROLOG
#define FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_14_CALLBACK_WRAPPERS \
	FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSEATINGSYSTEM_API UClass* StaticClass<class USeatableObjectComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Components_SeatableObjectComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
