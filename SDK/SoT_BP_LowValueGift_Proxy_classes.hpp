#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LowValueGift_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LowValueGift_Proxy.BP_LowValueGift_Proxy_C
// 0x0000 (0x0848 - 0x0848)
class ABP_LowValueGift_Proxy_C : public ABP_TreasureArtifact_Proxy_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LowValueGift_Proxy.BP_LowValueGift_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif