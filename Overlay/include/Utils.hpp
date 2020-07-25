#include <tesla.hpp>
#include "libstratosphere/dmntcht.hpp"
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

	extern uint32_t MAGIC;
	
	extern float denominator;
	
	bool CheckPort ();
	bool isServiceRunning(const char *serviceName);
	void readValues(void*);
}

