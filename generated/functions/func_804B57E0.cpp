#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B57E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_addr_4 = 0;
    uint32_t r12_addr_5 = 0;
    uint32_t r12_addr_6 = 0;
    uint32_t r12_addr_7 = 0;
    uint32_t r12_addr_8 = 0;
    uint32_t r12_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804B57E0;

loc_804B57E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_804B57F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B5900;
    }
}

loc_804B57F8:
{
    r9 = MemoryInline::FlatRead32((r3 + 20));
    r7 = (r13 + -20416);
    r5 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r9 & 1);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(31));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(23));
    r8 = (r8_rot_1 & 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(30));
    r4 = (r4_rot_2 & 1);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(21));
    r5 = (r5_rot_1 & 3);
    r0 = (r0 + r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(1));
}

loc_804B5824:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r4 = (r4_rot_3 & 1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r6 = (r6_rot_1 & 1);
    r0 = (r0 + r4);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r8 = (r8_rot_2 & 1);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r4 = (r4_rot_4 & 1);
    r31 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r0 + r4);
    r7_addr_1 = (r7 + r5);
    r5 = MemoryInline::FlatRead8(r7_addr_1);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r4 = (r4_rot_5 & 1);
    r0 = (r0 + r4);
    r0 = (r0 + r6);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(25));
    r6 = (r6_rot_2 & 1);
    r0 = (r0 + r6);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(23));
    r4 = (r4_rot_6 & 3);
    r7_addr_2 = (r7 + r4);
    r6 = MemoryInline::FlatRead8(r7_addr_2);
    r0 = (r0 + r8);
    r4 = 1;
    r0 = (r0 + r6);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804B5874;
    }
}

loc_804B5870:
{
    r4 = 3;
}

loc_804B5874:
{
    r8 = (r5 * r4);
    r7 = (r13 + -20424);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(19));
    r4 = (r4_rot_7 & 3);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(17));
    r5 = (r5_rot_2 & 3);
    r7_addr_3 = (r7 + r4);
    r6 = MemoryInline::FlatRead8(r7_addr_3);
    r7_addr_4 = (r7 + r5);
    r5 = MemoryInline::FlatRead8(r7_addr_4);
    r0 = (r0 + r8);
    r12 = (r13 + -20420);
    r0 = (r0 + r6);
    r4 = (r31 & 3);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(30));
    r10 = (r10_rot_1 & 3);
    r12_addr_1 = (r12 + r4);
    r11 = MemoryInline::FlatRead8(r12_addr_1);
    r0 = (r0 + r5);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(28));
    r9 = (r9_rot_1 & 3);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(26));
    r8 = (r8_rot_3 & 3);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(24));
    r7 = (r7_rot_1 & 3);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(22));
    r6 = (r6_rot_3 & 3);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(20));
    r5 = (r5_rot_3 & 3);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(18));
    r4 = (r4_rot_8 & 3);
    r12_addr_2 = (r12 + r10);
    r10 = MemoryInline::FlatRead8(r12_addr_2);
    r0 = (r0 + r11);
    r12_addr_3 = (r12 + r9);
    r9 = MemoryInline::FlatRead8(r12_addr_3);
    r0 = (r0 + r10);
    r12_addr_4 = (r12 + r8);
    r8 = MemoryInline::FlatRead8(r12_addr_4);
    r0 = (r0 + r9);
    r12_addr_5 = (r12 + r7);
    r7 = MemoryInline::FlatRead8(r12_addr_5);
    r0 = (r0 + r8);
    r12_addr_6 = (r12 + r6);
    r6 = MemoryInline::FlatRead8(r12_addr_6);
    r0 = (r0 + r7);
    r12_addr_7 = (r12 + r5);
    r5 = MemoryInline::FlatRead8(r12_addr_7);
    r0 = (r0 + r6);
    r12_addr_8 = (r12 + r4);
    r4 = MemoryInline::FlatRead8(r12_addr_8);
    r0 = (r0 + r5);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
}

loc_804B5900:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B57E0 func_804B57E0 preserves=true fpr_mask=0x00000000
