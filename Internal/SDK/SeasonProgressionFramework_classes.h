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

// Class SeasonProgressionFramework.SeasonProgressionExclusionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USeasonProgressionExclusionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SeasonProgressionFramework.SeasonProgressionExclusionInterface");
		return ptr;
	}



};

// Class SeasonProgressionFramework.SeasonProgressionExclusionComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class USeasonProgressionExclusionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_RXLZ[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               ShouldBeExcludedFromSeasonProgessionValue;                 // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3H53[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SeasonProgressionFramework.SeasonProgressionExclusionComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
