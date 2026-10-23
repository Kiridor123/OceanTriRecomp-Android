#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8055CAA8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_8055CAA8;

loc_8055CAA8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1;
    r31 = r3;
    MemoryInline::FlatWrite8((r3 + 137), static_cast<uint8_t>(r0));
    r3 = (r3 + 120);
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
    r3 = MemoryInline::FlatRead32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -924));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f0.d);
    r0 = MemoryInline::FlatRead8((r31 + 104));
    MemoryInline::FlatWriteFloat32((r31 + 92), f0.d);
    r0 = (r0 | 32);
    MemoryInline::FlatWriteFloat32((r31 + 96), f0.d);
    MemoryInline::FlatWrite8((r31 + 104), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return r3;
}

}

extern "C" void func_8055CAA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8055CAA8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055CAA8 func_8055CAA8 preserves=true fpr_mask=0x00000000
