// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OSCServer.h"
#include "Subsystems/WorldSubsystem.h"
#include "OscWMsgSubsystem.generated.h"

class UOSCServer;

UENUM(BlueprintType, Category = "OscWingman")
enum class EOscWReceiveMsgType: uint8
{
	None,
	Bool,
	Int,
	Float,
	String,
	FVector2d,
	FVector,
	ByteArray
};
USTRUCT(BlueprintType, Category = "OscWingman")
struct FOscWOutMsg
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "OscWingman")
	TArray<bool> bBool;
	UPROPERTY(BlueprintReadOnly, Category = "OscWingman")
	TArray<int32> Int;
	UPROPERTY(BlueprintReadOnly, Category = "OscWingman")
	TArray<float> Float;
	UPROPERTY(BlueprintReadOnly, Category = "OscWingman")
	TArray<FString> String;
	UPROPERTY(BlueprintReadOnly, Category = "OscWingman")
	TArray<FVector2D> Vector2d;
	UPROPERTY(BlueprintReadOnly, Category = "OscWingman")
	TArray<FVector> Vector;
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOscWMsgReceivedBP, FOscWOutMsg, Out);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOscWMsgReceived, FOscWOutMsg, Out);

/**
 * 
 */
UCLASS()
class OSCWINGMAN_API UOscWMsgSubsystem : public UEngineSubsystem 
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void Reset();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "OSC")
	TObjectPtr<UOSCServer> TheOSCServer;

	UFUNCTION(BlueprintCallable, Category = "OSC")
	void BindEventToOnOSCReceiveMessage(EOscWReceiveMsgType InMsgType, FString InAddress, const FOscWMsgReceivedBP& Received);

private:
	UPROPERTY()
	TMap<FGuid, FOscWMsgReceived> ReceivedMessages;
	
};
