#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501574(CpuContext* ctx);
extern "C" void func_80501574_ra38_e_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" double func_80075E30_ra38_e_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_80075E30;

loc_80075E30:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31908));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80501574u>(&func_80501574)) {
        ctx->fpr[0] = f0;
        func_80501574_ra38_e_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80501574u>(ctx);
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return f1.d;
}

}

extern "C" void func_80075E30(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80075E30_ra38_e_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003C gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x0000000E fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80075E30 func_80075E30 preserves=true fpr_mask=0x00000000
