#pragma once

#include <tesla.hpp>
#include "dmntcht.h"
#include "dmntchtRead.hpp"
#include "dmntchtWrite.hpp"
#include "Utils.hpp"


class set_pixelLightCount : public tsl::Gui {
public:
    set_pixelLightCount() {}
	~set_pixelLightCount() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_shadows : public tsl::Gui {
public:
    set_shadows() {}
	~set_shadows() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_shadowProjection : public tsl::Gui {
public:
    set_shadowProjection() {}
	~set_shadowProjection() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_shadowCascades : public tsl::Gui {
public:
    set_shadowCascades() {}
	~set_shadowCascades() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_shadowDistance : public tsl::Gui {
public:
    set_shadowDistance() {}
	~set_shadowDistance() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_shadowmaskMode : public tsl::Gui {
public:
    set_shadowmaskMode() {}
	~set_shadowmaskMode() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_shadowResolution : public tsl::Gui {
public:
    set_shadowResolution() {}
	~set_shadowResolution() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_shadowNearPlaneOffset : public tsl::Gui {
public:
    set_shadowNearPlaneOffset() {}
	~set_shadowNearPlaneOffset() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_shadowCascade2Split : public tsl::Gui {
public:
    set_shadowCascade2Split() {}
	~set_shadowCascade2Split() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_lodBias : public tsl::Gui {
public:
    set_lodBias() {}
	~set_lodBias() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_anisotropicFiltering : public tsl::Gui {
public:
    set_anisotropicFiltering() {}
	~set_anisotropicFiltering() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_masterTextureLimit : public tsl::Gui {
public:
    set_masterTextureLimit() {}
	~set_masterTextureLimit() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_maximumLODLevel : public tsl::Gui {
public:
    set_maximumLODLevel() {}
	~set_maximumLODLevel() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_particleRaycastBudget : public tsl::Gui {
public:
    set_particleRaycastBudget() {}
	~set_particleRaycastBudget() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_softParticles : public tsl::Gui {
public:
    set_softParticles() {}
	~set_softParticles() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_softVegetation : public tsl::Gui {
public:
    set_softVegetation() {}
	~set_softVegetation() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_vSyncCount : public tsl::Gui {
public:
    set_vSyncCount() {}
	~set_vSyncCount() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_antiAliasing : public tsl::Gui {
public:
    set_antiAliasing() {}
	~set_antiAliasing() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_asyncUploadTimeSlice : public tsl::Gui {
public:
    set_asyncUploadTimeSlice() {}
	~set_asyncUploadTimeSlice() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_asyncUploadBufferSize : public tsl::Gui {
public:
    set_asyncUploadBufferSize() {}
	~set_asyncUploadBufferSize() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_asyncUploadPersistentBuffer : public tsl::Gui {
public:
    set_asyncUploadPersistentBuffer() {}
	~set_asyncUploadPersistentBuffer() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_realtimeReflectionProbes : public tsl::Gui {
public:
    set_realtimeReflectionProbes() {}
	~set_realtimeReflectionProbes() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_billboardsFaceCameraPosition : public tsl::Gui {
public:
    set_billboardsFaceCameraPosition() {}
	~set_billboardsFaceCameraPosition() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_resolutionScalingFixedDPIFactor : public tsl::Gui {
public:
    set_resolutionScalingFixedDPIFactor() {}
	~set_resolutionScalingFixedDPIFactor() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_blendWeights : public tsl::Gui {
public:
    set_blendWeights() {}
	~set_blendWeights() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_streamingMipmapsActive : public tsl::Gui {
public:
    set_streamingMipmapsActive() {}
	~set_streamingMipmapsActive() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_streamingMipmapsMemoryBudget : public tsl::Gui {
public:
    set_streamingMipmapsMemoryBudget() {}
	~set_streamingMipmapsMemoryBudget() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_streamingMipmapsMaxLevelReduction : public tsl::Gui {
public:
    set_streamingMipmapsMaxLevelReduction() {}
	~set_streamingMipmapsMaxLevelReduction() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_streamingMipmapsAddAllCameras : public tsl::Gui {
public:
    set_streamingMipmapsAddAllCameras() {}
	~set_streamingMipmapsAddAllCameras() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_streamingMipmapsMaxFileIORequests : public tsl::Gui {
public:
    set_streamingMipmapsMaxFileIORequests() {}
	~set_streamingMipmapsMaxFileIORequests() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class set_maxQueuedFrames : public tsl::Gui {
public:
    set_maxQueuedFrames() {}
	~set_maxQueuedFrames() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class QualitySettings : public tsl::Gui {
public:
    QualitySettings();
	~QualitySettings() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};