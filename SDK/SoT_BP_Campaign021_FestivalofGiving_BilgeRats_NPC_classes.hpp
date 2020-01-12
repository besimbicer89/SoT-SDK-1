#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign021_FestivalofGiving_BilgeRats_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign021_FestivalofGiving_BilgeRats_NPC.BP_Campaign021_FestivalofGiving_BilgeRats_NPC_C
// 0x0018 (0x0680 - 0x0668)
class ABP_Campaign021_FestivalofGiving_BilgeRats_NPC_C : public ACompanyShopkeeper
{
public:
	class UCapsuleComponent*                           Capsule;                                                  // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Campaign021_FestivalofGiving_BilgeRats_NPC.BP_Campaign021_FestivalofGiving_BilgeRats_NPC_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif