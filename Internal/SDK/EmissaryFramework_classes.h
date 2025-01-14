﻿#pragma once

// Name: Sea of Thieves, Version: 2.2.0.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class EmissaryFramework.EmissaryLevelServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEmissaryLevelServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryFramework.EmissaryLevelServiceInterface");
		return ptr;
	}



};

// Class EmissaryFramework.EmissaryParticipantInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEmissaryParticipantInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryFramework.EmissaryParticipantInterface");
		return ptr;
	}



};

// Class EmissaryFramework.EmissaryVotingServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEmissaryVotingServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryFramework.EmissaryVotingServiceInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
