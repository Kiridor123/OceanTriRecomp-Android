#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80080C68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80080C68;

loc_80080C68:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 252));
}

loc_80080C88:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80080CA8;
    }
}

loc_80080C8C:
{
    r0 = MemoryInline::FlatRead16((r3 + 258));
    r3 = (r0 * 48);
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r0 = MemoryInline::FlatRead8((r30 + 257));
    r0 = (r0 * r3);
    r3 = (r31 + r0);
    goto loc_80080CAC;
}

loc_80080CA8:
{
    r3 = 0;
}

loc_80080CAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80080C68 func_80080C68 preserves=true fpr_mask=0x00000000
