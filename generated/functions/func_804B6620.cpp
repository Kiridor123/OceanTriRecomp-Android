#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B6620(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_not_5 = 0;
    uint32_t r0_not_6 = 0;
    uint32_t r0_not_7 = 0;
    uint32_t r0_not_8 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_10 = 0;
    uint32_t r3_ca_11 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_ca_8 = 0;
    uint32_t r3_ca_9 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_10 = 0;
    uint32_t r3_not_11 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_not_6 = 0;
    uint32_t r3_not_7 = 0;
    uint32_t r3_not_8 = 0;
    uint32_t r3_not_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r4_subfc_min_1 = 0;
    uint32_t r4_subfc_min_2 = 0;
    uint32_t r4_subfc_min_3 = 0;
    uint32_t r4_subfc_min_4 = 0;
    uint32_t r4_subfc_min_5 = 0;
    uint32_t r4_subfc_min_6 = 0;
    uint32_t r4_subfc_min_7 = 0;
    uint32_t r4_subfc_min_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t mkw_fifo_burst_0[32];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804B6620u);
    goto loc_804B6620;

loc_804B6620:
{
    guest_range_0 = MemoryHw::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryHw::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryHw::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = MemoryHw::FlatRead32((r2 + -2480));
    r0 = MemoryHw::FlatRead8((r31 + 1530));
}

loc_804B6640:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B66E0;
    }
}

loc_804B6644:
{
    ctx->lr = 0x804B6648u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804B5240u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_804B664C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B66E0;
    }
}

loc_804B6650:
{
    r5 = MemoryHw::FlatRead32((r13 + -15436));
    r3 = MemoryHw::FlatRead16((r5 + 78));
}

loc_804B6658:
{
    r0 = r3;
    r4 = MemoryHw::FlatRead16((r5 + 80));
    r3 = MemoryHw::FlatRead16((r5 + 78));
}

loc_804B6668:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804B6658;
    }
}

loc_804B666C:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & -65536);
    r0 = 0;
    r26 = (r3 | r4);
    r28 = 8;
    r27 = (r0 ^ -2147483648);
}

loc_804B6680:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r30 = r4;
    r29 = r3;
}

loc_804B668C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4_subfc_min_3 = r4;
    r4 = (r4_subfc_min_3 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_3) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    r0_not_3 = ~(r29);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r3);
    r0 = (r0 + r0_ca_3);
    r3 = (r0 ^ -2147483648);
    r0 = (r28 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_3 = ~(r3);
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r3_not_3 + r27);
    r3 = (r3 + r3_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r27)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_4 = ~(r27);
    r3_ca_4 = (xer >> 29) & 1u;
    r3 = (r3_not_4 + r27);
    r3 = (r3 + r3_ca_4);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B668C;
    }
}

loc_804B66B0:
{
    r5 = MemoryHw::FlatRead32((r13 + -15436));
    r4 = MemoryHw::FlatRead16((r5 + 78));
}

loc_804B66B8:
{
    r0 = r4;
    r3 = MemoryHw::FlatRead16((r5 + 80));
    r4 = MemoryHw::FlatRead16((r5 + 78));
}

loc_804B66C8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804B66B8;
    }
}

loc_804B66CC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r0 = (r0 | r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_804B66D8:
{
    r26 = r0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804B6680;
    }
}

loc_804B66E0:
{
    r3 = -872415232;
    r0 = 1;
    MemoryHw::FlatWrite32((r3 + 12312), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = 0;
    r30 = r4;
    r29 = r3;
    r28 = 50;
    r27 = (r0 ^ -2147483648);
}

loc_804B6704:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4_subfc_min_6 = r4;
    r4 = (r4_subfc_min_6 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_6) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    r0_not_6 = ~(r29);
    r0_ca_6 = (xer >> 29) & 1u;
    r0 = (r0_not_6 + r3);
    r0 = (r0 + r0_ca_6);
    r3 = (r0 ^ -2147483648);
    r0 = (r28 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_7 = ~(r3);
    r3_ca_7 = (xer >> 29) & 1u;
    r3 = (r3_not_7 + r27);
    r3 = (r3 + r3_ca_7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_7)) + static_cast<uint64_t>(static_cast<uint32_t>(r27)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_7)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_8 = ~(r27);
    r3_ca_8 = (xer >> 29) & 1u;
    r3 = (r3_not_8 + r27);
    r3 = (r3 + r3_ca_8);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B6704;
    }
}

loc_804B6728:
{
    r3 = -872415232;
    r29 = 0;
    MemoryHw::FlatWrite32((r3 + 12312), r29);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r30 = (r29 ^ -2147483648);
    r27 = r4;
    r28 = r3;
    r29 = 5;
}

loc_804B6748:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4_subfc_min_8 = r4;
    r4 = (r4_subfc_min_8 - r27);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_8) >= static_cast<uint32_t>(r27) ? 1u : 0u) << 29);
    r0_not_8 = ~(r28);
    r0_ca_8 = (xer >> 29) & 1u;
    r0 = (r0_not_8 + r3);
    r0 = (r0 + r0_ca_8);
    r3 = (r0 ^ -2147483648);
    r0 = (r29 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_10 = ~(r3);
    r3_ca_10 = (xer >> 29) & 1u;
    r3 = (r3_not_10 + r30);
    r3 = (r3 + r3_ca_10);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_10)) + static_cast<uint64_t>(static_cast<uint32_t>(r30)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_10)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_11 = ~(r30);
    r3_ca_11 = (xer >> 29) & 1u;
    r3 = (r3_not_11 + r30);
    r3 = (r3 + r3_ca_11);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804B6748;
    }
}

loc_804B676C:
{
    ctx->lr = 0x804B6770u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804B5240u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_804B6774:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B67BC;
    }
}

loc_804B6778:
{
    ctx->lr = 0x804B677Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804B5320u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x804B6780u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804B3BE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryHw::FlatWrite32((r31 + 1532), r0);
}

loc_804B6790:
{
    r3 = -872349696;
    r0 = 0;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[20] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[21] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[22] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[23] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[24] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[25] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[26] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[27] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[28] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[29] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[30] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[31] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 32u);
    // inline leaf 0x804777D0 (2 guest instruction(s))
    OSSystemCall();
    // end of inlined leaf 0x804777D0
}

loc_804B67BC:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B6620 func_804B6620 preserves=true fpr_mask=0x00000000
