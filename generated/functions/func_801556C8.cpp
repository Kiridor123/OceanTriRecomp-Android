#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801556C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x801556C8u);
    goto loc_801556C8;

loc_801556C8:
{
    r4 = MemoryInline::FlatRead16((r3 + 828));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 828), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_801556DC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(50))) {
        goto loc_801556E8;
    }
}

loc_801556E0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 828), static_cast<uint16_t>(r0));
}

loc_801556E8:
{
    r4 = MemoryInline::FlatRead16((r3 + 824));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801556F0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801556F4:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 824), static_cast<uint16_t>(r0));
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
// RECOMP_REGISTRATION base 0x801556C8 func_801556C8 preserves=true fpr_mask=0x00000000
