#pragma once

// Satisfactory SDK (V0.1.13 - Build 99427)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Recipe_OreCopper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Recipe_OreCopper.Recipe_OreCopper_C
// 0x0000 (0x0090 - 0x0090)
class URecipe_OreCopper_C : public UFGRecipe
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_OreCopper.Recipe_OreCopper_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
