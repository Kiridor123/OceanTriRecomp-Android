#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8008749C_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x8008749Cu);
    goto loc_8008749C;

loc_8008749C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x800874FC (1 guest instruction(s))
    // end of inlined leaf 0x800874FC
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r3 = r31;
    // inline leaf 0x800874FC (1 guest instruction(s))
    // end of inlined leaf 0x800874FC
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    r3 = (r1 + 8);
    // inline leaf 0x800874FC (1 guest instruction(s))
    // end of inlined leaf 0x800874FC
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_8008749C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8008749C_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008749C func_8008749C preserves=true fpr_mask=0x00000000
