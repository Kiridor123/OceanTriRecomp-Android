#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80477880_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x80477880u);
    goto loc_80477880;

loc_80477880:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r4 = 0;
    stackword1 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    stackword2 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f31.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword2));
    PPC_Mtfsf(255, f31.d);
    f31.d = leaf_stack_saved_f31_entry;
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->fpr[31] = f31;
    return r4;
}

}

extern "C" void func_80477880(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80477880_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00000012 gpr_return=0x00000010 fpr_read=0x80000000 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80477880 func_80477880 preserves=true fpr_mask=0x00000000
