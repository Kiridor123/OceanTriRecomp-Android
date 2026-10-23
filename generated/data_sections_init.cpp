// AUTO-GENERATED - DO NOT EDIT
// Data section initializer for Monster Hunter Tri PAL
// This file embeds the DOL and REL data sections directly in the binary.
#include "memory.h"
#include <cstring>
#include <cstddef>
#include <cstdint>
#include <iostream>

extern "C" {
extern const uint8_t kData__init[];
extern const uint8_t kData__text[];
extern const uint8_t kData_extab[];
extern const uint8_t kData_extabindex[];
extern const uint8_t kData__ctors[];
extern const uint8_t kData__dtors[];
extern const uint8_t kData__rodata[];
extern const uint8_t kData__data[];
extern const uint8_t kData__sdata[];
extern const uint8_t kData__sdata2[];
} // extern "C"

namespace {
bool g_dataInitialized = false;
} // namespace

extern "C" void InitializeDataSections() {
    if (g_dataInitialized) return;
    g_dataInitialized = true;

    std::cout << "[runtime] Initializing embedded data sections..." << std::endl;

    // DOL section: _init @ 0x80004000
    constexpr size_t kSize__init = 9952u;
    if (Memory::Contains(0x80004000u, kSize__init)) {
        std::memcpy(Memory::GetPointer(0x80004000u, kSize__init),
                    kData__init, kSize__init);
        std::cout << "[runtime]   Loaded _init (9952 bytes) @ 0x80004000" << std::endl;
    }

    // DOL section: _text @ 0x8003F260
    constexpr size_t kSize__text = 5441600u;
    if (Memory::Contains(0x8003F260u, kSize__text)) {
        std::memcpy(Memory::GetPointer(0x8003F260u, kSize__text),
                    kData__text, kSize__text);
        std::cout << "[runtime]   Loaded _text (5441600 bytes) @ 0x8003F260" << std::endl;
    }

    // DOL section: extab @ 0x800066E0
    constexpr size_t kSize_extab = 97728u;
    if (Memory::Contains(0x800066E0u, kSize_extab)) {
        std::memcpy(Memory::GetPointer(0x800066E0u, kSize_extab),
                    kData_extab, kSize_extab);
        std::cout << "[runtime]   Loaded extab (97728 bytes) @ 0x800066E0" << std::endl;
    }

    // DOL section: extabindex @ 0x8001E4A0
    constexpr size_t kSize_extabindex = 134592u;
    if (Memory::Contains(0x8001E4A0u, kSize_extabindex)) {
        std::memcpy(Memory::GetPointer(0x8001E4A0u, kSize_extabindex),
                    kData_extabindex, kSize_extabindex);
        std::cout << "[runtime]   Loaded extabindex (134592 bytes) @ 0x8001E4A0" << std::endl;
    }

    // DOL section: _ctors @ 0x8056FAA0
    constexpr size_t kSize__ctors = 384u;
    if (Memory::Contains(0x8056FAA0u, kSize__ctors)) {
        std::memcpy(Memory::GetPointer(0x8056FAA0u, kSize__ctors),
                    kData__ctors, kSize__ctors);
        std::cout << "[runtime]   Loaded _ctors (384 bytes) @ 0x8056FAA0" << std::endl;
    }

    // DOL section: _dtors @ 0x8056FC20
    constexpr size_t kSize__dtors = 32u;
    if (Memory::Contains(0x8056FC20u, kSize__dtors)) {
        std::memcpy(Memory::GetPointer(0x8056FC20u, kSize__dtors),
                    kData__dtors, kSize__dtors);
        std::cout << "[runtime]   Loaded _dtors (32 bytes) @ 0x8056FC20" << std::endl;
    }

    // DOL section: _rodata @ 0x8056FC40
    constexpr size_t kSize__rodata = 54176u;
    if (Memory::Contains(0x8056FC40u, kSize__rodata)) {
        std::memcpy(Memory::GetPointer(0x8056FC40u, kSize__rodata),
                    kData__rodata, kSize__rodata);
        std::cout << "[runtime]   Loaded _rodata (54176 bytes) @ 0x8056FC40" << std::endl;
    }

    // DOL section: _data @ 0x8057CFE0
    constexpr size_t kSize__data = 907680u;
    if (Memory::Contains(0x8057CFE0u, kSize__data)) {
        std::memcpy(Memory::GetPointer(0x8057CFE0u, kSize__data),
                    kData__data, kSize__data);
        std::cout << "[runtime]   Loaded _data (907680 bytes) @ 0x8057CFE0" << std::endl;
    }

    // DOL section: _sdata @ 0x807932E0
    constexpr size_t kSize__sdata = 14656u;
    if (Memory::Contains(0x807932E0u, kSize__sdata)) {
        std::memcpy(Memory::GetPointer(0x807932E0u, kSize__sdata),
                    kData__sdata, kSize__sdata);
        std::cout << "[runtime]   Loaded _sdata (14656 bytes) @ 0x807932E0" << std::endl;
    }

    // DOL section: _sdata2 @ 0x80797F60
    constexpr size_t kSize__sdata2 = 32064u;
    if (Memory::Contains(0x80797F60u, kSize__sdata2)) {
        std::memcpy(Memory::GetPointer(0x80797F60u, kSize__sdata2),
                    kData__sdata2, kSize__sdata2);
        std::cout << "[runtime]   Loaded _sdata2 (32064 bytes) @ 0x80797F60" << std::endl;
    }

    // BSS section @ 0x8065A980 (1332024 bytes) - memory already zero-initialized
}

extern "C" bool IsDataSectionsInitialized() {
    return g_dataInitialized;
}
