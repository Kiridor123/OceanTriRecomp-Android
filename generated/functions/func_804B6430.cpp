#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B6430(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804B6430;

loc_804B6430:
{
}

loc_804B6434:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_804B644C;
    }
}

loc_804B6438:
{
}

loc_804B643C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_804B6480;
    }
}

loc_804B6440:
{
}

loc_804B6444:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_804B6498;
    }
}

loc_804B6448:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_804B644C:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = (r4 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804B6454:
{
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r4));
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = 1;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 65535);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_804B6470:
{
    r0 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r5 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_804B6480:
{
    r0 = (0 - r4);
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = (r0 | r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8((r3 + 1529), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_804B6498:
{
    r0 = (0 - r4);
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = (r0 | r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r3 + 1530), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B6430 func_804B6430 preserves=true fpr_mask=0x00000000
