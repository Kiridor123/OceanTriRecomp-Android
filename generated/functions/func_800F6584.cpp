#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800F6584_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800F6584;

loc_800F6584:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0x806A0000u;
    r3 = (r31 + 17776);
    r4 = 0;
    r5 = 3140;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r3 = 0x806A0000u;
    MemoryInline::FlatWriteRam8((r3 + 20916), static_cast<uint8_t>(r0));
    r3 = (r3 + 20916);
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r29 = 0;
    r30 = (r31 + 17776);
    r31 = -1;
}

loc_800F65D8:
{
    MemoryInline::FlatWrite32((r30 + 60), r31);
    MemoryInline::FlatWrite32((r30 + 1084), r31);
    MemoryInline::FlatWrite32((r30 + 2108), r31);
    r3 = (r29 & 255);
    // inline leaf 0x800F6ADC (20 guest instruction(s))
    r4 = 0x806A0000u;
    r4 = (r4 + 20916);
    r0 = (r3 & 255);
    r0 = (r0 * 24);
    r5 = (r4 + r0);
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r5 + 4), static_cast<uint8_t>(r4));
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 7), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r5 + 9), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r5 + 10), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 20), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 24), r4);
    }
    // end of inlined leaf 0x800F6ADC
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_800F65F8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(256))) {
        goto loc_800F65D8;
    }
}

loc_800F65FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F6584(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F6584_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F6584 func_800F6584 preserves=true fpr_mask=0x00000000
