#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80457B10_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_80457B10;

loc_80457B10:
{
    r5 = 0x806F0000u;
    r0 = 32;
    r5 = (r5 + 28632);
    r6 = 0;
    ctr = r0;
}

loc_80457B24:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_80457B2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80457B48;
    }
}

loc_80457B30:
{
    MemoryInline::FlatWrite32(r5, r3);
    r0 = 1;
    r3 = r6;
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_80457B48:
{
    r6 = (r6 + 1);
    r5 = (r5 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80457B24;
    }
}

loc_80457B54:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80457B10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80457B10_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80457B10 func_80457B10 preserves=true fpr_mask=0x00000000
