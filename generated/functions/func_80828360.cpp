#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80828360(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80828360;

loc_80828360:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80828368:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8082837C;
    }
}

loc_8082836C:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80828390;
}

loc_8082837C:
{
}

loc_80828380:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80828390;
    }
}

loc_80828384:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80828390:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80828398:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_808283A8;
    }
}

loc_8082839C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_808283A8:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_808283B0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_return;
    }
}

loc_808283B4:
{
    MemoryInline::FlatWrite32(r3, r4);
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
// RECOMP_REGISTRATION base 0x80828360 func_80828360 preserves=true fpr_mask=0x00000000
