// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomGameSetting.generated.h"

UCLASS(MinimalAPI)
class UCustomGameSettingLibrary : public UBlueprintFunctionLibrary
{
	friend class FCustomGameSettingModule;
	GENERATED_BODY()
public:
	UCustomGameSettingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	UFUNCTION(BlueprintCallable, Category = "CustomUserSettings", Meta = (DisplayName = "Set Screen Mode"))
	static CUSTOMGAMESETTING_API void SetScreenMode(EWindowMode::Type NewScreenMode);

	UFUNCTION(BlueprintCallable, Category = "CustomUserSettings", Meta = (DisplayName = "Set Screen Resolution"))
	static CUSTOMGAMESETTING_API void SetScreenResolution(FIntPoint NewResolution);

private:
	static class UCustomUserSettings* CustomSettings;
	static bool bCustomGameSettingLibraryInitialized;

	static bool TryInitCustomSettingsLibrary();
};

class FCustomGameSettingModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
