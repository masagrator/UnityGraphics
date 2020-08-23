#include <switch_min.h>
#include "QualitySettings.hpp"
#include "ScreenSettings.hpp"
#include "ScalableBufferManagerSettings.hpp"
#include "saltysd/SaltySD_core.h"
#include "saltysd/SaltySD_ipc.h"
#include "saltysd/SaltySD_dynamic.h"

namespace Utils {
	extern uint8_t switchcase;
	extern uint32_t MAGIC;
	
	enum Settings {
		None = 0,
		Quality = 1,
		Screen = 2,
		ScalableBufferManager = 3
	};
	
	extern Settings _settings;
	
	void writeFile();
}

