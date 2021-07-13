#pragma once

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

// BlueprintGeneratedClass BP_AshenChestGoldPouches_ItemInfo.BP_AshenChestGoldPouches_ItemInfo_C
// 0x0010 (FullSize[0x0570] - InheritedSize[0x0560])
class ABP_AshenChestGoldPouches_ItemInfo_C : public ARewardableItemInfo
{
public:
	class UCollectorsChestPickUpFromSlotRewardComponent* CollectorsChestPickUpFromSlotReward;                       // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AshenChestGoldPouches_ItemInfo.BP_AshenChestGoldPouches_ItemInfo_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
