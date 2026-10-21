#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80827D00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80827D00u);
    goto loc_80827D00;

loc_80827D00:
{
    r6 = 0x80840000u;
    r0 = 37;
    r6 = (r6 + 17760);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80827D18:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_80827D20:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80827D30;
    }
}

loc_80827D24:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
}

loc_80827D2C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_return;
    }
}

loc_80827D30:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r3 = (r3 + 1);
}

loc_80827D3C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80827D4C;
    }
}

loc_80827D40:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80827D48:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_return;
    }
}

loc_80827D4C:
{
    r6 = (r6 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80827D18;
    }
}

loc_80827D58:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80827D00 func_80827D00 preserves=true fpr_mask=0x00000000
