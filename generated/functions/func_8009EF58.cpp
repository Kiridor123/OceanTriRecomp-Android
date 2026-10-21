#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8009EF58_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x8009EF58u);
    goto loc_8009EF58;

loc_8009EF58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r7 = 524288;
    r0 = (r7 + -18135);
    r7 = (r6 * r0);
    r6 = (r5 & 65535);
    r5 = 923860992;
    r0 = (r5 + -26649);
    r6 = (r6 * r0);
    r5 = (r3 & 65535);
    r3 = 1065484288;
    r0 = (r3 + -2507);
    r5 = (r5 * r0);
    r4 = (r4 & 65535);
    r3 = 816250880;
    r0 = (r3 + 16787);
    r0 = (r4 * r0);
    r4 = (r7 + r6);
    r3 = (r5 + r0);
    r3 = (r3 + 327680);
    r0 = (r3 + -16557);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead8((r1 + 10));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    r0 = (r3 ^ r0);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r0 = (r0 & 255);
    r0 = (r3 ^ r0);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r0 = (r0 & 255);
    r0 = (r3 ^ r0);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8009EF58(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8009EF58_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009EF58 func_8009EF58 preserves=true fpr_mask=0x00000000
