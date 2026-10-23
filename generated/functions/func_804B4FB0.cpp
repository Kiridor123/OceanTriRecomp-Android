#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B4FB0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804B4FB0;

loc_804B4FB0:
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
    r29 = MemoryHw::FlatRead32((r2 + -2480));
}

loc_804B4FD4:
{
    r28 = r3;
    r0 = MemoryHw::FlatRead32((r29 + 8));
    r0 = (r0 & -2);
    MemoryHw::FlatWrite32((r29 + 8), r0);
    guest_range_0 = MemoryHw::ResolveRangeHost((r13 + -15444), 0, 4u, true, false);
    r4 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    MemoryHw::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r29 + 8));
    r0 = (r0 & -13);
    MemoryHw::FlatWrite32((r29 + 8), r0);
    r4 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    MemoryHw::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_804B503C;
    }
}

loc_804B5004:
{
    r6 = 0;
    MemoryHw::FlatWrite8((r13 + -15407), static_cast<uint8_t>(r6));
    r4 = 0x80750000u;
    MemoryHw::FlatWrite8((r13 + -15384), static_cast<uint8_t>(r6));
    r4 = (r4 + -26784);
    r0 = MemoryHw::FlatRead32((r29 + 8));
    r0 = (r0 & -17);
    MemoryHw::FlatWrite32((r29 + 8), r0);
    r5 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    MemoryHw::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    MemoryHw::FlatWriteRam8((r4 + 33), static_cast<uint8_t>(r6));
    MemoryHw::FlatWriteRam8((r4 + 34), static_cast<uint8_t>(r6));
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
    goto loc_804B5228;
}

loc_804B503C:
{
    r3 = 0x80750000u;
    r31 = 1;
    r30 = (r3 + -26784);
    guest_range_1 = MemoryHw::ResolveRangeHost(r27, 0, 36u, true, false);
    r0 = MemoryHw::ReadResolved32(guest_range_1, 32u, (r27 + 32));
    MemoryHw::FlatWriteRam32((r30 + 32), r0);
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r4 = MemoryHw::ReadResolved32(guest_range_1, 4u, (r27 + 4));
            r9 = MemoryHw::ReadResolved32(guest_range_1, 8u, (r27 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryHw::ReadResolved32(guest_range_1, 12u, (r27 + 12));
            r7 = MemoryHw::ReadResolved32(guest_range_1, 16u, (r27 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryHw::ReadResolved32(guest_range_1, 20u, (r27 + 20));
            r5 = MemoryHw::ReadResolved32(guest_range_1, 24u, (r27 + 24));
        }
    }
    r0 = MemoryHw::ReadResolved32(guest_range_1, 28u, (r27 + 28));
    r10 = MemoryHw::ReadResolved32(guest_range_1, 0u, r27);
    MemoryHw::FlatWriteRam32((r30 + 4), r4);
    r4 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    MemoryHw::FlatWriteRam32((r30 + 8), r9);
    MemoryHw::FlatWriteRam32((r30 + 12), r8);
    MemoryHw::FlatWriteRam32((r30 + 16), r7);
    MemoryHw::FlatWriteRam32((r30 + 20), r6);
    MemoryHw::FlatWriteRam32((r30 + 24), r5);
    MemoryHw::FlatWriteRam32((r30 + 28), r0);
    MemoryHw::FlatWrite8((r13 + -15407), static_cast<uint8_t>(r31));
    MemoryHw::FlatWriteRam8((r30 + 34), static_cast<uint8_t>(r31));
    MemoryHw::FlatWriteRam32(r30, r10);
    MemoryHw::FlatWrite16((r4 + 32), static_cast<uint16_t>(r10));
    r4 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0 = MemoryHw::FlatRead32((r30 + 4));
    MemoryHw::FlatWrite16((r4 + 36), static_cast<uint16_t>(r0));
    r4 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0 = MemoryHw::FlatRead32((r30 + 28));
    MemoryHw::FlatWrite16((r4 + 48), static_cast<uint16_t>(r0));
    r4 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0 = MemoryHw::FlatRead32((r30 + 24));
    MemoryHw::FlatWrite16((r4 + 52), static_cast<uint16_t>(r0));
    r4 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0 = MemoryHw::FlatRead32((r30 + 20));
    MemoryHw::FlatWrite16((r4 + 56), static_cast<uint16_t>(r0));
    r4 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0 = MemoryHw::FlatRead32((r30 + 12));
    MemoryHw::FlatWrite16((r4 + 40), static_cast<uint16_t>(r0));
    r4 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0 = MemoryHw::FlatRead32((r30 + 16));
    MemoryHw::FlatWrite16((r4 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r3 + -26784));
    r3 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 16383);
    MemoryHw::FlatWrite16((r3 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r30 + 4));
    r3 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 16383);
    MemoryHw::FlatWrite16((r3 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r30 + 28));
    r3 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWrite16((r3 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r30 + 24));
    r3 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 16383);
    MemoryHw::FlatWrite16((r3 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r30 + 20));
    r3 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 16383);
    MemoryHw::FlatWrite16((r3 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r30 + 12));
    r3 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryHw::FlatWrite16((r3 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r30 + 16));
    r3 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r13 + -15444));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & 65535);
    MemoryHw::FlatWrite16((r3 + 46), static_cast<uint16_t>(r0));
    // inline leaf 0x804777D0 (2 guest instruction(s))
    OSSystemCall();
    // end of inlined leaf 0x804777D0
    ctx->lr = 0x804B5160u;
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
    InvokeDirectCpu<0x804B4CD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r0 = (r3 & 255);
}

loc_804B5164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B51A0;
    }
}

loc_804B5168:
{
    MemoryHw::FlatWrite8((r13 + -15384), static_cast<uint8_t>(r31));
    MemoryHw::FlatWriteRam8((r30 + 33), static_cast<uint8_t>(r31));
    r0 = MemoryHw::FlatRead32((r29 + 8));
    r0 = (r0 | 4);
    r0 = (r0 & -9);
    MemoryHw::FlatWrite32((r29 + 8), r0);
    r3 = MemoryHw::FlatRead32((r13 + -15444));
    MemoryHw::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r29 + 8));
    r0 = (r0 | 16);
    MemoryHw::FlatWrite32((r29 + 8), r0);
    r3 = MemoryHw::FlatRead32((r13 + -15444));
    MemoryHw::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    goto loc_804B51D4;
}

loc_804B51A0:
{
    r0 = 0;
    MemoryHw::FlatWrite8((r13 + -15384), static_cast<uint8_t>(r0));
    MemoryHw::FlatWriteRam8((r30 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryHw::FlatRead32((r29 + 8));
    r0 = (r0 & -13);
    MemoryHw::FlatWrite32((r29 + 8), r0);
    r3 = MemoryHw::FlatRead32((r13 + -15444));
    MemoryHw::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r29 + 8));
    r0 = (r0 & -17);
    MemoryHw::FlatWrite32((r29 + 8), r0);
    r3 = MemoryHw::FlatRead32((r13 + -15444));
    MemoryHw::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
}

loc_804B51D4:
{
    r0 = MemoryHw::FlatRead32((r29 + 8));
    r3 = r28;
    r4 = MemoryHw::FlatRead32((r13 + -15444));
    r0 = (r0 & -3);
    r5 = MemoryHw::FlatRead32((r2 + -2480));
    r0 = (r0 & -33);
    MemoryHw::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r4 = MemoryHw::FlatRead32((r13 + -15444));
    r0 = MemoryHw::FlatRead32((r29 + 8));
    MemoryHw::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r5 + 16));
    r0 = (r0 | 3);
    MemoryHw::FlatWrite32((r5 + 16), r0);
    r4 = MemoryHw::FlatRead32((r13 + -15444));
    MemoryHw::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead32((r29 + 8));
    r0 = (r0 | 1);
    MemoryHw::FlatWrite32((r29 + 8), r0);
    r4 = MemoryHw::FlatRead32((r13 + -15444));
    MemoryHw::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
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

loc_804B5228:
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003F8E gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B4FB0 func_804B4FB0 preserves=true fpr_mask=0x00000000
