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

// AnimBlueprintGeneratedClass BP_Anim_Prisoner_DarkBrethren.BP_Anim_Prisoner_DarkBrethren_C
// 0x0008 (FullSize[0x1D08] - InheritedSize[0x1D00])
class UBP_Anim_Prisoner_DarkBrethren_C : public UBP_Anim_Prisoner_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1D00(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Prisoner_DarkBrethren.BP_Anim_Prisoner_DarkBrethren_C");
		return ptr;
	}



	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BP_Anim_Prisoner_DarkBrethren(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
