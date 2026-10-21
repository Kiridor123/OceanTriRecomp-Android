#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D3F20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x809D3F20u);
    goto loc_809D3F20;

loc_809D3F20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r3;
    r6 = 0x80A70000u;
    r5 = MemoryInline::FlatRead32((r6 + 19812));
}

loc_809D3F3C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(64))) {
        goto loc_809D3F48;
    }
}

loc_809D3F40:
{
    r3 = -1;
    goto loc_809D3F6C;
}

loc_809D3F48:
{
    r3 = 0;
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r6 + 19812), r0);
    r6 = (r5 * 12);
    r5 = 0x80A20000u;
    r0 = (r5 + -5336);
    r5 = (r0 + r6);
    // inline leaf 0x809D3EB0 (7 guest instruction(s))
    r6 = 0x80A70000u;
    r0 = MemoryInline::FlatRead32((r6 + 19808));
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19808), r5);
    // end of inlined leaf 0x809D3EB0
    r3 = 0;
}

loc_809D3F6C:
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
// RECOMP_REGISTRATION base 0x809D3F20 func_809D3F20 preserves=true fpr_mask=0x00000000
