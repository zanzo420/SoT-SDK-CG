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

// BlueprintGeneratedClass BP_fod_PomegranateFresh_00_a_ItemInfo.BP_fod_PomegranateFresh_00_a_ItemInfo_C
// 0x0020 (FullSize[0x0528] - InheritedSize[0x0508])
class ABP_fod_PomegranateFresh_00_a_ItemInfo_C : public AItemInfo
{
public:
	class UMaterialManipulationSettingsComponent*      MaterialManipulationSettings;                              // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager;                            // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCookableComponent*                          Cookable;                                                  // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_fod_PomegranateFresh_00_a_ItemInfo.BP_fod_PomegranateFresh_00_a_ItemInfo_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
