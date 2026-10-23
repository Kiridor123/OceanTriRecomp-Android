#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8005001C_ra18_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_8005001C;

loc_8005001C:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return f1.d;
}

}

extern "C" void func_8005001C(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8005001C_ra18_0_0_2(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005001C func_8005001C preserves=true fpr_mask=0x00000000
