#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ReefIslandWashedUpAmmoCrateSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReefIslandWashedUpAmmoCrateSpawner.BP_ReefIslandWashedUpAmmoCrateSpawner_C
// 0x0000 (0x0580 - 0x0580)
class UBP_ReefIslandWashedUpAmmoCrateSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ReefIslandWashedUpAmmoCrateSpawner.BP_ReefIslandWashedUpAmmoCrateSpawner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif