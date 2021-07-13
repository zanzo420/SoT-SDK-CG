// Name: Sea of Thieves, Version: 2.2.0.2

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

// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.SetLightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C::SetLightVisibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.SetLightVisibility");

	ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_SetLightVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.OnRep_IsWielded
// (BlueprintCallable, BlueprintEvent)
void ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C::OnRep_IsWielded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.OnRep_IsWielded");

	ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_OnRep_IsWielded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.UserConstructionScript");

	ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ReceiveBeginPlay");

	ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.OnIsWielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventWieldableItemSetIsWielded NewParam                       (Parm)
void ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C::OnIsWielded(const struct FEventWieldableItemSetIsWielded& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.OnIsWielded");

	ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_OnIsWielded_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ReceiveEndPlay");

	ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C::ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable");

	ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C_ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
