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

// BlueprintGeneratedClass BP_msc_banjo_kra_01_a_v02_ItemInfo.BP_msc_banjo_kra_01_a_v02_ItemInfo_C
// 0x0008 (FullSize[0x0510] - InheritedSize[0x0508])
class ABP_msc_banjo_kra_01_a_v02_ItemInfo_C : public AItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_msc_banjo_kra_01_a_v02_ItemInfo.BP_msc_banjo_kra_01_a_v02_ItemInfo_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
