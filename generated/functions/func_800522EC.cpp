#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_800522EC_ra0_fe_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7)
{
    uint32_t r2 = ctx->gpr[2];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];

    MKW_GUEST_ENTER(0x800522ECu);
    goto loc_800522EC;

loc_800522EC:
{
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32448));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f6.d = PpcFmulsInline(f3.d, f3.d);
    f9.d = PpcFmulsInline(f8.d, f8.d);
    f10.d = PpcFmulsInline(f9.d, f3.d);
    f0.d = PpcFmulsInline(f9.d, f8.d);
    f11.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32436));
    f0.d = PpcFmulsInline(f0.d, f11.d);
    f12.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32432));
    f0.d = PpcFmulsInline(f0.d, f9.d);
    f9.d = PpcFmulsInline(f0.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f10.d));
    f6.d = PpcFmulsInline(f7.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f10.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    f3.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f9.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = (-(f12.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f9.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    ctx->fpr[0] = f0;
    ctx->fpr[3] = f3;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    return f1.d;
}

}

extern "C" void func_800522EC(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_800522EC_ra0_fe_0_2(ctx, ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x000000FE fpr_write=0x00001F4B fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800522EC func_800522EC preserves=true fpr_mask=0x00000000
