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
// Parameters
//---------------------------------------------------------------------------

// Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed
struct USeasonProgressionUIComponent_OnHUDDestroyed_Params
{
};

// Function SeasonProgressionUI.SeasonProgressionUICompositeInputHandler.OnMenuButtonPressed
struct USeasonProgressionUICompositeInputHandler_OnMenuButtonPressed_Params
{
	TEnumAsByte<AthenaInput_EInputHandlerResult>       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
