// Windows version of the flat guest window (see guest_flat_memory.h).
// A pagefile-backed section mapped at fixed addresses; gaps stay unmapped.
#include "guest_flat_memory.h"
#include "fatal.h"
#include "recomp_mod_loader.h"
#include "gx_panic.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

#include <cstdio>
#include <stdexcept>
#include <string>

namespace GuestFlat {
namespace {

constexpr uint32_t kMem1Size = 24u << 20;
constexpr uint32_t kMem2Size = 64u << 20;
constexpr uint32_t kLockedCacheSize = 0x4000;
constexpr uint32_t kWindowGuestStart = 0;
constexpr uint64_t kWindowSize = 1ull << 32;

HANDLE section = nullptr;
void* views[8];
int viewCount = 0;
bool handlerInstalled = false;

const char* Describe(uint32_t address) {
    if (IsHardwareAddress(address)) {
        const uint32_t p = address & 0x0FFFFFFFu;

        if (p >= 0x08000000u && p < 0x09000000u)
            return "EFB";

        if ((p & 0xFFFFFF00u) == 0x0C008000u)
            return "GX FIFO";

        switch (p >> 12) {
        case 0x0C000:
            return "CP";
        case 0x0C001:
            return "PE";
        case 0x0C002:
            return "VI";
        case 0x0C003:
            return "PI";
        case 0x0C004:
            return "MI";
        case 0x0C005:
            return "DSP";
        case 0x0C006:
        case 0x0D006:
            return "DI/SI/EXI/AI";
        case 0x0D000:
            return "IPC/Hollywood";
        default:
            return "MMIO";
        }
    }

    if (address >> 30 == 2 || address >> 30 == 3) {
        const uint32_t p = address & 0x3FFFFFFFu;

        if ((p >= kMem1Size && p < 0x04000000u) || (p >= 0x10000000u + kMem2Size && p < 0x14000000u))
            return "past the end of MEM1/MEM2";
    }

    return "unmapped";
}

LONG CALLBACK Report(EXCEPTION_POINTERS* info) {
    const EXCEPTION_RECORD* rec = info->ExceptionRecord;

    if (rec->ExceptionCode != EXCEPTION_ACCESS_VIOLATION || rec->NumberParameters < 2)
        return EXCEPTION_CONTINUE_SEARCH;

    const uintptr_t host = static_cast<uintptr_t>(rec->ExceptionInformation[1]);
    const uintptr_t windowStart = kGuestBase + kWindowGuestStart;

    if (host - windowStart >= kWindowSize)
        return EXCEPTION_CONTINUE_SEARCH;

    const bool write = rec->ExceptionInformation[0] == 1;
    const uint32_t guest = static_cast<uint32_t>(host - kGuestBase);
    char text[512];
    const int length = std::snprintf(text, sizeof(text),
                                     "MH3 guest memory fault: %s of guest 0x%08x (%s), host pc %p, "
                                     "translated function 0x%08x. Hardware accesses belong to a function listed in "
                                     "runtime/src/hardware_access.inc.\n",
                                     write ? "write" : "read", guest, Describe(guest),
                                     reinterpret_cast<void*>(info->ContextRecord->Rip),
                                     RecompMod::CurrentTranslatedExecutionAddress());
    if (length > 0)
        std::fwrite(text, 1, size_t(length) < sizeof(text) ? size_t(length) : sizeof(text) - 1, stderr);

    const uint32_t physical = guest & 0x3FFFFFFF;

    if ((guest >> 30) != 1 &&
        ((physical >= 0x0C000000 && physical < 0x0C002000) || (physical >= 0x0C00300C && physical < 0x0C003018) || (physical & 0xFFFFFF00u) == 0x0C008000 || (physical & 0x3FC00000u) == 0x08000000))
        PanicLegacyGx(write ? "GX direct memory write" : "GX direct memory read", guest);

    return EXCEPTION_CONTINUE_SEARCH;
}

void Map(uint32_t guest, size_t size, uint64_t offset) {
    void* at = Host(guest);
    void* got = MapViewOfFileEx(section, FILE_MAP_ALL_ACCESS, DWORD(offset >> 32), DWORD(offset & 0xFFFFFFFFu), size, at);

    if (got != at)
        MH3_THROW(std::runtime_error("Cannot map guest memory at 0x" + std::to_string(guest) + " (Windows error " + std::to_string(GetLastError()) + ")"));

    views[viewCount++] = got;
}

} // namespace

void Initialize() {
    for (int i = 0; i < viewCount; ++i)
        UnmapViewOfFile(views[i]);

    viewCount = 0;
    g_mapped = false;

    if (section) {
        CloseHandle(section);
        section = nullptr;
    }

    const uint64_t total = uint64_t(kMem1Size) + kMem2Size + 0x10000;
    section = CreateFileMappingW(INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE, DWORD(total >> 32), DWORD(total & 0xFFFFFFFFu), nullptr);

    if (!section)
        MH3_THROW(std::runtime_error("CreateFileMapping failed (Windows error " + std::to_string(GetLastError()) + ")"));

    for (uint32_t alias : {0x80000000u, 0xC0000000u}) {
        Map(alias, kMem1Size, 0);
        Map(alias + 0x10000000u, kMem2Size, kMem1Size);
    }

    Map(0xE0000000u, kLockedCacheSize, uint64_t(kMem1Size) + kMem2Size);

    if (!handlerInstalled) {
        AddVectoredExceptionHandler(1, Report);
        handlerInstalled = true;
    }

    g_mapped = true;
}

} // namespace GuestFlat
