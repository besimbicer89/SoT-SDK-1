#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FeatureIslandSunkenCollectorsChestSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FeatureIslandSunkenCollectorsChestSpawner.BP_FeatureIslandSunkenCollectorsChestSpawner_C
// 0x0000 (0x0500 - 0x0500)
class UBP_FeatureIslandSunkenCollectorsChestSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FeatureIslandSunkenCollectorsChestSpawner.BP_FeatureIslandSunkenCollectorsChestSpawner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif