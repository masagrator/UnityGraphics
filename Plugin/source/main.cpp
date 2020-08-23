#include <switch_min.h>

#include "saltysd/SaltySD_core.h"
#include "saltysd/SaltySD_ipc.h"
#include "saltysd/SaltySD_dynamic.h"
#include "Utils.hpp"
#include <inttypes.h>
#include <cstdlib>
#include <sys/iosupport.h>

extern "C" {
	extern u32 __start__;

	static char g_heap[0x8000];

	void __libnx_init(void* ctx, Handle main_thread, void* saved_lr);
	void __attribute__((weak)) NORETURN __libnx_exit(int rc);
	void __nx_exit(int, void*);
	void __libc_fini_array(void);
	void __libc_init_array(void);
	extern void _ZN2nn2os11SleepThreadENS_8TimeSpanE(void* unk) LINKABLE;
}

u32 __nx_applet_type = AppletType_None;

Handle orig_main_thread;
void* orig_ctx;
void* orig_saved_lr;
const char* ver = "0.1.1";

const char* CheckTitleID() {
    char* titleid = (char*)malloc(0x20);
    uint64_t titid = 0;
    svcGetInfo(&titid, 18, CUR_PROCESS_HANDLE, 0);	
    snprintf(titleid, 0x20, "%016" PRIx64, titid);
	return titleid;
}

void __libnx_init(void* ctx, Handle main_thread, void* saved_lr) {
	extern char* fake_heap_start;
	extern char* fake_heap_end;

	fake_heap_start = &g_heap[0];
	fake_heap_end   = &g_heap[sizeof g_heap];
	
	orig_ctx = ctx;
	orig_main_thread = main_thread;
	orig_saved_lr = saved_lr;
	
	// Call constructors.
	//void __libc_init_array(void);
	__libc_init_array();
}

void __attribute__((weak)) NORETURN __libnx_exit(int rc) {
	// Call destructors.
	//void __libc_fini_array(void);
	__libc_fini_array();

	SaltySD_printf("SaltySD Plugin: jumping to %p\n", orig_saved_lr);

	__nx_exit(0, orig_saved_lr);
	while (true);
}

void SleepThread(void* unknown) {
	if (Utils::switchcase == 0) return _ZN2nn2os11SleepThreadENS_8TimeSpanE(unknown);
	switch(Utils::_settings) {
		case Utils::Quality:
			UnitySettings::Quality::Change(Utils::switchcase);
			break;
		
		case Utils::Screen:
			UnitySettings::Screen::Change(Utils::switchcase);
			break;
		
		case Utils::ScalableBufferManager:
			UnitySettings::ScalableBufferManager::Change(Utils::switchcase);
			break;
		
		default:
			break;
	}
	
	Utils::switchcase = 0;
	
	return _ZN2nn2os11SleepThreadENS_8TimeSpanE(unknown);
}

int main(int argc, char *argv[]) {
	SaltySD_printf("SaltySD UnityGraphics %s: alive\n", ver);
	char path[128];
	const char* tid_check = CheckTitleID();
	sprintf(path, "sdmc:/SaltySD/plugins/UnityGraphics/%s/", tid_check);
	DIR* checkDir;
	if (checkDir = SaltySDCore_opendir(path)) {
		SaltySDCore_closedir(checkDir);
		Utils::writeFile();
		SaltySDCore_ReplaceImport("_ZN2nn2os11SleepThreadENS_8TimeSpanE", (void*)SleepThread);
	}
	
	SaltySD_printf("SaltySD UnityGraphics %s: injection finished\n", ver);
}

