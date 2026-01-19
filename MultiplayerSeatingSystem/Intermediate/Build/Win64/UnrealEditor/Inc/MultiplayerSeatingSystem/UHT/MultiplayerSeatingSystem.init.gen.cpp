// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSeatingSystem_init() {}
	MULTIPLAYERSEATINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerSeatingSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerSeatingSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerSeatingSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSeatingSystem_OnHoverChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayerSeatingSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6513C229,
				0x725B7DBA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerSeatingSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiplayerSeatingSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerSeatingSystem(Z_Construct_UPackage__Script_MultiplayerSeatingSystem, TEXT("/Script/MultiplayerSeatingSystem"), Z_Registration_Info_UPackage__Script_MultiplayerSeatingSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6513C229, 0x725B7DBA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
