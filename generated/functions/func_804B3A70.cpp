#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804B3A70_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_subfc_sub_0 = 0;
    uint32_t r5_subfc_sub_1 = 0;
    uint32_t r5_subfc_sub_2 = 0;
    uint32_t r5_subfc_sub_3 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_not_2 = 0;
    uint32_t r6_not_3 = 0;
    uint32_t r6_not_4 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r7_ca_3 = 0;
    uint32_t r7_not_0 = 0;
    uint32_t r7_not_1 = 0;
    uint32_t r7_not_2 = 0;
    uint32_t r7_not_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t mkw_fifo_burst_0[32];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804B3A70u);
    goto loc_804B3A70;

loc_804B3A70:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_804B3A7C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804B3B60;
    }
}

loc_804B3A88:
{
    r0 = MemoryInline::FlatRead32((r13 + -15416));
}

loc_804B3A90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B3ADC;
    }
}

loc_804B3A94:
{
    r5 = MemoryInline::FlatRead32((r13 + -15436));
    r4 = MemoryInline::FlatRead16((r5 + 78));
    // nop
}

loc_804B3AA0:
{
    r0 = r4;
    r3 = MemoryInline::FlatRead16((r5 + 80));
    r4 = MemoryInline::FlatRead16((r5 + 78));
}

loc_804B3AB0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804B3AA0;
    }
}

loc_804B3AB4:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r0 = (r0 | r3);
    MemoryInline::FlatWrite32((r13 + -15432), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    MemoryInline::FlatWrite32((r13 + -15424), r3);
    r0 = 1;
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -15420), r4);
    MemoryInline::FlatWrite32((r13 + -15416), r0);
    goto loc_804B3BCC;
}

loc_804B3ADC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r5 = MemoryInline::FlatRead32((r13 + -15436));
    r7 = MemoryInline::FlatRead16((r5 + 78));
}

loc_804B3AE8:
{
    r0 = r7;
    r10 = MemoryInline::FlatRead16((r5 + 80));
    r7 = MemoryInline::FlatRead16((r5 + 78));
}

loc_804B3AF8:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_804B3AE8;
    }
}

loc_804B3AFC:
{
    r5 = MemoryInline::FlatRead32((r13 + -15420));
    r0 = 0;
    r6 = MemoryInline::FlatRead32((r13 + -15424));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r9 = (r9_rot_1 & -65536);
    r8 = (r4 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r5 = 10;
    r7_not_1 = ~(r6);
    r7_ca_1 = (xer >> 29) & 1u;
    r7 = (r7_not_1 + r3);
    r7 = (r7 + r7_ca_1);
    r6 = (r0 ^ -2147483648);
    r5_subfc_sub_1 = r5;
    r5 = (r8 - r5_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r5_subfc_sub_1) ? 1u : 0u) << 29);
    r0 = (r7 ^ -2147483648);
    r6_not_1 = ~(r6);
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r6_not_1 + r0);
    r6 = (r6 + r6_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (r9 | r10);
    r6_not_2 = ~(r0);
    r6_ca_2 = (xer >> 29) & 1u;
    r6 = (r6_not_2 + r0);
    r6 = (r6 + r6_ca_2);
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804B3B40;
    }
}

loc_804B3B38:
{
    r3 = 0;
    goto loc_804B3BCC;
}

loc_804B3B40:
{
    r0 = MemoryInline::FlatRead32((r13 + -15432));
}

loc_804B3B48:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_804B3BC8;
    }
}

loc_804B3B4C:
{
    MemoryInline::FlatWrite32((r13 + -15424), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -15432), r5);
    MemoryInline::FlatWrite32((r13 + -15420), r4);
    goto loc_804B3BCC;
}

loc_804B3B60:
{
    r3 = 0;
    ctx->lr = 0x804B3B68u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x804B5250u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    xer = ctx->xer;
    r3 = 0;
    ctx->lr = 0x804B3B70u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x804B6A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    xer = ctx->xer;
    r3 = 0;
    ctx->lr = 0x804B3B78u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x804B6B30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    xer = ctx->xer;
    r3 = -872349696;
    r31 = 0;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_0[20] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[21] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[22] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[23] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_0[24] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[25] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[26] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[27] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_0[28] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[29] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[30] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[31] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 32u);
    // inline leaf 0x804777D0 (2 guest instruction(s))
    OSSystemCall();
    // end of inlined leaf 0x804777D0
    r4 = MemoryInline::FlatRead32((r13 + -15444));
    r5 = 3;
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = 1;
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r31));
    r4 = MemoryInline::FlatRead32((r13 + -15444));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r3 + 1530), static_cast<uint8_t>(r0));
    ctx->lr = 0x804B3BC8u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x804B64B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    xer = ctx->xer;
}

loc_804B3BC8:
{
    r3 = 1;
}

loc_804B3BCC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B3A70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B3A70_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B3A70 func_804B3A70 preserves=true fpr_mask=0x00000000
