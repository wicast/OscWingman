// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OscWMsgGarbageCollector.generated.h"

/**
 * 
 */
UCLASS()
class OSCWINGMAN_API UOscWMsgGarbageCollector : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	virtual void Deinitialize() override;
};