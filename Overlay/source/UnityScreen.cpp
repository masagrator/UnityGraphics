#include "UnityScreen.hpp"

///* Screen Settings Options
///
///
//
/////////////////////////////////////////////////////////////////////////////////

tsl::elm::Element *SetResolution::createUI() {
	auto *Frame2 = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
		
	auto list2 = new tsl::elm::List();
		
	list2->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
		renderer->drawString(Utils::OptionsChar, false, x, y+20, 20, renderer->a(0xFFFF));
}), 25);

	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem = new tsl::elm::ListItem("640x360");
	clickableListItem->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::width = 640;
			Utils::height = 360;
			dmntcht::write_SetResolution();
		return true;
		}

		return false;
	});	
	
	list2->addItem(clickableListItem);

	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem1 = new tsl::elm::ListItem("854x480");
	clickableListItem1->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::width = 854;
			Utils::height = 480;
			dmntcht::write_SetResolution();
		return true;
		}

		return false;
	});		
	
	list2->addItem(clickableListItem1);

	list2->addItem(new tsl::elm::CategoryHeader("Options"));
	auto *clickableListItem2 = new tsl::elm::ListItem("960x540");
	clickableListItem2->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::width = 960;
			Utils::height = 540;
			dmntcht::write_SetResolution();
		return true;
		}

		return false;
	});		
		
	list2->addItem(clickableListItem2);
		
	auto *clickableListItem3 = new tsl::elm::ListItem("1280x720");
	clickableListItem3->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::width = 1280;
			Utils::height = 720;
			dmntcht::write_SetResolution();
		return true;
		}

		return false;
	});		
		
	list2->addItem(clickableListItem3);
	
	auto *clickableListItem4 = new tsl::elm::ListItem("1600x900");
	clickableListItem4->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::width = 1600;
			Utils::height = 900;
			dmntcht::write_SetResolution();
		return true;
		}

		return false;
	});		
		
	list2->addItem(clickableListItem4);
		
	auto *clickableListItem5 = new tsl::elm::ListItem("1920x1080");
	clickableListItem5->setClickListener([](u64 keys) { 
		if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
			Utils::width = 1920;
			Utils::height = 1080;
			dmntcht::write_SetResolution();
		return true;
		}

		return false;
	});		
		
	list2->addItem(clickableListItem5);

	Frame2->setContent(list2);

	return Frame2;
}
	
void SetResolution::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
	dmntchtReadCheatProcessMemory(Utils::width_address, &Utils::width, 0x4);
	dmntchtReadCheatProcessMemory(Utils::height_address, &Utils::height, 0x4);
	sprintf(Utils::OptionsChar, "Resolution: %u" "x%u", Utils::width, Utils::height);
}

///* Quality Settings Menu
///
///
//
/////////////////////////////////////////////////////////////////////////////////

ScreenSettings::ScreenSettings() {
		if (Utils::Screen_read == false) {
			for (uint8_t i = 1; i <= 3; i++) {
				if (i == 3) i = 16;
				Utils::switchcase = i;
				Utils::settings = 2;
				dmntchtWriteCheatProcessMemory(Utils::settings_address, &Utils::settings, 0x1);
				dmntchtWriteCheatProcessMemory(Utils::switchcase_address, &Utils::switchcase, 0x1);
				svcSleepThread(34'000'000);
			}
			Utils::settings = 0;
			Utils::switchcase = 0;
			dmntcht::Read();
			Utils::Screen_read = true;
	}
}
	

tsl::elm::Element *ScreenSettings::createUI() {
	
	auto *frame = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");
	
	auto list = new tsl::elm::List();
	
	if (Utils::MAGIC == 0x16BA7E38 && Utils::notsupported == false) {
		list->addItem(new tsl::elm::CategoryHeader("Screen Settings"));
		
		if (Utils::width_address != 0 && Utils::height_address != 0) {
			auto *SetResolutionauto = new tsl::elm::ListItem("SetResolution", "enum");
			SetResolutionauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
					tsl::changeTo<SetResolution>();
					return true;
				}
				return false;
			});

			list->addItem(SetResolutionauto);
		}
		
	}
	
	// Add the list to the frame for it to be drawn
	frame->setContent(list);
	
	// Return the frame to have it become the top level element of this Gui
	return frame;
	
}
	
void ScreenSettings::update() {
	if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
		remove("sdmc:/SaltySD/UnityGraphics.hex");
		Utils::PluginRunning = false;
		Utils::check = false;
		Utils::closed = true;
	}
}