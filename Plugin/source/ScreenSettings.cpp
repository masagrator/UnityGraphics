//
//
//
#include "ScreenSettings.hpp"

namespace UnitySettings { namespace Screen {
	
	typedef uint32_t (*get_width)();
	uintptr_t ptr_get_width = 0;
	uint32_t width = 0;
	
	typedef uint32_t (*get_height)();
	uintptr_t ptr_get_height = 0;
	uint32_t height = 0;

	uintptr_t ptr_get_dpi = 0;
	uintptr_t ptr_RequestOrientation = 0;
	uintptr_t ptr_GetScreenOrientation = 0;
	uintptr_t ptr_get_sleepTimeout = 0;
	uintptr_t ptr_set_sleepTimeout = 0;
	uintptr_t ptr_IsOrientationEnabled = 0;
	uintptr_t ptr_SetOrientationEnabled = 0;
	uintptr_t ptr_get_currentResolution_Injected = 0;
	uintptr_t ptr_get_fullScreen = 0;
	uintptr_t ptr_set_fullScreen = 0;

	typedef uint32_t (*get_fullScreenMode)();
	uintptr_t ptr_get_fullScreenMode = 0;
	typedef void (*set_fullScreenMode)(uint32_t v_fullScreenMode);
	uintptr_t ptr_set_fullScreenMode = 0;
	uint32_t fullScreenMode = 0;
	
	uintptr_t ptr_get_safeArea_Injected = 0;

	typedef void (*SetResolution)(uint32_t v_width, uint32_t v_height, uint32_t v_fullScreenMode, uint32_t v_preferredRefreshRate);
	uintptr_t ptr_SetResolution = 0;
	
	uintptr_t ptr_get_resolutions = 0;

	void Change (uint8_t m_switchcase) {
		switch(m_switchcase) {

			//"UnityEngine.Screen::get_width"
			case 1:
				if (ptr_get_width != 0) width = ((get_width)(ptr_get_width))();
				break;

			//"UnityEngine.Screen::get_height"
			case 2:
				if (ptr_get_height != 0) height = ((get_height)(ptr_get_height))();
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
				if (ptr_get_fullScreenMode != 0) fullScreenMode = ((get_fullScreenMode)(ptr_get_fullScreenMode))();
				if (ptr_SetResolution != 0) ((SetResolution)(ptr_SetResolution))(width, height, fullScreenMode, 0);
				break;
			
			//"UnityEngine.Screen::get_resolutions"
			case 17:	
				break;
			
			default:
				break;
		}
	}
}
}

