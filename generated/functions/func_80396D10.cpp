#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80396D10_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80396D10;

loc_80396D10:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r10 = 0;
    r7 = r3;
    r8 = 0;
    r4 = 0x805F0000u;
    r6 = 1;
    r0 = 8;
}

loc_80396D30:
{
    r11 = 0;
    ctr = r0;
}

loc_80396D38:
{
    r9 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r11));
    r5 = MemoryInline::FlatRead32((r7 + 12260));
    r5 = (r9 & r5);
}

loc_80396D48:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80396D94;
    }
}

loc_80396D4C:
{
    r5 = (r11 + r8);
    r12 = (r5 & 255);
    r31 = (r4 + 7360);
    goto loc_80396D88;
}

loc_80396D5C:
{
}

loc_80396D60:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r12))) {
        goto loc_80396D84;
    }
}

loc_80396D64:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 12260));
    r0 = ~(r9 | r9);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32((r4 + 12260), r0);
    r3 = MemoryInline::FlatRead8((r31 + 1));
    goto loc_80396F2C;
}

loc_80396D84:
{
    r31 = (r31 + 2);
}

loc_80396D88:
{
    r5 = MemoryInline::FlatRead8(r31);
}

loc_80396D90:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80396D5C;
    }
}

loc_80396D94:
{
    r11 = (r11 + 1);
    r9 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r11));
    r5 = MemoryInline::FlatRead32((r7 + 12260));
    r5 = (r9 & r5);
}

loc_80396DA8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80396DF4;
    }
}

loc_80396DAC:
{
    r5 = (r11 + r8);
    r12 = (r5 & 255);
    r31 = (r4 + 7360);
    goto loc_80396DE8;
}

loc_80396DBC:
{
}

loc_80396DC0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r12))) {
        goto loc_80396DE4;
    }
}

loc_80396DC4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 12260));
    r0 = ~(r9 | r9);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32((r4 + 12260), r0);
    r3 = MemoryInline::FlatRead8((r31 + 1));
    goto loc_80396F2C;
}

loc_80396DE4:
{
    r31 = (r31 + 2);
}

loc_80396DE8:
{
    r5 = MemoryInline::FlatRead8(r31);
}

loc_80396DF0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80396DBC;
    }
}

loc_80396DF4:
{
    r11 = (r11 + 1);
    r9 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r11));
    r5 = MemoryInline::FlatRead32((r7 + 12260));
    r5 = (r9 & r5);
}

loc_80396E08:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80396E54;
    }
}

loc_80396E0C:
{
    r5 = (r11 + r8);
    r12 = (r5 & 255);
    r31 = (r4 + 7360);
    goto loc_80396E48;
}

loc_80396E1C:
{
}

loc_80396E20:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r12))) {
        goto loc_80396E44;
    }
}

loc_80396E24:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 12260));
    r0 = ~(r9 | r9);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32((r4 + 12260), r0);
    r3 = MemoryInline::FlatRead8((r31 + 1));
    goto loc_80396F2C;
}

loc_80396E44:
{
    r31 = (r31 + 2);
}

loc_80396E48:
{
    r5 = MemoryInline::FlatRead8(r31);
}

loc_80396E50:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80396E1C;
    }
}

loc_80396E54:
{
    r11 = (r11 + 1);
    r9 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r11));
    r5 = MemoryInline::FlatRead32((r7 + 12260));
    r5 = (r9 & r5);
}

loc_80396E68:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80396EB4;
    }
}

loc_80396E6C:
{
    r5 = (r11 + r8);
    r12 = (r5 & 255);
    r31 = (r4 + 7360);
    goto loc_80396EA8;
}

loc_80396E7C:
{
}

loc_80396E80:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r12))) {
        goto loc_80396EA4;
    }
}

loc_80396E84:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 12260));
    r0 = ~(r9 | r9);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32((r4 + 12260), r0);
    r3 = MemoryInline::FlatRead8((r31 + 1));
    goto loc_80396F2C;
}

loc_80396EA4:
{
    r31 = (r31 + 2);
}

loc_80396EA8:
{
    r5 = MemoryInline::FlatRead8(r31);
}

loc_80396EB0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80396E7C;
    }
}

loc_80396EB4:
{
    r11 = (r11 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80396D38;
    }
}

loc_80396EBC:
{
    r7 = (r7 + 4);
    r8 = (r8 + 32);
    r10 = (r10 + 1);
}

loc_80396ECC:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(2))) {
        goto loc_80396D30;
    }
}

loc_80396ED0:
{
    r4 = 0x805F0000u;
    r7 = (r4 + 7444);
    r5 = 1;
    goto loc_80396F1C;
}

loc_80396EE0:
{
    r4 = MemoryInline::FlatRead16((r7 + 2));
    r0 = (r4 + -9000);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r6 = (r0 & 65535);
    r4 = MemoryInline::FlatRead16((r3 + 12268));
    r0 = (r4 & r6);
}

loc_80396EFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80396F18;
    }
}

loc_80396F00:
{
    r0 = ~(r6 | r6);
    r0 = (r0 & 65535);
    r0 = (r4 & r0);
    MemoryInline::FlatWrite16((r3 + 12268), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r7 + 4));
    goto loc_80396F2C;
}

loc_80396F18:
{
    r7 = (r7 + 6);
}

loc_80396F1C:
{
    r0 = MemoryInline::FlatRead16(r7);
}

loc_80396F24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80396EE0;
    }
}

loc_80396F28:
{
    r3 = 255;
}

loc_80396F2C:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80396D10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80396D10_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80396D10 func_80396D10 preserves=true fpr_mask=0x00000000
