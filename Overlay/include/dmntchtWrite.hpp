#include <tesla.hpp>
#include "dmntcht.h"
#include "readFiles.hpp"

namespace dmntcht {
	///Quality
	void write_pixelLightCount();
	void write_shadows();
	void write_shadowProjection();
	void write_shadowCascades();
	void write_shadowDistance();
	void write_shadowResolution();
	void write_shadowmaskMode();
	void write_shadowNearPlaneOffset();
	void write_shadowCascade2Split();
	void write_lodBias();
	void write_anisotropicFiltering();
	void write_masterTextureLimit();
	void write_maximumLODLevel();
	void write_particleRaycastBudget();
	void write_softParticles();
	void write_softVegetation();
	void write_vSyncCount();
	void write_antiAliasing();
	void write_asyncUploadTimeSlice();
	void write_asyncUploadBufferSize();
	void write_asyncUploadPersistentBuffer();
	void write_realtimeReflectionProbes();
	void write_billboardsFaceCameraPosition();
	void write_resolutionScalingFixedDPIFactor();
	void write_blendWeights();
	void write_streamingMipmapsActive();
	void write_streamingMipmapsMemoryBudget();
	void write_streamingMipmapsMaxLevelReduction();
	void write_streamingMipmapsAddAllCameras();
	void write_streamingMipmapsMaxFileIORequests();
	void write_maxQueuedFrames();
	
	///Screen
	void write_SetResolution();
	
	///ScalableBufferManager
	void write_ResizeBuffers();
}