﻿// Name: Sea of Thieves, Version: 2.2.0.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_OnShip_Small.BP_Shroudbreaker_OnShip_Small_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip_Small.BP_Shroudbreaker_OnShip_Small_C.UserConstructionScript");

	ABP_Shroudbreaker_OnShip_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
