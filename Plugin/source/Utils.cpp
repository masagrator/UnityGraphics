//
//
//
#include "Utils.hpp"

namespace Utils {
	
	uint8_t switchcase = 0;
	uint32_t MAGIC = 0x16BA7E38;

	Settings _settings = None;
	
	void writeFile() {
		FILE* offset = SaltySDCore_fopen("sdmc:/SaltySD/UnityGraphics.hex", "wb");
		uint64_t ptr = (uint64_t)&switchcase;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&_settings;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&MAGIC;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::pixelLightCount;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ShadowQuality;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ShadowProjection;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::shadowCascades;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::shadowDistance;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ShadowResolution;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ShadowmaskMode;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::shadowNearPlaneOffset;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::shadowCascade2Split;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::lodBias;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::AnisotropicFiltering;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::masterTextureLimit;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::maximumLODLevel;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::particleRaycastBudget;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::softParticles;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::softVegetation;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::vSyncCount;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::antiAliasing;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::asyncUploadTimeSlice;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::asyncUploadBufferSize;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::asyncUploadPersistentBuffer;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::realtimeReflectionProbes;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::billboardsFaceCameraPosition;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::resolutionScalingFixedDPIFactor;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::BlendWeights;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::streamingMipmapsActive;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::streamingMipmapsMemoryBudget;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::streamingMipmapsMaxLevelReduction;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::streamingMipmapsAddAllCameras;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::streamingMipmapsMaxFileIORequests;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::maxQueuedFrames;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Screen::width;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Screen::height;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_pixelLightCount;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_pixelLightCount;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_shadows;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_shadows;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_shadowProjection;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_shadowProjection;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_shadowCascades;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_shadowCascades;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_shadowDistance;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_shadowDistance;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_shadowResolution;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_shadowResolution;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_shadowmaskMode;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_shadowmaskMode;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_shadowNearPlaneOffset;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_shadowNearPlaneOffset;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_shadowCascade2Split;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_shadowCascade2Split;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_lodBias;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_lodBias;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_anisotropicFiltering;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_anisotropicFiltering;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_masterTextureLimit;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_masterTextureLimit;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_maximumLODLevel;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_maximumLODLevel;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_particleRaycastBudget;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_particleRaycastBudget;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_softParticles;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_softParticles;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_softVegetation;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_softVegetation;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_vSyncCount;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_vSyncCount;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_antiAliasing;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_antiAliasing;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_asyncUploadTimeSlice;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_asyncUploadTimeSlice;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_asyncUploadBufferSize;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_asyncUploadBufferSize;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_asyncUploadPersistentBuffer;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_asyncUploadPersistentBuffer;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
	
		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_realtimeReflectionProbes;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_realtimeReflectionProbes;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_billboardsFaceCameraPosition;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_billboardsFaceCameraPosition;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_resolutionScalingFixedDPIFactor;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_resolutionScalingFixedDPIFactor;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_blendWeights;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_blendWeights;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_streamingMipmapsActive;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_streamingMipmapsActive;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_streamingMipmapsMemoryBudget;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_streamingMipmapsMemoryBudget;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_streamingMipmapsMaxLevelReduction;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_streamingMipmapsMaxLevelReduction;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_streamingMipmapsAddAllCameras;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_streamingMipmapsAddAllCameras;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_streamingMipmapsMaxFileIORequests;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_streamingMipmapsMaxFileIORequests;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);

		ptr = (uint64_t)&UnitySettings::Quality::ptr_get_maxQueuedFrames;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Quality::ptr_set_maxQueuedFrames;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		
		ptr = (uint64_t)&UnitySettings::Screen::ptr_get_width;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Screen::ptr_get_height;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		ptr = (uint64_t)&UnitySettings::Screen::ptr_SetResolution;
		SaltySDCore_fwrite(&ptr, 0x5, 1, offset);
		
		SaltySDCore_fclose(offset);
	}
}

