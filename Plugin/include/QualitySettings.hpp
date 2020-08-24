//
//
//
#include <switch_min.h>

namespace UnitySettings { namespace Quality {
	
	extern uintptr_t ptr_get_pixelLightCount;
	extern uintptr_t ptr_set_pixelLightCount;
	extern uint32_t pixelLightCount;

	extern uintptr_t ptr_get_shadows;
	extern uintptr_t ptr_set_shadows;
	extern uint32_t ShadowQuality;
	//ShadowQuality
	//    {
	//        Disable = 0,
	//        HardOnly = 1,
	//        All = 2
	//    }

	extern uintptr_t ptr_get_shadowProjection;
	extern uintptr_t ptr_set_shadowProjection;
	extern uint32_t ShadowProjection;
	//ShadowProjection
	//    {
	//        CloseFit = 0,
	//        StableFit = 1
	//    }

	extern uintptr_t ptr_get_shadowCascades;
	extern uintptr_t ptr_set_shadowCascades;
	extern uint32_t shadowCascades;

	extern uintptr_t ptr_get_shadowDistance;
	extern uintptr_t ptr_set_shadowDistance;
	extern float shadowDistance;

	extern uintptr_t ptr_get_shadowResolution;
	extern uintptr_t ptr_set_shadowResolution;
	extern uint32_t ShadowResolution;
	//ShadowResolution
	//    {
	//        Low = 0,
	//        Medium = 1,
	//        High = 2,
	//        VeryHigh = 3
	//    }

	extern uintptr_t ptr_get_shadowmaskMode;
	extern uintptr_t ptr_set_shadowmaskMode;
	extern uint32_t ShadowmaskMode;
	//ShadowmaskMode
	//    {
	//       Shadowmask = 0,
	//       DistanceShadowmask = 1
	//    }

	extern uintptr_t ptr_get_shadowNearPlaneOffset;
	extern uintptr_t ptr_set_shadowNearPlaneOffset;
	extern float shadowNearPlaneOffset;

	extern uintptr_t ptr_get_shadowCascade2Split;
	extern uintptr_t ptr_set_shadowCascade2Split;
	extern float shadowCascade2Split;

	extern uintptr_t ptr_get_lodBias;
	extern uintptr_t ptr_set_lodBias;
	extern float lodBias;

	extern uintptr_t ptr_get_anisotropicFiltering;
	extern uintptr_t ptr_set_anisotropicFiltering;
	extern uint32_t AnisotropicFiltering;
	//AnisotropicFiltering
	//    {
	//        Disable = 0,
	//        Enable = 1,
	//        ForceEnable = 2
	//    }

	extern uintptr_t ptr_get_masterTextureLimit;
	extern uintptr_t ptr_set_masterTextureLimit;
	extern uint32_t masterTextureLimit;

	extern uintptr_t ptr_get_maximumLODLevel;
	extern uintptr_t ptr_set_maximumLODLevel;
	extern uint32_t maximumLODLevel;

	extern uintptr_t ptr_get_particleRaycastBudget;
	extern uintptr_t ptr_set_particleRaycastBudget;
	extern uint32_t particleRaycastBudget;

	extern uintptr_t ptr_get_softParticles;
	extern uintptr_t ptr_set_softParticles;
	extern bool softParticles;

	extern uintptr_t ptr_get_softVegetation;
	extern uintptr_t ptr_set_softVegetation;
	extern bool softVegetation;

	extern uintptr_t ptr_get_vSyncCount;
	extern uintptr_t ptr_set_vSyncCount;
	extern uint32_t vSyncCount;

	extern uintptr_t ptr_get_antiAliasing;
	extern uintptr_t ptr_set_antiAliasing;
	extern uint32_t antiAliasing;
	
	extern uintptr_t ptr_get_asyncUploadTimeSlice;
	extern uintptr_t ptr_set_asyncUploadTimeSlice;
	extern uint32_t asyncUploadTimeSlice;

	extern uintptr_t ptr_get_asyncUploadBufferSize;
	extern uintptr_t ptr_set_asyncUploadBufferSize;
	extern uint32_t asyncUploadBufferSize;
	
	extern uintptr_t ptr_get_asyncUploadPersistentBuffer;
	extern uintptr_t ptr_set_asyncUploadPersistentBuffer;	
	extern bool asyncUploadPersistentBuffer;
	
	extern uintptr_t ptr_get_realtimeReflectionProbes;
	extern uintptr_t ptr_set_realtimeReflectionProbes;
	extern bool realtimeReflectionProbes;

	extern uintptr_t ptr_get_billboardsFaceCameraPosition;
	extern uintptr_t ptr_set_billboardsFaceCameraPosition;	
	extern bool billboardsFaceCameraPosition;

	extern uintptr_t ptr_get_resolutionScalingFixedDPIFactor;
	extern uintptr_t ptr_set_resolutionScalingFixedDPIFactor;	
	extern float resolutionScalingFixedDPIFactor;

	extern uintptr_t ptr_get_blendWeights;
	extern uintptr_t ptr_set_blendWeights;	
	extern uint32_t BlendWeights;
	//BlendWeights
	//{
	//	OneBone = 1,
	//	TwoBones = 2,
	//	FourBones = 4
	//}

	extern uintptr_t ptr_get_streamingMipmapsActive;
	extern uintptr_t ptr_set_streamingMipmapsActive;
	extern bool streamingMipmapsActive;

	extern uintptr_t ptr_get_streamingMipmapsMemoryBudget;
	extern uintptr_t ptr_set_streamingMipmapsMemoryBudget;
	extern float streamingMipmapsMemoryBudget;

	extern uintptr_t ptr_get_streamingMipmapsRenderersPerFrame;
	extern uint32_t streamingMipmapsRenderersPerFrame;

	extern uintptr_t ptr_get_streamingMipmapsMaxLevelReduction;
	extern uintptr_t ptr_set_streamingMipmapsMaxLevelReduction;
	extern uint32_t streamingMipmapsMaxLevelReduction;

	extern uintptr_t ptr_get_streamingMipmapsAddAllCameras;
	extern uintptr_t ptr_set_streamingMipmapsAddAllCameras;
	extern bool streamingMipmapsAddAllCameras;

	extern uintptr_t ptr_get_streamingMipmapsMaxFileIORequests;
	extern uintptr_t ptr_set_streamingMipmapsMaxFileIORequests;
	extern uint32_t streamingMipmapsMaxFileIORequests;
	
	extern uintptr_t ptr_get_maxQueuedFrames;
	extern uintptr_t ptr_set_maxQueuedFrames;
	extern int32_t maxQueuedFrames;

	extern uintptr_t ptr_GetQualityLevel;
	extern uintptr_t ptr_SetQualityLevel;
	extern uint32_t QualityLevel;	

	extern uintptr_t ptr_get_names;	
	extern uintptr_t ptr_get_desiredColorSpace;	
	extern uintptr_t ptr_get_activeColorSpace;	

	void Change(uint8_t m_switchcase);
}
}

