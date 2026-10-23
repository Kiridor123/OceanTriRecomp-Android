#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80224854_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_80224854;

loc_80224854:
{
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r4 + 8), r6);
    r5 = (r5 & 255);
    r0 = (r5 + -5);
}

loc_80224868:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80224878;
    }
}

loc_8022486C:
{
    r0 = (r3 + 2580);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

loc_80224878:
{
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_80224854(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80224854_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80224854 func_80224854 preserves=true fpr_mask=0x00000000
