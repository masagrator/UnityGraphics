#include "UnityQuality.hpp"

///* Quality Settings Options
///
///
//
/////////////////////////////////////////////////////////////////////////////////

tsl::elm::Element *set_pixelLightCount::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
		
	auto list2 = new tsl::elm::List();
		
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
}), 25);
		
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 0");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::pixelLightCount = 0;
			dmntcht::write_pixelLightCount();
		return true;
		}

		return false;
	});		
		
	list2->addItem(clickableListItem);
		
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
	if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::pixelLightCount++;
			dmntcht::write_pixelLightCount();
			return true;
		}

		return false;
	});		
		
	list2->addItem(clickableListItem2);
		
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::pixelLightCount != 0) Utils::pixelLightCount--;
		dmntcht::write_pixelLightCount();
		return true;
	}

	return false;
	});		
		
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_pixelLightCount::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::pixelLightCount_address, &Utils::pixelLightCount, 0x4);
	sprintf(Utils::OptionsChar, "pixelLightCount: %u", Utils::pixelLightCount);
}

tsl::elm::Element *set_shadows::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Disable");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::ShadowQuality = 0;
		dmntcht::write_shadows();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Hard only");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::ShadowQuality = 1;
		dmntcht::write_shadows();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("All");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::ShadowQuality = 2;
		dmntcht::write_shadows();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_shadows::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::ShadowQuality_address, &Utils::ShadowQuality, 0x4);
	if (Utils::ShadowQuality == 0) sprintf(Utils::OptionsChar, "ShadowQuality: Disabled");
	else if (Utils::ShadowQuality == 1) sprintf(Utils::OptionsChar, "ShadowQuality: Hard only");
	else if (Utils::ShadowQuality == 2) sprintf(Utils::OptionsChar, "ShadowQuality: All");
	else sprintf(Utils::OptionsChar, "ShadowQuality: Unknown (%u)", Utils::ShadowQuality);
}

tsl::elm::Element *set_shadowProjection::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("CloseFit");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::ShadowProjection = 0;
		dmntcht::write_shadowProjection();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("StableFit");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::ShadowProjection = 1;
		dmntcht::write_shadowProjection();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_shadowProjection::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::ShadowProjection_address, &Utils::ShadowProjection, 0x4);
	if (Utils::ShadowProjection == 0) sprintf(Utils::OptionsChar, "ShadowProjection: CloseFit");
	else if (Utils::ShadowProjection == 1) sprintf(Utils::OptionsChar, "ShadowProjection: StableFit");
	else sprintf(Utils::OptionsChar, "ShadowProjection: Unknown (%u)", Utils::ShadowProjection);
}

tsl::elm::Element *set_shadowCascades::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 0");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::shadowCascades = 0;
		dmntcht::write_shadowCascades();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::shadowCascades++;
		dmntcht::write_shadowCascades();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::shadowCascades != 0) Utils::shadowCascades--;
		dmntcht::write_shadowCascades();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_shadowCascades::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::shadowCascades_address, &Utils::shadowCascades, 0x4);
	sprintf(Utils::OptionsChar, "shadowCascades: %u", Utils::shadowCascades);
}

tsl::elm::Element *set_shadowDistance::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 1");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::shadowDistance = 1;
		dmntcht::write_shadowDistance();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::shadowDistance >= 0.5) {
			Utils::shadowDistance = Utils::shadowDistance + 0.125;
		}
		else {
			Utils::denominator = (float)1 / Utils::shadowDistance;
			Utils::denominator = round(Utils::denominator);
			Utils::denominator = Utils::denominator - 1;
			Utils::shadowDistance = (float)1 / Utils::denominator;
			if (Utils::shadowDistance > 0.5) Utils::shadowDistance = 0.5;
		}
		dmntcht::write_shadowDistance();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::shadowDistance < 0.5) {
			Utils::denominator = (float)1 / Utils::shadowDistance;
			Utils::denominator = round(Utils::denominator);
			Utils::denominator = Utils::denominator + 1;
			if (Utils::shadowDistance != 0) Utils::shadowDistance = 1 / Utils::denominator;
		}
		else if (Utils::shadowDistance == 0.5) {
			Utils::denominator = 3;
			Utils::shadowDistance = (float)1 / Utils::denominator;
		}
		else {
			Utils::shadowDistance = Utils::shadowDistance - 0.125;
			if (Utils::shadowDistance < 0.5) Utils::shadowDistance = 0.5;
		}
		
		dmntcht::write_shadowDistance();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_shadowDistance::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::shadowDistance_address, &Utils::shadowDistance, 0x4);
	sprintf(Utils::OptionsChar, "shadowDistance: %2.8f", Utils::shadowDistance);
}

tsl::elm::Element *set_shadowResolution::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Low");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::ShadowResolution = 0;
		dmntcht::write_shadowResolution();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Medium");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::ShadowResolution = 1;
		dmntcht::write_shadowResolution();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("High");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::ShadowResolution = 2;
		dmntcht::write_shadowResolution();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);
	
	auto *clickableListItem4 = new tsl::elm::ListItem("Very High");
	clickableListItem4->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::ShadowResolution = 3;
		dmntcht::write_shadowResolution();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem4);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_shadowResolution::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::ShadowResolution_address, &Utils::ShadowResolution, 0x4);
	if (Utils::ShadowResolution == 0) sprintf(Utils::OptionsChar, "ShadowResolution: Low");
	else if (Utils::ShadowResolution == 1) sprintf(Utils::OptionsChar, "ShadowResolution: Medium");
	else if (Utils::ShadowResolution == 2) sprintf(Utils::OptionsChar, "ShadowResolution: High");
	else if (Utils::ShadowResolution == 3) sprintf(Utils::OptionsChar, "ShadowResolution: Very High");
	else sprintf(Utils::OptionsChar, "ShadowResolution: Unknown (%u)", Utils::ShadowResolution);
}

tsl::elm::Element *set_shadowmaskMode::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Shadowmask");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::ShadowmaskMode = 0;
		dmntcht::write_shadowmaskMode();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Distance Shadowmask");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::ShadowmaskMode = 1;
		dmntcht::write_shadowmaskMode();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_shadowmaskMode::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::ShadowmaskMode_address, &Utils::ShadowmaskMode, 0x4);
	if (Utils::ShadowmaskMode == 0) sprintf(Utils::OptionsChar, "ShadowmaskMode: Shadowmask");
	else if (Utils::ShadowmaskMode == 1) sprintf(Utils::OptionsChar, "ShadowmaskMode: \nDistance Shadowmask");
	else sprintf(Utils::OptionsChar, "ShadowmaskMode: \nUnknown (%u)", Utils::ShadowmaskMode);
}

tsl::elm::Element *set_shadowNearPlaneOffset::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 1");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::shadowNearPlaneOffset = 1;
		dmntcht::write_shadowNearPlaneOffset();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::shadowNearPlaneOffset >= 0.5) {
			Utils::shadowNearPlaneOffset = Utils::shadowNearPlaneOffset + 0.125;
		}
		else {
			Utils::denominator = (float)1 / Utils::shadowNearPlaneOffset;
			Utils::denominator = round(Utils::denominator);
			Utils::denominator = Utils::denominator - 1;
			Utils::shadowNearPlaneOffset = (float)1 / Utils::denominator;
			if (Utils::shadowNearPlaneOffset > 0.5) Utils::shadowNearPlaneOffset = 0.5;
		}
		dmntcht::write_shadowNearPlaneOffset();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::shadowNearPlaneOffset < 0.5) {
			Utils::denominator = (float)1 / Utils::shadowNearPlaneOffset;
			Utils::denominator = round(Utils::denominator);
			Utils::denominator = Utils::denominator + 1;
			if (Utils::shadowNearPlaneOffset != 0) Utils::shadowNearPlaneOffset = (float)1 / Utils::denominator;
		}
		else if (Utils::shadowNearPlaneOffset == 0.5) {
			Utils::denominator = 3;
			Utils::shadowNearPlaneOffset = (float)1 / Utils::denominator;
		}
		else {
			Utils::shadowNearPlaneOffset = Utils::shadowNearPlaneOffset - 0.125;
			if (Utils::shadowNearPlaneOffset < 0.5) Utils::shadowNearPlaneOffset = 0.5;
		}
		
		dmntcht::write_shadowNearPlaneOffset();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_shadowNearPlaneOffset::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::shadowNearPlaneOffset_address, &Utils::shadowNearPlaneOffset, 0x4);
	sprintf(Utils::OptionsChar, "shadowNearPlaneOffset:\n %2.8f", Utils::shadowNearPlaneOffset);
}

tsl::elm::Element* set_shadowCascade2Split::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 1");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::shadowCascade2Split = 1;
		dmntcht::write_shadowCascade2Split();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::shadowCascade2Split >= 0.5) {
			Utils::shadowCascade2Split = Utils::shadowCascade2Split + 0.125;
		}
		else {
			Utils::denominator = (float)1 / Utils::shadowCascade2Split;
			Utils::denominator = round(Utils::denominator);
			Utils::denominator = Utils::denominator - 1;
			Utils::shadowCascade2Split = (float)1 / Utils::denominator;
			if (Utils::shadowCascade2Split > 0.5) Utils::shadowCascade2Split = 0.5;
		}
		dmntcht::write_shadowCascade2Split();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::shadowCascade2Split < 0.5) {
			Utils::denominator = (float)1 / Utils::shadowCascade2Split;
			Utils::denominator = round(Utils::denominator);
			Utils::denominator = Utils::denominator + 1;
			if (Utils::shadowCascade2Split != 0) Utils::shadowCascade2Split = (float)1 / Utils::denominator;
		}
		else if (Utils::shadowCascade2Split == 0.5) {
			Utils::denominator = 3;
			Utils::shadowCascade2Split = 1 / Utils::denominator;
		}
		else {
			Utils::shadowCascade2Split = Utils::shadowCascade2Split - 0.125;
			if (Utils::shadowCascade2Split < 0.5) Utils::shadowCascade2Split = 0.5;
		}
		
		dmntcht::write_shadowCascade2Split();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_shadowCascade2Split::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::shadowCascade2Split_address, &Utils::shadowCascade2Split, 0x4);
	sprintf(Utils::OptionsChar, "shadowCascade2Split:\n %2.8f", Utils::shadowCascade2Split);
}

tsl::elm::Element *set_lodBias::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 1");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::lodBias = 1;
		dmntcht::write_lodBias();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::lodBias >= 0.5) {
			Utils::lodBias = Utils::lodBias + 0.125;
		}
		else {
			Utils::denominator = (float)1 / Utils::lodBias;
			Utils::denominator = round(Utils::denominator);
			Utils::denominator = Utils::denominator - 1;
			Utils::lodBias = (float)1 / Utils::denominator;
			if (Utils::lodBias > 0.5) Utils::lodBias = 0.5;
		}
		dmntcht::write_lodBias();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::lodBias < 0.5) {
			Utils::denominator = (float)1 / Utils::lodBias;
			Utils::denominator = round(Utils::denominator);
			Utils::denominator = Utils::denominator + 1;
			if (Utils::lodBias != 0) Utils::lodBias = (float)1 / Utils::denominator;
		}
		else if (Utils::lodBias == 0.5) {
			Utils::denominator = 3;
			Utils::lodBias = 1 / Utils::denominator;
		}
		else {
			Utils::lodBias = Utils::lodBias - 0.125;
			if (Utils::lodBias < 0.5) Utils::lodBias = 0.5;
		}
		
		dmntcht::write_lodBias();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_lodBias::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::lodBias_address, &Utils::lodBias, 0x4);
	sprintf(Utils::OptionsChar, "lodBias: %2.8f", Utils::lodBias);
}

tsl::elm::Element *set_anisotropicFiltering::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Disable");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::AnisotropicFiltering = 0;
		dmntcht::write_anisotropicFiltering();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Enable");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::AnisotropicFiltering = 1;
		dmntcht::write_anisotropicFiltering();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Force Enable");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::AnisotropicFiltering = 2;
		dmntcht::write_anisotropicFiltering();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_anisotropicFiltering::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::AnisotropicFiltering_address, &Utils::AnisotropicFiltering, 0x4);
	if (Utils::AnisotropicFiltering == 0) sprintf(Utils::OptionsChar, "AnisotropicFiltering:\nDisabled");
	else if (Utils::AnisotropicFiltering == 1) sprintf(Utils::OptionsChar, "AnisotropicFiltering: \nEnabled");
	else if (Utils::AnisotropicFiltering == 2) sprintf(Utils::OptionsChar, "AnisotropicFiltering: \nForce Enabled");
	else sprintf(Utils::OptionsChar, "AnisotropicFiltering: \nUnknown (%u)", Utils::AnisotropicFiltering);
}

tsl::elm::Element *set_masterTextureLimit::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 1");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::masterTextureLimit = 1;
		dmntcht::write_masterTextureLimit();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::masterTextureLimit++;
		dmntcht::write_masterTextureLimit();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::masterTextureLimit != 0) Utils::masterTextureLimit--;
		dmntcht::write_masterTextureLimit();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_masterTextureLimit::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::masterTextureLimit_address, &Utils::masterTextureLimit, 0x4);
	sprintf(Utils::OptionsChar, "masterTextureLimit: %u", Utils::masterTextureLimit);
}

tsl::elm::Element *set_maximumLODLevel::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 1");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::maximumLODLevel = 1;
		dmntcht::write_maximumLODLevel();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::maximumLODLevel++;
		dmntcht::write_maximumLODLevel();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::maximumLODLevel != 0) Utils::maximumLODLevel--;
		dmntcht::write_maximumLODLevel();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_maximumLODLevel::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::maximumLODLevel_address, &Utils::maximumLODLevel, 0x4);
	sprintf(Utils::OptionsChar, "maximumLODLevel: %u", Utils::maximumLODLevel);
}

tsl::elm::Element *set_particleRaycastBudget::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 256");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::particleRaycastBudget = 256;
		dmntcht::write_particleRaycastBudget();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::particleRaycastBudget = Utils::particleRaycastBudget * 2;
		dmntcht::write_particleRaycastBudget();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::particleRaycastBudget != 1) Utils::particleRaycastBudget = Utils::particleRaycastBudget / 2;
		dmntcht::write_particleRaycastBudget();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_particleRaycastBudget::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::particleRaycastBudget_address, &Utils::particleRaycastBudget, 0x4);
	sprintf(Utils::OptionsChar, "particleRaycastBudget: %u", Utils::particleRaycastBudget);
}

tsl::elm::Element *set_softParticles::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Change");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::softParticles = !Utils::softParticles;
		dmntcht::write_softParticles();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_softParticles::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::softParticles_address, &Utils::softParticles, 0x1);
	if (Utils::softParticles == false) sprintf(Utils::OptionsChar, "softParticles: Disabled");
	else sprintf(Utils::OptionsChar, "softParticles: Enabled");
}

tsl::elm::Element *set_softVegetation::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Change");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::softVegetation = !Utils::softVegetation;
		dmntcht::write_softVegetation();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_softVegetation::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::softVegetation_address, &Utils::softVegetation, 0x1);
	if (Utils::softVegetation == false) sprintf(Utils::OptionsChar, "softVegetation: Disabled");
	else sprintf(Utils::OptionsChar, "softVegetation: Enabled");
}

tsl::elm::Element *set_vSyncCount::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Change");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		dmntcht::write_vSyncCount();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_vSyncCount::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::vSyncCount_address, &Utils::vSyncCount, 0x4);
	sprintf(Utils::OptionsChar, "vSyncCount: %u", Utils::vSyncCount);
}

tsl::elm::Element *set_antiAliasing::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Disable");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::antiAliasing = 1;
		dmntcht::write_antiAliasing();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Set 2x");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::antiAliasing = 0;
		dmntcht::write_antiAliasing();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Set 4x");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::antiAliasing = 4;
		dmntcht::write_antiAliasing();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	auto *clickableListItem4 = new tsl::elm::ListItem("Set 8x");
	clickableListItem4->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::antiAliasing = 8;
		dmntcht::write_antiAliasing();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem4);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_antiAliasing::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::antiAliasing_address, &Utils::antiAliasing, 0x4);
	if (Utils::antiAliasing == 0) sprintf(Utils::OptionsChar, "antiAliasing: Disabled");
	else sprintf(Utils::OptionsChar, "antiAliasing: %u" "x", Utils::antiAliasing);
}

tsl::elm::Element *set_asyncUploadTimeSlice::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 1");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::asyncUploadTimeSlice = 1;
		dmntcht::write_asyncUploadTimeSlice();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::asyncUploadTimeSlice != 33) Utils::asyncUploadTimeSlice++;
		dmntcht::write_asyncUploadTimeSlice();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::asyncUploadTimeSlice != 1) Utils::asyncUploadTimeSlice--;
		dmntcht::write_asyncUploadTimeSlice();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_asyncUploadTimeSlice::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::asyncUploadTimeSlice_address, &Utils::asyncUploadTimeSlice, 0x4);
	sprintf(Utils::OptionsChar, "asyncUploadTimeSlice: %u", Utils::asyncUploadTimeSlice);
}

tsl::elm::Element *set_asyncUploadBufferSize::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 25);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 16");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::asyncUploadBufferSize = 16;
		dmntcht::write_asyncUploadBufferSize();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::asyncUploadBufferSize != 512) {
			if (Utils::asyncUploadBufferSize >= 8) Utils::asyncUploadBufferSize = Utils::asyncUploadBufferSize + 8;
			else Utils::asyncUploadBufferSize = Utils::asyncUploadBufferSize + 2;
		}
		dmntcht::write_asyncUploadBufferSize();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::asyncUploadBufferSize != 2) {
			if (Utils::asyncUploadBufferSize >= 8) Utils::asyncUploadBufferSize = Utils::asyncUploadBufferSize - 8;
			else Utils::asyncUploadBufferSize = Utils::asyncUploadBufferSize - 2;
		}
		dmntcht::write_asyncUploadBufferSize();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
	}
	
void set_asyncUploadBufferSize::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::asyncUploadBufferSize_address, &Utils::asyncUploadBufferSize, 0x4);
	sprintf(Utils::OptionsChar, "asyncUploadBufferSize: %u", Utils::asyncUploadBufferSize);
}

tsl::elm::Element *set_asyncUploadPersistentBuffer::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Change");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::asyncUploadPersistentBuffer = !Utils::asyncUploadPersistentBuffer;
		dmntcht::write_asyncUploadPersistentBuffer();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);

	Frame2->setContent(list2);

	return Frame2;
	}
	
void set_asyncUploadPersistentBuffer::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::asyncUploadPersistentBuffer_address, &Utils::asyncUploadPersistentBuffer, 0x1);
	if (Utils::asyncUploadPersistentBuffer == false) sprintf(Utils::OptionsChar, "asyncUploadPersistentBuffer: \nDisabled");
	else sprintf(Utils::OptionsChar, "asyncUploadPersistentBuffer: \nEnabled");
}

tsl::elm::Element *set_realtimeReflectionProbes::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Change");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::realtimeReflectionProbes = !Utils::realtimeReflectionProbes;
		dmntcht::write_realtimeReflectionProbes();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_realtimeReflectionProbes::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::realtimeReflectionProbes_address, &Utils::realtimeReflectionProbes, 0x1);
	if (Utils::realtimeReflectionProbes == false) sprintf(Utils::OptionsChar, "realtimeReflectionProbes: \nDisabled");
	else sprintf(Utils::OptionsChar, "realtimeReflectionProbes: \nEnabled");
}

tsl::elm::Element *set_billboardsFaceCameraPosition::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Change");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::billboardsFaceCameraPosition = !Utils::billboardsFaceCameraPosition;
		dmntcht::write_billboardsFaceCameraPosition();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_billboardsFaceCameraPosition::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::billboardsFaceCameraPosition_address, &Utils::billboardsFaceCameraPosition, 0x1);
	if (Utils::billboardsFaceCameraPosition == false) sprintf(Utils::OptionsChar, "billboardsFaceCameraPosition: \nDisabled");
	else sprintf(Utils::OptionsChar, "billboardsFaceCameraPosition: \nEnabled");
}

tsl::elm::Element *set_resolutionScalingFixedDPIFactor::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 1");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::resolutionScalingFixedDPIFactor = 1;
		dmntcht::write_resolutionScalingFixedDPIFactor();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::resolutionScalingFixedDPIFactor >= 0.5) {
			Utils::resolutionScalingFixedDPIFactor = Utils::resolutionScalingFixedDPIFactor + 0.125;
		}
		else {
			Utils::denominator = (float)1 / Utils::resolutionScalingFixedDPIFactor;
			Utils::denominator = round(Utils::denominator);
			Utils::denominator = Utils::denominator - 1;
			Utils::resolutionScalingFixedDPIFactor = (float)1 / Utils::denominator;
			if (Utils::resolutionScalingFixedDPIFactor > 0.5) Utils::resolutionScalingFixedDPIFactor = 0.5;
		}
		dmntcht::write_resolutionScalingFixedDPIFactor();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::resolutionScalingFixedDPIFactor < 0.5) {
			Utils::denominator = (float)1 / Utils::resolutionScalingFixedDPIFactor;
			Utils::denominator = round(Utils::denominator);
			Utils::denominator = Utils::denominator + 1;
			if (Utils::resolutionScalingFixedDPIFactor != 0) Utils::resolutionScalingFixedDPIFactor = (float)1 / Utils::denominator;
		}
		else if (Utils::resolutionScalingFixedDPIFactor == 0.5) {
			Utils::denominator = 3;
			Utils::resolutionScalingFixedDPIFactor = 1 / Utils::denominator;
		}
		else {
			Utils::resolutionScalingFixedDPIFactor = Utils::resolutionScalingFixedDPIFactor - 0.125;
			if (Utils::resolutionScalingFixedDPIFactor < 0.5) Utils::resolutionScalingFixedDPIFactor = 0.5;
		}
		
		dmntcht::write_resolutionScalingFixedDPIFactor();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_resolutionScalingFixedDPIFactor::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::resolutionScalingFixedDPIFactor_address, &Utils::resolutionScalingFixedDPIFactor, 0x4);
	sprintf(Utils::OptionsChar, "resolutionScalingFixedDPIFactor:\n%2.8f", Utils::resolutionScalingFixedDPIFactor);
}

tsl::elm::Element *set_blendWeights::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("OneBone");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::BlendWeights = 1;
		dmntcht::write_blendWeights();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("TwoBones");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::BlendWeights = 2;
		dmntcht::write_blendWeights();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("FourBones");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::BlendWeights = 4;
		dmntcht::write_blendWeights();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_blendWeights::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::BlendWeights_address, &Utils::BlendWeights, 0x4);
	if (Utils::BlendWeights == 1) sprintf(Utils::OptionsChar, "BlendWeights: OneBone");
	else if (Utils::BlendWeights == 2) sprintf(Utils::OptionsChar, "BlendWeights: TwoBones");
	else if (Utils::BlendWeights == 4) sprintf(Utils::OptionsChar, "BlendWeights: FourBones");
	else sprintf(Utils::OptionsChar, "BlendWeights: \nUnknown (%u)", Utils::BlendWeights);
}

tsl::elm::Element *set_streamingMipmapsActive::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Change");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::streamingMipmapsActive = !Utils::streamingMipmapsActive;
		dmntcht::write_streamingMipmapsActive();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);

	Frame2->setContent(list2);

	return Frame2;
	}
	
void set_streamingMipmapsActive::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::streamingMipmapsActive_address, &Utils::streamingMipmapsActive, 0x1);
	if (Utils::streamingMipmapsActive == false) sprintf(Utils::OptionsChar, "streamingMipmapsActive: \nDisabled");
	else sprintf(Utils::OptionsChar, "streamingMipmapsActive: \nEnabled");
}

tsl::elm::Element *set_streamingMipmapsMemoryBudget::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 128");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::streamingMipmapsMemoryBudget = 128;
		dmntcht::write_streamingMipmapsMemoryBudget();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::streamingMipmapsMemoryBudget <= 128) Utils::streamingMipmapsMemoryBudget = Utils::streamingMipmapsMemoryBudget * 2;
		else Utils::streamingMipmapsMemoryBudget = Utils::streamingMipmapsMemoryBudget + 128;
		dmntcht::write_streamingMipmapsMemoryBudget();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::streamingMipmapsMemoryBudget <= 128) Utils::streamingMipmapsMemoryBudget = Utils::streamingMipmapsMemoryBudget / 2;
		else Utils::streamingMipmapsMemoryBudget = Utils::streamingMipmapsMemoryBudget - 128;
		dmntcht::write_streamingMipmapsMemoryBudget();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_streamingMipmapsMemoryBudget::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::streamingMipmapsMemoryBudget_address, &Utils::streamingMipmapsMemoryBudget, 0x4);
	sprintf(Utils::OptionsChar, "streamingMipmapsMemoryBudget:\n%2.8f", Utils::streamingMipmapsMemoryBudget);
}

tsl::elm::Element *set_streamingMipmapsMaxLevelReduction::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 19, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 1");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::streamingMipmapsMaxLevelReduction = 1;
		dmntcht::write_streamingMipmapsMaxLevelReduction();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::streamingMipmapsMaxLevelReduction != 7) Utils::streamingMipmapsMaxLevelReduction++;
		dmntcht::write_streamingMipmapsMaxLevelReduction();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::streamingMipmapsMaxLevelReduction != 1) Utils::streamingMipmapsMaxLevelReduction--;
		dmntcht::write_streamingMipmapsMaxLevelReduction();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_streamingMipmapsMaxLevelReduction::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::streamingMipmapsMaxLevelReduction_address, &Utils::streamingMipmapsMaxLevelReduction, 0x4);
	sprintf(Utils::OptionsChar, "streamingMipmapsMaxLevelReduction: \n%u", Utils::streamingMipmapsMaxLevelReduction);
}

tsl::elm::Element *set_streamingMipmapsAddAllCameras::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Change");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::streamingMipmapsAddAllCameras = !Utils::streamingMipmapsAddAllCameras;
		dmntcht::write_streamingMipmapsAddAllCameras();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_streamingMipmapsAddAllCameras::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::streamingMipmapsAddAllCameras_address, &Utils::streamingMipmapsAddAllCameras, 0x1);
	if (Utils::streamingMipmapsAddAllCameras == false) sprintf(Utils::OptionsChar, "streamingMipmapsAddAllCameras: \nDisabled");
	else sprintf(Utils::OptionsChar, "streamingMipmapsAddAllCameras: \nEnabled");
}

tsl::elm::Element *set_streamingMipmapsMaxFileIORequests::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 19, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 128");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::streamingMipmapsMaxFileIORequests = 128;
		dmntcht::write_streamingMipmapsMaxFileIORequests();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::streamingMipmapsMaxFileIORequests >= 128) Utils::streamingMipmapsMaxFileIORequests = Utils::streamingMipmapsMaxFileIORequests + 128;
		else Utils::streamingMipmapsMaxFileIORequests = Utils::streamingMipmapsMaxFileIORequests * 2;
		dmntcht::write_streamingMipmapsMaxFileIORequests();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		if (Utils::streamingMipmapsMaxFileIORequests > 128) Utils::streamingMipmapsMaxFileIORequests = Utils::streamingMipmapsMaxFileIORequests - 128;
		else if (Utils::streamingMipmapsMaxFileIORequests != 1) Utils::streamingMipmapsMaxFileIORequests = Utils::streamingMipmapsMaxFileIORequests / 2;
		dmntcht::write_streamingMipmapsMaxFileIORequests();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_streamingMipmapsMaxFileIORequests::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::streamingMipmapsMaxFileIORequests_address, &Utils::streamingMipmapsMaxFileIORequests, 0x4);
	sprintf(Utils::OptionsChar, "streamingMipmapsMaxFileIORequests: \n%u", Utils::streamingMipmapsMaxFileIORequests);
}


tsl::elm::Element *set_maxQueuedFrames::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list2 = new tsl::elm::List();
	
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 19, renderer->a(0xFFFF));
	}), 40);
	
	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("Set 1");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
		Utils::maxQueuedFrames = 1;
		dmntcht::write_maxQueuedFrames();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);
	
	auto *clickableListItem2 = new tsl::elm::ListItem("Increase");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			if (Utils::maxQueuedFrames != 6) Utils::maxQueuedFrames++;
			dmntcht::write_maxQueuedFrames();
			return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem2);
	
	auto *clickableListItem3 = new tsl::elm::ListItem("Decrease");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			if (Utils::maxQueuedFrames != 0) Utils::maxQueuedFrames--;
			dmntcht::write_maxQueuedFrames();
			return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem3);

	Frame2->setContent(list2);

	return Frame2;
}
	
void set_maxQueuedFrames::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::maxQueuedFrames_address, &Utils::maxQueuedFrames, 0x4);
	sprintf(Utils::OptionsChar, "maxQueuedFrames: \n%u", Utils::maxQueuedFrames);
}

///* Quality Settings Menu
///
///
//
/////////////////////////////////////////////////////////////////////////////////

QualitySettings::QualitySettings() {
		if (Utils::Quality_read == false) {
			for (uint8_t i = 1; i <= 64; i = i + 2) {
			if (i == 57) i++;
			Utils::switchcase = i;
			dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
			dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
			svcSleepThread(34'000'000);
			}
			Utils::settings = 0;
			Utils::switchcase = 0;
			dmntcht::Read();
			Utils::Quality_read = true;
	}
}
	

tsl::elm::Element *QualitySettings::createUI() {
	
	auto *frame = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list = new tsl::elm::List();
	
	if (Utils::MAGIC == 0x16BA7E38 && Utils::notsupported == false) {
		list->addItem(new tsl::elm::CategoryHeader("Quality Settings"));
		
		if (Utils::pixelLightCount_address != 0) {
			auto *pixelLightCountauto = new tsl::elm::ListItem("pixelLightCount", "int");
			pixelLightCountauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_pixelLightCount>();
				return true;
				}
				return false;
			});

			list->addItem(pixelLightCountauto);
		}
		
		if (Utils::ShadowQuality_address != 0) {
			auto *shadowQualityauto = new tsl::elm::ListItem("shadowQuality", "enum");
			shadowQualityauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_shadows>();
				return true;
				}
				return false;
			});

			list->addItem(shadowQualityauto);
		}

		if (Utils::ShadowProjection_address != 0) {
			auto *shadowProjectionauto = new tsl::elm::ListItem("shadowProjection", "enum");
			shadowProjectionauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_shadowProjection>();
				return true;
				}
				return false;
			});

			list->addItem(shadowProjectionauto);
		}
		
		if (Utils::shadowCascades_address != 0) {
			auto *shadowCascadesauto = new tsl::elm::ListItem("shadowCascades", "int");
			shadowCascadesauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_shadowCascades>();
				return true;
				}
				return false;
			});

			list->addItem(shadowCascadesauto);
		}
		
		if (Utils::shadowDistance_address != 0) {
			auto *shadowDistanceauto = new tsl::elm::ListItem("shadowDistance", "float");
			shadowDistanceauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_shadowDistance>();
				return true;
				}
				return false;
			});

			list->addItem(shadowDistanceauto);
		}
		
		if (Utils::ShadowResolution_address != 0) {
			auto *shadowResolutionauto = new tsl::elm::ListItem("shadowResolution", "enum");
			shadowResolutionauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_shadowResolution>();
				return true;
				}
				return false;
			});

			list->addItem(shadowResolutionauto);
		}
		
		if (Utils::ShadowmaskMode_address != 0) {
			auto *shadowmaskModeauto = new tsl::elm::ListItem("shadowmaskMode", "enum");
			shadowmaskModeauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_shadowmaskMode>();
				return true;
				}
				return false;
			});

			list->addItem(shadowmaskModeauto);
		}
		
		if (Utils::shadowNearPlaneOffset_address != 0) {
			auto *shadowNearPlaneOffsetauto = new tsl::elm::ListItem("shadowNearPlaneOffset", "float");
			shadowNearPlaneOffsetauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_shadowNearPlaneOffset>();
				return true;
				}
				return false;
			});

			list->addItem(shadowNearPlaneOffsetauto);
		}
		
		if (Utils::shadowCascade2Split_address != 0) {
			auto *shadowCascade2Splitauto = new tsl::elm::ListItem("shadowCascade2Split", "float");
			shadowCascade2Splitauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_shadowCascade2Split>();
				return true;
				}
				return false;
			});

			list->addItem(shadowCascade2Splitauto);
		}

		if (Utils::lodBias_address != 0) {
			auto *lodBiasauto = new tsl::elm::ListItem("lodBias", "float");
			lodBiasauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_lodBias>();
				return true;
				}
				return false;
			});

			list->addItem(lodBiasauto);
		}
		
		if (Utils::AnisotropicFiltering_address != 0) {
			auto *AnisotropicFilteringauto = new tsl::elm::ListItem("AnisotropicFiltering", "enum");
			AnisotropicFilteringauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_anisotropicFiltering>();
				return true;
				}
				return false;
			});

			list->addItem(AnisotropicFilteringauto);
		}
		
		if (Utils::masterTextureLimit_address != 0) {
			auto *masterTextureLimitauto = new tsl::elm::ListItem("masterTextureLimit", "int");
			masterTextureLimitauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_masterTextureLimit>();
				return true;
				}
				return false;
			});

			list->addItem(masterTextureLimitauto);
		}
		
		if (Utils::maximumLODLevel_address != 0) {
			auto *maximumLODLevelauto = new tsl::elm::ListItem("maximumLODLevel", "int");
			maximumLODLevelauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_maximumLODLevel>();
				return true;
				}
				return false;
			});

			list->addItem(maximumLODLevelauto);
		}
		
		if (Utils::particleRaycastBudget_address != 0) {
			auto *particleRaycastBudgetauto = new tsl::elm::ListItem("particleRaycastBudget", "int");
			particleRaycastBudgetauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_particleRaycastBudget>();
				return true;
				}
				return false;
			});

			list->addItem(particleRaycastBudgetauto);
		}
		
		if (Utils::softParticles_address != 0) {
			auto *softParticlesauto = new tsl::elm::ListItem("softParticles", "bool");
			softParticlesauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_softParticles>();
				return true;
				}
				return false;
			});

			list->addItem(softParticlesauto);
		}

		if (Utils::softVegetation_address != 0) {
			auto *softVegetationauto = new tsl::elm::ListItem("softVegetation", "bool");
			softVegetationauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_softVegetation>();
				return true;
				}
				return false;
			});

			list->addItem(softVegetationauto);
		}

		if (Utils::vSyncCount_address != 0) {
			auto *vSyncCountauto = new tsl::elm::ListItem("vSyncCount", "int");
			vSyncCountauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_vSyncCount>();
				return true;
				}
				return false;
			});

			list->addItem(vSyncCountauto);
		}
		
		if (Utils::antiAliasing_address != 0) {
			auto *antiAliasingauto = new tsl::elm::ListItem("antiAliasing", "enum");
			antiAliasingauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_antiAliasing>();
				return true;
				}
				return false;
			});

			list->addItem(antiAliasingauto);
		}
		
		if (Utils::asyncUploadTimeSlice_address != 0) {
			auto *asyncUploadTimeSliceauto = new tsl::elm::ListItem("asyncUploadTimeSlice", "int");
			asyncUploadTimeSliceauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_asyncUploadTimeSlice>();
				return true;
				}
				return false;
			});

			list->addItem(asyncUploadTimeSliceauto);
		}
		
		if (Utils::asyncUploadBufferSize_address != 0) {
			auto *asyncUploadBufferSizeauto = new tsl::elm::ListItem("asyncUploadBufferSize", "int");
			asyncUploadBufferSizeauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_asyncUploadBufferSize>();
				return true;
				}
				return false;
			});

			list->addItem(asyncUploadBufferSizeauto);
		}
		
		if (Utils::asyncUploadPersistentBuffer_address != 0) {
			auto *asyncUploadPersistentBufferauto = new tsl::elm::ListItem("asyncUploadPersistentBuffer", "bool");
			asyncUploadPersistentBufferauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_asyncUploadPersistentBuffer>();
				return true;
				}
				return false;
			});

			list->addItem(asyncUploadPersistentBufferauto);
		}
		
		if (Utils::realtimeReflectionProbes_address != 0) {
			auto *realtimeReflectionProbesauto = new tsl::elm::ListItem("realtimeReflectionProbes", "bool");
			realtimeReflectionProbesauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_realtimeReflectionProbes>();
				return true;
				}
				return false;
			});

			list->addItem(realtimeReflectionProbesauto);
		}
		
		if (Utils::billboardsFaceCameraPosition_address != 0) {
			auto *billboardsFaceCameraPositionauto = new tsl::elm::ListItem("billboardsFaceCameraPosition", "bool");
			billboardsFaceCameraPositionauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_billboardsFaceCameraPosition>();
				return true;
				}
				return false;
			});

			list->addItem(billboardsFaceCameraPositionauto);
		}

		if (Utils::resolutionScalingFixedDPIFactor_address != 0) {
			auto *resolutionScalingFixedDPIFactorauto = new tsl::elm::ListItem("resolutionScalingFixedDPIFactor", "float");
			resolutionScalingFixedDPIFactorauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_resolutionScalingFixedDPIFactor>();
				return true;
				}
				return false;
			});

			list->addItem(resolutionScalingFixedDPIFactorauto);
		}
		
		if (Utils::BlendWeights_address != 0) {
			auto *BlendWeightsauto = new tsl::elm::ListItem("BlendWeights", "enum");
			BlendWeightsauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_blendWeights>();
				return true;
				}
				return false;
			});

			list->addItem(BlendWeightsauto);
		}
		
		if (Utils::streamingMipmapsActive_address != 0) {
			auto *streamingMipmapsActiveauto = new tsl::elm::ListItem("streamingMipmapsActive", "bool");
			streamingMipmapsActiveauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_streamingMipmapsActive>();
				return true;
				}
				return false;
			});

			list->addItem(streamingMipmapsActiveauto);
		}
		
		if (Utils::streamingMipmapsMemoryBudget_address != 0) {
			auto *streamingMipmapsMemoryBudgetauto = new tsl::elm::ListItem("streamingMipmapsMemoryBudget", "float");
			streamingMipmapsMemoryBudgetauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_streamingMipmapsMemoryBudget>();
				return true;
				}
				return false;
			});

			list->addItem(streamingMipmapsMemoryBudgetauto);
		}
		
		if (Utils::streamingMipmapsMaxLevelReduction_address != 0) {
			auto *streamingMipmapsMaxLevelReductionauto = new tsl::elm::ListItem("streamingMipmapsMaxLevelReduction", "int");
			streamingMipmapsMaxLevelReductionauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_streamingMipmapsMaxLevelReduction>();
				return true;
				}
				return false;
			});

			list->addItem(streamingMipmapsMaxLevelReductionauto);
		}
		
		if (Utils::streamingMipmapsAddAllCameras_address != 0) {
			auto *streamingMipmapsAddAllCamerasauto = new tsl::elm::ListItem("streamingMipmapsAddAllCameras", "bool");
			streamingMipmapsAddAllCamerasauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_streamingMipmapsAddAllCameras>();
				return true;
				}
				return false;
			});

			list->addItem(streamingMipmapsAddAllCamerasauto);
		}
		
		if (Utils::streamingMipmapsMaxFileIORequests_address != 0) {
			auto *streamingMipmapsMaxFileIORequestsauto = new tsl::elm::ListItem("streamingMipmapsMaxFileIORequests", "int");
			streamingMipmapsMaxFileIORequestsauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_streamingMipmapsMaxFileIORequests>();
				return true;
				}
				return false;
			});

			list->addItem(streamingMipmapsMaxFileIORequestsauto);
		}
		
		if (Utils::maxQueuedFrames_address != 0) {
			auto *maxQueuedFramesauto = new tsl::elm::ListItem("maxQueuedFrames", "int");
			maxQueuedFramesauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
				tsl::changeTo<set_maxQueuedFrames>();
				return true;
				}
				return false;
			});

			list->addItem(maxQueuedFramesauto);
		}
		
	}
	
	// Add the list to the frame for it to be drawn
	frame->setContent(list);
	
	// Return the frame to have it become the top level element of this Gui
	return frame;
	
}
	
void QualitySettings::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
}
