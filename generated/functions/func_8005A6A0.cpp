#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8005A6A0_ra0_2_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    uint32_t r2 = ctx->gpr[2];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_8005A6A0;

loc_8005A6A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32184));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8050151Cu>(ctx);
    f1 = ctx->fpr[1];
    ctx->fpr[0] = f0;
    return f1.d;
}

}

extern "C" void func_8005A6A0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8005A6A0_ra0_2_0_2(ctx, ctx->fpr[1].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000006 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005A6A0 func_8005A6A0 preserves=true fpr_mask=0x00000000
