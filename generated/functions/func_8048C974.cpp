#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8048C974_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    MKW_GUEST_ENTER(0x8048C974u);
    goto loc_8048C974;

loc_8048C974:
{
    r10 = 0x80490000u;
    r9 = 0x80740000u;
    r8 = 0x80490000u;
    r7 = 0x80490000u;
    r6 = 0x80490000u;
    r5 = 0x80490000u;
    r4 = 0x80490000u;
    r3 = 0x80490000u;
    r10 = (r10 + -13852);
    r9 = (r9 + -7424);
    r0 = 0;
    r8 = (r8 + -13456);
    r7 = (r7 + -12980);
    r6 = (r6 + -12664);
    r5 = (r5 + -12172);
    r4 = (r4 + -11668);
    r3 = (r3 + -11396);
    guest_range_0 = MemoryInline::ResolveRangeHost((r9 + 132), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r9 + 132), r10);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r9 + 136), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r9 + 140), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r9 + 144), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r9 + 148), r6);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r9 + 152), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r9 + 156), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r9 + 160), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r9 + 164), r4);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r9 + 168), r3);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8048C974(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048C974_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8048C974 func_8048C974 preserves=true fpr_mask=0x00000000
