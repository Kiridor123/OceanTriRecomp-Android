#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804F8730_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_rot_7 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_12 = 0;
    uint32_t r8_rot_13 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_804F8730;

loc_804F8730:
{
    MemoryAlias::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r8 = 0x80760000u;
}

loc_804F873C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r8 = (r8 + -10352);
    r7 = 0;
    r8_addr_0 = (r8 + r0);
    r0 = MemoryAlias::FlatRead32(r8_addr_0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804F89E8;
    }
}

loc_804F8760:
{
}

loc_804F8764:
{
    r3 = (r5 + 65536);
    r3 = (r3 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_804F8990;
    }
}

loc_804F8770:
{
    r8 = (r3 & 65535);
    r3 = (r8 + 7);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r3 = (r3_rot_1 & 536870911);
    ctr = r3;
}

loc_804F8784:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(0))) {
        goto loc_804F8990;
    }
}

loc_804F8788:
{
    r29 = (r7 & 65535);
    r3 = (r7 + 1);
    r11 = (r6 + r29);
    r8 = (r7 + 2);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r10 = (r10_rot_2 & -536870912);
    r9 = (r3 & 65535);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r12 = (r12_rot_2 & 1);
    r3 = (r4 + r29);
    r10 = (r10 - r12);
    r11 = (r6 + r9);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r10 = (r10_rot_3 & -1);
    r9 = (r8 & 65535);
    r10 = (r10 + r12);
    r8 = (r7 + 3);
    r12 = (r10 & 255);
    r31 = MemoryAlias::FlatRead8(r3);
    r29 = (r0 + r12);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r10 = (r10_rot_4 & -536870912);
    r30 = MemoryAlias::FlatRead8((r29 + 2348));
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r12 = (r12_rot_3 & 1);
    r10 = (r10 - r12);
    r29 = MemoryAlias::FlatRead8((r29 + 2340));
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r11 = (r11_rot_2 & -1);
    r30 = (r31 ^ r30);
    r10 = (r6 + r9);
    r8 = (r8 & 65535);
    r9 = (r11 + r12);
    r11 = (r29 + r30);
    MemoryAlias::FlatWrite8(r3, static_cast<uint8_t>(r11));
    r11 = (r9 & 255);
    r29 = (r0 + r11);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r9 = (r9_rot_2 & -536870912);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r11 = (r11_rot_3 & 1);
    r30 = MemoryAlias::FlatRead8((r3 + 1));
    r10 = (r9 - r11);
    r9 = (r6 + r8);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r8 = (r8_rot_2 & -1);
    r12 = MemoryAlias::FlatRead8((r29 + 2348));
    r10 = (r8 + r11);
    r31 = MemoryAlias::FlatRead8((r29 + 2340));
    r8 = (r7 + 4);
    r11 = (r30 ^ r12);
    r28 = (r10 & 255);
    r8 = (r8 & 65535);
    r10 = (r6 + r8);
    r29 = (r0 + r28);
    r8 = (r31 + r11);
    MemoryAlias::FlatWrite8((r3 + 1), static_cast<uint8_t>(r8));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r8 = (r8_rot_3 & -536870912);
    r11_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r11 = (r11_rot_4 & 1);
    r9 = (r8 - r11);
    r30 = MemoryAlias::FlatRead8((r3 + 2));
    r8 = (r7 + 5);
    r12 = MemoryAlias::FlatRead8((r29 + 2348));
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r9 = (r9_rot_3 & -1);
    r9 = (r9 + r11);
    r8 = (r8 & 65535);
    r31 = (r9 & 255);
    r11 = MemoryAlias::FlatRead8((r29 + 2340));
    r9 = (r6 + r8);
    r8 = (r30 ^ r12);
    r8 = (r11 + r8);
    MemoryAlias::FlatWrite8((r3 + 2), static_cast<uint8_t>(r8));
    r29 = (r0 + r31);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r8 = (r8_rot_4 & -536870912);
    r10_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r10 = (r10_rot_5 & 1);
    r8 = (r8 - r10);
    r12 = MemoryAlias::FlatRead8((r3 + 3));
    r11 = MemoryAlias::FlatRead8((r29 + 2348));
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r8 = (r8_rot_5 & -1);
    r10 = (r8 + r10);
    r30 = MemoryAlias::FlatRead8((r29 + 2340));
    r11 = (r12 ^ r11);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r8 = (r8_rot_6 & -536870912);
    r11 = (r30 + r11);
    MemoryAlias::FlatWrite8((r3 + 3), static_cast<uint8_t>(r11));
    r10 = (r10 & 255);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_4 & 1);
    r12 = (r0 + r10);
    r11 = MemoryAlias::FlatRead8((r3 + 4));
    r10 = MemoryAlias::FlatRead8((r12 + 2348));
    r8 = (r8 - r9);
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r8 = (r8_rot_7 & -1);
    r12 = MemoryAlias::FlatRead8((r12 + 2340));
    r10 = (r11 ^ r10);
    r10 = (r12 + r10);
    r8 = (r8 + r9);
    MemoryAlias::FlatWrite8((r3 + 4), static_cast<uint8_t>(r10));
    r9 = (r8 & 255);
    r8 = (r7 + 6);
    r29 = (r0 + r9);
    r9 = (r8 & 65535);
    r31 = MemoryAlias::FlatRead8((r3 + 5));
    r10 = (r6 + r9);
    r8 = (r7 + 7);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r9 = (r9_rot_5 & -536870912);
    r12 = MemoryAlias::FlatRead8((r29 + 2348));
    r11_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r11 = (r11_rot_5 & 1);
    r8 = (r8 & 65535);
    r9 = (r9 - r11);
    r30 = MemoryAlias::FlatRead8((r29 + 2340));
    r10_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r10 = (r10_rot_6 & -1);
    r12 = (r31 ^ r12);
    r9 = (r6 + r8);
    r7 = (r7 + 8);
    r8 = (r10 + r11);
    r10 = (r30 + r12);
    MemoryAlias::FlatWrite8((r3 + 5), static_cast<uint8_t>(r10));
    r10 = (r8 & 255);
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r8 = (r8_rot_8 & -536870912);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_6 & 1);
    r12 = (r0 + r10);
    r11 = MemoryAlias::FlatRead8((r3 + 6));
    r8 = (r8 - r9);
    r10 = MemoryAlias::FlatRead8((r12 + 2348));
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r8 = (r8_rot_9 & -1);
    r12 = MemoryAlias::FlatRead8((r12 + 2340));
    r8 = (r8 + r9);
    r9 = (r11 ^ r10);
    r9 = (r12 + r9);
    MemoryAlias::FlatWrite8((r3 + 6), static_cast<uint8_t>(r9));
    r8 = (r8 & 255);
    r10 = (r0 + r8);
    r9 = MemoryAlias::FlatRead8((r3 + 7));
    r8 = MemoryAlias::FlatRead8((r10 + 2348));
    r10 = MemoryAlias::FlatRead8((r10 + 2340));
    r8 = (r9 ^ r8);
    r8 = (r10 + r8);
    MemoryAlias::FlatWrite8((r3 + 7), static_cast<uint8_t>(r8));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F8788;
    }
}

loc_804F8990:
{
    r8 = (r7 & 65535);
    r3 = (r5 - r8);
    ctr = r3;
}

loc_804F89A0:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r5))) {
        goto loc_804F89E8;
    }
}

loc_804F89A4:
{
    r9 = (r7 & 65535);
    r7 = (r7 + 1);
    r8 = (r6 + r9);
    r4_addr_2 = (r4 + r9);
    r5 = MemoryAlias::FlatRead8(r4_addr_2);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r3 = (r3_rot_4 & -536870912);
    r8_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_12 & 1);
    r3 = (r3 - r8);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_5 & -1);
    r3 = (r3 + r8);
    r3 = (r3 & 255);
    r8 = (r0 + r3);
    r3 = MemoryAlias::FlatRead8((r8 + 2348));
    r8 = MemoryAlias::FlatRead8((r8 + 2340));
    r3 = (r5 ^ r3);
    r3 = (r8 + r3);
    r4_addr_3 = (r4 + r9);
    MemoryAlias::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F89A4;
    }
}

loc_804F89E8:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_804F8730(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804F8730_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FAB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804F8730 func_804F8730 preserves=true fpr_mask=0x00000000
