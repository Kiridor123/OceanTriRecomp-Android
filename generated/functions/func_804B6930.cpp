#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B6930(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mdest_4 = 0;
    uint32_t r9_mdest_5 = 0;
    uint32_t r9_mdest_6 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_mrot_4 = 0;
    uint32_t r9_mrot_5 = 0;
    uint32_t r9_mrot_6 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804B6930u);
    goto loc_804B6930;

loc_804B6930:
{
    r7 = MemoryHw::FlatRead32((r13 + -15440));
}

loc_804B6938:
{
    r0 = 0;
    r9 = MemoryHw::FlatRead16((r7 + 2));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_804B694C;
    }
}

loc_804B6944:
{
}

loc_804B6948:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_804B6950;
    }
}

loc_804B694C:
{
    r0 = 1;
}

loc_804B6950:
{
    r7 = (r3 + -3);
    r9_mrot_0 = (r0 & 1);
    r9_mdest_0 = (r9 & -2);
    r9 = (r9_mdest_0 | r9_mrot_0);
    r0 = (r3 + -2);
    r3 = MemoryHw::FlatRead32((r13 + -15440));
    r8 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r7 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = 65;
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(6));
    r9_mrot_1 = (r9_rot_0 & 2048);
    r9_mdest_1 = (r9 & -2049);
    r9 = (r9_mdest_1 | r9_mrot_1);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(28));
    r9_mrot_2 = (r9_rot_1 & 2);
    r9_mdest_2 = (r9 & -3);
    r9 = (r9_mdest_2 | r9_mrot_2);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r9_mrot_3 = (r9_rot_2 & 61440);
    r9_mdest_3 = (r9 & -61441);
    r9 = (r9_mdest_3 | r9_mrot_3);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r9_mrot_4 = (r9_rot_3 & 1792);
    r9_mdest_4 = (r9 & -1793);
    r9 = (r9_mdest_4 | r9_mrot_4);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r9_mrot_5 = (r9_rot_4 & 224);
    r9_mdest_5 = (r9 & -225);
    r9 = (r9_mdest_5 | r9_mrot_5);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r9_mrot_6 = (r9_rot_5 & -16777216);
    r9_mdest_6 = (r9 & 16777215);
    r9 = (r9_mdest_6 | r9_mrot_6);
    MemoryHw::FlatWrite16((r3 + 2), static_cast<uint16_t>(r9));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000022F9 gpr_write=0x00000389 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B6930 func_804B6930 preserves=true fpr_mask=0x00000000
