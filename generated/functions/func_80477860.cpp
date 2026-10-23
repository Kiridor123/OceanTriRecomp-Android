#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80477860_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    double leaf_stack_saved_f31_entry = 0.0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80477860;

loc_80477860:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f31.d = PPC_Mffs();
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f31.d);
    f31.d = leaf_stack_saved_f31_entry;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->fpr[31] = f31;
    return r3;
}

}

extern "C" void func_80477860(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80477860_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000000A gpr_return=0x00000008 fpr_read=0x80000000 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80477860 func_80477860 preserves=true fpr_mask=0x00000000
