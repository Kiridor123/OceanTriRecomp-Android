#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80837C50(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    goto loc_80837C50;

loc_80837C50:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r10 = MemoryInline::FlatRead8((r1 + 12));
    r9 = MemoryInline::FlatRead8((r1 + 13));
    r8 = MemoryInline::FlatRead8((r1 + 14));
    r7 = MemoryInline::FlatRead8((r1 + 15));
    r6 = MemoryInline::FlatRead8((r1 + 8));
    r5 = MemoryInline::FlatRead8((r1 + 9));
    r4 = MemoryInline::FlatRead8((r1 + 10));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x000007F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80837C50 func_80837C50 preserves=true fpr_mask=0x00000000
