// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerSeatingSystem/Public/Widgets/SeatingInteractionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeatingInteractionWidget() {}

// Begin Cross Module References
MULTIPLAYERSEATINGSYSTEM_API UClass* Z_Construct_UClass_USeatingInteractionWidget();
MULTIPLAYERSEATINGSYSTEM_API UClass* Z_Construct_UClass_USeatingInteractionWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MultiplayerSeatingSystem();
// End Cross Module References

// Begin Class USeatingInteractionWidget Function UpdatePromptText
struct SeatingInteractionWidget_eventUpdatePromptText_Parms
{
	FString NewText;
};
static FName NAME_USeatingInteractionWidget_UpdatePromptText = FName(TEXT("UpdatePromptText"));
void USeatingInteractionWidget::UpdatePromptText(const FString& NewText)
{
	SeatingInteractionWidget_eventUpdatePromptText_Parms Parms;
	Parms.NewText=NewText;
	ProcessEvent(FindFunctionChecked(NAME_USeatingInteractionWidget_UpdatePromptText),&Parms);
}
struct Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/SeatingInteractionWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SeatingInteractionWidget_eventUpdatePromptText_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewText_MetaData), NewProp_NewText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText_Statics::NewProp_NewText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USeatingInteractionWidget, nullptr, "UpdatePromptText", nullptr, nullptr, Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText_Statics::PropPointers), sizeof(SeatingInteractionWidget_eventUpdatePromptText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText_Statics::Function_MetaDataParams) };
static_assert(sizeof(SeatingInteractionWidget_eventUpdatePromptText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USeatingInteractionWidget Function UpdatePromptText

// Begin Class USeatingInteractionWidget
void USeatingInteractionWidget::StaticRegisterNativesUSeatingInteractionWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeatingInteractionWidget);
UClass* Z_Construct_UClass_USeatingInteractionWidget_NoRegister()
{
	return USeatingInteractionWidget::StaticClass();
}
struct Z_Construct_UClass_USeatingInteractionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/SeatingInteractionWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/SeatingInteractionWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USeatingInteractionWidget_UpdatePromptText, "UpdatePromptText" }, // 2383165819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeatingInteractionWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USeatingInteractionWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSeatingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeatingInteractionWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USeatingInteractionWidget_Statics::ClassParams = {
	&USeatingInteractionWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USeatingInteractionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USeatingInteractionWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USeatingInteractionWidget()
{
	if (!Z_Registration_Info_UClass_USeatingInteractionWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeatingInteractionWidget.OuterSingleton, Z_Construct_UClass_USeatingInteractionWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USeatingInteractionWidget.OuterSingleton;
}
template<> MULTIPLAYERSEATINGSYSTEM_API UClass* StaticClass<USeatingInteractionWidget>()
{
	return USeatingInteractionWidget::StaticClass();
}
USeatingInteractionWidget::USeatingInteractionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USeatingInteractionWidget);
USeatingInteractionWidget::~USeatingInteractionWidget() {}
// End Class USeatingInteractionWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Widgets_SeatingInteractionWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USeatingInteractionWidget, USeatingInteractionWidget::StaticClass, TEXT("USeatingInteractionWidget"), &Z_Registration_Info_UClass_USeatingInteractionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeatingInteractionWidget), 3672615199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Widgets_SeatingInteractionWidget_h_926672122(TEXT("/Script/MultiplayerSeatingSystem"),
	Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Widgets_SeatingInteractionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TEMP_lusionworld_MultiplayerTest_Original_MultiplayerTest_Plugins_MultiplayerSeatingSystem_Source_MultiplayerSeatingSystem_Public_Widgets_SeatingInteractionWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
