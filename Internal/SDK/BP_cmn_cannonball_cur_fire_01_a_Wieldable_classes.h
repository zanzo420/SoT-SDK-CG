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

// BlueprintGeneratedClass BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C
// 0x0059 (FullSize[0x08E1] - InheritedSize[0x0888])
class ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C : public ABP_Grenade_Wieldable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                                // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FObjectMessagingHandle                      OnWieldedHandle;                                           // 0x0898(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsWielded;                                                 // 0x08E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C");
		return ptr;
	}



	void SetLightVisibility(bool Visibility);
	void OnRep_IsWielded();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnIsWielded(const struct FEventWieldableItemSetIsWielded& NewParam);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
