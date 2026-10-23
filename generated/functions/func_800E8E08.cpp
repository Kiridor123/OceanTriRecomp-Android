#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800E8E08_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    goto loc_800E8E08;

loc_800E8E08:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r13 + -17436);
    // inline leaf 0x800E8EA0 (3 guest instruction(s))
    r0 = 127;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800E8EA0
    r3 = (r13 + -17436);
    r4 = 0x800F0000u;
    r4 = (r4 + -29116);
    r5 = 0x806A0000u;
    r5 = (r5 + -20640);
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E8E08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E8E08_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E8E08 func_800E8E08 preserves=true fpr_mask=0x00000000
