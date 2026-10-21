#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EBAAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800EBAACu);
    goto loc_800EBAAC;

loc_800EBAAC:
{
    r7 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 1;
    ctr = r0;
}

loc_800EBAC0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_800EBAFC;
    }
}

loc_800EBAC4:
{
    r6 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r7));
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r5 & r6);
}

loc_800EBAD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800EBAF4;
    }
}

loc_800EBAD8:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r5 | r6);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

loc_800EBAF4:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800EBAC4;
    }
}

loc_800EBAFC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EBAAC func_800EBAAC preserves=true fpr_mask=0x00000000
