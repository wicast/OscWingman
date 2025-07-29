// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "OscWSettings.generated.h"

namespace OscWConsoleVariables
{
	static int32 OscWServerPort = 13442;
}

/**
 * 
 */
UCLASS(Config=EditorPerProjectUserSettings, defaultconfig, meta = (DisplayName="Osc Wingman Settings"))
class OSCWINGMAN_API UOscWSettings : public UDeveloperSettingsBackedByCVars
{
	GENERATED_BODY()
public:
	UPROPERTY(config, EditAnywhere, Category=General, meta=(ConsoleVariable="oscw.Server.Port"))
	int32 Port;

	virtual void PostInitProperties() override;
};