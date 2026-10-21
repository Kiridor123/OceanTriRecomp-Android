#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80131EF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80131EF0u);
    goto loc_80131EF0;

loc_80131EF0:
{
    r0 = MemoryInline::FlatRead8((r3 + 488));
}

loc_80131EF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_80131EFC:
{
    r0 = MemoryInline::FlatRead8((r3 + 489));
}

loc_80131F04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80131F0C;
    }
}

loc_80131F08:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80131F0C:
{
    r4 = MemoryInline::FlatRead16((r3 + 2074));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80131F14:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80131F18:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 2074), static_cast<uint16_t>(r0));
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
// RECOMP_REGISTRATION base 0x80131EF0 func_80131EF0 preserves=true fpr_mask=0x00000000
