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

// Function PlayerGenderInterface.PlayerGenderInterface_C.CheckIsFemale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFemale                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerGenderInterface_C::CheckIsFemale(bool* IsFemale)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerGenderInterface.PlayerGenderInterface_C.CheckIsFemale");

	UPlayerGenderInterface_C_CheckIsFemale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsFemale != nullptr)
		*IsFemale = params.IsFemale;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
