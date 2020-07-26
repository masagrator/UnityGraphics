#pragma once

#include <tesla.hpp>
#include "libstratosphere/dmntcht.hpp"
#include "dmntchtRead.hpp"
#include "dmntchtWrite.hpp"
#include "Utils.hpp"


class SetResolution : public tsl::Gui {
public:
    SetResolution() {}
	~SetResolution() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};

class ScreenSettings : public tsl::Gui {
public:
    ScreenSettings();
	~ScreenSettings() {}

    virtual tsl::elm::Element *createUI() override;
	
	virtual void update() override;
};