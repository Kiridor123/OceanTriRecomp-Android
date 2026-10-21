#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CBFE8_ra8_2_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    double leaf_stack_saved_f31_entry = 0.0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x803CBFE8u);
    goto loc_803CBFE8;

loc_803CBFE8:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    f31.d = f1.d;
    // inline leaf 0x803CA4F0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r13 + -21788), f1.d);
    // end of inlined leaf 0x803CA4F0
    MemoryInline::FlatWriteFloat32((r31 + 8648), f31.d);
    f31.d = leaf_stack_saved_f31_entry;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[31] = f31;
    return;
}

}

extern "C" void func_803CBFE8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803CBFE8_ra8_2_0_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200A gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x80000002 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CBFE8 func_803CBFE8 preserves=true fpr_mask=0x00000000
