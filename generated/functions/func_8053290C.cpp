#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053290C_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;

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

    MKW_GUEST_ENTER(0x8053290Cu);
    goto loc_8053290C;

loc_8053290C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
}

loc_80532914:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805329B4;
    }
}

loc_80532920:
{
    r11 = MemoryInline::FlatRead32((r3 + 56));
    r5 = 0;
    r31 = MemoryInline::FlatRead32((r3 + 60));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r6 = (r6_rot_1 & 15);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 15);
    r6 = (r6 * 20);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(27));
    r8 = (r8_rot_1 & 4);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(26));
    r7 = (r7_rot_1 & 4);
    r12 = MemoryInline::FlatRead32((r3 + 64));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(28));
    r10 = (r10_rot_1 & 4);
    r0 = (r0 * 28);
    r8 = (r8 + r7);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(20));
    r9 = (r9_rot_1 & 4);
    r0 = (r6 + r0);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(14));
    r7 = (r7_rot_2 & 60);
    r6 = (r10 + r8);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r8 = (r8_rot_2 & 4);
    r7 = (r9 + r7);
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(17));
    r30 = (r30_rot_1 & 7);
    r6 = (r7 + r6);
    r0 = (r12 + r0);
    r6 = (r8 + r6);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(19));
    r7 = (r7_rot_3 & 28);
    r6 = (r6 + r0);
    r0 = (r4 - r30);
    r6 = (r7 + r6);
    ctr = r0;
}

loc_80532990:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r4))) {
        goto loc_805329B4;
    }
}

loc_80532994:
{
}

loc_80532998:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805329AC;
    }
}

loc_8053299C:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r5));
}

loc_805329AC:
{
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80532994;
    }
}

loc_805329B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(15));
    r0_mrot_0 = (r0_rot_3 & 229376);
    r0_mdest_0 = (r0 & -229377);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r3 + 60), r0);
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
    return;
}

}

extern "C" void func_8053290C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8053290C_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8053290C func_8053290C preserves=true fpr_mask=0x00000000
