#include "UnityScalableBufferManager.hpp"

///* ScalableBufferManager Settings Options
///
///
//
/////////////////////////////////////////////////////////////////////////////////

tsl::elm::Element *ResizeBuffers::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame(Utils::overlayName, Utils::version);
		
	auto list2 = new tsl::elm::List();
		
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
}), 25);

	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem1 = new tsl::elm::ListItem("25%");
	clickableListItem1->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::widthScaleFactor = 0.25;
			Utils::heightScaleFactor = 0.25;
			dmntcht::write_ResizeBuffers();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem1);

	auto *clickableListItem2 = new tsl::elm::ListItem("33%");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::widthScaleFactor = 0.33;
			Utils::heightScaleFactor = 0.33;
			dmntcht::write_ResizeBuffers();
		return true;
		}

		return false;
	});		
		
	list2->addItem(clickableListItem2);
		
	auto *clickableListItem3 = new tsl::elm::ListItem("50%");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::widthScaleFactor = 0.5;
			Utils::heightScaleFactor = 0.5;
			dmntcht::write_ResizeBuffers();
		return true;
		}

		return false;
	});		
		
	list2->addItem(clickableListItem3);
	
	auto *clickableListItem4 = new tsl::elm::ListItem("75%");
	clickableListItem4->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::widthScaleFactor = 0.75;
			Utils::heightScaleFactor = 0.75;
			dmntcht::write_ResizeBuffers();
		return true;
		}

		return false;
	});		
		
	list2->addItem(clickableListItem4);
		
	auto *clickableListItem5 = new tsl::elm::ListItem("100%");
	clickableListItem5->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::widthScaleFactor = 1.0;
			Utils::heightScaleFactor = 1.0;
			dmntcht::write_ResizeBuffers();
		return true;
		}

		return false;
	});		
		
	list2->addItem(clickableListItem5);

	Frame2->setContent(list2);

	return Frame2;
}
	
void ResizeBuffers::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::widthScaleFactor_address, &Utils::widthScaleFactor, 0x4);
	dmntchtReadCheatProcessMemory(Utils::heightScaleFactor_address, &Utils::heightScaleFactor, 0x4);
	sprintf(Utils::OptionsChar, "Width: %.2f%s, Height: %.2f%s", Utils::widthScaleFactor * (float)100, "%", Utils::heightScaleFactor * (float)100, "%");
}

///* Screen Settings Menu
///
///
//
/////////////////////////////////////////////////////////////////////////////////

ScalableBufferManagerSettings::ScalableBufferManagerSettings() {
		if (Utils::ScalableBufferManager_read == false) {
			for (uint8_t i = 1; i <= 2; i++) {
				Utils::switchcase = i;
				Utils::settings = 3;
				dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
				dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
				svcSleepThread(34'000'000);
			}
			Utils::settings = 0;
			Utils::switchcase = 0;
			dmntcht::Read();
			Utils::ScalableBufferManager_read = true;
	}
}
	

tsl::elm::Element *ScalableBufferManagerSettings::createUI() {
	
	auto *frame = new tsl::elm::OverlayFrame(Utils::overlayName, Utils::version);
	
	auto list = new tsl::elm::List();
	
	if (Utils::MAGIC == 0x16BA7E38 && Utils::notsupported == false) {
		list->addItem(new tsl::elm::CategoryHeader("ScalableBufferManager Settings"));
		
		if (Utils::width_address != 0 && Utils::height_address != 0) {
			auto *ResizeBuffersauto = new tsl::elm::ListItem("ResizeBuffers", "enum");
			ResizeBuffersauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
					tsl::changeTo<ResizeBuffers>();
					return true;
				}
				return false;
			});

			list->addItem(ResizeBuffersauto);
		}
		
	}
	
	// Add the list to the frame for it to be drawn
	frame->setContent(list);
	
	// Return the frame to have it become the top level element of this Gui
	return frame;
	
}
	
void ScalableBufferManagerSettings::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
}
