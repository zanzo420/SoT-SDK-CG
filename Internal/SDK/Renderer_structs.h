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
// Enums
//---------------------------------------------------------------------------

// Enum Renderer.ERefChangeFadPhase
enum class Renderer_ERefChangeFadPhase : uint8_t
{
	NoFading                       = 0,
	FadeOut                        = 1,
	FadeIn                         = 2,
	ERefChangeFadPhase_MAX         = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
