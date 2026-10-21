#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B85E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804B85E0u);
    goto loc_804B85E0;

loc_804B85E0:
{
}

loc_804B85E4:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(60))) {
        goto loc_804B8624;
    }
}

loc_804B85E8:
{
    r9 = 0x80620000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r9 = (r9 + -19536);
    r9_addr_1 = (r9 + r0);
    r9 = MemoryInline::FlatRead32(r9_addr_1);
    ctr = r9;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804B8600u:
        goto loc_804B8600;
        break;
    case 0x804B860Cu:
        goto loc_804B860C;
        break;
    case 0x804B8618u:
        goto loc_804B8618;
        break;
    case 0x804B8624u:
        goto loc_804B8624;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_804B8600:
{
    r11 = 3;
    r12 = 3;
    goto loc_804B862C;
}

loc_804B860C:
{
    r11 = 3;
    r12 = 2;
    goto loc_804B862C;
}

loc_804B8618:
{
    r11 = 2;
    r12 = 2;
    goto loc_804B862C;
}

loc_804B8624:
{
    r12 = 0;
    r11 = 0;
}

loc_804B862C:
{
}

loc_804B8630:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804B8638;
    }
}

loc_804B8634:
{
    r4 = 1;
}

loc_804B8638:
{
}

loc_804B863C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804B8644;
    }
}

loc_804B8640:
{
    r5 = 1;
}

loc_804B8644:
{
    r10 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_804B864C:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r11));
    r9 = 0;
    r4 = (r4 + r0);
    r0 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r12));
    r4 = (r4 + -1);
    r10 = PPC_Sraw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r11));
    MemoryInline::FlatWrite32(r6, r10);
    r4 = (r5 + r0);
    r0 = (r4 + -1);
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r12));
    MemoryInline::FlatWrite32(r7, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B8684;
    }
}

loc_804B867C:
{
}

loc_804B8680:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(22))) {
        goto loc_804B8688;
    }
}

loc_804B8684:
{
    r9 = 1;
}

loc_804B8688:
{
    r0 = (0 - r9);
    r0 = (r0 | r9);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r8, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001E39 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B85E0 func_804B85E0 preserves=true fpr_mask=0x00000000
