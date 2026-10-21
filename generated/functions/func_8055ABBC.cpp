#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8055ABBC_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x8055ABBCu);
    goto loc_8055ABBC;

loc_8055ABBC:
{
}

loc_8055ABC0:
{
    MemoryInline::FlatWrite8((r3 + 156), static_cast<uint8_t>(r4));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8055ABD0;
    }
}

loc_8055ABC8:
{
    r3 = (r3 + 136);
    // inline leaf 0x8055FE84 (9 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r2 + -896));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -892));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -888));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -884));
    MemoryInline::FlatWriteFloat32(r3, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x8055FE84
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return r3;
}

loc_8055ABD0:
{
    r3 = (r3 + 136);
    // inline leaf 0x8055FEA8 (9 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r2 + -880));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -876));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -888));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -884));
    MemoryInline::FlatWriteFloat32(r3, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x8055FEA8
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return r3;
}

}

extern "C" void func_8055ABBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8055ABBC_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055ABBC func_8055ABBC preserves=true fpr_mask=0x00000000
