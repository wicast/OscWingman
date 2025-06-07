// Fill out your copyright notice in the Description page of Project Settings.


#include "OscWMsgSubsystem.h"

#include "OSCManager.h"
#include "OSCServer.h"

void UOscWMsgSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (!TheOSCServer)
	{
		TheOSCServer = UOSCManager::CreateOSCServer("", 13442, false, true, TEXT("OscWingmanSrv"), this);
	}
}

void UOscWMsgSubsystem::Deinitialize()
{
	Super::Deinitialize();

}

void UOscWMsgSubsystem::Reset()
{
	TheOSCServer->UnbindAllEventsFromOnOSCAddressPatternMatching();
	ReceivedMessages.Empty();
}

void UOscWMsgSubsystem::BindEventToOnOSCReceiveMessage(EOscWReceiveMsgType InMsgType, FString InAddress, const FOscWMsgReceivedBP& Received)
{
	FOscWMsgReceived NativeReceived;
	NativeReceived.AddUnique(Received);
	FGuid NewUUID = FGuid::NewGuid(); // 生成随机 UUID
	ReceivedMessages.Add(NewUUID, NativeReceived);
	TheOSCServer->OnOscMessageReceivedNative.AddLambda([this, NewUUID, InMsgType, InAddress](const FOSCMessage& InMsg, const FString& IPAddress, uint16 Port) {
		bool bCond = !UOSCManager::GetOSCAddressFullPath(InMsg.GetAddress()).Equals(InAddress);
		if (bCond && !InAddress.IsEmpty())
		{
			return;
		}
		auto Recv = ReceivedMessages.Find(NewUUID);

		if (Recv)
		{
			FOscWOutMsg OutMsg;
			switch (InMsgType)
			{
				case EOscWReceiveMsgType::Bool:
					UOSCManager::GetAllBools(InMsg, OutMsg.bBool);
					break;
				case EOscWReceiveMsgType::Int:
					UOSCManager::GetAllInt32s(InMsg, OutMsg.Int);
					break;
				case EOscWReceiveMsgType::Float:
					UOSCManager::GetAllFloats(InMsg, OutMsg.Float);
					break;
				case EOscWReceiveMsgType::String:
					UOSCManager::GetAllStrings(InMsg, OutMsg.String);
					break;
				case EOscWReceiveMsgType::FVector2d:
				{
					TArray<float> TempVec;
					UOSCManager::GetAllFloats(InMsg, TempVec);

					TArray<FVector2D> Result;
					const int32       TotalFloats = TempVec.Num();
					// 确保浮点数数量是3的倍数
					if (TotalFloats % 2 != 0)
					{
						UE_LOG(LogTemp, Warning, TEXT("Float array size is not a multiple of 3!"));
						return;
					}

					// 预分配内存提高性能
					Result.Reserve(TotalFloats / 3);

					// 每3个float转换成一个FVector
					for (int32 i = 0; i < TotalFloats; i += 2)
					{
						Result.Add(FVector2D(
							TempVec[i],    // X
							TempVec[i + 1] // Y
							));
					}
					break;
				}
				case EOscWReceiveMsgType::FVector:
				{
					TArray<float> TempVec2;
				   UOSCManager::GetAllFloats(InMsg, TempVec2);

				   TArray<FVector> Result2;
				   const int32     TotalFloats2 = TempVec2.Num();
				   // 确保浮点数数量是3的倍数
				   if (TotalFloats2 % 3 != 0)
				   {
					   UE_LOG(LogTemp, Warning, TEXT("Float array size is not a multiple of 3!"));
					   return;
				   }

				   // 预分配内存提高性能
				   Result2.Reserve(TotalFloats2 / 3);

				   // 每3个float转换成一个FVector
				   for (int32 i = 0; i < TotalFloats2; i += 3)
				   {
					   Result2.Add(FVector(
						   TempVec2[i],     // X
						   TempVec2[i + 1], // Y
						   TempVec2[i + 2]  // Z
						   ));
				   }

				   OutMsg.Vector = Result2;

				   break;
				}
				case EOscWReceiveMsgType::ByteArray:
					break;
			}

			Recv->Broadcast(OutMsg);
		}
	});
}