#define TESLA_INIT_IMPL // If you have more than one file using the tesla header, only define this in the main one
#include <tesla.hpp>    // The Tesla Header
#include "libstratosphere/dmntcht.hpp"
#include <inttypes.h>
#include "readFiles.hpp"
#include "dmntchtRead.hpp"
#include "dmntchtWrite.hpp"
#include "Utils.hpp"
#include "UnityQuality.hpp"
#include "UnityScreen.hpp"

bool SaltySD = false;
bool bak = false;
bool plugin = false;

///* Main Menu
///
///
//
/////////////////////////////////////////////////////////////////////////////////

class GuiTest : public tsl::Gui {
public:
	GuiTest(u8 arg1, u8 arg2, bool arg3) { }

	// Called when this Gui gets loaded to create the UI
	// Allocate all elements on the heap. libtesla will make sure to clean them up when not needed anymore
	virtual tsl::elm::Element* createUI() override {
		// A OverlayFrame is the base element every overlay consists of. This will draw the default Title and Subtitle.
		// If you need more information in the header or want to change it's look, use a HeaderOverlayFrame.
		auto frame = new tsl::elm::OverlayFrame("UnityGraphics", "v0.1.0");

		// A list that can contain sub elements and handles scrolling
		auto list = new tsl::elm::List();
		
		list->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
			if (SaltySD == false) renderer->drawString("SaltyNX is not working!", false, x, y+20, 20, renderer->a(0xF33F));
			else if (plugin == false) renderer->drawString("Can't detect UnityGraphics plugin!", false, x, y+20, 20, renderer->a(0xF33F));
			else if (Utils::check == false && Utils::notsupported == false) {
				if (Utils::closed == true) renderer->drawString("Game was closed! Overlay disabled!\nExit from overlay and run game first!", false, x, y+20, 19, renderer->a(0xF33F));
				else renderer->drawString("Game is not running! Overlay disabled!\nExit from overlay and run game first!", false, x, y+20, 19, renderer->a(0xF33F));
				renderer->drawString(Utils::OptionsChar, false, x, y+60, 19, renderer->a(0xFFFF));
			}
			else if (Utils::notsupported == true) {
				renderer->drawString(Utils::BID_File, false, x, y+20, 8, renderer->a(0xF33F));
				renderer->drawString(Utils::OptionsChar, false, x, y+40, 19, renderer->a(0xFFFF));
			}
			else if (Utils::PluginRunning == false) {
				renderer->drawString("Game is running.", false, x, y+20, 20, renderer->a(0xFFFF));
				renderer->drawString("UnityGraphics is not running!", false, x, y+40, 20, renderer->a(0xF33F));
			}
			else {
				if (Utils::MAGIC == 0x16BA7E38) renderer->drawString("UnityGraphics plugin is running.", false, x, y+20, 20, renderer->a(0xFFFF));
				else if (Utils::MAGIC != 0x16BA7E38) renderer->drawString("WRONG MAGIC!", false, x, y+20, 20, renderer->a(0xF33F));
			}
	}), 70);

		if (Utils::MAGIC == 0x16BA7E38 && Utils::notsupported == false) {
			
			list->addItem(new tsl::elm::CategoryHeader("Categories"));
			auto *Qualityauto = new tsl::elm::ListItem("Quality");
			Qualityauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
					tsl::changeTo<QualitySettings>();
					return true;
				}
				return false;
			});

			list->addItem(Qualityauto);
			
			auto *Screenauto = new tsl::elm::ListItem("Screen");
			Screenauto->setClickListener([](u64 keys) { 
				if ((keys & KEY_A) && Utils::PluginRunning == true && Utils::dmnt_cht == true) {
					tsl::changeTo<ScreenSettings>();
					return true;
				}
				return false;
			});

			list->addItem(Screenauto);
		}
		
		else if (SaltySD == true && plugin == true && Utils::check == false) {
			auto *clickableListItem = new tsl::elm::ListItem("(De)activate plugin");
			clickableListItem->setClickListener([](u64 keys) { 
				if (keys & KEY_A) {
					if (bak == false) {
						rename("sdmc:/SaltySD/plugins/UnityGraphics.elf", "sdmc:/SaltySD/plugins/UnityGraphics.elf.bak");
						bak = true;
					}
					else {
						rename("sdmc:/SaltySD/plugins/UnityGraphics.elf.bak", "sdmc:/SaltySD/plugins/UnityGraphics.elf");
						bak = false;
					}
					return true;
				}
				
				return false;
			});
			list->addItem(clickableListItem);
		}

		// Add the list to the frame for it to be drawn
		frame->setContent(list);
        
		// Return the frame to have it become the top level element of this Gui
		return frame;
	}

	// Called once every frame to update values
	virtual void update() override {
		if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
			remove("sdmc:/SaltySD/UnityGraphics.hex");
			Utils::PluginRunning = false;
			Utils::check = false;
			Utils::closed = true;
		}
		if (bak == true) sprintf(Utils::OptionsChar, "UnityGraphics plugin is deactivated.");
		else sprintf(Utils::OptionsChar, "UnityGraphics plugin is activated.");
	}

	// Called once every frame to handle inputs not handled by other UI elements
	virtual bool handleInput(u64 keysDown, u64 keysHeld, touchPosition touchInput, JoystickPosition leftJoyStick, JoystickPosition rightJoyStick) override {
		return false;   // Return true here to singal the inputs have been consumed
	}
};

///*Init/Exit stuff
///
///
//
//////////////////////////////////////////////////////////////////////////////

class OverlayTest : public tsl::Overlay {
public:
	// libtesla already initialized fs, hid, pl, pmdmnt, hid:sys and set:sys
	virtual void initServices() override {
		smInitialize();
		fsdevMountSdmc();
		
		SaltySD = Utils::CheckPort();
		if (SaltySD == false) return;
		
		FILE* temp = fopen("sdmc:/SaltySD/plugins/UnityGraphics.elf", "r");
		if (temp != NULL) {
			fclose(temp);
			plugin = true;
			sprintf(Utils::OptionsChar, "UnityGraphics plugin is activated.");
		}
		else {
			temp = fopen("sdmc:/SaltySD/plugins/UnityGraphics.elf.bak", "r");
			if (temp != NULL) {
				fclose(temp);
				plugin = true;
				bak = true;
				sprintf(Utils::OptionsChar, "UnityGraphics plugin is deactivated.");
			}
			else return;
		}
		if (R_FAILED(pmdmntGetApplicationProcessId(&Utils::PID))) {
			remove("sdmc:/SaltySD/UnityGraphics.hex");
			return;
		}
		else {
			Utils::check = true;
			Utils::dmnt_cht = Utils::isServiceRunning("dmnt:cht");
			if (Utils::dmnt_cht == true) {
				if (R_SUCCEEDED(dmntchtInitialize())) {
						bool out = false;
						dmntchtHasCheatProcess(&out);
						if (out == false) dmntchtForceOpenCheatProcess();
						dmntchtGetCheatProcessMetadata(&Utils::dmnt_metadata);
						sprintf(Utils::BID_File, "sdmc:/SaltySD/plugins/UnityGraphics/%016" PRIx64 "/", Utils::dmnt_metadata.title_id);
						for (uint8_t i = 0; i < 32; i++) {
							sprintf(Utils::BID_File2, "%s%02" PRIx8, Utils::BID_File, Utils::dmnt_metadata.main_nso_build_id[i]);	
							sprintf(Utils::BID_File, Utils::BID_File2);
						}
						sprintf(Utils::BID_File2, "%s.hex", Utils::BID_File);	
						sprintf(Utils::BID_File, Utils::BID_File2);	
						FILE* _BID_File = fopen(Utils::BID_File, "rb");	
						if (_BID_File == NULL) {
							Utils::notsupported = true;
							return;
						}
						fclose(_BID_File);
						Utils::readFiles();
						dmntchtReadCheatProcessMemory(Utils::MAGIC_address, &Utils::MAGIC, 0x4);
						if (Utils::MAGIC != 0x16BA7E38) {
							Utils::dmnt_cht = false;
							return;
						}
						Utils::PluginRunning = true;
				}
			else Utils::dmnt_cht = false;
			}
		}
	
	}  // Called at the start to initialize all services necessary for this Overlay
	
	virtual void exitServices() override {
		dmntchtExit();
		fsdevUnmountDevice("sdmc");
		smExit();
	}  // Callet at the end to clean up all services previously initialized

	virtual void onShow() override {}    // Called before overlay wants to change from invisible to visible state
	
	virtual void onHide() override {}    // Called before overlay wants to change from visible to invisible state

	virtual std::unique_ptr<tsl::Gui> loadInitialGui() override {
		return initially<GuiTest>(1, 2, true);  // Initial Gui to load. It's possible to pass arguments to it's constructor like this
	}
};

int main(int argc, char **argv) {
    return tsl::loop<OverlayTest>(argc, argv);
}
