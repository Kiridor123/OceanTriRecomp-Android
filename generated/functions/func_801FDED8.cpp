#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FDED8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_801FDED8;

loc_801FDED8:
{
    r4 = MemoryInline::FlatRead16((r3 + 484));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801FDEE0:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(0))) {
        goto loc_801FDEF8;
    }
}

loc_801FDEE4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 484), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 553), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 552), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_801FDEF8:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 484), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r3 + 44));
    r0 = MemoryInline::FlatRead32((r3 + 488));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FDED8 func_801FDED8 preserves=true fpr_mask=0x00000000
