#include <tesla.hpp>
#include "libstratosphere/dmntcht.hpp"
#include <inttypes.h>

namespace nullify {
	
	void Quality(uint8_t nullcase);
}

namespace Utils {
	
	extern uint8_t switchcase;
	extern uint8_t settings;
	
	extern DmntCheatProcessMetadata dmnt_metadata;

	extern uintptr_t switchcase_address;
	extern uintptr_t settings_address;
	extern uintptr_t base_nso_address;
	extern uintptr_t MAGIC_address;

	extern uintptr_t pixelLightCount_address;
	extern uintptr_t ShadowQuality_address;
	extern uintptr_t ShadowProjection_address;
	extern uintptr_t shadowCascades_address;
	extern uintptr_t shadowDistance_address;
	extern uintptr_t ShadowResolution_address;
	extern uintptr_t ShadowmaskMode_address;
	extern uintptr_t shadowNearPlaneOffset_address;
	extern uintptr_t shadowCascade2Split_address;
	extern uintptr_t lodBias_address;
	extern uintptr_t AnisotropicFiltering_address;
	extern uintptr_t masterTextureLimit_address;
	extern uintptr_t maximumLODLevel_address;
	extern uintptr_t particleRaycastBudget_address;
	extern uintptr_t softParticles_address;
	extern uintptr_t softVegetation_address;
	extern uintptr_t vSyncCount_address;
	extern uintptr_t antiAliasing_address;
	extern uintptr_t asyncUploadTimeSlice_address;
	extern uintptr_t asyncUploadBufferSize_address;
	extern uintptr_t asyncUploadPersistentBuffer_address;
	extern uintptr_t realtimeReflectionProbes_address;
	extern uintptr_t billboardsFaceCameraPosition_address;
	extern uintptr_t resolutionScalingFixedDPIFactor_address;
	extern uintptr_t BlendWeights_address;
	extern uintptr_t streamingMipmapsActive_address;
	extern uintptr_t streamingMipmapsMemoryBudget_address;
	extern uintptr_t streamingMipmapsRenderersPerFrame_address;
	extern uintptr_t streamingMipmapsMaxLevelReduction_address;
	extern uintptr_t streamingMipmapsAddAllCameras_address;
	extern uintptr_t streamingMipmapsMaxFileIORequests_address;
	extern uintptr_t maxQueuedFrames_address;
	
	extern uint32_t pixelLightCount;
	extern uint32_t ShadowQuality;
	extern uint32_t ShadowProjection;
	extern uint32_t shadowCascades;
	extern float shadowDistance;
	extern uint32_t ShadowResolution;
	extern uint32_t ShadowmaskMode;
	extern float shadowNearPlaneOffset;
	extern float shadowCascade2Split;
	extern float lodBias;
	extern uint32_t AnisotropicFiltering;
	extern uint32_t masterTextureLimit;
	extern uint32_t maximumLODLevel;
	extern uint32_t particleRaycastBudget;
	extern bool softParticles;
	extern bool softVegetation;
	extern uint32_t vSyncCount;
	extern uint32_t antiAliasing;
	extern uint32_t asyncUploadTimeSlice;
	extern uint32_t asyncUploadBufferSize;
	extern bool asyncUploadPersistentBuffer;
	extern bool realtimeReflectionProbes;
	extern bool billboardsFaceCameraPosition;
	extern float resolutionScalingFixedDPIFactor;
	extern uint32_t BlendWeights;
	extern bool streamingMipmapsActive;
	extern float streamingMipmapsMemoryBudget;
	extern uint32_t streamingMipmapsMaxLevelReduction;
	extern bool streamingMipmapsAddAllCameras;
	extern uint32_t streamingMipmapsMaxFileIORequests;
	extern uint32_t maxQueuedFrames;
	
	extern char BID_File[192];
	extern char BID_File2[196];
	
	void readFiles();
}
	