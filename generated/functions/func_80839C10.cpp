#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80839C10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_80839C10;

loc_80839C10:
{
}

loc_80839C14:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80839C88;
    }
}

loc_80839C18:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80839C20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80839C50;
    }
}

loc_80839C24:
{
    r4 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_80839C50:
{
    r6 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r6_addr_0 = (r6 + r5);
    MemoryInline::FlatWrite32(r6_addr_0, r4);
    r6 = r6_addr_0;
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_80839C88:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80839C90:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80839CFC;
    }
}

loc_80839C94:
{
}

loc_80839C98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80839CC8;
    }
}

loc_80839C9C:
{
    r4 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_80839CC8:
{
    r4 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r4_addr_0 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_0, r0);
    r4 = r4_addr_0;
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_1, r5);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_80839CFC:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_2 = (r4 + r0);
    r6 = MemoryInline::FlatRead32(r4_addr_2);
    r7 = (r5 + r0);
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_0, r6);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite32((r7 + 4), r4);
    MemoryInline::FlatWrite32((r6 + 4), r5);
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_3 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_3, r5);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x000000D1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80839C10 func_80839C10 preserves=true fpr_mask=0x00000000
