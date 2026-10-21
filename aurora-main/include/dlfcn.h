#pragma once
#if defined(_WIN32)
typedef struct { const char* dli_fname; void* dli_fbase; const char* dli_sname; void* dli_saddr; } Dl_info;
static inline int dladdr(const void* a, Dl_info* i) { (void)a; (void)i; return 0; }
#else
#include_next <dlfcn.h>
#endif
