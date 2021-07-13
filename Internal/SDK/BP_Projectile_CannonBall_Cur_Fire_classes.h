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

// BlueprintGeneratedClass BP_Projectile_CannonBall_Cur_Fire.BP_Projectile_CannonBall_Cur_Fire_C
// 0x0008 (FullSize[0x0650] - InheritedSize[0x0648])
class ABP_Projectile_CannonBall_Cur_Fire_C : public ABP_Projectile_CannonBall_Cursed_C
{
public:
	class UMeshRotatorComponent*                       MeshRotator;                                               // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_CannonBall_Cur_Fire.BP_Projectile_CannonBall_Cur_Fire_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
