#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800A9724_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x800A9724u);
    goto loc_800A9724;

loc_800A9724:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 138), static_cast<uint8_t>(r0));
    // inline leaf 0x800A9764 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r0 & 65535);
    // end of inlined leaf 0x800A9764
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r13 + -17664));
}

loc_800A9748:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_800A9754;
    }
}

loc_800A974C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r13 + -17664), r0);
}

loc_800A9754:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_800A9724(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800A9724_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A9724 func_800A9724 preserves=true fpr_mask=0x00000000
