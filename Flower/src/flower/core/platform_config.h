#pragma once

#if defined (_WIN64)
#define PLATFORM_NAME "winx86_64"

#elif defined(_WIN32)
#define PLATFORM_NAME "winx86"

#elif defined (__linux__)
#define PLATFORM_NAME "linux"

#elif defined (__APPLE__)
#define PLATFORM_NAME "apple_machintosh"

#else
#define PLATFORM_NAME "other"

#endif
