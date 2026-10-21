#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8530(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mdest_3 = 0;
    uint32_t r10_mdest_4 = 0;
    uint32_t r10_mdest_5 = 0;
    uint32_t r10_mdest_6 = 0;
    uint32_t r10_mdest_7 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_mrot_3 = 0;
    uint32_t r10_mrot_4 = 0;
    uint32_t r10_mrot_5 = 0;
    uint32_t r10_mrot_6 = 0;
    uint32_t r10_mrot_7 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];

    MKW_GUEST_ENTER(0x804B8530u);
    goto loc_804B8530;

loc_804B8530:
{
}

loc_804B8534:
{
    r10 = 0;
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r10_mrot_0 = (r10_rot_0 & 2);
    r10_mdest_0 = (r10 & -3);
    r10 = (r10_mdest_0 | r10_mrot_0);
    r11 = (r3 & 3);
    r10_mrot_1 = (r6 & 1);
    r10_mdest_1 = (r10 & -2);
    r10 = (r10_mdest_1 | r10_mrot_1);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(6));
    r10_mrot_2 = (r10_rot_1 & 64);
    r10_mdest_2 = (r10 & -65);
    r10 = (r10_mdest_2 | r10_mrot_2);
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_804B8550;
    }
}

loc_804B854C:
{
    r8 = 0;
}

loc_804B8550:
{
    r5 = (2 - r9);
    r4 = (r9 + -2);
    r4 = (r5 | r4);
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = (0 - r9);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(7));
    r10_mrot_3 = (r10_rot_2 & 384);
    r10_mdest_3 = (r10 & -385);
    r10 = (r10_mdest_3 | r10_mrot_3);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r10_mrot_4 = (r10_rot_3 & 512);
    r10_mdest_4 = (r10 & -513);
    r10 = (r10_mdest_4 | r10_mrot_4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r0 = (r0 | r9);
}

loc_804B8578:
{
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r10_mrot_5 = (r10_rot_4 & 1024);
    r10_mdest_5 = (r10 & -1025);
    r10 = (r10_mdest_5 | r10_mrot_5);
    r4 = (r5 + r4);
    r10_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r10_mrot_6 = (r10_rot_5 & 60);
    r10_mdest_6 = (r10 & -61);
    r10 = (r10_mdest_6 | r10_mrot_6);
    r0 = 4096;
    r10_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(7));
    r10_mrot_7 = (r10_rot_6 & 30720);
    r10_mdest_7 = (r10 & -30721);
    r10 = (r10_mdest_7 | r10_mrot_7);
    MemoryInline::FlatWrite32((r4 + 184), r10);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r11));
    r4 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r5 + 1532), r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_804B85B8;
    }
}

loc_804B85A4:
{
    MemoryInline::FlatWrite32((r5 + 192), r10);
    r0 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = (r0 | 20480);
    MemoryInline::FlatWrite32((r5 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

loc_804B85B8:
{
}

loc_804B85BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_return;
    }
}

loc_804B85C0:
{
    MemoryInline::FlatWrite32((r5 + 196), r10);
    r0 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = (r0 | 40960);
    MemoryInline::FlatWrite32((r5 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFD gpr_write=0x00000D31 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B8530 func_804B8530 preserves=true fpr_mask=0x00000000
