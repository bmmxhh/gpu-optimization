// Copyright Epic Games, Inc. All Rights Reserved.

#include "CustomGameSetting.h"
#include "CustomUserSettings.h"



#define LOCTEXT_NAMESPACE "FCustomGameSettingModule"

UCustomUserSettings* UCustomGameSettingLibrary::CustomSettings = nullptr;
bool UCustomGameSettingLibrary::bCustomGameSettingLibraryInitialized = false;

UCustomGameSettingLibrary::UCustomGameSettingLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UCustomGameSettingLibrary::SetScreenMode(EWindowMode::Type NewScreenMode)
{
	if(!TryInitCustomSettingsLibrary())
	{

		return;
	}
	CustomSettings->SetFullscreenMode(NewScreenMode);
}

void UCustomGameSettingLibrary::SetScreenResolution(FIntPoint NewResolution)
{
	if (!TryInitCustomSettingsLibrary())
	{

		return;
	}
	CustomSettings->SetScreenResolution(NewResolution);
}

bool UCustomGameSettingLibrary::TryInitCustomSettingsLibrary()
{
	if(bCustomGameSettingLibraryInitialized)
	{
		return true;
	}
	CustomSettings = CastChecked<UCustomUserSettings>(GEngine->GetGameUserSettings());
	bCustomGameSettingLibraryInitialized = CustomSettings != nullptr;
	return bCustomGameSettingLibraryInitialized;
}

void FCustomGameSettingModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	//UCustomGameSettingLibrary::TryInitCustomSettingsLibrary();
}

void FCustomGameSettingModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCustomGameSettingModule, CustomGameSetting)