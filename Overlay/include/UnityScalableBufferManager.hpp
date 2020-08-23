#pragma once

#include <tesla.hpp>
#include "dmntcht.h"
#include "dmntchtRead.hpp"
#include "dmntchtWrite.hpp"
#include "Utils.hpp"


class ResizeBuffers : public tsl::Gui {
public:
    ResizeBuffers() {}
	~ResizeBuffers() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class ScalableBufferManagerSettings : public tsl::Gui {
public:
    ScalableBufferManagerSettings();
	~ScalableBufferManagerSettings() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};