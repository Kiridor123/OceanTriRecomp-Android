#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80469048_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r31_rot_6 = 0;
    uint32_t r31_rot_7 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80469048;

loc_80469048:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
}

loc_80469050:
{
    r9 = 255;
    r30 = r3;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80469174;
    }
}

loc_80469064:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
}

loc_80469068:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046911C;
    }
}

loc_80469070:
{
    r12 = (r30 & -4);
    r11 = (r4 & -4);
    r0 = (r30 - r12);
    r7 = MemoryInline::FlatRead32(r11);
    r10 = (3 - r0);
    r6 = (r4 - r11);
    r0 = (3 - r6);
    r4 = (r4 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r31 = (r31_rot_2 & -8);
    r0 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r11 = (r4 & -4);
    r0 = (r0 & 255);
    r8 = MemoryInline::FlatRead32(r12);
    r10 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r31));
    r6 = (r4 - r11);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
    r30 = (r30 + 1);
    r7 = (r8 & ~r10);
    r4 = (r4 + 1);
    r0 = (r10 & r0);
    r0 = (r7 | r0);
    MemoryInline::FlatWrite32(r12, r0);
    r12 = (r30 & -4);
    r0 = (r30 - r12);
    r7 = MemoryInline::FlatRead32(r11);
    r10 = (3 - r0);
    r8 = MemoryInline::FlatRead32(r12);
    r0 = (3 - r6);
    r30 = (r30 + 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r31_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r31 = (r31_rot_3 & -8);
    r0 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r10 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r31));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
    r7 = (r8 & ~r10);
    r0 = (r10 & r0);
    r0 = (r7 | r0);
    MemoryInline::FlatWrite32(r12, r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80469070;
    }
}

loc_80469114:
{
    r5 = (r5 & 1);
}

loc_80469118:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80469174;
    }
}

loc_8046911C:
{
    ctr = r5;
}

loc_80469120:
{
    r12 = (r30 & -4);
    r11 = (r4 & -4);
    r0 = (r30 - r12);
    r7 = MemoryInline::FlatRead32(r11);
    r10 = (3 - r0);
    r6 = (r4 - r11);
    r0 = (3 - r6);
    r8 = MemoryInline::FlatRead32(r12);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r31_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r31 = (r31_rot_6 & -8);
    r0 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r4 = (r4 + 1);
    r0 = (r0 & 255);
    r10 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r31));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
    r30 = (r30 + 1);
    r7 = (r8 & ~r10);
    r0 = (r10 & r0);
    r0 = (r7 | r0);
    MemoryInline::FlatWrite32(r12, r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80469120;
    }
}

loc_80469174:
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
    return r4;
}

}

extern "C" void func_80469048(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80469048_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80469048 func_80469048 preserves=true fpr_mask=0x00000000
