#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804E8440_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r9_rot_0 = 0;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804E8440;

loc_804E8440:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r11 = 0x80760000u;
    r11 = (r11 + -10560);
    r12 = MemoryInline::FlatRead32((r1 + 24));
    r11 = MemoryInline::FlatRead32((r11 + 36));
    r0 = (r11 + -2);
}

loc_804E8464:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_804E8474;
    }
}

loc_804E8468:
{
    r11 = 1;
    r30 = 2;
    goto loc_804E847C;
}

loc_804E8474:
{
    r11 = 2;
    r30 = 1;
}

loc_804E847C:
{
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r31 = (r31_rot_0 & 1);
    r0 = (r3 & 1);
    r0 = (r0 ^ r31);
    r0 = (r0 - r31);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E84C8;
    }
}

loc_804E8490:
{
    r0 = (r11 * r6);
    r0 = (r0 - r4);
    r0 = (r0 - r3);
    r31 = (r30 * r0);
    r3 = (r30 * r3);
    r6 = (r9 + r31);
    r6 = (r6 & 65535);
    r0 = (r7 + r3);
    r7 = (r10 + r31);
    r3 = (r8 + r3);
    r0 = (r0 & 65535);
    r7 = (r7 & 65535);
    r3 = (r3 & 65535);
    goto loc_804E84FC;
}

loc_804E84C8:
{
    r0 = (r11 * r6);
    r0 = (r0 - r4);
    r0 = (r0 - r3);
    r31 = (r30 * r0);
    r3 = (r30 * r3);
    r6 = (r10 + r31);
    r6 = (r6 & 65535);
    r0 = (r8 + r3);
    r3 = (r7 + r3);
    r7 = (r9 + r31);
    r0 = (r0 & 65535);
    r3 = (r3 & 65535);
    r7 = (r7 & 65535);
}

loc_804E84FC:
{
    r4 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r11));
}

loc_804E8504:
{
    r11 = (r4 & 65535);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804E8538;
    }
}

loc_804E850C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 131070);
    r6 = (r6 + 2);
    r8 = (r4 + -2);
    r11 = 0;
    r4 = (r7 + 2);
    r6 = (r6 & 65535);
    r0 = (r0 + r8);
    r3 = (r3 + r8);
    r7 = (r4 & 65535);
    r0 = (r0 & 65535);
    r3 = (r3 & 65535);
}

loc_804E8538:
{
    r8 = MemoryInline::FlatRead32((r13 + -14352));
    r4 = 0x80000000u;
    r9 = MemoryInline::FlatRead32((r13 + -14348));
    r10 = 0x80760000u;
    MemoryInline::FlatWrite32((r13 + -14348), r9);
    r4 = (r8 | r4);
    r8 = (r10 + -10680);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r9 = (r9_rot_0 & 1048560);
    MemoryInline::FlatWrite32((r13 + -14352), r4);
    r9 = (r5 | r9);
    r4 = MemoryInline::FlatRead32((r13 + -14352));
    r5 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWrite32((r13 + -14348), r5);
    r4 = (r4 | 16777216);
    MemoryInline::FlatWrite32((r13 + -14352), r4);
    r4 = MemoryInline::FlatRead32((r13 + -14352));
    r5 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWrite32((r13 + -14348), r5);
    r4 = (r4 | 33554432);
    MemoryInline::FlatWrite32((r13 + -14352), r4);
    r4 = MemoryInline::FlatRead32((r13 + -14352));
    r5 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWrite32((r13 + -14348), r5);
    r4 = (r4 | 4194304);
    MemoryInline::FlatWrite32((r13 + -14352), r4);
    r4 = MemoryInline::FlatRead32((r13 + -14352));
    r5 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWriteRam16((r10 + -10680), static_cast<uint16_t>(r9));
    r4 = (r4 | 8388608);
    MemoryInline::FlatWrite32((r13 + -14348), r5);
    MemoryInline::FlatWriteRam16((r8 + 14), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r8 + 12), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam16((r8 + 18), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam16((r8 + 16), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r13 + -14352), r4);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E8440(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E8440_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E8440 func_804E8440 preserves=true fpr_mask=0x00000000
