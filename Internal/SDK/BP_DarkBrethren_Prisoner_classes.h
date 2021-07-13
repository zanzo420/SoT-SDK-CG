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

// BlueprintGeneratedClass BP_DarkBrethren_Prisoner.BP_DarkBrethren_Prisoner_C
// 0x0059 (FullSize[0x0611] - InheritedSize[0x05B8])
class ABP_DarkBrethren_Prisoner_C : public ACompanyShopkeeper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        shroud;                                                    // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shroudmask;                                                // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    vfx_Prisoner_AmbientSmoke_01;                              // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAppearComponent*                            AppearComponent;                                           // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UNPCDialogComponent*                         NPCDialog;                                                 // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                    // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	bool                                               IsPrisonerVisible;                                         // 0x05F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_YSRK[0x7];                                     // 0x05F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWwiseEvent*>                         AudioEvents;                                               // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ChosenAnimClass;                                           // 0x0608(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               SetPrisonerMeshVisibility;                                 // 0x0610(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DarkBrethren_Prisoner.BP_DarkBrethren_Prisoner_C");
		return ptr;
	}



	void OnRep_SetPrisonerMeshVisibility();
	void OnRep_ChosenAnimClass();
	void OnRep_IsPrisonerVisible();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__AppearComponent_K2Node_ComponentBoundEvent_88_TriggerDelegate__DelegateSignature();
	void BndEvt__AppearComponent_K2Node_ComponentBoundEvent_91_TriggerDelegate__DelegateSignature();
	void BndEvt__AppearComponent_K2Node_ComponentBoundEvent_101_TriggerDelegate__DelegateSignature();
	void TriggerAudioEvent(class UWwiseEvent* AudioEvent);
	void StopCurrentAudioEvent();
	void Multicast_TriggerAudioEvent(int EventIdx);
	void Server_SetNewAnimationBlueprint(class UClass* AnimInstanceClass);
	void Multicast_StopDialogueAudio();
	void ExecuteUbergraph_BP_DarkBrethren_Prisoner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
