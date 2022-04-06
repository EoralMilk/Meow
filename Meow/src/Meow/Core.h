#pragma once

#ifdef MW_PLATFORM_WINDOWS
	#ifdef MW_BUILD_DLL
		#define MEOW_API __declspec(dllexport)
	#else
		#define MEOW_API __declspec(dllimport)
	#endif // MW_BUILD_DLL
#else
	#error Meow not support this platform for now

#endif