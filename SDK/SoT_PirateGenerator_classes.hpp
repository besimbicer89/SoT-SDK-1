#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PirateGenerator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PirateGenerator.AnimationSwitchDataAsset
// 0x0018 (0x0040 - 0x0028)
class UAnimationSwitchDataAsset : public UDataAsset
{
public:
	float                                              Threshold;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FAnimationSwitchEntry>               Entries;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.AnimationSwitchDataAsset");
		return ptr;
	}


	class UClass* GetAnimSetIdForDesc(const struct FPirateDescription& Desc);
};


// Class PirateGenerator.CharacterMeshBakeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCharacterMeshBakeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.CharacterMeshBakeFunctionLibrary");
		return ptr;
	}


	void STATIC_BakeCharacterMeshAsync(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, const struct FScriptDelegate& AsyncResult);
	class USkeletalMesh* STATIC_BakeCharacterMesh(class UCharacterMeshBakeSpecification* CharacterMeshSpecification);
	void AsyncBakeResultDynamic__DelegateSignature(class USkeletalMesh* Mesh);
	void STATIC_AppendCharacterBlendShapes(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, TArray<struct FIPGBlendShape> BlendShapes);
};


// Class PirateGenerator.SkeletonsDataAsset
// 0x0050 (0x0078 - 0x0028)
class USkeletonsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.SkeletonsDataAsset");
		return ptr;
	}

};


// Class PirateGenerator.CharacterMeshBakeSpecification
// 0x0070 (0x0098 - 0x0028)
class UCharacterMeshBakeSpecification : public UObject
{
public:
	bool                                               StripTopLOD;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class USkeletalMesh*                               CharacterMesh;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMesh*                               BaseMeshReferenceSkeleton;                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletonsDataAsset*                         SourceSkeletons;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SourceSkeletonNames;                                      // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      SourceSkeletonWeights;                                    // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FBlendedSubMeshSpecification>        BlendedSubMeshes;                                         // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class USkeletalMesh*>                       UnblendedSubMeshes;                                       // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FIPGBlendShape>                      BlendShapes;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.CharacterMeshBakeSpecification");
		return ptr;
	}

};


// Class PirateGenerator.CharacterMeshBakeTestFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCharacterMeshBakeTestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.CharacterMeshBakeTestFunctionLibrary");
		return ptr;
	}


	class UCharacterMeshBakeSpecification* STATIC_MakeCharacterMeshSpecification();
	void STATIC_BlendMeshWithMeshPatchAssets(class USkeletalMesh* BaseMesh, float BaseMeshWeight, TArray<class UMeshPatchAsset*> MeshPatchAssets, TArray<float> MeshPatchAssetWeights, class USkeletalMesh** TargetMesh);
	class USkeletalMesh* STATIC_BakeCharacterMeshFromClassDefault(class UClass* CharacterMeshBakeSpecificationClass);
	bool STATIC_AreMeshesEquivalentByMeshPatchCriteria(class USkeletalMesh* MeshA, class USkeletalMesh* MeshB);
};


// Class PirateGenerator.ColorTexture
// 0x0010 (0x0148 - 0x0138)
class UColorTexture : public UTexture
{
public:
	struct FLinearColor                                Color;                                                    // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.ColorTexture");
		return ptr;
	}

};


// Class PirateGenerator.FileAccessFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFileAccessFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.FileAccessFunctionLibrary");
		return ptr;
	}


	class FString STATIC_GetMeshPatchAssetPathFromMeshPathAndTypeName(const class FString& MeshPath, const class FString& TypeName);
	class UMeshPatchAsset* STATIC_GetMeshPatchAssetForMeshFromTypeName(class USkeletalMesh* Mesh, const class FString& TypeName);
};


// Class PirateGenerator.MaterialReferencesDataAsset
// 0x0010 (0x0038 - 0x0028)
class UMaterialReferencesDataAsset : public UDataAsset
{
public:
	TArray<struct FMaterialReferencesEntry>            MaterialReferences;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.MaterialReferencesDataAsset");
		return ptr;
	}

};


// Class PirateGenerator.PirateBodyShapeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPirateBodyShapeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.PirateBodyShapeFunctionLibrary");
		return ptr;
	}


	class FString STATIC_GetHighestWeighted(float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights, float Threshold);
	bool STATIC_FindBodyBlendsFromBodyShapeWheelRadialCoordinate(TEnumAsByte<EIPGGender> Gender, const struct FRadialCoordinate& BodyShapeWheelRadialCoordinate, float* BaseMeshBlendWeight, TArray<class FString>* BodyShapeBlendNames, TArray<float>* BodyShapeBlendWeights);
	struct FRadialCoordinate STATIC_ConvertToRadialCoordinate(const struct FVector2D& UV);
	struct FVector2D STATIC_ConvertFromRadialCoordinate(const struct FRadialCoordinate& Coord);
};


// Class PirateGenerator.PirateGeneratorMaterials
// 0x0010 (0x0038 - 0x0028)
class UPirateGeneratorMaterials : public UObject
{
public:
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.PirateGeneratorMaterials");
		return ptr;
	}

};


// Class PirateGenerator.PirateGeneratorFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPirateGeneratorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.PirateGeneratorFunctionLibrary");
		return ptr;
	}


	bool STATIC_SavePirateDescription(const class FString& RelativePath, const struct FPirateDescription& InDesc);
	struct FRadialCoordinate STATIC_RandomBodyShape(int Seed);
	bool STATIC_LoadPirateDescription(const class FString& RelativePath, struct FPirateDescription* OutDesc);
	void STATIC_K2_BakeFromDescriptionGameThread(const struct FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, class USkeletalMesh** OutMesh, struct FPirateDescription* OutDesc);
	int STATIC_IPGLatestVersion();
	int STATIC_GetSeedFromString(const class FString& RefName, const class FString& Str);
	void STATIC_GetAllTextureReferences(class USkeletalMesh* Mesh, TArray<struct FPirateGeneratorTextureReference>* OutReferences);
	TArray<class FString> STATIC_GetAllDescriptions();
	struct FPirateDescription STATIC_GenerateRandomPirateWithVersion(int Seed, int Version, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<struct FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters);
	struct FPirateDescription STATIC_GenerateRandomPirate(int Seed, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, TEnumAsByte<EIPGGender> SpecificGender, TEnumAsByte<EIPGEthnicity> SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<struct FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters);
	void STATIC_BakeFromDescriptionAsync(const struct FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, const struct FScriptDelegate& AsyncResult);
};


// Class PirateGenerator.PirateGeneratorSettings
// 0x00E0 (0x0108 - 0x0028)
class UPirateGeneratorSettings : public UObject
{
public:
	class FString                                      ConfigJson;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      PiratesFolder;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      WardrobeFolder;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       WardrobeDataAsset;                                        // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               DefaultWardrobeItems;                                     // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       MaterialReferencesDataAsset;                              // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       SkeletonsDataAsset;                                       // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               BaseSkeletonMeshes;                                       // 0x0098(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               Characterization;                                         // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class FString>                              SkeletonMeshFormats;                                      // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       FirstPersonAnimations;                                    // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       ThirdPersonAnimations;                                    // 0x00D8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<float>                                      LODScreenSizes;                                           // 0x00E8(0x0010) (Edit, ZeroConstructor, Config)
	TArray<float>                                      LODHysteresis;                                            // 0x00F8(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.PirateGeneratorSettings");
		return ptr;
	}

};


// Class PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPreparePirateMeshBakeTestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary");
		return ptr;
	}


	void STATIC_PopulateSkeletonBlendsInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, class USkeletalMesh* MeshWithBaseSkeleton, class USkeletonsDataAsset* SkeletonsDataAsset, const class FString& MeshTypeSkeletonFileFormat, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights);
	void STATIC_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, TArray<class USkeletalMesh*> SubMeshes, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights);
};


// Class PirateGenerator.TextureSwitch
// 0x00D8 (0x0218 - 0x0140)
class UTextureSwitch : public UTextureProxy
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0140(0x0080) MISSED OFFSET
	struct FTextureSwitchParameters                    DefaultParameters;                                        // 0x01C0(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.TextureSwitch");
		return ptr;
	}

};


// Class PirateGenerator.TextureSwitchBySeed
// 0x0038 (0x0250 - 0x0218)
class UTextureSwitchBySeed : public UTextureSwitch
{
public:
	struct FName                                       HashSource;                                               // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FallbackProbability;                                      // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FallbackReferenceName;                                    // 0x0224(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	struct FStringAssetReference                       FallbackTexture;                                          // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTextureSwitchSeedEntry>             Entries;                                                  // 0x0240(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.TextureSwitchBySeed");
		return ptr;
	}

};


// Class PirateGenerator.TextureSwitchByGender
// 0x0010 (0x0228 - 0x0218)
class UTextureSwitchByGender : public UTextureSwitch
{
public:
	TArray<struct FTextureSwitchGenderEntry>           Entries;                                                  // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.TextureSwitchByGender");
		return ptr;
	}

};


// Class PirateGenerator.TextureSwitchByEthnicity
// 0x0010 (0x0228 - 0x0218)
class UTextureSwitchByEthnicity : public UTextureSwitch
{
public:
	TArray<struct FTextureSwitchEthnicityEntry>        Entries;                                                  // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.TextureSwitchByEthnicity");
		return ptr;
	}

};


// Class PirateGenerator.TextureSwitchByBodyShape
// 0x0010 (0x0228 - 0x0218)
class UTextureSwitchByBodyShape : public UTextureSwitch
{
public:
	TArray<struct FTextureSwitchBodyShapeEntry>        Entries;                                                  // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.TextureSwitchByBodyShape");
		return ptr;
	}

};


// Class PirateGenerator.TextureSwitchByItem
// 0x0020 (0x0238 - 0x0218)
class UTextureSwitchByItem : public UTextureSwitch
{
public:
	struct FStringAssetReference                       FallbackTexture;                                          // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTextureSwitchItemEntry>             Entries;                                                  // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.TextureSwitchByItem");
		return ptr;
	}

};


// Class PirateGenerator.ColorTextureSwitchBySeed
// 0x0018 (0x0230 - 0x0218)
class UColorTextureSwitchBySeed : public UTextureSwitch
{
public:
	struct FName                                       HashSource;                                               // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FColorTextureSwitchSeedEntry>        Entries;                                                  // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.ColorTextureSwitchBySeed");
		return ptr;
	}

};


// Class PirateGenerator.WardrobeExcludeDataAsset
// 0x0010 (0x0038 - 0x0028)
class UWardrobeExcludeDataAsset : public UDataAsset
{
public:
	TArray<struct FName>                               ExcludeItems;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.WardrobeExcludeDataAsset");
		return ptr;
	}

};


// Class PirateGenerator.WardrobeDataAsset
// 0x00C0 (0x00E8 - 0x0028)
class UWardrobeDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
	TArray<class UWardrobeExcludeDataAsset*>           ExcludeDataAssets;                                        // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMeshPatchEntry>                     AssetMap;                                                 // 0x00D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.WardrobeDataAsset");
		return ptr;
	}

};


// Class PirateGenerator.WardrobeOutfitDataAsset
// 0x0030 (0x0058 - 0x0028)
class UWardrobeOutfitDataAsset : public UDataAsset
{
public:
	TArray<struct FName>                               FemaleWardrobeItems;                                      // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               MaleWardrobeItems;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FWardrobeOutfitCategoryBias>         BiasPerCategory;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.WardrobeOutfitDataAsset");
		return ptr;
	}


	float GetBiasForCategory(const struct FName& Name);
};


// Class PirateGenerator.WardrobeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWardrobeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PirateGenerator.WardrobeFunctionLibrary");
		return ptr;
	}


	void STATIC_PickOutfitAsync(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, const struct FScriptDelegate& AsyncResult);
	bool STATIC_PickOutfit(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender, struct FWardrobeOutfitResult* Result);
	TArray<struct FName> STATIC_GetRandomWardrobeItemsWithBias(int Seed, TArray<struct FName> InputItems, TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory);
	TArray<struct FName> STATIC_GetRandomWardrobeItems(int Seed, TArray<struct FName> InputItems);
	TArray<struct FName> STATIC_GetRandomOutfit(class UWardrobeOutfitDataAsset* Outfit, int Seed, TEnumAsByte<EIPGGender> Gender);
	TArray<struct FName> STATIC_GetAllWardrobeTypes();
	TArray<struct FName> STATIC_GetAllWardrobeItemsForType(const class FString& TypeName, TEnumAsByte<EIPGPirateType> PirateType, bool bWithExclusions);
	TArray<struct FName> STATIC_GetAllWardrobeItems(TEnumAsByte<EIPGPirateType> PirateType);
	bool STATIC_CanLoadOutfit(TArray<struct FName> ClothingItemNames, TArray<struct FName> Tags, TEnumAsByte<EIPGPirateType> PirateType, TEnumAsByte<EIPGGender> Gender);
	void AsyncOutfitResultDynamic__DelegateSignature(bool Success, TArray<class USkeletalMesh*> Meshes);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
