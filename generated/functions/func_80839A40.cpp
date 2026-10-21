#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80839A40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x80839A40u);
    goto loc_80839A40;

loc_80839A40:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80839A48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80839A4C:
{
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r3 + 4);
    r6 = 0;
    MemoryInline::FlatWrite32(r3, r6);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    goto loc_80839A9C;
}

loc_80839A68:
{
    r0 = MemoryInline::FlatRead32(r8);
    MemoryInline::FlatWrite32(r8, r6);
    MemoryInline::FlatWrite32((r8 + 4), r6);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r8, r4);
    MemoryInline::FlatWrite32((r8 + 4), r7);
    MemoryInline::FlatWrite32((r4 + 4), r8);
    MemoryInline::FlatWrite32(r7, r8);
    r8 = r0;
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80839A9C:
{
}

loc_80839AA0:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r5))) {
        goto loc_80839A68;
    }
}

loc_80839AA4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001D9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80839A40 func_80839A40 preserves=true fpr_mask=0x00000000
