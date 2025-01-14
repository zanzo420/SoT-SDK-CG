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

// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.OnEmissaryStoleLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryStoleLootNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryStoleLoot_C::OnEmissaryStoleLoot(const struct FEmissaryStoleLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.OnEmissaryStoleLoot");

	UBP_Prompt_EmissaryStoleLoot_C_OnEmissaryStoleLoot_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.EmissaryStoleLoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryStoleLootNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissaryStoleLoot_C::EmissaryStoleLoot(const struct FEmissaryStoleLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.EmissaryStoleLoot");

	UBP_Prompt_EmissaryStoleLoot_C_EmissaryStoleLoot_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissaryStoleLoot_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.Evaluate");

	UBP_Prompt_EmissaryStoleLoot_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryStoleLoot_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryStoleLoot_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissaryStoleLoot_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissaryStoleLoot_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissaryStoleLoot_C::ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot");

	UBP_Prompt_EmissaryStoleLoot_C_ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
