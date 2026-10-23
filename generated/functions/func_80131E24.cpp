#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80131E24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80131E24;

loc_80131E24:
{
    r0 = MemoryInline::FlatRead8((r3 + 488));
}

loc_80131E2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_80131E30:
{
    r0 = MemoryInline::FlatRead8((r3 + 489));
}

loc_80131E38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80131E40;
    }
}

loc_80131E3C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80131E40:
{
    r4 = MemoryInline::FlatRead16((r3 + 2072));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80131E48:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80131E4C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 2072), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80131E24 func_80131E24 preserves=true fpr_mask=0x00000000
