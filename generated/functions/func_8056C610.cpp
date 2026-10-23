#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8056C610_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_8056C610;

loc_8056C610:
{
    r5 = MemoryInline::FlatRead8(r4);
}

loc_8056C618:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_8056C61C:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r6 = (r5 * 108);
    r4 = 0;
    r3 = (r0 + r5);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite32((r3 + 28), r4);
    MemoryInline::FlatWrite32((r3 + 32), r4);
    MemoryInline::FlatWrite32((r3 + 36), r4);
    MemoryInline::FlatWrite32((r3 + 44), r4);
    MemoryInline::FlatWrite32((r3 + 48), r4);
    r0 = MemoryInline::FlatRead32((r3 + 52));
    r0 = (r0 & 1792);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    MemoryInline::FlatWrite32((r3 + 60), r4);
    MemoryInline::FlatWrite32((r3 + 56), r4);
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056C610(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056C610_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056C610 func_8056C610 preserves=true fpr_mask=0x00000000
