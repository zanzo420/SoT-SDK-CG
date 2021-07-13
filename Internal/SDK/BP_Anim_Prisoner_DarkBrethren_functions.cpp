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

// Function BP_Anim_Prisoner_DarkBrethren.BP_Anim_Prisoner_DarkBrethren_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
void UBP_Anim_Prisoner_DarkBrethren_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Prisoner_DarkBrethren.BP_Anim_Prisoner_DarkBrethren_C.BlueprintInitializeAnimation");

	UBP_Anim_Prisoner_DarkBrethren_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Anim_Prisoner_DarkBrethren.BP_Anim_Prisoner_DarkBrethren_C.ExecuteUbergraph_BP_Anim_Prisoner_DarkBrethren
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_Prisoner_DarkBrethren_C::ExecuteUbergraph_BP_Anim_Prisoner_DarkBrethren(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Prisoner_DarkBrethren.BP_Anim_Prisoner_DarkBrethren_C.ExecuteUbergraph_BP_Anim_Prisoner_DarkBrethren");

	UBP_Anim_Prisoner_DarkBrethren_C_ExecuteUbergraph_BP_Anim_Prisoner_DarkBrethren_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
