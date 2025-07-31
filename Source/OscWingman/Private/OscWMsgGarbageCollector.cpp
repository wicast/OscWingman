// Fill out your copyright notice in the Description page of Project Settings.


#include "OscWMsgGarbageCollector.h"

#include "OscWMsgSubsystem.h"
#include "Engine/Engine.h"

void UOscWMsgGarbageCollector::Deinitialize()
{
	Super::Deinitialize();

	auto OscWMsg = GEngine->GetEngineSubsystem<UOscWMsgSubsystem>();
	if (OscWMsg)
	{
		OscWMsg->Reset();
	}
}