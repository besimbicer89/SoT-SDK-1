#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_SetVaultMedallionLocks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shroudbreaker_SetVaultMedallionLocks.BP_Shroudbreaker_SetVaultMedallionLocks_C
// 0x0008 (0x00A0 - 0x0098)
class UBP_Shroudbreaker_SetVaultMedallionLocks_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Shroudbreaker_SetVaultMedallionLocks.BP_Shroudbreaker_SetVaultMedallionLocks_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_Shroudbreaker_SetVaultMedallionLocks(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
