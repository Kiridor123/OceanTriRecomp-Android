#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B4DD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804B4DD0;

loc_804B4DD0:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
}

loc_804B4DF0:
{
    r30 = r3;
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_804B4E1C;
    }
}

loc_804B4DF8:
{
    r4 = 0x80750000u;
    r0 = 0;
    r4 = (r4 + -26748);
    MemoryHw::FlatWrite8((r13 + -15408), static_cast<uint8_t>(r0));
    MemoryHw::FlatWrite8((r13 + -15384), static_cast<uint8_t>(r0));
    MemoryHw::FlatWriteRam8((r4 + 34), static_cast<uint8_t>(r0));
    MemoryHw::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804B4F98;
}

loc_804B4E1C:
{
    r28 = 0x80750000u;
    r29 = 1;
    r31 = (r28 + -26748);
    guest_range_0 = MemoryHw::ResolveRangeHost(r27, 0, 36u, true, false);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 32u, (r27 + 32));
    guest_range_1 = MemoryHw::ResolveRangeHost(r31, 0, 36u, false, true);
    MemoryHw::WriteResolved32(guest_range_1, 32u, (r31 + 32), r0);
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryHw::ReadResolved32(guest_range_0, 0u, r27);
            r8 = MemoryHw::ReadResolved32(guest_range_0, 4u, (r27 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryHw::ReadResolved32(guest_range_0, 8u, (r27 + 8));
            r6 = MemoryHw::ReadResolved32(guest_range_0, 12u, (r27 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryHw::ReadResolved32(guest_range_0, 16u, (r27 + 16));
            r4 = MemoryHw::ReadResolved32(guest_range_0, 20u, (r27 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryHw::ReadResolved32(guest_range_0, 24u, (r27 + 24));
            r0 = MemoryHw::ReadResolved32(guest_range_0, 28u, (r27 + 28));
        }
    }
    if (!MemoryHw::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryHw::WriteResolved32(guest_range_1, 0u, r31, r9);
        MemoryHw::WriteResolved32(guest_range_1, 4u, (r31 + 4), r8);
    }
    if (!MemoryHw::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryHw::WriteResolved32(guest_range_1, 8u, (r31 + 8), r7);
        MemoryHw::WriteResolved32(guest_range_1, 12u, (r31 + 12), r6);
    }
    if (!MemoryHw::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryHw::WriteResolved32(guest_range_1, 16u, (r31 + 16), r5);
        MemoryHw::WriteResolved32(guest_range_1, 20u, (r31 + 20), r4);
    }
    if (!MemoryHw::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryHw::WriteResolved32(guest_range_1, 24u, (r31 + 24), r3);
        MemoryHw::WriteResolved32(guest_range_1, 28u, (r31 + 28), r0);
    }
    MemoryHw::FlatWrite8((r13 + -15408), static_cast<uint8_t>(r29));
    MemoryHw::WriteResolved8(guest_range_1, 33u, (r31 + 33), static_cast<uint8_t>(r29));
    ctx->lr = 0x804B4E7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x804B4CD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r0 = (r3 & 255);
}

loc_804B4E80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B4F08;
    }
}

loc_804B4E84:
{
    r4 = MemoryHw::FlatRead32((r28 + -26748));
    r0 = 0;
    MemoryHw::FlatWrite8((r13 + -15384), static_cast<uint8_t>(r29));
    r3 = MemoryHw::FlatRead32((r13 + -15448));
    r4 = (r4 & 1073741823);
    MemoryHw::FlatWriteRam8((r31 + 34), static_cast<uint8_t>(r29));
    r5 = MemoryHw::FlatRead32((r2 + -2480));
    MemoryHw::FlatWrite32((r3 + 12), r4);
    r4 = MemoryHw::FlatRead32((r31 + 4));
    r3 = MemoryHw::FlatRead32((r13 + -15448));
    r4 = (r4 & 1073741823);
    MemoryHw::FlatWrite32((r3 + 16), r4);
    r4 = MemoryHw::FlatRead32((r31 + 24));
    r3 = MemoryHw::FlatRead32((r13 + -15448));
    r0_mrot_1 = (r4 & 536870880);
    r0_mdest_1 = (r0 & -536870881);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryHw::FlatWrite32((r3 + 20), r0);
    r0 = MemoryHw::FlatRead32((r5 + 16));
    r0 = (r0 | 3);
    MemoryHw::FlatWrite32((r5 + 16), r0);
    r3 = MemoryHw::FlatRead32((r13 + -15444));
    MemoryHw::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r5 + 8));
    r0 = (r0 | 4);
    r0 = (r0 & -9);
    MemoryHw::FlatWrite32((r5 + 8), r0);
    r3 = MemoryHw::FlatRead32((r13 + -15444));
    MemoryHw::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r5 + 8));
    r0 = (r0 | 16);
    MemoryHw::FlatWrite32((r5 + 8), r0);
    r3 = MemoryHw::FlatRead32((r13 + -15444));
    MemoryHw::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    goto loc_804B4F8C;
}

loc_804B4F08:
{
    r0 = MemoryHw::FlatRead8((r13 + -15384));
    r4 = 0;
    MemoryHw::FlatWriteRam8((r31 + 34), static_cast<uint8_t>(r4));
}

loc_804B4F18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B4F38;
    }
}

loc_804B4F1C:
{
    r3 = MemoryHw::FlatRead32((r2 + -2480));
    r0 = MemoryHw::FlatRead32((r3 + 8));
    r0 = (r0 & -17);
    MemoryHw::FlatWrite32((r3 + 8), r0);
    r3 = MemoryHw::FlatRead32((r13 + -15444));
    MemoryHw::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite8((r13 + -15384), static_cast<uint8_t>(r4));
}

loc_804B4F38:
{
    r7 = MemoryHw::FlatRead32((r2 + -2480));
    r3 = 0x80750000u;
    r5 = (r3 + -26748);
    r0 = 0;
    r4 = MemoryHw::FlatRead32((r7 + 8));
    r6 = (r4 & -13);
    MemoryHw::FlatWrite32((r7 + 8), r6);
    r4 = MemoryHw::FlatRead32((r13 + -15444));
    MemoryHw::FlatWrite16((r4 + 2), static_cast<uint16_t>(r6));
    r4 = MemoryHw::FlatRead32((r3 + -26748));
    r3 = MemoryHw::FlatRead32((r13 + -15448));
    r4 = (r4 & 1073741823);
    MemoryHw::FlatWrite32((r3 + 12), r4);
    r4 = MemoryHw::FlatRead32((r5 + 4));
    r3 = MemoryHw::FlatRead32((r13 + -15448));
    r4 = (r4 & 1073741823);
    MemoryHw::FlatWrite32((r3 + 16), r4);
    r4 = MemoryHw::FlatRead32((r5 + 24));
    r3 = MemoryHw::FlatRead32((r13 + -15448));
    r0_mrot_2 = (r4 & 536870880);
    r0_mdest_2 = (r0 & -536870881);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryHw::FlatWrite32((r3 + 20), r0);
}

loc_804B4F8C:
{
    // inline leaf 0x804777D0 (2 guest instruction(s))
    OSSystemCall();
    // end of inlined leaf 0x804777D0
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl4_0x804D1330:
{
}

loc_inl4_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x804D1344;
    }
}

loc_inl4_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl4_0x804D1348;
}

loc_inl4_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl4_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804B4F98:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FDF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B4DD0 func_804B4DD0 preserves=true fpr_mask=0x00000000
