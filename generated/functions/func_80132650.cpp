#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80132650_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80132650;

loc_80132650:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 2342), static_cast<uint16_t>(r0));
    r4 = 2;
    // inline leaf 0x801322F4 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite8((r3 + 2382), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead8((r3 + 2383));
    r0 = ~(r4 | r4);
    r0 = (r0 & 255);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite8((r3 + 2383), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801322F4
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 2340), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_80132650(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80132650_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80132650 func_80132650 preserves=true fpr_mask=0x00000000
