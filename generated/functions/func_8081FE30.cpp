#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081FE30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

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

    goto loc_8081FE30;

loc_8081FE30:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r8 = 0;
    r9 = 0;
    r10 = 0;
    r11 = MemoryInline::FlatRead32((r4 + 8));
    r7 = 0;
    r6 = r11;
    goto loc_8081FEA4;
}

loc_8081FE50:
{
}

loc_8081FE54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(34))) {
        goto loc_8081FE9C;
    }
}

loc_8081FE58:
{
}

loc_8081FE5C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8081FE98;
    }
}

loc_8081FE60:
{
    r4 = (r9 * 24);
    r5 = (r8 + 1);
    r0 = (r7 + r3);
    r9 = (r9 + 1);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    r10 = 1;
    r4 = (r4 + r0);
}

loc_8081FE80:
{
    r0 = (r11 + r5);
    MemoryInline::FlatWrite32((r4 + 188), r0);
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(10))) {
        goto loc_8081FE9C;
    }
}

loc_8081FE8C:
{
    r9 = 0;
    r7 = (r7 + 4);
    goto loc_8081FE9C;
}

loc_8081FE98:
{
    r10 = 0;
}

loc_8081FE9C:
{
    r6 = (r6 + 2);
    r8 = (r8 + 1);
}

loc_8081FEA4:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_8081FEAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081FE50;
    }
}

loc_8081FEB0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081FE30 func_8081FE30 preserves=true fpr_mask=0x00000000
