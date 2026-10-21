#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D57EC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x809D57ECu);
    goto loc_809D57EC;

loc_809D57EC:
{
    r3 = 0x80A70000u;
    r3 = (r3 + 27664);
    r4 = 0x80A20000u;
    r5 = (r4 + 6656);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 644u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6684);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r4);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r4);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6712);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r4);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r4);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r4);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6740);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r4);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r4);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r4);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 104), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 108), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6768);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r4);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r4);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 128), r4);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 132), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 136), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6796);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 148), r4);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r3 + 152), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + 156), r4);
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r3 + 164), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6824);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r3 + 168), r4);
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r3 + 172), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r3 + 176), r4);
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r3 + 180), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r3 + 184), r4);
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r3 + 188), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r3 + 192), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6852);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r3 + 196), r4);
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r3 + 200), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r3 + 204), r4);
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r3 + 208), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r3 + 212), r4);
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r3 + 216), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 220u, (r3 + 220), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6880);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r3 + 224), r4);
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r3 + 228), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r3 + 232), r4);
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r3 + 236), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r3 + 240), r4);
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r3 + 244), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 248u, (r3 + 248), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6908);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r3 + 252), r4);
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r3 + 256), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 260u, (r3 + 260), r4);
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r3 + 264), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 268u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 268u, (r3 + 268), r4);
        MemoryInline::WriteResolved32(guest_range_0, 272u, (r3 + 272), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r3 + 276), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6936);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 280u, (r3 + 280), r4);
        MemoryInline::WriteResolved32(guest_range_0, 284u, (r3 + 284), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r3 + 288), r4);
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r3 + 292), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 296u, (r3 + 296), r4);
        MemoryInline::WriteResolved32(guest_range_0, 300u, (r3 + 300), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 304u, (r3 + 304), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6964);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r3 + 308), r4);
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r3 + 312), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r3 + 316), r4);
        MemoryInline::WriteResolved32(guest_range_0, 320u, (r3 + 320), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r3 + 324), r4);
        MemoryInline::WriteResolved32(guest_range_0, 328u, (r3 + 328), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 332u, (r3 + 332), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 6992);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 336u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 336u, (r3 + 336), r4);
        MemoryInline::WriteResolved32(guest_range_0, 340u, (r3 + 340), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 344u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 344u, (r3 + 344), r4);
        MemoryInline::WriteResolved32(guest_range_0, 348u, (r3 + 348), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 352u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 352u, (r3 + 352), r4);
        MemoryInline::WriteResolved32(guest_range_0, 356u, (r3 + 356), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 360u, (r3 + 360), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 7020);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 364u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 364u, (r3 + 364), r4);
        MemoryInline::WriteResolved32(guest_range_0, 368u, (r3 + 368), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 372u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 372u, (r3 + 372), r4);
        MemoryInline::WriteResolved32(guest_range_0, 376u, (r3 + 376), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 380u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 380u, (r3 + 380), r4);
        MemoryInline::WriteResolved32(guest_range_0, 384u, (r3 + 384), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 388u, (r3 + 388), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 7048);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 392u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 392u, (r3 + 392), r4);
        MemoryInline::WriteResolved32(guest_range_0, 396u, (r3 + 396), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 400u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 400u, (r3 + 400), r4);
        MemoryInline::WriteResolved32(guest_range_0, 404u, (r3 + 404), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 408u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 408u, (r3 + 408), r4);
        MemoryInline::WriteResolved32(guest_range_0, 412u, (r3 + 412), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 416u, (r3 + 416), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 7076);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 420u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 420u, (r3 + 420), r4);
        MemoryInline::WriteResolved32(guest_range_0, 424u, (r3 + 424), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 428u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 428u, (r3 + 428), r4);
        MemoryInline::WriteResolved32(guest_range_0, 432u, (r3 + 432), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 436u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 436u, (r3 + 436), r4);
        MemoryInline::WriteResolved32(guest_range_0, 440u, (r3 + 440), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 444u, (r3 + 444), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 7104);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 448u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 448u, (r3 + 448), r4);
        MemoryInline::WriteResolved32(guest_range_0, 452u, (r3 + 452), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 456u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 456u, (r3 + 456), r4);
        MemoryInline::WriteResolved32(guest_range_0, 460u, (r3 + 460), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 464u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 464u, (r3 + 464), r4);
        MemoryInline::WriteResolved32(guest_range_0, 468u, (r3 + 468), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 472u, (r3 + 472), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 7132);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 476u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 476u, (r3 + 476), r4);
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r3 + 480), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 484u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 484u, (r3 + 484), r4);
        MemoryInline::WriteResolved32(guest_range_0, 488u, (r3 + 488), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 492u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 492u, (r3 + 492), r4);
        MemoryInline::WriteResolved32(guest_range_0, 496u, (r3 + 496), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 500u, (r3 + 500), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 7160);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 504u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 504u, (r3 + 504), r4);
        MemoryInline::WriteResolved32(guest_range_0, 508u, (r3 + 508), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 512u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 512u, (r3 + 512), r4);
        MemoryInline::WriteResolved32(guest_range_0, 516u, (r3 + 516), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 520u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 520u, (r3 + 520), r4);
        MemoryInline::WriteResolved32(guest_range_0, 524u, (r3 + 524), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 528u, (r3 + 528), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 7188);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 532u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 532u, (r3 + 532), r4);
        MemoryInline::WriteResolved32(guest_range_0, 536u, (r3 + 536), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 540u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 540u, (r3 + 540), r4);
        MemoryInline::WriteResolved32(guest_range_0, 544u, (r3 + 544), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 548u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 548u, (r3 + 548), r4);
        MemoryInline::WriteResolved32(guest_range_0, 552u, (r3 + 552), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 556u, (r3 + 556), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 7216);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 560u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 560u, (r3 + 560), r4);
        MemoryInline::WriteResolved32(guest_range_0, 564u, (r3 + 564), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 568u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 568u, (r3 + 568), r4);
        MemoryInline::WriteResolved32(guest_range_0, 572u, (r3 + 572), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 576u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 576u, (r3 + 576), r4);
        MemoryInline::WriteResolved32(guest_range_0, 580u, (r3 + 580), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 584u, (r3 + 584), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 7244);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 588u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 588u, (r3 + 588), r4);
        MemoryInline::WriteResolved32(guest_range_0, 592u, (r3 + 592), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 596u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 596u, (r3 + 596), r4);
        MemoryInline::WriteResolved32(guest_range_0, 600u, (r3 + 600), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 604u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 604u, (r3 + 604), r4);
        MemoryInline::WriteResolved32(guest_range_0, 608u, (r3 + 608), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 612u, (r3 + 612), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 7272);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 616u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 616u, (r3 + 616), r4);
        MemoryInline::WriteResolved32(guest_range_0, 620u, (r3 + 620), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 624u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 624u, (r3 + 624), r4);
        MemoryInline::WriteResolved32(guest_range_0, 628u, (r3 + 628), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 632u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 632u, (r3 + 632), r4);
        MemoryInline::WriteResolved32(guest_range_0, 636u, (r3 + 636), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 640u, (r3 + 640), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809D57EC func_809D57EC preserves=true fpr_mask=0x00000000
