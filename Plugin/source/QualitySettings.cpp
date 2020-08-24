//
//
//
#include "QualitySettings.hpp"

namespace UnitySettings { namespace Quality {
	
	typedef uint32_t (*get_pixelLightCount)();
	uintptr_t ptr_get_pixelLightCount = 0;
	typedef void (*set_pixelLightCount)(uint32_t v_pixelLightCount);
	uintptr_t ptr_set_pixelLightCount = 0;
	uint32_t pixelLightCount = 0;

	typedef uint32_t (*get_shadows)();
	uintptr_t ptr_get_shadows = 0;
	typedef void (*set_shadows)(uint32_t v_ShadowQuality);
	uintptr_t ptr_set_shadows = 0;
	uint32_t ShadowQuality = 0;

	typedef uint32_t (*get_shadowProjection)();
	uintptr_t ptr_get_shadowProjection = 0;
	typedef void (*set_shadowProjection)(uint32_t v_ShadowProjection);
	uintptr_t ptr_set_shadowProjection = 0;
	uint32_t ShadowProjection = 0;

	typedef uint32_t (*get_shadowCascades)();
	uintptr_t ptr_get_shadowCascades = 0;
	typedef void (*set_shadowCascades)(uint32_t v_shadowCascades);
	uintptr_t ptr_set_shadowCascades = 0;
	uint32_t shadowCascades = 0;

	typedef float (*get_shadowDistance)();
	uintptr_t ptr_get_shadowDistance = 0;
	typedef void (*set_shadowDistance)(float v_shadowDistance);
	uintptr_t ptr_set_shadowDistance = 0;
	float shadowDistance = 0;

	typedef uint32_t (*get_shadowResolution)();
	uintptr_t ptr_get_shadowResolution = 0;
	typedef void (*set_shadowResolution)(uint32_t v_ShadowResolution);
	uintptr_t ptr_set_shadowResolution = 0;
	uint32_t ShadowResolution = 0;

	typedef uint32_t (*get_shadowmaskMode)();
	uintptr_t ptr_get_shadowmaskMode = 0;
	typedef void (*set_shadowmaskMode)(uint32_t v_ShadowmaskMode);
	uintptr_t ptr_set_shadowmaskMode = 0;
	uint32_t ShadowmaskMode = 0;

	typedef float (*get_shadowNearPlaneOffset)();
	uintptr_t ptr_get_shadowNearPlaneOffset = 0;
	typedef void (*set_shadowNearPlaneOffset)(float v_shadowNearPlaneOffset);
	uintptr_t ptr_set_shadowNearPlaneOffset = 0;
	float shadowNearPlaneOffset = 0;

	typedef float (*get_shadowCascade2Split)();
	uintptr_t ptr_get_shadowCascade2Split = 0;
	typedef void (*set_shadowCascade2Split)(float v_shadowCascade2Split);
	uintptr_t ptr_set_shadowCascade2Split = 0;
	float shadowCascade2Split = 0;

	typedef float (*get_lodBias)();
	uintptr_t ptr_get_lodBias = 0;
	typedef void (*set_lodBias)(float v_lodBias);
	uintptr_t ptr_set_lodBias = 0;
	float lodBias = 0;

	typedef uint32_t (*get_anisotropicFiltering)();
	uintptr_t ptr_get_anisotropicFiltering = 0;
	typedef void (*set_anisotropicFiltering)(uint32_t v_AnisotropicFiltering);
	uintptr_t ptr_set_anisotropicFiltering = 0;
	uint32_t AnisotropicFiltering = 0;

	typedef uint32_t (*get_masterTextureLimit)();
	uintptr_t ptr_get_masterTextureLimit = 0;
	typedef void (*set_masterTextureLimit)(uint32_t v_masterTextureLimit);
	uintptr_t ptr_set_masterTextureLimit = 0;
	uint32_t masterTextureLimit = 0;

	typedef uint32_t (*get_maximumLODLevel)();
	uintptr_t ptr_get_maximumLODLevel = 0;
	typedef void (*set_maximumLODLevel)(uint32_t v_maximumLODLevel);
	uintptr_t ptr_set_maximumLODLevel = 0;
	uint32_t maximumLODLevel = 0;

	typedef uint32_t (*get_particleRaycastBudget)();
	uintptr_t ptr_get_particleRaycastBudget = 0;
	typedef void (*set_particleRaycastBudget)(uint32_t v_particleRaycastBudget);
	uintptr_t ptr_set_particleRaycastBudget = 0;
	uint32_t particleRaycastBudget = 0;

	typedef bool (*get_softParticles)();
	uintptr_t ptr_get_softParticles = 0;
	typedef void (*set_softParticles)(bool v_softParticles);
	uintptr_t ptr_set_softParticles = 0;
	bool softParticles = false;

	typedef bool (*get_softVegetation)();
	uintptr_t ptr_get_softVegetation = 0;
	typedef void (*set_softVegetation)(bool v_softVegetation);
	uintptr_t ptr_set_softVegetation = 0;
	bool softVegetation = false;

	typedef uint32_t (*get_vSyncCount)();
	uintptr_t ptr_get_vSyncCount = 0;
	typedef void (*set_vSyncCount)(uint32_t v_vSyncCount);
	uintptr_t ptr_set_vSyncCount = 0;
	uint32_t vSyncCount = 0;

	typedef uint32_t (*get_antiAliasing)();
	uintptr_t ptr_get_antiAliasing = 0;
	typedef void (*set_antiAliasing)(uint32_t v_antiAliasing);
	uintptr_t ptr_set_antiAliasing = 0;
	uint32_t antiAliasing = 0;

	uintptr_t ptr_get_asyncUploadTimeSlice = 0;
	typedef uint32_t (*get_asyncUploadTimeSlice)();
	uintptr_t ptr_set_asyncUploadTimeSlice = 0;
	typedef void (*set_asyncUploadTimeSlice)(uint32_t v_asyncUploadTimeSlice);
	uint32_t asyncUploadTimeSlice = 0;

	uintptr_t ptr_get_asyncUploadBufferSize = 0;
	typedef uint32_t (*get_asyncUploadBufferSize)();
	uintptr_t ptr_set_asyncUploadBufferSize = 0;
	typedef void (*set_asyncUploadBufferSize)(uint32_t v_asyncUploadBufferSize);
	uint32_t asyncUploadBufferSize = 0;
	
	uintptr_t ptr_get_asyncUploadPersistentBuffer = 0;
	typedef bool (*get_asyncUploadPersistentBuffer)();
	uintptr_t ptr_set_asyncUploadPersistentBuffer = 0;	
	typedef void (*set_asyncUploadPersistentBuffer)(bool v_asyncUploadPersistentBuffer);
	bool asyncUploadPersistentBuffer = false;
	
	uintptr_t ptr_get_realtimeReflectionProbes = 0;
	typedef bool (*get_realtimeReflectionProbes)();
	uintptr_t ptr_set_realtimeReflectionProbes = 0;	
	typedef void (*set_realtimeReflectionProbes)(bool v_asyncUploadPersistentBuffer);
	bool realtimeReflectionProbes = false;

	uintptr_t ptr_get_billboardsFaceCameraPosition = 0;
	typedef bool (*get_billboardsFaceCameraPosition)();
	uintptr_t ptr_set_billboardsFaceCameraPosition = 0;	
	typedef void (*set_billboardsFaceCameraPosition)(bool v_billboardsFaceCameraPosition);
	bool billboardsFaceCameraPosition = false;

	uintptr_t ptr_get_resolutionScalingFixedDPIFactor = 0;
	typedef float (*get_resolutionScalingFixedDPIFactor)();
	uintptr_t ptr_set_resolutionScalingFixedDPIFactor = 0;	
	typedef void (*set_resolutionScalingFixedDPIFactor)(float v_resolutionScalingFixedDPIFactor);	
	float resolutionScalingFixedDPIFactor = 0;

	uintptr_t ptr_get_blendWeights = 0;
	typedef uint32_t (*get_blendWeights)();
	uintptr_t ptr_set_blendWeights = 0;	
	typedef void (*set_blendWeights)(uint32_t v_blendWeights);
	uint32_t BlendWeights = 0;

	uintptr_t ptr_get_streamingMipmapsActive = 0;
	typedef bool (*get_streamingMipmapsActive)();
	uintptr_t ptr_set_streamingMipmapsActive = 0;	
	typedef void (*set_streamingMipmapsActive)(bool v_streamingMipmapsActive);
	bool streamingMipmapsActive = false;

	uintptr_t ptr_get_streamingMipmapsMemoryBudget = 0;
	typedef float (*get_streamingMipmapsMemoryBudget)();
	uintptr_t ptr_set_streamingMipmapsMemoryBudget = 0;	
	typedef void (*set_streamingMipmapsMemoryBudget)(float v_streamingMipmapsMemoryBudget);	
	float streamingMipmapsMemoryBudget = 0;

	uintptr_t ptr_get_streamingMipmapsRenderersPerFrame = 0;
	typedef uint32_t (*get_streamingMipmapsRenderersPerFrame)();
	uint32_t streamingMipmapsRenderersPerFrame = 0;

	uintptr_t ptr_get_streamingMipmapsMaxLevelReduction = 0;
	typedef uint32_t (*get_streamingMipmapsMaxLevelReduction)();
	uintptr_t ptr_set_streamingMipmapsMaxLevelReduction = 0;	
	typedef void (*set_streamingMipmapsMaxLevelReduction)(uint32_t v_streamingMipmapsMaxLevelReduction);
	uint32_t streamingMipmapsMaxLevelReduction = 0;
	
	uintptr_t ptr_get_streamingMipmapsAddAllCameras = 0;
	typedef bool (*get_streamingMipmapsAddAllCameras)();
	uintptr_t ptr_set_streamingMipmapsAddAllCameras = 0;
	typedef void (*set_streamingMipmapsAddAllCameras)(bool v_streamingMipmapsAddAllCameras);
	bool streamingMipmapsAddAllCameras = false;

	uintptr_t ptr_get_streamingMipmapsMaxFileIORequests = 0;
	typedef uint32_t (*get_streamingMipmapsMaxFileIORequests)();
	uintptr_t ptr_set_streamingMipmapsMaxFileIORequests = 0;	
	typedef void (*set_streamingMipmapsMaxFileIORequests)(uint32_t v_streamingMipmapsMaxFileIORequests);
	uint32_t streamingMipmapsMaxFileIORequests = 0;

	typedef int32_t (*get_maxQueuedFrames)();
	uintptr_t ptr_get_maxQueuedFrames = 0;
	typedef void (*set_maxQueuedFrames)(int32_t v_maxQueuedFrames);
	uintptr_t ptr_set_maxQueuedFrames = 0;
	int32_t maxQueuedFrames = 0;

	typedef uint32_t (*GetQualityLevel)();
	uintptr_t ptr_GetQualityLevel = 0;
	typedef void (*SetQualityLevel)(uint32_t v_QualityLevel);
	uintptr_t ptr_SetQualityLevel = 0;
	uint32_t QualityLevel = 0;

	uintptr_t ptr_get_names = 0;
	uintptr_t ptr_get_desiredColorSpace = 0;	
	uintptr_t ptr_get_activeColorSpace = 0;	

	void Change (uint8_t m_switchcase) {
		switch(m_switchcase) {

			//"UnityEngine.QualitySettings::get_pixelLightCount"
			case 1:
				if (ptr_get_pixelLightCount != 0) pixelLightCount = ((get_pixelLightCount)(ptr_get_pixelLightCount))();
				break;

			//"UnityEngine.QualitySettings::set_pixelLightCount"
			case 2:
				if (ptr_set_pixelLightCount != 0) ((set_pixelLightCount)(ptr_set_pixelLightCount))(pixelLightCount);
				break;
				
			//"UnityEngine.QualitySettings::get_shadows"
			case 3:
				if (ptr_get_shadows != 0) ShadowQuality = ((get_shadows)(ptr_get_shadows))();
				break;

			//"UnityEngine.QualitySettings::set_shadows"
			case 4:
				if (ptr_set_shadows != 0) {
					if (ShadowQuality > 2) ShadowQuality = 0;
					((set_shadows)(ptr_set_shadows))(ShadowQuality);
				}
				break;

			//"UnityEngine.QualitySettings::get_shadowProjection"
			case 5:
				if (ptr_get_shadowProjection != 0) ShadowProjection = ((get_shadowProjection)(ptr_get_shadowProjection))();
				break;

			//"UnityEngine.QualitySettings::set_shadowProjection"
			case 6:
				if (ptr_set_shadowProjection != 0) {
					if (ShadowProjection > 1) ShadowProjection = 0;
					((set_shadowProjection)(ptr_set_shadowProjection))(ShadowProjection);
				}
				break;

			//"UnityEngine.QualitySettings::get_shadowCascades"
			case 7:
				if (ptr_get_shadowCascades != 0) shadowCascades = ((get_shadowCascades)(ptr_get_shadowCascades))();
				break;
				
			//"UnityEngine.QualitySettings::set_shadowCascades"
			case 8:
				if (ptr_set_shadowCascades != 0) ((set_shadowCascades)(ptr_set_shadowCascades))(shadowCascades);
				break;
			
			//"UnityEngine.QualitySettings::get_shadowDistance"
			case 9:
				if (ptr_get_shadowDistance != 0) shadowDistance = ((get_shadowDistance)(ptr_get_shadowDistance))();
				break;
			
			//"UnityEngine.QualitySettings::set_shadowDistance"
			case 10:
				if (ptr_set_shadowDistance != 0) ((set_shadowDistance)(ptr_set_shadowDistance))(shadowDistance);
				break;
			
			//"UnityEngine.QualitySettings::get_shadowResolution"
			case 11:
				if (ptr_get_shadowResolution != 0) ShadowResolution = ((get_shadowResolution)(ptr_get_shadowResolution))();
				break;

			//"UnityEngine.QualitySettings::set_shadowResolution"
			case 12:
				if (ptr_set_shadowResolution != 0) {
					if (ShadowResolution > 3) ShadowResolution = 0;
					((set_shadowResolution)(ptr_set_shadowResolution))(ShadowResolution);
				}
				break;
			
			//"UnityEngine.QualitySettings::get_shadowmaskMode"
			case 13:
				if (ptr_get_shadowmaskMode != 0) ShadowmaskMode = ((get_shadowmaskMode)(ptr_get_shadowmaskMode))();
				break;
			
			//"UnityEngine.QualitySettings::set_shadowmaskMode"
			case 14:
				if (ptr_set_shadowmaskMode != 0) {
					if (ShadowmaskMode > 1) ShadowmaskMode = 0;
					((set_shadowmaskMode)(ptr_set_shadowmaskMode))(ShadowmaskMode);
				}
				break;
			
			//"UnityEngine.QualitySettings::get_shadowNearPlaneOffset"
			case 15:
				if (ptr_get_shadowNearPlaneOffset != 0) shadowNearPlaneOffset = ((get_shadowNearPlaneOffset)(ptr_get_shadowNearPlaneOffset))();
				break;
			
			//"UnityEngine.QualitySettings::set_shadowNearPlaneOffset"
			case 16:
				if (ptr_set_shadowNearPlaneOffset != 0) ((set_shadowNearPlaneOffset)(ptr_set_shadowNearPlaneOffset))(shadowNearPlaneOffset);
				break;
			
			//"UnityEngine.QualitySettings::get_shadowCascade2Split"
			case 17:
				if (ptr_get_shadowCascade2Split != 0) shadowCascade2Split = ((get_shadowCascade2Split)(ptr_get_shadowCascade2Split))();			
				break;
			
			//"UnityEngine.QualitySettings::set_shadowCascade2Split"
			case 18:
				if (ptr_set_shadowCascade2Split != 0) ((set_shadowCascade2Split)(ptr_set_shadowCascade2Split))(shadowCascade2Split);
				break;

			//"UnityEngine.QualitySettings::get_shadowCascade4Split_Injected"
			case 19:
				break;

			//"UnityEngine.QualitySettings::set_shadowCascade4Split_Injected"
			case 20:
				break;
			
			//"UnityEngine.QualitySettings::get_lodBias"
			case 21:
				if (ptr_get_lodBias != 0) lodBias = ((get_lodBias)(ptr_get_lodBias))();		
				break;

			//"UnityEngine.QualitySettings::set_lodBias"
			case 22:
				if (ptr_set_lodBias != 0) ((set_lodBias)(ptr_set_lodBias))(lodBias);	
				break;

			//"UnityEngine.QualitySettings::get_anisotropicFiltering"
			case 23:
				if (ptr_get_anisotropicFiltering != 0) AnisotropicFiltering = ((get_anisotropicFiltering)(ptr_get_anisotropicFiltering))();
				break;
			
			//"UnityEngine.QualitySettings::set_anisotropicFiltering"
			case 24:
				if (ptr_get_anisotropicFiltering != 0) {
					if (AnisotropicFiltering > 2) AnisotropicFiltering = 0;
					((set_anisotropicFiltering)(ptr_set_anisotropicFiltering))(AnisotropicFiltering);	
				}
				break;
			
			//"UnityEngine.QualitySettings::get_masterTextureLimit"
			case 25:
				if (ptr_get_masterTextureLimit != 0) masterTextureLimit = ((get_masterTextureLimit)(ptr_get_masterTextureLimit))();
				break;
			
			//"UnityEngine.QualitySettings::set_masterTextureLimit"
			case 26:
				if (ptr_set_masterTextureLimit != 0) ((set_masterTextureLimit)(ptr_set_masterTextureLimit))(masterTextureLimit);
				break;
			
			//"UnityEngine.QualitySettings::get_maximumLODLevel"
			case 27:
				if (ptr_get_maximumLODLevel != 0) maximumLODLevel = ((get_maximumLODLevel)(ptr_get_maximumLODLevel))();
				break;
			
			//"UnityEngine.QualitySettings::set_maximumLODLevel"
			case 28:
				if (ptr_set_maximumLODLevel != 0) ((set_maximumLODLevel)(ptr_set_maximumLODLevel))(maximumLODLevel);
				break;
			
			//"UnityEngine.QualitySettings::get_particleRaycastBudget"
			case 29:
				if (ptr_get_particleRaycastBudget != 0) particleRaycastBudget = ((get_particleRaycastBudget)(ptr_get_particleRaycastBudget))();
				break;
			
			//"UnityEngine.QualitySettings::set_particleRaycastBudget"
			case 30:
				if (ptr_set_particleRaycastBudget != 0) ((set_particleRaycastBudget)(ptr_set_particleRaycastBudget))(particleRaycastBudget);
				break;
			
			//"UnityEngine.QualitySettings::get_softParticles"
			case 31:
				if (ptr_get_softParticles != 0) softParticles = ((get_softParticles)(ptr_get_softParticles))();
				break;
			
			//"UnityEngine.QualitySettings::set_softParticles"
			case 32:
				if (ptr_set_softParticles != 0) ((set_softParticles)(ptr_set_softParticles))(softParticles);
				break;
			
			//"UnityEngine.QualitySettings::get_softVegetation"
			case 33:
				if (ptr_get_softVegetation != 0) softVegetation = ((get_softVegetation)(ptr_get_softVegetation))();
				break;
			
			//"UnityEngine.QualitySettings::set_softParticles"
			case 34:
				if (ptr_set_softVegetation != 0) ((set_softVegetation)(ptr_set_softVegetation))(softVegetation);
				break;
			
			//"UnityEngine.QualitySettings::get_vSyncCount"
			case 35:
				if (ptr_get_vSyncCount != 0) vSyncCount = ((get_vSyncCount)(ptr_get_vSyncCount))();
				break;
			
			//"UnityEngine.QualitySettings::set_vSyncCount"
			case 36:
				if (ptr_set_vSyncCount != 0) {
					if (vSyncCount > 2) vSyncCount = 0;
					((set_vSyncCount)(ptr_set_vSyncCount))(vSyncCount);
				}
				break;
			
			//"UnityEngine.QualitySettings::get_antiAliasing"
			case 37:
				if (ptr_get_antiAliasing != 0) antiAliasing = ((get_antiAliasing)(ptr_get_antiAliasing))();
				break;
			
			//"UnityEngine.QualitySettings::set_antiAliasing"
			case 38:
				if (ptr_set_antiAliasing != 0) {
					if (antiAliasing > 8) antiAliasing = 0;
					((set_antiAliasing)(ptr_set_antiAliasing))(antiAliasing);
				}
				break;			

			//"UnityEngine.QualitySettings::get_asyncUploadTimeSlice"
			case 39:
				if (ptr_get_asyncUploadTimeSlice != 0) asyncUploadTimeSlice = ((get_asyncUploadTimeSlice)(ptr_get_asyncUploadTimeSlice))();
				break;
				
			//"UnityEngine.QualitySettings::set_asyncUploadTimeSlice"
			case 40:
				if (ptr_set_asyncUploadTimeSlice != 0) ((set_asyncUploadTimeSlice)(ptr_set_asyncUploadTimeSlice))(asyncUploadTimeSlice);
				break;
			
			//"UnityEngine.QualitySettings::get_asyncUploadBufferSize"
			case 41:
				if (ptr_get_asyncUploadBufferSize != 0) asyncUploadBufferSize = ((get_asyncUploadBufferSize)(ptr_get_asyncUploadBufferSize))();
				break;
			
			//"UnityEngine.QualitySettings::set_asyncUploadBufferSize"
			case 42:
				if (ptr_set_asyncUploadBufferSize != 0) ((set_asyncUploadBufferSize)(ptr_set_asyncUploadBufferSize))(asyncUploadBufferSize);
				break;
			
			//"UnityEngine.QualitySettings::get_asyncUploadPersistentBuffer"
			case 43:
				if (ptr_get_asyncUploadPersistentBuffer != 0) asyncUploadPersistentBuffer = ((get_asyncUploadPersistentBuffer)(ptr_get_asyncUploadPersistentBuffer))();
				break;
			
			//"UnityEngine.QualitySettings::set_asyncUploadPersistentBuffer"
			case 44:
				if (ptr_set_asyncUploadPersistentBuffer != 0) ((set_asyncUploadPersistentBuffer)(ptr_set_asyncUploadPersistentBuffer))(asyncUploadPersistentBuffer);
				break;
			
			//"UnityEngine.QualitySettings::get_realtimeReflectionProbes"
			case 45:
				if (ptr_get_realtimeReflectionProbes != 0) realtimeReflectionProbes = ((get_realtimeReflectionProbes)(ptr_get_realtimeReflectionProbes))();
				break;
			
			//"UnityEngine.QualitySettings::set_realtimeReflectionProbes"
			case 46:
				if (ptr_set_realtimeReflectionProbes != 0) ((set_realtimeReflectionProbes)(ptr_set_realtimeReflectionProbes))(realtimeReflectionProbes);
				break;
			
			//"UnityEngine.QualitySettings::get_billboardsFaceCameraPosition"
			case 47:
				if (ptr_get_billboardsFaceCameraPosition != 0) billboardsFaceCameraPosition = ((get_billboardsFaceCameraPosition)(ptr_get_billboardsFaceCameraPosition))();
				break;
			
			//"UnityEngine.QualitySettings::set_billboardsFaceCameraPosition"
			case 48:
				if (ptr_set_billboardsFaceCameraPosition != 0) ((set_billboardsFaceCameraPosition)(ptr_set_billboardsFaceCameraPosition))(billboardsFaceCameraPosition);
				break;
			
			//"UnityEngine.QualitySettings::get_resolutionScalingFixedDPIFactor"
			case 49:
				if (ptr_get_resolutionScalingFixedDPIFactor != 0) resolutionScalingFixedDPIFactor = ((get_resolutionScalingFixedDPIFactor)(ptr_get_resolutionScalingFixedDPIFactor))();
				break;
			
			//"UnityEngine.QualitySettings::set_resolutionScalingFixedDPIFactor"
			case 50:
				if (ptr_set_resolutionScalingFixedDPIFactor != 0) ((set_resolutionScalingFixedDPIFactor)(ptr_set_resolutionScalingFixedDPIFactor))(resolutionScalingFixedDPIFactor);
				break;
			
			//"UnityEngine.QualitySettings::get_blendWeights"
			case 51:
				if (ptr_get_blendWeights != 0) BlendWeights = ((get_blendWeights)(ptr_get_blendWeights))();
				break;
			
			//"UnityEngine.QualitySettings::set_blendWeights"
			case 52:
				if (ptr_set_blendWeights != 0) ((set_blendWeights)(ptr_set_blendWeights))(BlendWeights);
				break;
		
			//"UnityEngine.QualitySettings::get_streamingMipmapsActive"
			case 53:
				if (ptr_get_streamingMipmapsActive != 0) streamingMipmapsActive = ((get_streamingMipmapsActive)(ptr_get_streamingMipmapsActive))();
				break;
			
			//"UnityEngine.QualitySettings::set_streamingMipmapsActive"
			case 54:
				if (ptr_set_streamingMipmapsActive != 0) ((set_streamingMipmapsActive)(ptr_set_streamingMipmapsActive))(streamingMipmapsActive);
				break;
			
			//"UnityEngine.QualitySettings::get_streamingMipmapsMemoryBudget"
			case 55:
				if (ptr_get_streamingMipmapsMemoryBudget != 0) streamingMipmapsMemoryBudget = ((get_streamingMipmapsMemoryBudget)(ptr_get_streamingMipmapsMemoryBudget))();
				break;
			
			//"UnityEngine.QualitySettings::set_streamingMipmapsMemoryBudget"
			case 56:
				if (ptr_set_streamingMipmapsMemoryBudget != 0) ((set_streamingMipmapsMemoryBudget)(ptr_set_streamingMipmapsMemoryBudget))(streamingMipmapsMemoryBudget);
				break;
			
			//"UnityEngine.QualitySettings::get_streamingMipmapsRenderersPerFrame"
			case 57:
				break;
			
			//"UnityEngine.QualitySettings::get_streamingMipmapsMaxLevelReduction"
			case 58:
				if (ptr_get_streamingMipmapsMaxLevelReduction != 0) streamingMipmapsMaxLevelReduction = ((get_streamingMipmapsMaxLevelReduction)(ptr_get_streamingMipmapsMaxLevelReduction))();
				break;
			
			//"UnityEngine.QualitySettings::set_streamingMipmapsMaxLevelReduction"
			case 59:
				if (ptr_set_streamingMipmapsMaxLevelReduction != 0) ((set_streamingMipmapsMaxLevelReduction)(ptr_set_streamingMipmapsMaxLevelReduction))(streamingMipmapsMaxLevelReduction);
				break;
			
			//"UnityEngine.QualitySettings::get_streamingMipmapsAddAllCameras"
			case 60:
				if (ptr_get_streamingMipmapsAddAllCameras != 0) streamingMipmapsAddAllCameras = ((get_streamingMipmapsAddAllCameras)(ptr_get_streamingMipmapsAddAllCameras))();
				break;
			
			//"UnityEngine.QualitySettings::set_streamingMipmapsAddAllCameras"
			case 61:
				if (ptr_set_streamingMipmapsAddAllCameras != 0) ((set_streamingMipmapsAddAllCameras)(ptr_set_streamingMipmapsAddAllCameras))(streamingMipmapsAddAllCameras);
				break;
			
			//"UnityEngine.QualitySettings::get_streamingMipmapsMaxFileIORequests"
			case 62:
				if (ptr_get_streamingMipmapsMaxFileIORequests != 0) streamingMipmapsMaxFileIORequests = ((get_streamingMipmapsMaxFileIORequests)(ptr_get_streamingMipmapsMaxFileIORequests))();
				break;
			
			//"UnityEngine.QualitySettings::set_streamingMipmapsMaxFileIORequests"
			case 63:
				if (ptr_set_streamingMipmapsMaxFileIORequests != 0) ((set_streamingMipmapsMaxFileIORequests)(ptr_set_streamingMipmapsMaxFileIORequests))(streamingMipmapsMaxFileIORequests);
				break;
			
			//"UnityEngine.QualitySettings::get_maxQueuedFrames"
			case 64:
				if (ptr_get_maxQueuedFrames != 0) maxQueuedFrames = ((get_maxQueuedFrames)(ptr_get_maxQueuedFrames))();
				break;
			
			//"UnityEngine.QualitySettings::set_maxQueuedFrames"
			case 65:
				if (ptr_set_maxQueuedFrames != 0) ((set_maxQueuedFrames)(ptr_set_maxQueuedFrames))(maxQueuedFrames);
				break;
			
			//"UnityEngine.QualitySettings::GetQualityLevel"
			case 66:
				if (ptr_GetQualityLevel != 0) QualityLevel = ((GetQualityLevel)(ptr_GetQualityLevel))();
				break;
			
			//"UnityEngine.QualitySettings::SetQualityLevel"
			case 67:
				if (ptr_SetQualityLevel != 0) ((SetQualityLevel)(ptr_SetQualityLevel))(QualityLevel);
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
}
}

