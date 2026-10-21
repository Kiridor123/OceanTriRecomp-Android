#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804724D0(CpuContext* ctx);
extern "C" uint64_t func_804724D0_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);

extern "C" uint64_t func_80472290_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_subfic_ra_0 = 0;
    uint32_t r3_subfic_ra_1 = 0;
    uint32_t r3_subfic_ra_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80472290u);
    goto loc_80472290;

loc_80472290:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r30 = 0;
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r30));
    r21 = r4;
    r22 = r5;
    MemoryInline::FlatWriteRam16((r1 + 38), static_cast<uint16_t>(r30));
    r23 = r6;
    r24 = r7;
    r25 = r8;
    r26 = r9;
    r27 = r10;
    r28 = (r3 + 28);
    r29 = 0;
    r31 = 0x80000000u;
    goto loc_804724A0;
}

loc_804722DC:
{
    r3 = MemoryInline::FlatRead16((r1 + 36));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_804722E4:
{
    r0 = MemoryInline::FlatRead16((r1 + 38));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = 14;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r23) >= static_cast<int32_t>(14))) {
        goto loc_804722FC;
    }
}

loc_804722F8:
{
    r5 = r23;
}

loc_804722FC:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80472300:
{
    r23 = (r23 - r5);
    r3 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804723D4;
    }
}

loc_8047230C:
{
}

loc_80472310:
{
    r4 = (r5 + -8);
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_804723A0;
    }
}

loc_80472318:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80472330;
    }
}

loc_80472320:
{
    r0 = (r31 + -2);
}

loc_80472328:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_80472330;
    }
}

loc_8047232C:
{
    r6 = 1;
}

loc_80472330:
{
}

loc_80472334:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804723A0;
    }
}

loc_80472338:
{
    r0 = (r4 + 7);
    r6 = (r1 + 8);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_8047234C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_804723A0;
    }
}

loc_80472350:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r22, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, r22);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost((r6 + 4), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r6 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r22 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r6 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r22 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r6 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r22 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 6u, (r6 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r22 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r6 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r22 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r6 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r22 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r6 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r22 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r22 = (r22 + 16);
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r6 + 18), static_cast<uint16_t>(r0));
    r6 = (r6 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80472350;
    }
}

loc_804723A0:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r6 = (r1 + 8);
    r0 = (r5 - r3);
    r6 = (r6 + r4);
    ctr = r0;
}

loc_804723B8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r5))) {
        goto loc_804723D4;
    }
}

loc_804723BC:
{
    r0 = MemoryInline::FlatRead16(r22);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r22 = (r22 + 2);
    MemoryInline::FlatWrite16((r6 + 4), static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804723BC;
    }
}

loc_804723D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(14));
}

loc_804723D8:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r4 = (r1 + 8);
    r3_subfic_ra_2 = r3;
    r3 = (14 - r3_subfic_ra_2);
    r4 = (r4 + r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8047243C;
    }
}

loc_804723EC:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_6 & 536870911);
}

loc_804723F0:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80472428;
    }
}

loc_804723F8:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_4, 0u, (r4 + 4), r30);
        MemoryInline::WriteResolved16(guest_range_4, 2u, (r4 + 6), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_4, 4u, (r4 + 8), r30);
        MemoryInline::WriteResolved16(guest_range_4, 6u, (r4 + 10), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_4, 8u, (r4 + 12), r30);
        MemoryInline::WriteResolved16(guest_range_4, 10u, (r4 + 14), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_4, 12u, (r4 + 16), r30);
        MemoryInline::WriteResolved16(guest_range_4, 14u, (r4 + 18), r30);
    }
    r4 = (r4 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804723F8;
    }
}

loc_80472420:
{
    r3 = (r3 & 7);
}

loc_80472424:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047243C;
    }
}

loc_80472428:
{
    ctr = r3;
    // nop
}

loc_80472430:
{
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r30));
    r4 = (r4 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80472430;
    }
}

loc_8047243C:
{
}

loc_80472440:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80472470;
    }
}

loc_80472444:
{
}

loc_80472448:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(14))) {
        goto loc_80472470;
    }
}

loc_8047244C:
{
    r3 = r28;
    r4 = r21;
    r6 = r25;
    r7 = r26;
    r8 = r27;
    r5 = (r1 + 8);
    ctx->lr = 0x80472468u;
    if constexpr (KnownRegArgsCpuCall<0x804724D0u>(&func_804724D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804724D0_28D0 = func_804724D0_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_804724D0_28D0);
        r4 = static_cast<uint32_t>(regargs_result_804724D0_28D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804724D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r24 = 0;
    goto loc_8047248C;
}

loc_80472470:
{
    r3 = r28;
    r4 = r21;
    r7 = r26;
    r5 = (r1 + 8);
    r6 = -1;
    r8 = 0;
    ctx->lr = 0x8047248Cu;
    if constexpr (KnownRegArgsCpuCall<0x804724D0u>(&func_804724D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804724D0_306F = func_804724D0_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_804724D0_306F);
        r4 = static_cast<uint32_t>(regargs_result_804724D0_306F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804724D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8047248C:
{
}

loc_80472490:
{
    r26 = (r26 + 8);
    r29 = (r29 + 14);
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_804724A0;
    }
}

loc_8047249C:
{
    r25 = (r25 + -14);
}

loc_804724A0:
{
}

loc_804724A4:
{
    if ((static_cast<int32_t>(r23) > static_cast<int32_t>(0))) {
        goto loc_804722DC;
    }
}

loc_804724A8:
{
    r11 = (r1 + 96);
    r3 = r29;
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80472290(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80472290_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80472290 func_80472290 preserves=true fpr_mask=0x00000000
