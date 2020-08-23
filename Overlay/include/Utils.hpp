#include <tesla.hpp>
#include "dmntcht.h"
#include "dmntchtRead.hpp"
#include "dmntchtWrite.hpp"

namespace Utils {
	
	extern uint64_t PID;
	extern bool dmnt_cht;
	extern bool PluginRunning;
	extern bool closed;
	extern bool threadexit;
	extern char OptionsChar[64];
	extern bool check;
	extern bool Quality_read;
	extern bool notsupported;
	extern bool Screen_read;
	extern bool ScalableBufferManager_read;
	extern bool Camera_read;

	extern uint32_t MAGIC;
	
	extern float denominator;
	
	bool CheckPort ();
	bool isServiceRunning(const char *serviceName);
	
	extern const std::string overlayName;
	extern std::string version;
}

