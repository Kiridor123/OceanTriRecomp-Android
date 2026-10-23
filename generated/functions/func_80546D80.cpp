#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80546D80_ra8_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];

    goto loc_80546D80;

loc_80546D80:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -1144));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f4.d = f2.d;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f7.d = f2.d;
    f5.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // inline leaf 0x8055FE34 (20 guest instruction(s))
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f0.d));
    f9.d = PpcFmulsInline(f1.d, f1.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f1.d));
    f0.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f1.d));
    f2.d = PpcFmulsInline(f4.d, f1.d);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = PpcFmulsInline(f7.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f4.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // end of inlined leaf 0x8055FE34
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    return f1.d;
}

}

extern "C" void func_80546D80(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80546D80_ra8_0_0_2(ctx, ctx->gpr[3]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80546D80 func_80546D80 preserves=true fpr_mask=0x00000000
