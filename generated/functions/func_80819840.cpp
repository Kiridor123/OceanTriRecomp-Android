#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80819840(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80819840;

loc_80819840:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r3;
    r6 = 0x80860000u;
    r5 = MemoryInline::FlatRead32((r6 + 21252));
}

loc_8081985C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(64))) {
        goto loc_80819868;
    }
}

loc_80819860:
{
    r3 = -1;
    goto loc_8081988C;
}

loc_80819868:
{
    r3 = 0;
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r6 + 21252), r0);
    r6 = (r5 * 12);
    r5 = 0x80840000u;
    r0 = (r5 + 18936);
    r5 = (r0 + r6);
    // inline leaf 0x808197D0 (7 guest instruction(s))
    r6 = 0x80860000u;
    r0 = MemoryInline::FlatRead32((r6 + 21248));
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 21248), r5);
    // end of inlined leaf 0x808197D0
    r3 = 0;
}

loc_8081988C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80819840 func_80819840 preserves=true fpr_mask=0x00000000
