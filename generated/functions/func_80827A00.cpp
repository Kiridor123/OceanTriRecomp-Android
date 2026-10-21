#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80827A00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80827A00u);
    goto loc_80827A00;

loc_80827A00:
{
    r6 = 0x80840000u;
    r4 = 37;
    r6 = (r6 + 17760);
    r0 = 1;
    r5 = 0;
    ctr = r4;
}

loc_80827A18:
{
    r4 = MemoryInline::FlatRead32(r6);
}

loc_80827A20:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_80827A34;
    }
}

loc_80827A24:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
}

loc_80827A2C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80827A34;
    }
}

loc_80827A30:
{
    goto loc_80827A64;
}

loc_80827A34:
{
    r4 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r5 + 1);
}

loc_80827A40:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_80827A54;
    }
}

loc_80827A44:
{
    r4 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80827A4C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80827A54;
    }
}

loc_80827A50:
{
    goto loc_80827A64;
}

loc_80827A54:
{
    r6 = (r6 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80827A18;
    }
}

loc_80827A60:
{
    r5 = -1;
}

loc_80827A64:
{
    r7 = 0x80840000u;
    r4 = 37;
    r7 = (r7 + 17760);
    r6 = 0;
    ctr = r4;
}

loc_80827A78:
{
    r4 = MemoryInline::FlatRead32(r7);
}

loc_80827A80:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_80827A94;
    }
}

loc_80827A84:
{
    r4 = MemoryInline::FlatRead32((r7 + 4));
}

loc_80827A8C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_80827A94;
    }
}

loc_80827A90:
{
    goto loc_80827AC4;
}

loc_80827A94:
{
    r4 = MemoryInline::FlatRead32((r7 + 8));
    r6 = (r6 + 1);
}

loc_80827AA0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_80827AB4;
    }
}

loc_80827AA4:
{
    r4 = MemoryInline::FlatRead32((r7 + 12));
}

loc_80827AAC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_80827AB4;
    }
}

loc_80827AB0:
{
    goto loc_80827AC4;
}

loc_80827AB4:
{
    r7 = (r7 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80827A78;
    }
}

loc_80827AC0:
{
    r6 = -1;
}

loc_80827AC4:
{
    r8 = 0x80840000u;
    r4 = 37;
    r8 = (r8 + 17760);
    r7 = 0;
    ctr = r4;
}

loc_80827AD8:
{
    r4 = MemoryInline::FlatRead32(r8);
}

loc_80827AE0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_80827AF4;
    }
}

loc_80827AE4:
{
    r4 = MemoryInline::FlatRead32((r8 + 4));
}

loc_80827AEC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(19))) {
        goto loc_80827AF4;
    }
}

loc_80827AF0:
{
    goto loc_80827B24;
}

loc_80827AF4:
{
    r4 = MemoryInline::FlatRead32((r8 + 8));
    r7 = (r7 + 1);
}

loc_80827B00:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_80827B14;
    }
}

loc_80827B04:
{
    r4 = MemoryInline::FlatRead32((r8 + 12));
}

loc_80827B0C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(19))) {
        goto loc_80827B14;
    }
}

loc_80827B10:
{
    goto loc_80827B24;
}

loc_80827B14:
{
    r8 = (r8 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80827AD8;
    }
}

loc_80827B20:
{
    r7 = -1;
}

loc_80827B24:
{
    r9 = 0x80840000u;
    r4 = 37;
    r9 = (r9 + 17760);
    r8 = 0;
    ctr = r4;
}

loc_80827B38:
{
    r4 = MemoryInline::FlatRead32(r9);
}

loc_80827B40:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_80827B54;
    }
}

loc_80827B44:
{
    r4 = MemoryInline::FlatRead32((r9 + 4));
}

loc_80827B4C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(20))) {
        goto loc_80827B54;
    }
}

loc_80827B50:
{
    goto loc_80827B84;
}

loc_80827B54:
{
    r4 = MemoryInline::FlatRead32((r9 + 8));
    r8 = (r8 + 1);
}

loc_80827B60:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_80827B74;
    }
}

loc_80827B64:
{
    r4 = MemoryInline::FlatRead32((r9 + 12));
}

loc_80827B6C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(20))) {
        goto loc_80827B74;
    }
}

loc_80827B70:
{
    goto loc_80827B84;
}

loc_80827B74:
{
    r9 = (r9 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80827B38;
    }
}

loc_80827B80:
{
    r8 = -1;
}

loc_80827B84:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80827B8C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80827BF0;
    }
}

loc_80827B90:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r4 = (r3 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 752));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80827BA4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80827BF0;
    }
}

loc_80827BA8:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r4 = (r3 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 752));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80827BBC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80827BF0;
    }
}

loc_80827BC0:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r4 = (r3 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 752));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80827BD4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80827BF0;
    }
}

loc_80827BD8:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r3 = (r3 + r4);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80827BEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80827BF4;
    }
}

loc_80827BF0:
{
    r0 = 0;
}

loc_80827BF4:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80827A00 func_80827A00 preserves=true fpr_mask=0x00000000
