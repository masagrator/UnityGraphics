#include "dmntchtRead.hpp"

namespace dmntcht {
	
	void Read() {
			dmntchtReadCheatProcessMemory(Utils::pixelLightCount_address, &Utils::pixelLightCount, 0x4);
			dmntchtReadCheatProcessMemory(Utils::ShadowQuality_address, &Utils::ShadowQuality, 0x4);
			dmntchtReadCheatProcessMemory(Utils::ShadowProjection_address, &Utils::ShadowProjection, 0x4);
			dmntchtReadCheatProcessMemory(Utils::shadowCascades_address, &Utils::shadowCascades, 0x4);
			dmntchtReadCheatProcessMemory(Utils::shadowDistance_address, &Utils::shadowDistance, 0x4);
			dmntchtReadCheatProcessMemory(Utils::ShadowResolution_address, &Utils::ShadowResolution, 0x4);
			dmntchtReadCheatProcessMemory(Utils::ShadowmaskMode_address, &Utils::ShadowmaskMode, 0x4);
			dmntchtReadCheatProcessMemory(Utils::shadowNearPlaneOffset_address, &Utils::shadowNearPlaneOffset, 0x4);
			dmntchtReadCheatProcessMemory(Utils::shadowCascade2Split_address, &Utils::shadowCascade2Split, 0x4);
			dmntchtReadCheatProcessMemory(Utils::lodBias_address, &Utils::lodBias, 0x4);
			dmntchtReadCheatProcessMemory(Utils::AnisotropicFiltering_address, &Utils::AnisotropicFiltering, 0x4);
			dmntchtReadCheatProcessMemory(Utils::masterTextureLimit_address, &Utils::masterTextureLimit, 0x4);
			dmntchtReadCheatProcessMemory(Utils::maximumLODLevel_address, &Utils::maximumLODLevel, 0x4);
			dmntchtReadCheatProcessMemory(Utils::particleRaycastBudget_address, &Utils::particleRaycastBudget, 0x4);
			dmntchtReadCheatProcessMemory(Utils::softParticles_address, &Utils::softParticles, 0x1);
			dmntchtReadCheatProcessMemory(Utils::softVegetation_address, &Utils::softVegetation, 0x1);
			dmntchtReadCheatProcessMemory(Utils::vSyncCount_address, &Utils::vSyncCount, 0x4);
			dmntchtReadCheatProcessMemory(Utils::antiAliasing_address, &Utils::antiAliasing, 0x4);
			dmntchtReadCheatProcessMemory(Utils::asyncUploadTimeSlice_address, &Utils::asyncUploadTimeSlice, 0x4);
			dmntchtReadCheatProcessMemory(Utils::asyncUploadBufferSize_address, &Utils::asyncUploadBufferSize, 0x4);
			dmntchtReadCheatProcessMemory(Utils::asyncUploadPersistentBuffer_address, &Utils::asyncUploadPersistentBuffer, 0x1);
			dmntchtReadCheatProcessMemory(Utils::realtimeReflectionProbes_address, &Utils::realtimeReflectionProbes, 0x1);
			dmntchtReadCheatProcessMemory(Utils::billboardsFaceCameraPosition_address, &Utils::billboardsFaceCameraPosition, 0x1);
			dmntchtReadCheatProcessMemory(Utils::resolutionScalingFixedDPIFactor_address, &Utils::resolutionScalingFixedDPIFactor, 0x4);
			dmntchtReadCheatProcessMemory(Utils::BlendWeights_address, &Utils::BlendWeights, 0x4);
			dmntchtReadCheatProcessMemory(Utils::streamingMipmapsActive_address, &Utils::streamingMipmapsActive, 0x1);
			dmntchtReadCheatProcessMemory(Utils::streamingMipmapsMemoryBudget_address, &Utils::streamingMipmapsMemoryBudget, 0x4);
			dmntchtReadCheatProcessMemory(Utils::streamingMipmapsMaxLevelReduction_address, &Utils::streamingMipmapsMaxLevelReduction, 0x4);
			dmntchtReadCheatProcessMemory(Utils::streamingMipmapsAddAllCameras_address, &Utils::streamingMipmapsAddAllCameras, 0x1);
			dmntchtReadCheatProcessMemory(Utils::streamingMipmapsMaxFileIORequests_address, &Utils::streamingMipmapsMaxFileIORequests, 0x4);
			dmntchtReadCheatProcessMemory(Utils::maxQueuedFrames_address, &Utils::maxQueuedFrames, 0x4);
			dmntchtReadCheatProcessMemory(Utils::width_address, &Utils::width, 0x4);
			dmntchtReadCheatProcessMemory(Utils::height_address, &Utils::height, 0x4);
	}
}

