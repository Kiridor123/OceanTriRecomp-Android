#pragma once
#include_next <unistd.h>
#include <fcntl.h>
#include <io.h>
#include <stdlib.h>
#include <sys/types.h>
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#ifndef O_CLOEXEC
#define O_CLOEXEC _O_BINARY
#endif
static inline long long pread(int fd, void* buf, size_t n, long long off) {
    HANDLE h = (HANDLE)_get_osfhandle(fd);
    OVERLAPPED ov = {0};
    ov.Offset = (DWORD)(off & 0xFFFFFFFFull);
    ov.OffsetHigh = (DWORD)((unsigned long long)off >> 32);
    DWORD got = 0;
    if (!ReadFile(h, buf, (DWORD)n, &got, &ov)) {
        if (GetLastError() == ERROR_HANDLE_EOF) return 0;
        return -1;
    }
    return (long long)got;
}
static inline int setenv(const char* k, const char* v, int o) {
    (void)o;
    return _putenv_s(k, v);
}
static inline int unsetenv(const char* k) { return _putenv_s(k, ""); }
