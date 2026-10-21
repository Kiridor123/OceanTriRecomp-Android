#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80984FE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x80984FE4u);
    goto loc_80984FE4;

loc_80984FE4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r10 = r5;
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 18u, true, false);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 14));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r9 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 16));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_80985024:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80985034;
    }
}

loc_80985028:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    goto loc_80985064;
}

loc_80985034:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r8);
    r5 = (static_cast<int32_t>(r0) >> 1);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r5 = (r5 + r9);
    r11 = (static_cast<int32_t>(r5) >> 1);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 - r11);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_80985064:
{
    r11 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
}

loc_8098506C:
{
    if ((static_cast<uint32_t>(r11) != static_cast<uint32_t>(1))) {
        goto loc_80985078;
    }
}

loc_80985070:
{
    r0 = (r0 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80985078:
{
}

loc_8098507C:
{
    if ((static_cast<uint32_t>(r11) != static_cast<uint32_t>(2))) {
        goto loc_80985094;
    }
}

loc_80985080:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & -2);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = (r0 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80985094:
{
    r12 = MemoryInline::FlatRead16(r4);
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r31 = MemoryInline::FlatRead16((r4 + 2));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r30 = MemoryInline::FlatRead16((r4 + 4));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    r29 = MemoryInline::FlatRead16((r4 + 6));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r6 = (r4 * 56);
    r4 = 0x809D0000u;
    r11 = MemoryInline::FlatRead32((r4 + 13672));
    r4 = (r11 + r6);
    r6 = MemoryInline::FlatRead16((r4 + 1076));
    r28 = MemoryInline::FlatRead16((r4 + 1078));
    r4 = 0x80990000u;
    f3.d = MemoryInline::FlatReadFloat64((r4 + 14696));
    r4 = (r12 ^ -2147483648);
    stackword8 = r4;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 36), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r4 = 0x80990000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + 14688));
    stackword9 = r6;
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 44), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 24), f0.d);
    r4 = (r31 ^ -2147483648);
    stackword10 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 36), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword10));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    stackword11 = r28;
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 44), r28);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r1 + 28), f0.d);
    r4 = (r12 + r30);
    r4 = (r4 ^ -2147483648);
    stackword12 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 36), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    stackword13 = r6;
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 44), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword13));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 16), f0.d);
    r4 = (r31 + r29);
    r4 = (r4 ^ -2147483648);
    stackword14 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 36), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword14));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    stackword15 = r28;
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 44), r28);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword15));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 20), f0.d);
    r4 = (r7 & 255);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 8), r4);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r3 = (r3 * 56);
    r3 = (r11 + r3);
    r3 = (r3 + 1040);
    r4 = r0;
    r6 = r8;
    r7 = r9;
    r8 = (r1 + 24);
    r9 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    InvokeDirectCpu<0x80984C44u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80984FE4 func_80984FE4 preserves=true fpr_mask=0x00000000
