#include "Utils.hpp"

namespace Utils {
	uint64_t PID = 0;
	bool PluginRunning = false;
	bool dmnt_cht = false;
	bool closed = false;
	bool threadexit = false;
	char OptionsChar[64];
	bool check = false;
	bool Quality_read = false;
	bool notsupported = false;
	bool Screen_read = false;
	bool ScalableBufferManager_read = false;
	
	const std::string overlayName = APP_TITLE;
	std::string version = APP_VERSION;

	uint32_t MAGIC = 0x0;
	
	float denominator = 3;
	
	bool CheckPort () {
		Handle saltysd;
		for (int i = 0; i < 34; i++) {
			if (R_SUCCEEDED(svcConnectToNamedPort(&saltysd, "InjectServ"))) {
				svcCloseHandle(saltysd);
				break;
			}
			else {
				if (i == 33) return false;
				svcSleepThread(1'000'000);
			}
		}
		for (int i = 0; i < 34; i++) {
			if (R_SUCCEEDED(svcConnectToNamedPort(&saltysd, "InjectServ"))) {
				svcCloseHandle(saltysd);
				return true;
			}
			else svcSleepThread(1'000'000);
		}
		return false;
	}
	
	bool isServiceRunning(const char *serviceName) {	
		Handle handle;	
		SmServiceName service_name = smEncodeName(serviceName);	
		if (R_FAILED(smRegisterService(&handle, service_name, false, 1))) return true;
		else {
			svcCloseHandle(handle);	
			smUnregisterService(service_name);
			return false;
		}
	}
	
}
