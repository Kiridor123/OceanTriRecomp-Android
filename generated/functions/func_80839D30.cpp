#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80839D30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80839D30;

loc_80839D30:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r6 = (r4 + r0);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
}

loc_80839D40:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80839D50;
    }
}

loc_80839D44:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80839D5C;
}

loc_80839D50:
{
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
}

loc_80839D5C:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
}

loc_80839D64:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80839D74;
    }
}

loc_80839D68:
{
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80839D80;
}

loc_80839D74:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4 = MemoryInline::FlatRead32(r6);
    r5_addr_1 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_1, r4);
}

loc_80839D80:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r6, r0);
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80839D30 func_80839D30 preserves=true fpr_mask=0x00000000
