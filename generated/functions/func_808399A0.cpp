#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808399A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x808399A0u);
    goto loc_808399A0;

loc_808399A0:
{
    r7 = MemoryInline::FlatRead32(r4);
    r0 = 0;
    r8 = MemoryInline::FlatRead32(r5);
    goto loc_808399D8;
}

loc_808399B0:
{
    r6 = MemoryInline::FlatRead32(r7);
    r4 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r6 + 4), r4);
    MemoryInline::FlatWrite32(r4, r6);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = (r4 + -1);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32(r7, r0);
    MemoryInline::FlatWrite32((r7 + 4), r0);
    r7 = r6;
}

loc_808399D8:
{
}

loc_808399DC:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r8))) {
        goto loc_808399B0;
    }
}

loc_808399E0:
{
    r3 = MemoryInline::FlatRead32(r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000001D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808399A0 func_808399A0 preserves=true fpr_mask=0x00000000
