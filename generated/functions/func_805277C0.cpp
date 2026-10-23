#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_805277C0_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
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
    uint32_t ctr = ctx->ctr;

    goto loc_805277C0;

loc_805277C0:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_805277C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80527814;
    }
}

loc_805277CC:
{
    r6 = 0x80580000u;
    r0 = 107;
    r6 = (r6 + -26544);
    ctr = r0;
    // nop
}

loc_805277E0:
{
    r5 = MemoryInline::FlatRead8((r3 + 16));
    r0 = MemoryInline::FlatRead16(r6);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r3_addr_2 = (r3 + r4);
    r4 = MemoryInline::FlatRead16(r3_addr_2);
}

loc_805277F4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_805277F8:
{
    r6 = (r6 + 6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805277E0;
    }
}

loc_80527800:
{
    r4 = (r5 + 1);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
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

loc_80527814:
{
    r5 = 0x80580000u;
    r12 = 107;
    r5 = (r5 + -26544);
    r10 = 0;
    ctr = r12;
}

loc_80527828:
{
    r7 = MemoryInline::FlatRead8((r3 + 16));
    r8 = MemoryInline::FlatRead16(r5);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r3_addr_4 = (r3 + r6);
    r9 = MemoryInline::FlatRead16(r3_addr_4);
}

loc_8052783C:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r8))) {
        goto loc_80527888;
    }
}

loc_80527840:
{
    r4 = (r7 + 1);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & -2);
    r3_addr_5 = (r3 + r4);
    r4 = MemoryInline::FlatRead16(r3_addr_5);
}

loc_80527854:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80527888;
    }
}

loc_80527858:
{
    r4 = (r10 * 6);
    r5 = 0x80580000u;
    r0 = 0;
    r5 = (r5 + -26544);
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead16((r4 + 4));
    r3_addr_6 = (r3 + r6);
    MemoryInline::FlatWrite16(r3_addr_6, static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead8((r3 + 16));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
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

loc_80527888:
{
}

loc_8052788C:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r8))) {
        goto loc_805278A0;
    }
}

loc_80527890:
{
    r0 = MemoryInline::FlatRead16((r5 + 2));
}

loc_80527898:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r0))) {
        goto loc_805278A0;
    }
}

loc_8052789C:
{
    r11 = r10;
}

loc_805278A0:
{
    r0 = (r7 + 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3_addr_8 = (r3 + r0);
    r4 = MemoryInline::FlatRead16(r3_addr_8);
}

loc_805278B0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r8))) {
        goto loc_805278C4;
    }
}

loc_805278B4:
{
    r0 = MemoryInline::FlatRead16((r5 + 2));
}

loc_805278BC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_805278C4;
    }
}

loc_805278C0:
{
    r12 = r10;
}

loc_805278C4:
{
    r5 = (r5 + 6);
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80527828;
    }
}

loc_805278D0:
{
    r4 = (r11 * 6);
    r6 = 0x80580000u;
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_805278E0:
{
    r6 = (r6 + -26544);
    r4 = (r6 + r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4 = MemoryInline::FlatRead16((r4 + 4));
    r3_addr_9 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_9, static_cast<uint16_t>(r4));
    if ((static_cast<uint32_t>(r12) >= static_cast<uint32_t>(107))) {
        goto loc_80527914;
    }
}

loc_805278F8:
{
    r5 = (r12 * 6);
    r4 = MemoryInline::FlatRead8((r3 + 16));
    r0 = (r4 + 1);
    r4 = (r6 + r5);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = MemoryInline::FlatRead16((r4 + 4));
    r3_addr_10 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_10, static_cast<uint16_t>(r4));
}

loc_80527914:
{
    r4 = MemoryInline::FlatRead8((r3 + 16));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
    r0 = (r4 + 2);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
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

loc_return:
{
    ctx->gpr[0] = r0;
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

extern "C" void func_805277C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_805277C0_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805277C0 func_805277C0 preserves=true fpr_mask=0x00000000
