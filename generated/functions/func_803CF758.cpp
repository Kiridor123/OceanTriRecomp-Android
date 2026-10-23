#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_803CF758_ra30_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_803CF758;

loc_803CF758:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    MemoryInline::FlatWrite32((r13 + -21752), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5064));
    r0 = (r5 ^ -2147483648);
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5072));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r13 + -21756), f0.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return f1.d;
}

}

extern "C" void func_803CF758(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_803CF758_ra30_0_0_2(ctx, ctx->gpr[4], ctx->gpr[5]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002036 gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CF758 func_803CF758 preserves=true fpr_mask=0x00000000
