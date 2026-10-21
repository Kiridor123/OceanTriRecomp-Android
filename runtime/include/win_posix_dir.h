#pragma once
#include <filesystem>
#include <string>
#ifdef _WIN32
#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <mutex>
#include <fcntl.h>
#include <io.h>
#include <direct.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#ifndef O_DIRECTORY
#define O_DIRECTORY 0x40000
#endif
#ifndef O_NOFOLLOW
#define O_NOFOLLOW 0
#endif
#ifndef AT_FDCWD
#define AT_FDCWD (-100)
#define AT_SYMLINK_NOFOLLOW 0x100
#define AT_REMOVEDIR 0x200
#endif
inline std::filesystem::path mh3_self_exe() { wchar_t b[32768]; DWORD n = GetModuleFileNameW(nullptr, b, 32768); return std::filesystem::path(std::wstring(b, n)); }
inline std::map<int, std::string>& mh3_dirs() { static std::map<int, std::string> m; return m; }
inline std::mutex& mh3_dirs_lock() { static std::mutex m; return m; }
inline int mh3_open(const char* path, int flags, int mode = 0) {
    (void)mode;
    if (flags & O_DIRECTORY) {
        DWORD a = GetFileAttributesA(path);
        if (a == INVALID_FILE_ATTRIBUTES) { errno = ENOENT; return -1; }
        if (!(a & FILE_ATTRIBUTE_DIRECTORY)) { errno = ENOTDIR; return -1; }
        int fd = _open("NUL", _O_RDONLY);
        if (fd < 0) return -1;
        std::lock_guard<std::mutex> g(mh3_dirs_lock());
        mh3_dirs()[fd] = path;
        return fd;
    }
    return _open(path, (flags & ~O_DIRECTORY) | _O_BINARY, _S_IREAD | _S_IWRITE);
}
inline std::string mh3_join(int dir, const char* name) {
    if (dir == AT_FDCWD) return name;
    std::lock_guard<std::mutex> g(mh3_dirs_lock());
    auto it = mh3_dirs().find(dir);
    return (it == mh3_dirs().end() ? std::string() : it->second + "\\") + name;
}
inline int mh3_openat(int d, const char* n, int f, int m = 0) { return mh3_open(mh3_join(d, n).c_str(), f, m); }
inline int mh3_mkdirat(int d, const char* n, int m) { (void)m; return _mkdir(mh3_join(d, n).c_str()); }
inline int mh3_mkdir(const char* p, int m) { (void)m; return _mkdir(p); }
inline int mh3_fstatat(int d, const char* n, struct stat* st, int f) { (void)f; return ::stat(mh3_join(d, n).c_str(), st); }
inline int mh3_unlinkat(int d, const char* n, int f) { auto p = mh3_join(d, n); return (f & AT_REMOVEDIR) ? _rmdir(p.c_str()) : _unlink(p.c_str()); }
inline int mh3_renameat(int d1, const char* n1, int d2, const char* n2) {
    if (MoveFileExA(mh3_join(d1, n1).c_str(), mh3_join(d2, n2).c_str(), MOVEFILE_REPLACE_EXISTING)) return 0;
    errno = EACCES; return -1;
}
inline long long mh3_filelength(int fd) { return _filelengthi64(fd); }
inline long long mh3_pread(int fd, void* buf, size_t count, unsigned long long off) {
    HANDLE h = (HANDLE)_get_osfhandle(fd);
    if (h == INVALID_HANDLE_VALUE) { errno = EBADF; return -1; }
    OVERLAPPED ov = {};
    ov.Offset = (DWORD)(off & 0xFFFFFFFFull);
    ov.OffsetHigh = (DWORD)(off >> 32);
    DWORD want = count > 0x10000000u ? 0x10000000u : (DWORD)count, got = 0;
    if (!ReadFile(h, buf, want, &got, &ov)) { if (GetLastError() == ERROR_HANDLE_EOF) return 0; errno = EIO; return -1; }
    return (long long)got;
}
inline int mh3_fsync(int fd) { return _commit(fd); }
inline DIR* mh3_fdopendir(int fd) {
    std::string p;
    { std::lock_guard<std::mutex> g(mh3_dirs_lock()); auto it = mh3_dirs().find(fd);
      if (it == mh3_dirs().end()) { errno = EBADF; return nullptr; } p = it->second; }
    return opendir(p.c_str());
}
#else
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>

#if defined(__ANDROID__)
#include <SDL3/SDL_system.h>
inline std::filesystem::path mh3_self_exe() {
    const char* ext = SDL_GetAndroidExternalStoragePath();
    if (ext && ext[0]) return std::filesystem::path(ext) / "MH3";
    const char* internal = SDL_GetAndroidInternalStoragePath();
    if (internal && internal[0]) return std::filesystem::path(internal) / "MH3";
    return std::filesystem::path("/storage/emulated/0/MH3/MH3");
}
#else
inline std::filesystem::path mh3_self_exe() { return std::filesystem::read_symlink("/proc/self/exe"); }
#endif
inline int mh3_open(const char* path, int flags, int mode = 0) { return ::open(path, flags, mode); }
inline int mh3_openat(int d, const char* n, int f, int m = 0) { return ::openat(d, n, f, m); }
inline int mh3_mkdir(const char* p, int m) { return ::mkdir(p, m); }
inline int mh3_mkdirat(int d, const char* n, int m) { return ::mkdirat(d, n, m); }
inline int mh3_fstatat(int d, const char* n, struct stat* st, int f) { return ::fstatat(d, n, st, f); }
inline int mh3_unlinkat(int d, const char* n, int f) { return ::unlinkat(d, n, f); }
inline int mh3_renameat(int d1, const char* n1, int d2, const char* n2) { return ::renameat(d1, n1, d2, n2); }
inline long long mh3_filelength(int fd) {
    struct stat st;
    if (::fstat(fd, &st) != 0) return -1;
    return (long long)st.st_size;
}
inline long long mh3_pread(int fd, void* buf, size_t count, unsigned long long off) { return (long long)::pread(fd, buf, count, (off_t)off); }
inline int mh3_fsync(int fd) { return ::fsync(fd); }
inline DIR* mh3_fdopendir(int fd) { return ::fdopendir(fd); }
#endif
