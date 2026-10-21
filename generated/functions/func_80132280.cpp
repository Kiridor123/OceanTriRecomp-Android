#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80132280_ra38_6_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t r5 = arg_r5;
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;

    MKW_GUEST_ENTER(0x80132280u);
    goto loc_80132280;

loc_80132280:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8011E750u>(ctx);
    r5 = ctx->gpr[5];
    ctx->gpr[5] = r5;
    return ctx->gpr[4];
}

}

extern "C" void func_80132280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80132280_ra38_6_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80132280 func_80132280 preserves=true fpr_mask=0x00000000
