//
//
//
#include <switch_min.h>

namespace UnitySettings { namespace Screen {
	
	extern uintptr_t ptr_get_width;
	extern uint32_t width;
	
	extern uintptr_t ptr_get_height;
	extern uint32_t height;

	extern uintptr_t ptr_get_fullScreenMode;
	extern uintptr_t ptr_set_fullScreenMode;
	extern uint32_t fullScreenMode;
	//enum FullScreenMode
    //{
    //    ExclusiveFullScreen = 0,
    //    FullScreenWindow = 1,
    //    MaximizedWindow = 2,
    //    Windowed = 3,
    //}
	
	extern uintptr_t ptr_SetResolution;

	void Change (uint8_t m_switchcase);
}
}