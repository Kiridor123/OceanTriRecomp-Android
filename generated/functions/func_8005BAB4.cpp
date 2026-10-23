#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8005BAB4_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    ctx->gpr[3] = arg_r3;
    ctx->gpr[5] = arg_r5;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;

    goto loc_8005BAB4;

loc_8005BAB4:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8005BAC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_8005BAC4:
{
    InvokeDirectCpu<0x8005C040u>(ctx);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | ctx->gpr[3];
}

loc_return:
{
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | ctx->gpr[3];
}

}

extern "C" void func_8005BAB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005BAB4_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x2000200A gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005BAB4 func_8005BAB4 preserves=true fpr_mask=0x00000000
