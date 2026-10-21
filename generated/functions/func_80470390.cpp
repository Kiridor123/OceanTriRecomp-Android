#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80470390_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80470390u);
    goto loc_80470390;

loc_80470390:
{
    r6 = 0x80700000u;
    r4 = 0x80610000u;
    r7 = 0;
    r3 = 65536;
    r0 = (r3 + -32768);
    r6 = (r6 + -13312);
    r4 = (r4 + 640);
    r5 = 1;
    r3 = 10;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -16128), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r13 + -16104), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r13 + -16096), r7);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r13 + -16100), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r13 + -16112), r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r13 + -16116), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 6u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r13 + -16120), r3);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r13 + -16122), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r13 + -16124), r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r13 + -16126), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r13 + -16128), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80470390(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80470390_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80470390 func_80470390 preserves=true fpr_mask=0x00000000
