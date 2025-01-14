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

// BlueprintGeneratedClass wld_bush_cluster_03_d.wld_bush_cluster_03_d_C
// 0x0020 (FullSize[0x0430] - InheritedSize[0x0410])
class Awld_bush_cluster_03_d_C : public ABP_Placement_HeightDrop_C
{
public:
	class UStaticMeshComponent*                        wld_bush_03_a;                                             // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        wsp_bush_cheese_01_a;                                      // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        wsp_bush_07_a_01;                                          // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             Scene;                                                     // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wld_bush_cluster_03_d.wld_bush_cluster_03_d_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
