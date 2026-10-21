#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804681B0_ra38_2_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x804681B0u);
    goto loc_804681B0;

loc_804681B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = 0;
    r0 = 2146435072;
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32(r3, r4);
    r4 = (r5 & 2147483647);
    r6 = MemoryInline::FlatRead32((r1 + 12));
}

loc_804681D4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80468230;
    }
}

loc_804681D8:
{
    r0 = (r4 | r6);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804681E4;
    }
}

loc_804681E0:
{
    goto loc_80468230;
}

loc_804681E4:
{
    r0 = 1048576;
}

loc_804681EC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8046820C;
    }
}

loc_804681F0:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2984));
    r0 = -54;
    MemoryInline::FlatWrite32(r3, r0);
    f1.d = (f1.d * f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r5 & 2147483647);
}

loc_8046820C:
{
    r0 = (r5 & -2146435073);
    r5 = MemoryInline::FlatRead32(r3);
    r4 = (static_cast<int32_t>(r4) >> 20);
    r0 = (r0 | 1071644672);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r4 + r5);
    r0 = (r4 + -1022);
    MemoryInline::FlatWrite32(r3, r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
}

loc_80468230:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return r4;
}

}

extern "C" void func_804681B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804681B0_ra38_2_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804681B0 func_804681B0 preserves=true fpr_mask=0x00000000
