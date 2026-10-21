#pragma once
#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#define SYS_gettid 186
static inline long syscall(long n, ...) { (void)n; return (long)GetCurrentThreadId(); }
#else
#include_next <sys/syscall.h>
#endif
