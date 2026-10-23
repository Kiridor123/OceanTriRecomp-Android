#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_802BB138_ra0_e_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t r2 = ctx->gpr[2];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_802BB138;

loc_802BB138:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->fpr[0] = f0;
    return f1.d;
}

}

extern "C" void func_802BB138(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_802BB138_ra0_e_0_2(ctx, ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000000E fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BB138 func_802BB138 preserves=true fpr_mask=0x00000000
