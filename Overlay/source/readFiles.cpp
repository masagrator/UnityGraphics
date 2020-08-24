#include "readFiles.hpp"

namespace nullify {
	
	void Quality(uint8_t nullcase) {
		switch(nullcase) {
		
			//"UnityEngine.QualitySettings::get_pixelLightCount"
			case 1:
				Utils::pixelLightCount_address = 0x0;
				break;

			//"UnityEngine.QualitySettings::set_pixelLightCount"
			case 2:
				Utils::pixelLightCount_address = 0x0;
				break;
				
			//"UnityEngine.QualitySettings::get_shadows"
			case 3:
				Utils::ShadowQuality_address = 0x0;
				break;

			//"UnityEngine.QualitySettings::set_shadows"
			case 4:
				Utils::ShadowQuality_address = 0x0;
				break;

			//"UnityEngine.QualitySettings::get_shadowProjection"
			case 5:
				Utils::ShadowProjection_address = 0x0;
				break;

			//"UnityEngine.QualitySettings::set_shadowProjection"
			case 6:
				Utils::ShadowProjection_address = 0x0;
				break;

			//"UnityEngine.QualitySettings::get_shadowCascades"
			case 7:
				Utils::shadowCascades_address = 0x0;
				break;
				
			//"UnityEngine.QualitySettings::set_shadowCascades"
			case 8:
				Utils::shadowCascades_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_shadowDistance"
			case 9:
				Utils::shadowDistance_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_shadowDistance"
			case 10:
				Utils::shadowDistance_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_shadowResolution"
			case 11:
				Utils::ShadowResolution_address = 0x0;
				break;

			//"UnityEngine.QualitySettings::set_shadowResolution"
			case 12:
				Utils::ShadowResolution_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_shadowmaskMode"
			case 13:
				Utils::ShadowmaskMode_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_shadowmaskMode"
			case 14:
				Utils::ShadowmaskMode_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_shadowNearPlaneOffset"
			case 15:
				Utils::shadowNearPlaneOffset_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_shadowNearPlaneOffset"
			case 16:
				Utils::shadowNearPlaneOffset_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_shadowCascade2Split"
			case 17:
				Utils::shadowCascade2Split_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_shadowCascade2Split"
			case 18:
				Utils::shadowCascade2Split_address = 0x0;
				break;

			//"UnityEngine.QualitySettings::get_shadowCascade4Split_Injected"
			case 19:
				break;

			//"UnityEngine.QualitySettings::set_shadowCascade4Split_Injected"
			case 20:
				break;
			
			//"UnityEngine.QualitySettings::get_lodBias"
			case 21:
				Utils::lodBias_address = 0x0;
				break;

			//"UnityEngine.QualitySettings::set_lodBias"
			case 22:
				Utils::lodBias_address = 0x0;
				break;

			//"UnityEngine.QualitySettings::get_anisotropicFiltering"
			case 23:
				Utils::AnisotropicFiltering_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_anisotropicFiltering"
			case 24:
				Utils::AnisotropicFiltering_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_masterTextureLimit"
			case 25:
				Utils::masterTextureLimit_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_masterTextureLimit"
			case 26:
				Utils::masterTextureLimit_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_maximumLODLevel"
			case 27:
				Utils::maximumLODLevel_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_maximumLODLevel"
			case 28:
				Utils::maximumLODLevel_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_particleRaycastBudget"
			case 29:
				Utils::particleRaycastBudget_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_particleRaycastBudget"
			case 30:
				Utils::particleRaycastBudget_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_softParticles"
			case 31:
				Utils::softParticles_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_softParticles"
			case 32:
				Utils::softParticles_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_softVegetation"
			case 33:
				Utils::softVegetation_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_softParticles"
			case 34:
				Utils::softVegetation_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_vSyncCount"
			case 35:
				Utils::vSyncCount_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_vSyncCount"
			case 36:
				Utils::vSyncCount_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_antiAliasing"
			case 37:
				Utils::antiAliasing_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_antiAliasing"
			case 38:
				Utils::antiAliasing_address = 0x0;
				break;			

			//"UnityEngine.QualitySettings::get_asyncUploadTimeSlice"
			case 39:
				Utils::asyncUploadTimeSlice_address = 0x0;
				break;
				
			//"UnityEngine.QualitySettings::set_asyncUploadTimeSlice"
			case 40:
				Utils::asyncUploadTimeSlice_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_asyncUploadBufferSize"
			case 41:
				Utils::asyncUploadBufferSize_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_asyncUploadBufferSize"
			case 42:
				Utils::asyncUploadBufferSize_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_asyncUploadPersistentBuffer"
			case 43:
				Utils::asyncUploadPersistentBuffer_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_asyncUploadPersistentBuffer"
			case 44:
				Utils::asyncUploadPersistentBuffer_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_realtimeReflectionProbes"
			case 45:
				Utils::realtimeReflectionProbes_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_realtimeReflectionProbes"
			case 46:
				Utils::realtimeReflectionProbes_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_billboardsFaceCameraPosition"
			case 47:
				Utils::billboardsFaceCameraPosition_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_billboardsFaceCameraPosition"
			case 48:
				Utils::billboardsFaceCameraPosition_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_resolutionScalingFixedDPIFactor"
			case 49:
				Utils::resolutionScalingFixedDPIFactor_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_resolutionScalingFixedDPIFactor"
			case 50:
				Utils::resolutionScalingFixedDPIFactor_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_blendWeights"
			case 51:
				Utils::BlendWeights_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_blendWeights"
			case 52:
				Utils::BlendWeights_address = 0x0;
				break;
		
			//"UnityEngine.QualitySettings::get_streamingMipmapsActive"
			case 53:
				Utils::streamingMipmapsActive_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_streamingMipmapsActive"
			case 54:
				Utils::streamingMipmapsActive_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_streamingMipmapsMemoryBudget"
			case 55:
				Utils::streamingMipmapsMemoryBudget_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_streamingMipmapsMemoryBudget"
			case 56:
				Utils::streamingMipmapsMemoryBudget_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_streamingMipmapsRenderersPerFrame"
			case 57:
				break;
			
			//"UnityEngine.QualitySettings::get_streamingMipmapsMaxLevelReduction"
			case 58:
				Utils::streamingMipmapsMaxLevelReduction_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_streamingMipmapsMaxLevelReduction"
			case 59:
				Utils::streamingMipmapsMaxLevelReduction_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_streamingMipmapsAddAllCameras"
			case 60:
				Utils::streamingMipmapsAddAllCameras_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_streamingMipmapsAddAllCameras"
			case 61:
				Utils::streamingMipmapsAddAllCameras_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_streamingMipmapsMaxFileIORequests"
			case 62:
				Utils::streamingMipmapsMaxFileIORequests_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_streamingMipmapsMaxFileIORequests"
			case 63:
				Utils::streamingMipmapsMaxFileIORequests_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::get_maxQueuedFrames"
			case 64:
				Utils::maxQueuedFrames_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::set_maxQueuedFrames"
			case 65:
				Utils::maxQueuedFrames_address = 0x0;
				break;
			
			//"UnityEngine.QualitySettings::GetQualityLevel"
			case 66:
				break;
			
			//"UnityEngine.QualitySettings::SetQualityLevel"
			case 67:
				break;
			
			//"UnityEngine.QualitySettings::get_names"
			case 68:
				break;
				
			//"UnityEngine.QualitySettings::get_desiredColorSpace"
			case 69:
				break;
			
			//"UnityEngine.QualitySettings::get_activeColorSpace"
			case 70:
				break;
			
			default:
				break;
		}
	}
	
	void Screen (uint8_t m_switchcase) {
		switch(m_switchcase) {

			//"UnityEngine.Screen::get_width"
			case 1:
				Utils::width_address = 0x0;
				break;

			//"UnityEngine.Screen::get_height"
			case 2:
				Utils::height_address = 0x0;
				break;
				
			//"UnityEngine.Screen::get_dpi"
			case 3:
				break;

			//"UnityEngine.Screen::RequestOrientation"
			case 4:
				break;

			//"UnityEngine.Screen::GetScreenOrientation"
			case 5:
				break;

			//"UnityEngine.Screen::get_sleepTimeout"
			case 6:
				break;

			//"UnityEngine.Screen::set_sleepTimeout"
			case 7:
				break;
				
			//"UnityEngine.Screen::IsOrientationEnabled"
			case 8:
				break;
			
			//"UnityEngine.Screen::SetOrientationEnabled"
			case 9:
				break;
			
			//"UnityEngine.Screen::get_currentResolution_Injected"
			case 10:
				break;
			
			//"UnityEngine.Screen::get_fullScreen"
			case 11:
				break;

			//"UnityEngine.Screen::set_fullScreen"
			case 12:
				break;
			
			//"UnityEngine.Screen::get_fullScreenMode"
			case 13:
				break;
			
			//"UnityEngine.Screen::set_fullScreenMode"
			case 14:
				break;
			
			//"UnityEngine.Screen::get_safeArea_Injected"
			case 15:
				break;
			
			//"UnityEngine.Screen::SetResolution"
			case 16:
				Utils::width_address = 0x0;
				Utils::height_address = 0x0;
				break;
			
			//"UnityEngine.Screen::get_resolutions"
			case 17:	
				break;
			
			default:
				break;
		}
	}
	
	void ScalableBufferManager (uint8_t m_switchcase) {
		switch(m_switchcase) {
			//"UnityEngine.ScalableBufferManager::get_widthScaleFactor"
			case 1:
				Utils::widthScaleFactor_address = 0x0;
				break;

			//"UnityEngine.ScalableBufferManager::get_heightScaleFactor"
			case 2:
				Utils::heightScaleFactor_address = 0x0;
				break;
				
			//"UnityEngine.ScalableBufferManager::ResizeBuffers"
			case 3:
				Utils::widthScaleFactor_address = 0x0;
				Utils::heightScaleFactor_address = 0x0;
				break;
			
			default:
				break;
		}
	}
}

namespace Utils {
	
	uint8_t switchcase = 0;
	uint8_t settings = 0;
	DmntCheatProcessMetadata dmnt_metadata;
	
	uintptr_t switchcase_address = 0x0;
	uintptr_t settings_address = 0x0;
	uintptr_t base_nso_address = 0x0;
	uintptr_t MAGIC_address = 0x0;

	uintptr_t pixelLightCount_address = 0x0;
	uintptr_t ShadowQuality_address = 0x0;
	uintptr_t ShadowProjection_address = 0x0;
	uintptr_t shadowCascades_address = 0x0;
	uintptr_t shadowDistance_address = 0x0;
	uintptr_t ShadowResolution_address = 0x0;
	uintptr_t ShadowmaskMode_address = 0x0;
	uintptr_t shadowNearPlaneOffset_address = 0x0;
	uintptr_t shadowCascade2Split_address = 0x0;
	uintptr_t lodBias_address = 0x0;
	uintptr_t AnisotropicFiltering_address = 0x0;
	uintptr_t masterTextureLimit_address = 0x0;
	uintptr_t maximumLODLevel_address = 0x0;
	uintptr_t particleRaycastBudget_address = 0x0;
	uintptr_t softParticles_address = 0x0;
	uintptr_t softVegetation_address = 0x0;
	uintptr_t vSyncCount_address = 0x0;
	uintptr_t antiAliasing_address = 0x0;
	uintptr_t asyncUploadTimeSlice_address = 0x0;
	uintptr_t asyncUploadBufferSize_address = 0x0;
	uintptr_t asyncUploadPersistentBuffer_address = 0x0;
	uintptr_t realtimeReflectionProbes_address = 0x0;
	uintptr_t billboardsFaceCameraPosition_address = 0x0;
	uintptr_t resolutionScalingFixedDPIFactor_address = 0x0;
	uintptr_t BlendWeights_address = 0x0;
	uintptr_t streamingMipmapsActive_address = 0x0;
	uintptr_t streamingMipmapsMemoryBudget_address = 0x0;
	uintptr_t streamingMipmapsMaxLevelReduction_address = 0x0;
	uintptr_t streamingMipmapsAddAllCameras_address = 0x0;
	uintptr_t streamingMipmapsMaxFileIORequests_address = 0x0;
	uintptr_t maxQueuedFrames_address = 0x0;
	
	uintptr_t width_address = 0x0;
	uintptr_t height_address = 0x0;
	
	uintptr_t widthScaleFactor_address = 0x0;
	uintptr_t heightScaleFactor_address = 0x0;
	
	uint32_t pixelLightCount = 0;
	uint32_t ShadowQuality = 0;
	uint32_t ShadowProjection = 0;
	uint32_t shadowCascades = 0;
	float shadowDistance = 0;
	uint32_t ShadowResolution = 0;
	uint32_t ShadowmaskMode = 0;
	float shadowNearPlaneOffset = 0;
	float shadowCascade2Split = 0;
	float lodBias = 0;
	uint32_t AnisotropicFiltering = 0;
	uint32_t masterTextureLimit = 0;
	uint32_t maximumLODLevel = 0;
	uint32_t particleRaycastBudget = 0;
	bool softParticles = false;
	bool softVegetation = false;
	uint32_t vSyncCount = 0;
	uint32_t antiAliasing = 0;
	uint32_t asyncUploadTimeSlice = 0;
	uint32_t asyncUploadBufferSize = 0;
	bool asyncUploadPersistentBuffer = false;
	bool realtimeReflectionProbes = false;
	bool billboardsFaceCameraPosition = false;
	float resolutionScalingFixedDPIFactor = 0;
	uint32_t BlendWeights = 0;
	bool streamingMipmapsActive = false;
	float streamingMipmapsMemoryBudget = 0;
	uint32_t streamingMipmapsMaxLevelReduction = 0;
	bool streamingMipmapsAddAllCameras = false;
	uint32_t streamingMipmapsMaxFileIORequests = 0;
	int32_t maxQueuedFrames = 0;
	
	uint32_t width = 0;
	uint32_t height = 0;
	
	float widthScaleFactor = 0;
	float heightScaleFactor = 0;
	
	char BID_File[192];
	char BID_File2[196];
	
	void readFiles() {
		FILE* offset = fopen("sdmc:/SaltySD/UnityGraphics.hex", "rb");
		if (offset != NULL) {
			fread(&switchcase_address, 0x5, 1, offset);
			fread(&settings_address, 0x5, 1, offset);
			fread(&MAGIC_address, 0x5, 1, offset);
			///Read pointers for graphics settings values
			fread(&pixelLightCount_address, 0x5, 1, offset);
			fread(&ShadowQuality_address, 0x5, 1, offset);
			fread(&ShadowProjection_address, 0x5, 1, offset);
			fread(&shadowCascades_address, 0x5, 1, offset);
			fread(&shadowDistance_address, 0x5, 1, offset);
			fread(&ShadowResolution_address, 0x5, 1, offset);
			fread(&ShadowmaskMode_address, 0x5, 1, offset);
			fread(&shadowNearPlaneOffset_address, 0x5, 1, offset);
			fread(&shadowCascade2Split_address, 0x5, 1, offset);
			fread(&lodBias_address, 0x5, 1, offset);
			fread(&AnisotropicFiltering_address, 0x5, 1, offset);
			fread(&masterTextureLimit_address, 0x5, 1, offset);
			fread(&maximumLODLevel_address, 0x5, 1, offset);
			fread(&particleRaycastBudget_address, 0x5, 1, offset);
			fread(&softParticles_address, 0x5, 1, offset);
			fread(&softVegetation_address, 0x5, 1, offset);
			fread(&vSyncCount_address, 0x5, 1, offset);
			fread(&antiAliasing_address, 0x5, 1, offset);
			fread(&asyncUploadTimeSlice_address, 0x5, 1, offset);
			fread(&asyncUploadBufferSize_address, 0x5, 1, offset);
			fread(&asyncUploadPersistentBuffer_address, 0x5, 1, offset);
			fread(&realtimeReflectionProbes_address, 0x5, 1, offset);
			fread(&billboardsFaceCameraPosition_address, 0x5, 1, offset);
			fread(&resolutionScalingFixedDPIFactor_address, 0x5, 1, offset);
			fread(&BlendWeights_address, 0x5, 1, offset);
			fread(&streamingMipmapsActive_address, 0x5, 1, offset);
			fread(&streamingMipmapsMemoryBudget_address, 0x5, 1, offset);
			fread(&streamingMipmapsMaxLevelReduction_address, 0x5, 1, offset);
			fread(&streamingMipmapsAddAllCameras_address, 0x5, 1, offset);
			fread(&streamingMipmapsMaxFileIORequests_address, 0x5, 1, offset);
			fread(&maxQueuedFrames_address, 0x5, 1, offset);
			
			fread(&width_address, 0x5, 1, offset);
			fread(&height_address, 0x5, 1, offset);

			fread(&widthScaleFactor_address, 0x5, 1, offset);
			fread(&heightScaleFactor_address, 0x5, 1, offset);

			FILE* __BID_File = fopen(BID_File, "rb");	
			if (__BID_File != NULL) {
				
				///Read offsets for Quality settings, add main base address to pointers and inject them to game code
				for (uint8_t i = 1; i <= 31; i++) {
					uint64_t ptr_function = 0;
					uint64_t address_function = 0;
					uint8_t error = 0;
					
					//get
					fread(&ptr_function, 0x4, 1, __BID_File);
					if (ptr_function != 0) {
						ptr_function = __builtin_bswap32((uint32_t)ptr_function);
						ptr_function = ptr_function + dmnt_metadata.main_nso_extents.base;
					}
					fread(&address_function, 0x5, 1, offset);
					if (address_function != 0 && ptr_function != 0) dmntchtWriteCheatProcessMemory(address_function, &ptr_function, 0x5);
					else {
						error = i * 2;
						if (i > 9) error = error + 2;
						if (i > 27) error++;
						nullify::Quality(error);
					}
					//set
					ptr_function = 0;
					address_function = 0;
					fread(&ptr_function, 0x4, 1, __BID_File);
					if (ptr_function != 0) {
						ptr_function = __builtin_bswap32((uint32_t)ptr_function);
						ptr_function = ptr_function + dmnt_metadata.main_nso_extents.base;
					}
					fread(&address_function, 0x5, 1, offset);
					if (address_function != 0 && ptr_function != 0) dmntchtWriteCheatProcessMemory(address_function, &ptr_function, 0x5);
					else {
						error = i * 2;
						if (i > 9) error = error + 2;
						if (i > 27) error++;
						nullify::Quality(error);
					}
				}
				
				///Read offsets for Screen settings, add main base address to pointers and inject them to game code
				for (uint8_t i = 1; i <= 3; i++) {
					uint64_t ptr_function = 0;
					uint64_t address_function = 0;
					uint8_t error = 0;

					//get
					fread(&ptr_function, 0x4, 1, __BID_File);
					if (ptr_function != 0) {
						ptr_function = __builtin_bswap32((uint32_t)ptr_function);
						ptr_function = ptr_function + dmnt_metadata.main_nso_extents.base;
					}
					else {
						if (i == 3) error = 16;
						else error = i;
						nullify::Screen(error);
					}
					fread(&address_function, 0x5, 1, offset);
					if (error == 0) dmntchtWriteCheatProcessMemory(address_function, &ptr_function, 0x5);
				}

				///Read offsets for ScalableBufferManager settings, add main base address to pointers and inject them to game code
				for (uint8_t i = 1; i <= 3; i++) {
					uint64_t ptr_function = 0;
					uint64_t address_function = 0;
					uint8_t error = 0;

					//get
					fread(&ptr_function, 0x4, 1, __BID_File);
					if (ptr_function != 0) {
						ptr_function = __builtin_bswap32((uint32_t)ptr_function);
						ptr_function = ptr_function + dmnt_metadata.main_nso_extents.base;
					}
					else {
						error = i;
						nullify::ScalableBufferManager(error);
					}
					fread(&address_function, 0x5, 1, offset);
					if (error == 0) dmntchtWriteCheatProcessMemory(address_function, &ptr_function, 0x5);
				}
				fclose(__BID_File);
			}
			fclose(offset);
		}
	}
}
	