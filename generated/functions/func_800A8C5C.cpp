#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8C5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x800A8C5Cu);
    goto loc_800A8C5C;

loc_800A8C5C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x800A8C88 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r0 + r3);
    r3 = (r3 + 8);
    // end of inlined leaf 0x800A8C88
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 + r3);
    r3 = (r3 + 4);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A8C5C func_800A8C5C preserves=true fpr_mask=0x00000000
