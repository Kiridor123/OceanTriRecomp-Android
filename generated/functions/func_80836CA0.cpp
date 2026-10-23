#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80836CA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80836CA0;

loc_80836CA0:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_80836CA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65279))) {
        goto loc_80836CF4;
    }
}

loc_80836CAC:
{
}

loc_80836CB0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80836CD4;
    }
}

loc_80836CB4:
{
    r0 = MemoryInline::FlatRead16((r3 + 14));
}

loc_80836CBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80836CC8;
    }
}

loc_80836CC0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

loc_80836CC8:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r6 = (r0 + r3);
    goto loc_80836CDC;
}

loc_80836CD4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r6 = (r0 + r4);
}

loc_80836CDC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 + r3);
}

loc_80836CE8:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_80836D6C;
    }
}

loc_80836CEC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

loc_80836CF4:
{
}

loc_80836CF8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80836D24;
    }
}

loc_80836CFC:
{
    r0 = MemoryInline::FlatRead16((r3 + 14));
}

loc_80836D04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80836D10;
    }
}

loc_80836D08:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

loc_80836D10:
{
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_2 & 65280);
    r0_mdest_1 = (r0 & -65281);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r6 = (r0 + r3);
    goto loc_80836D40;
}

loc_80836D24:
{
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r5 = (r5_rot_1 & 65280);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 16711680);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r5_mrot_1 = (r5_rot_2 & 255);
    r5_mdest_1 = (r5 & -256);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0_mrot_2 = (r0_rot_4 & -16777216);
    r0_mdest_2 = (r0 & 16777215);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r0 = (r5 | r0);
    r6 = (r0 + r4);
}

loc_80836D40:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & 65280);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & 16711680);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4_mrot_1 = (r4_rot_2 & 255);
    r4_mdest_1 = (r4 & -256);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0_mrot_4 = (r0_rot_7 & -16777216);
    r0_mdest_4 = (r0 & 16777215);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r0 = (r4 | r0);
    r0 = (r0 + r3);
}

loc_80836D60:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_80836D6C;
    }
}

loc_80836D64:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

loc_80836D6C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80836CA0 func_80836CA0 preserves=true fpr_mask=0x00000000
