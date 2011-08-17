
#ifdef WIN32
#include "ortp-config-win32.h"
#else
#include "ortp-config.h"
#endif
#include "ortp/ortp.h"	


BOOL WINAPI DllMain( 
					 HINSTANCE hinstDLL,	// handle to DLL module
					 DWORD fdwReason,		// reason for calling function
					 LPVOID lpReserved		// reserved
				   )  
{
    // Perform actions based on the reason for calling.
    switch( fdwReason ) 
    { 
        case DLL_PROCESS_ATTACH:
            break;

        case DLL_THREAD_ATTACH:
            break;

        case DLL_THREAD_DETACH:
			break;

        case DLL_PROCESS_DETACH:
            break;
    }

    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}
