#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8038EF2C_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_8038EF2C;

loc_8038EF2C:
{
    r5 = MemoryInline::FlatRead32((r3 + 396));
    r4 = MemoryInline::FlatRead32((r3 + 424));
    r0 = (r5 & 65535);
    r0 = (r4 - r0);
    r6 = (r0 & 65535);
    r0 = (r6 + 1820);
    r0 = (r0 & 65535);
}

loc_8038EF4C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3640))) {
        goto loc_8038EF58;
    }
}

loc_8038EF50:
{
    MemoryInline::FlatWrite32((r3 + 396), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

loc_8038EF58:
{
}

loc_8038EF5C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(32768))) {
        goto loc_8038EF70;
    }
}

loc_8038EF60:
{
    r0 = (r5 + 1820);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 396), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

loc_8038EF70:
{
    r0 = (r5 + -1820);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 396), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

}

extern "C" void func_8038EF2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8038EF2C_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8038EF2C func_8038EF2C preserves=true fpr_mask=0x00000000
