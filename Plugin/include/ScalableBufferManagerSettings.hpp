//
//
//
#include <switch_min.h>

namespace UnitySettings { namespace ScalableBufferManager {
	
	extern uintptr_t ptr_get_widthScaleFactor;
	extern float widthScaleFactor;
	
	extern uintptr_t ptr_get_heightScaleFactor;
	extern float heightScaleFactor;
	
	extern uintptr_t ptr_ResizeBuffers;

	void Change (uint8_t m_switchcase);
}
}