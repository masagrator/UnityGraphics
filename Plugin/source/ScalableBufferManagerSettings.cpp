//
//
//
#include "ScalableBufferManagerSettings.hpp"

namespace UnitySettings { namespace ScalableBufferManager {
	
	typedef float (*get_widthScaleFactor)();
	uintptr_t ptr_get_widthScaleFactor = 0;
	float widthScaleFactor = 0;
	
	typedef float (*get_heightScaleFactor)();
	uintptr_t ptr_get_heightScaleFactor = 0;
	float heightScaleFactor = 0;

	typedef void (*ResizeBuffers)(float f_widthScaleFactor, float f_heightScaleFactor);
	uintptr_t ptr_ResizeBuffers = 0;

	void Change (uint8_t m_switchcase) {
		switch(m_switchcase) {

			//"UnityEngine.ScalableBufferManager::get_widthScaleFactor"
			case 1:
				if (ptr_get_widthScaleFactor != 0) widthScaleFactor = ((get_widthScaleFactor)(ptr_get_widthScaleFactor))();
				break;
			
			//"UnityEngine.ScalableBufferManager::get_heightScaleFactor"
			case 2:
				if (ptr_get_heightScaleFactor != 0) heightScaleFactor = ((get_heightScaleFactor)(ptr_get_heightScaleFactor))();
				break;
			
			//"UnityEngine.ScalableBufferManager::ResizeBuffers"
			case 3:
				if (ptr_ResizeBuffers != 0) ((ResizeBuffers)(ptr_ResizeBuffers))(widthScaleFactor, heightScaleFactor);
				break;
			
			
			default:
				break;
		}
	}
}
}

