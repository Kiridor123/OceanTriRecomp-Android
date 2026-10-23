#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8034027C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8034027C;

loc_8034027C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r6 = (r0 & 65535);
    MemoryInline::FlatWrite32(r4, r6);
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r6 - r0);
    r6 = (r0 & 65535);
    r4 = 65536;
    r0 = (r4 + -32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_803402A0:
{
    r0 = r6;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_803402B0;
    }
}

loc_803402A8:
{
    r0 = (0 - r6);
    r0 = (r0 & 65535);
}

loc_803402B0:
{
}

loc_803402B4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_803402BC;
    }
}

loc_803402B8:
{
    r5 = r0;
}

loc_803402BC:
{
    r4 = 65536;
    r0 = (r4 + -32768);
}

loc_803402C8:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_803402DC;
    }
}

loc_803402CC:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 - r5);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_803402E8;
}

loc_803402DC:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 + r5);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_803402E8:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034027C func_8034027C preserves=true fpr_mask=0x00000000
