#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803F9630_ra58_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;

    MKW_GUEST_ENTER(0x803F9630u);
    goto loc_803F9630;

loc_803F9630:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r5 = (r6 - r0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 - r5);
}

loc_803F9648:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_803F9654;
    }
}

loc_803F964C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_803F9654:
{
    r0 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_803F9630(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803F9630_ra58_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000058 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803F9630 func_803F9630 preserves=true fpr_mask=0x00000000
