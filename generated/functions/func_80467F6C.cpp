#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80467F6C_ra0_6_8_0(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;

    goto loc_80467F6C;

loc_80467F6C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f2.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 & -2147483648);
    r0_mrot_0 = (r3 & 2147483647);
    r0_mdest_0 = (r0 & -2147483648);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_80467F6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80467F6C_ra0_6_8_0(ctx, ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000006 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80467F6C func_80467F6C preserves=true fpr_mask=0x00000000
