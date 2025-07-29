// Fill out your copyright notice in the Description page of Project Settings.


#include "OscWSettings.h"

#include "Misc/ConfigUtilities.h"

namespace OscWConsoleVariables
{
	static FAutoConsoleVariableRef CVarOscWServerPort(
		TEXT("oscw.Server.Port"),
		OscWServerPort,
		TEXT("Osc Wingman server port"));
}

void UOscWSettings::PostInitProperties()
{
	#if WITH_EDITOR
	if (IsTemplate())
	{
		// We want the .ini file to have precedence over the CVar constructor, so we apply the ini to the CVar before following the regular UDeveloperSettingsBackedByCVars flow
		UE::ConfigUtilities::ApplyCVarSettingsFromIni(TEXT("/Script/OscWingman.OscWSettings"), *GEditorPerProjectIni, ECVF_SetByProjectSetting);
	}
	#endif // WITH_EDITOR
	
	Super::PostInitProperties();
}