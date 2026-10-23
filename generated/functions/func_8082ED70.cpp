#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082ED70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_8082ED70;

loc_8082ED70:
{
    r5 = (r4 + -16);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
}

loc_8082ED7C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(15))) {
        goto loc_8082EE88;
    }
}

loc_8082ED80:
{
    r0 = (r4 + -4);
}

loc_8082ED88:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(11))) {
        goto loc_8082EE20;
    }
}

loc_8082ED8C:
{
}

loc_8082ED90:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(3))) {
        goto loc_8082EEE4;
    }
}

loc_8082ED94:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
}

loc_8082EDA0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8082EEE4;
    }
}

loc_8082EDA4:
{
    r5 = MemoryInline::FlatRead32((r3 + 76));
    r7 = (r4 & 3);
}

loc_8082EDAC:
{
    r6 = MemoryInline::FlatRead32((r3 + 88));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 15);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r4 = (r4_rot_0 & 60);
    r3 = (r0 * 20);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(9));
    r0 = (r0_rot_3 & 480);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(26));
    r5 = (r5_rot_0 & 4);
    r0 = (r4 + r0);
    r3 = (r5 + r3);
    r0 = (r6 + r0);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8082EDF8;
    }
}

loc_8082EDDC:
{
}

loc_8082EDE0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(1))) {
        goto loc_8082EE00;
    }
}

loc_8082EDE4:
{
}

loc_8082EDE8:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(2))) {
        goto loc_8082EE08;
    }
}

loc_8082EDEC:
{
}

loc_8082EDF0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(3))) {
        goto loc_8082EE10;
    }
}

loc_8082EDF4:
{
    goto loc_8082EE18;
}

loc_8082EDF8:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    goto loc_8082EEE8;
}

loc_8082EE00:
{
    r3 = MemoryInline::FlatRead8((r1 + 13));
    goto loc_8082EEE8;
}

loc_8082EE08:
{
    r3 = MemoryInline::FlatRead8((r1 + 14));
    goto loc_8082EEE8;
}

loc_8082EE10:
{
    r3 = MemoryInline::FlatRead8((r1 + 15));
    goto loc_8082EEE8;
}

loc_8082EE18:
{
    r3 = 255;
    goto loc_8082EEE8;
}

loc_8082EE20:
{
    r4 = (r0 & 3);
}

loc_8082EE24:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & 1073741823);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8082EE48;
    }
}

loc_8082EE2C:
{
}

loc_8082EE30:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_8082EE58;
    }
}

loc_8082EE34:
{
}

loc_8082EE38:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_8082EE68;
    }
}

loc_8082EE3C:
{
}

loc_8082EE40:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(3))) {
        goto loc_8082EE78;
    }
}

loc_8082EE44:
{
    goto loc_8082EEE4;
}

loc_8082EE48:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 36));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    goto loc_8082EEE8;
}

loc_8082EE58:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 38));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    goto loc_8082EEE8;
}

loc_8082EE68:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 40));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    goto loc_8082EEE8;
}

loc_8082EE78:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 42));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    goto loc_8082EEE8;
}

loc_8082EE88:
{
    r0 = (r5 & -4);
    r4 = (r5 & 3);
}

loc_8082EE90:
{
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8082EEBC;
    }
}

loc_8082EEA0:
{
}

loc_8082EEA4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_8082EEC4;
    }
}

loc_8082EEA8:
{
}

loc_8082EEAC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_8082EECC;
    }
}

loc_8082EEB0:
{
}

loc_8082EEB4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(3))) {
        goto loc_8082EED4;
    }
}

loc_8082EEB8:
{
    goto loc_8082EEDC;
}

loc_8082EEBC:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
    goto loc_8082EEE8;
}

loc_8082EEC4:
{
    r3 = MemoryInline::FlatRead8((r1 + 9));
    goto loc_8082EEE8;
}

loc_8082EECC:
{
    r3 = MemoryInline::FlatRead8((r1 + 10));
    goto loc_8082EEE8;
}

loc_8082EED4:
{
    r3 = MemoryInline::FlatRead8((r1 + 11));
    goto loc_8082EEE8;
}

loc_8082EEDC:
{
    r3 = 255;
    goto loc_8082EEE8;
}

loc_8082EEE4:
{
    r3 = 255;
}

loc_8082EEE8:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082ED70 func_8082ED70 preserves=true fpr_mask=0x00000000
