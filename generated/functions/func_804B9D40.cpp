#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B9D40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804B9D40;

loc_804B9D40:
{
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804B9D44:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -4);
    r3 = (r5 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B9D64;
    }
}

loc_804B9D54:
{
    r0 = MemoryInline::FlatRead32((r3 + 512));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(19));
    r0_mrot_0 = (r0_rot_1 & 16252928);
    r0_mdest_0 = (r0 & -16252929);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r3 + 512), r0);
    goto loc_804B9D70;
}

loc_804B9D64:
{
    r0 = MemoryInline::FlatRead32((r3 + 512));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0_mrot_1 = (r0_rot_2 & 15872);
    r0_mdest_1 = (r0 & -15873);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r3 + 512), r0);
}

loc_804B9D70:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 512));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B9D40 func_804B9D40 preserves=true fpr_mask=0x00000000
