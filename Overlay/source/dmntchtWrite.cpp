#include "dmntchtWrite.hpp"

namespace dmntcht {
	void write_pixelLightCount() {
		Utils::switchcase = 2;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::pixelLightCount_address, &Utils::pixelLightCount, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 1;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}

	void write_shadows() {
		Utils::switchcase = 4;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::ShadowQuality_address, &Utils::ShadowQuality, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 3;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_shadowProjection() {
		Utils::switchcase = 6;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::ShadowProjection_address, &Utils::ShadowProjection, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 5;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);			
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_shadowCascades() {
		Utils::switchcase = 8;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::shadowCascades_address, &Utils::shadowCascades, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 7;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_shadowDistance() {
		Utils::switchcase = 10;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::shadowDistance_address, &Utils::shadowDistance, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 9;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_shadowResolution() {
		Utils::switchcase = 12;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::ShadowResolution_address, &Utils::ShadowResolution, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 11;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_shadowmaskMode() {
		Utils::switchcase = 14;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::ShadowmaskMode_address, &Utils::ShadowmaskMode, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 13;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_shadowNearPlaneOffset() {
		Utils::switchcase = 16;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::shadowNearPlaneOffset_address, &Utils::shadowNearPlaneOffset, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 15;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_shadowCascade2Split() {
		Utils::switchcase = 18;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::shadowCascade2Split_address, &Utils::shadowCascade2Split, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 17;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_lodBias() {
		Utils::switchcase = 22;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::lodBias_address, &Utils::lodBias, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 21;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_anisotropicFiltering() {
		Utils::switchcase = 24;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::AnisotropicFiltering_address, &Utils::AnisotropicFiltering, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 23;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_masterTextureLimit() {
		Utils::switchcase = 26;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::masterTextureLimit_address, &Utils::masterTextureLimit, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 25;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}

	void write_maximumLODLevel() {
		Utils::switchcase = 28;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::maximumLODLevel_address, &Utils::maximumLODLevel, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 27;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_particleRaycastBudget() {
		Utils::switchcase = 30;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::particleRaycastBudget_address, &Utils::particleRaycastBudget, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 29;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}

	void write_softParticles() {
		Utils::switchcase = 32;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::softParticles_address, &Utils::softParticles, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 31;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_softVegetation() {
		Utils::switchcase = 34;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::softVegetation_address, &Utils::softVegetation, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 33;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_vSyncCount() {
		Utils::switchcase = 36;
		Utils::settings = 1;
		Utils::vSyncCount++;
		if (Utils::vSyncCount > 2) Utils::vSyncCount = 0;
		dmntchtWriteCheatProcessMemory(Utils::vSyncCount_address, &Utils::vSyncCount, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 35;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}

	void write_antiAliasing() {
		Utils::switchcase = 38;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::antiAliasing_address, &Utils::antiAliasing, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 37;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_asyncUploadTimeSlice() {
		Utils::switchcase = 40;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::asyncUploadTimeSlice_address, &Utils::asyncUploadTimeSlice, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 39;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_asyncUploadBufferSize() {
		Utils::switchcase = 42;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::asyncUploadBufferSize_address, &Utils::asyncUploadBufferSize, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 41;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_asyncUploadPersistentBuffer() {
		Utils::switchcase = 44;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::asyncUploadPersistentBuffer_address, &Utils::asyncUploadPersistentBuffer, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 43;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_realtimeReflectionProbes() {
		Utils::switchcase = 46;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::realtimeReflectionProbes_address, &Utils::realtimeReflectionProbes, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 45;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_billboardsFaceCameraPosition() {
		Utils::switchcase = 48;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::billboardsFaceCameraPosition_address, &Utils::billboardsFaceCameraPosition, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 47;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}

	void write_resolutionScalingFixedDPIFactor() {
		Utils::switchcase = 50;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::resolutionScalingFixedDPIFactor_address, &Utils::resolutionScalingFixedDPIFactor, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 49;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_blendWeights() {
		Utils::switchcase = 52;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::BlendWeights_address, &Utils::BlendWeights, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 51;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_streamingMipmapsActive() {
		Utils::switchcase = 54;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::streamingMipmapsActive_address, &Utils::streamingMipmapsActive, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 53;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}

	void write_streamingMipmapsMemoryBudget() {
		Utils::switchcase = 56;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::streamingMipmapsMemoryBudget_address, &Utils::streamingMipmapsMemoryBudget, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 55;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}

	void write_streamingMipmapsMaxLevelReduction() {
		Utils::switchcase = 59;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::streamingMipmapsMaxLevelReduction_address, &Utils::streamingMipmapsMaxLevelReduction, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 58;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_streamingMipmapsAddAllCameras() {
		Utils::switchcase = 61;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::streamingMipmapsAddAllCameras_address, &Utils::streamingMipmapsAddAllCameras, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 60;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}

	void write_streamingMipmapsMaxFileIORequests() {
		Utils::switchcase = 63;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::streamingMipmapsMaxFileIORequests_address, &Utils::streamingMipmapsMaxFileIORequests, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 62;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}

	void write_maxQueuedFrames() {
		Utils::switchcase = 65;
		Utils::settings = 1;
		dmntchtWriteCheatProcessMemory(Utils::maxQueuedFrames_address, &Utils::maxQueuedFrames, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 64;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}
	
	void write_SetResolution() {
		Utils::switchcase = 16;
		Utils::settings = 2;
		dmntchtWriteCheatProcessMemory(Utils::width_address, &Utils::width, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::height_address, &Utils::height, 0x4);
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread(500'000'000);
		Utils::switchcase = 1;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		svcSleepThread((1000*1000*1000)/30);
		Utils::switchcase = 2;
		dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
		dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
		Utils::switchcase = 0;
		Utils::settings = 0;
	}

}
