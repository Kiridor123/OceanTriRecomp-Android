#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8005BB14_ra48_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;

    goto loc_8005BB14;

loc_8005BB14:
{
    r4 = (r3 + 65536);
    r6 = MemoryInline::FlatRead32((r4 + 20572));
    r0 = MemoryInline::FlatRead32((r4 + 20568));
}

loc_8005BB24:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_8005BB30;
    }
}

loc_8005BB28:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_8005BB30:
{
    r5 = MemoryInline::FlatRead32((r3 + 80));
    r4 = 65536;
    r0 = (r4 + 20480);
    r0 = (r5 * r0);
    r3 = (r3 + r0);
    r0 = (r6 * 84);
    r3 = (r3 + r0);
    r3 = (r3 + 84);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_8005BB14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8005BB14_ra48_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000048 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005BB14 func_8005BB14 preserves=true fpr_mask=0x00000000
