#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AA7C8(CpuContext* ctx);
extern "C" uint64_t func_802AA7C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AA8C8(CpuContext* ctx);
extern "C" uint64_t func_802AA8C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AA9E0(CpuContext* ctx);
extern "C" uint64_t func_802AA9E0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80A01008(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80A01008;

loc_80A01008:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f31.d);
    r11 = (r1 + 40);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r30 = r3;
    r31 = r4;
    r24 = r5;
    r29 = r6;
    f31.d = f1.d;
    r25 = r7;
    r26 = r8;
    r3 = 72;
    ctx->lr = 0x80A01044u;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA7C8_9BD = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_9BD);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_9BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AA7C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r28 = r3;
}

loc_80A0104C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80A0114C;
    }
}

loc_80A01050:
{
    r4 = 0x80A00000u;
    r0 = (r4 + 4608);
    MemoryInline::FlatWriteRam32((r3 + 248), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + 4456);
    MemoryInline::FlatWriteRam32((r3 + 252), r0);
    r27 = MemoryInline::FlatRead32((r3 + 256));
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    MemoryInline::FlatWrite32(r27, r0);
    MemoryInline::FlatWriteFloat32((r27 + 64), f31.d);
    r3 = (r27 + 4);
    r4 = MemoryInline::FlatRead32(r27);
    ctx->lr = 0x80A01088u;
    if constexpr (KnownRegArgsCpuCall<0x802AA9E0u>(&func_802AA9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA9E0_FF1 = func_802AA9E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AA9E0_FF1);
        r4 = static_cast<uint32_t>(regargs_result_802AA9E0_FF1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AA9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r5 = MemoryInline::FlatRead32(r27);
}

loc_80A01090:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r5))) {
        goto loc_80A010A0;
    }
}

loc_80A01094:
{
    r3 = r28;
    ctx->lr = 0x80A0109Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AA8C8u>(&func_802AA8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802AA8C8_13DE = func_802AA8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AA8C8_13DE);
        r4 = static_cast<uint32_t>(regargs_result_802AA8C8_13DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802AA8C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80A0114C;
}

loc_80A010A0:
{
    r0 = (r31 & 255);
}

loc_80A010A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80A010BC;
    }
}

loc_80A010AC:
{
    r3 = (r27 + 12);
    r4 = 0;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & -8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80A010BC:
{
    MemoryInline::FlatWrite32((r27 + 28), r24);
    r3 = (r27 + 32);
    r4 = r29;
    ctx->lr = 0x80A010CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r3 = r30;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    MemoryInline::FlatWrite16((r27 + 56), static_cast<uint16_t>(r3));
    r29 = 0;
    MemoryInline::FlatWrite32((r27 + 60), r29);
    MemoryInline::FlatWrite32((r27 + 68), r25);
    r3 = (r27 + 44);
    r4 = (r30 + 392);
    ctx->lr = 0x80A010F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r0 = 16;
    guest_range_2 = MemoryInline::ResolveRangeHost((r28 + 2), 0, 90u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r28 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 481));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r28 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r28 + 2), static_cast<uint8_t>(r31));
    r3 = (r28 + 36);
    r4 = (r30 + 444);
    // inline leaf 0x809EAAD4 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::WriteResolved32(guest_range_2, 34u, r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::WriteResolved32(guest_range_2, 38u, (r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 42u, (r3 + 8), r0);
    // end of inlined leaf 0x809EAAD4
    MemoryInline::WriteResolved32(guest_range_2, 14u, (r28 + 16), r29);
    MemoryInline::WriteResolved16(guest_range_2, 88u, (r28 + 90), static_cast<uint16_t>(r26));
    r3 = r28;
    r4 = r30;
    r5 = 1;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    MemoryInline::WriteResolved32(guest_range_2, 10u, (r3 + 12), r4);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
    r3 = r28;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    ctx->lr = 0x80A0113Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80A01140:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80A0114C;
    }
}

loc_80A01144:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r28 + 7), static_cast<uint8_t>(r0));
}

loc_80A0114C:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r11 = (r1 + 40);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A01008 func_80A01008 preserves=true fpr_mask=0x00000000
