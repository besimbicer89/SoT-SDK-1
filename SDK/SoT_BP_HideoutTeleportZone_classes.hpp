#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HideoutTeleportZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HideoutTeleportZone.BP_HideoutTeleportZone_C
// 0x0000 (0x04C0 - 0x04C0)
class ABP_HideoutTeleportZone_C : public AHideoutEntrance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HideoutTeleportZone.BP_HideoutTeleportZone_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
