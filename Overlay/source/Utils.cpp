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
	
	const std::string overlayName = "UnityGraphics";
	std::string version = "0.2.0";

	uint32_t MAGIC = 0x0;
	
	float denominator = 3;
	
	bool CheckPort () {
		Result ret;
		Handle saltysd;
		for (int i = 0; i < 200; i++) {
			ret = svcConnectToNamedPort(&saltysd, "InjectServ");
			svcSleepThread(1'000'000);
			
			if (R_SUCCEEDED(ret)) {
				svcCloseHandle(saltysd);
				break;
			}
		}
		if (R_FAILED(ret)) return false;
		for (int i = 0; i < 200; i++) {
			ret = svcConnectToNamedPort(&saltysd, "InjectServ");
			svcSleepThread(1'000'000);
			
			if (R_SUCCEEDED(ret)) {
				svcCloseHandle(saltysd);
				break;
			}
		}
		if (R_FAILED(ret)) return false;
		else return true;
	}
	
	bool isServiceRunning(const char *serviceName) {	
		Handle handle;	
		SmServiceName service_name = smEncodeName(serviceName);	
		bool running = R_FAILED(smRegisterService(&handle, service_name, false, 1));	

		svcCloseHandle(handle);	

		if (!running) smUnregisterService(service_name);	

		return running;	
	}
	
}