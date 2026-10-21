#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047ABD0(CpuContext* ctx);
extern "C" uint64_t func_8047ABD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A22E0(CpuContext* ctx);
extern "C" uint64_t func_804A22E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A4C30(CpuContext* ctx);
extern "C" uint64_t func_804A4C30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804A4D00(CpuContext* ctx);
extern "C" uint64_t func_804A4D00_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804A22E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804A22E0u);
    goto loc_804A22E0;

loc_804A22E0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r21 = MemoryInline::FlatRead8(r3);
    r31 = 0x80620000u;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r4 = r21;
    r31 = (r31 + -30808);
    r28 = (r8 & 128);
    r27 = (r8 & 127);
    r5 = (r1 + 8);
    r3 = (r3 + 1);
    if constexpr (KnownRegArgsCpuCall<0x804A4C30u>(&func_804A4C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A4C30_12A0 = func_804A4C30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804A4C30_12A0);
        r4 = static_cast<uint32_t>(regargs_result_804A4C30_12A0 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A4C30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r22 = r3;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(29));
    r6 = (r6_rot_0 & 15);
    r4 = 12;
    r5 = (r0 & 4095);
}

loc_804A2340:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(4))) {
        goto loc_804A234C;
    }
}

loc_804A2348:
{
    r4 = (r5 + 8);
}

loc_804A234C:
{
    r4 = (r4 + 3);
    r0 = MemoryInline::FlatRead32((r23 + 4));
    r30 = (r4 & -4);
}

loc_804A235C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r30))) {
        goto loc_804A2368;
    }
}

loc_804A2360:
{
    r3 = 0;
    goto loc_804A2860;
}

loc_804A2368:
{
    r29 = MemoryInline::FlatRead32((r23 + 104));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(12));
    r0 = (r0_rot_1 & 268431360);
}

loc_804A2374:
{
    r4 = 0;
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r25));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r5 & 65535);
    r5 = (r5 | r0);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32(r29, r4);
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(8))) {
        goto loc_804A27E0;
    }
}

loc_804A2394:
{
    r5 = 0x80620000u;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r5 = (r5 + -30496);
    r5_addr_1 = (r5 + r4);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804A27E0u:
        goto loc_804A27E0;
        break;
    case 0x804A23ACu:
        goto loc_804A23AC;
        break;
    case 0x804A245Cu:
        goto loc_804A245C;
        break;
    case 0x804A2518u:
        goto loc_804A2518;
        break;
    case 0x804A2760u:
        goto loc_804A2760;
        break;
    case 0x804A2790u:
        goto loc_804A2790;
        break;
    case 0x804A26ACu:
        goto loc_804A26AC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804A23AC:
{
}

loc_804A23B0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804A245C;
    }
}

loc_804A23B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804A23BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804A245C;
    }
}

loc_804A23C0:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
}

loc_804A23D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_804A245C;
    }
}

loc_804A23DC:
{
    r5 = MemoryInline::FlatRead32((r23 + 104));
}

loc_804A23E4:
{
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r30 = 0;
    r5 = (r5 + 12);
    r0 = (r4 + -12);
    MemoryInline::FlatWrite32((r23 + 104), r5);
    MemoryInline::FlatWrite32((r23 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r3 + r0);
    r21 = (r4 + 2);
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(5))) {
        goto loc_804A2434;
    }
}

loc_804A240C:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
}

loc_804A241C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_804A242C;
    }
}

loc_804A2420:
{
    r4 = (r31 + 216);
    r3 = 655360;
    ctx->lr = 0x804A242Cu;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABB0_2887 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_2887);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_2887 >> 32);
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
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804A242C:
{
    r3 = r21;
    goto loc_804A2860;
}

loc_804A2434:
{
    r0 = (r27 + 1);
    r4 = r23;
    r5 = r24;
    r7 = r29;
    r8 = (r0 & 255);
    r6 = 4;
    r3 = (r3 + 2);
    ctx->lr = 0x804A2454u;
    if constexpr (KnownRegArgsCpuCall<0x804A22E0u>(&func_804A22E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A22E0_3183 = func_804A22E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A22E0_3183);
        r4 = static_cast<uint32_t>(regargs_result_804A22E0_3183 >> 32);
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
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A22E0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r22 = r3;
    goto loc_804A27E0;
}

loc_804A245C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_804A2464:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A24E8;
    }
}

loc_804A2468:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804A247C;
    }
}

loc_804A246C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_804A2470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A2488;
    }
}

loc_804A2474:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804A2498;
    }
}

loc_804A2478:
{
    goto loc_804A24E8;
}

loc_804A247C:
{
}

loc_804A2480:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_804A24E8;
    }
}

loc_804A2484:
{
    goto loc_804A24B4;
}

loc_804A2488:
{
    r0 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    goto loc_804A27E0;
}

loc_804A2498:
{
    r4 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_804A27E0;
}

loc_804A24B4:
{
    r5 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 4);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r6 = (r6_rot_1 & -16777216);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r5 = (r5_rot_1 & -65536);
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r3 = (r6 + r5);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    goto loc_804A27E0;
}

loc_804A24E8:
{
    r3 = (r29 + 8);
    r4 = 0;
    goto loc_804A2508;
}

loc_804A24F4:
{
    r0 = MemoryInline::FlatRead8(r22);
    r4 = (r4 + 1);
    r22 = (r22 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_804A2508:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804A2510:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_804A24F4;
    }
}

loc_804A2514:
{
    goto loc_804A27E0;
}

loc_804A2518:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_804A2520:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A255C;
    }
}

loc_804A2524:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804A2534;
    }
}

loc_804A2528:
{
}

loc_804A252C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_804A2540;
    }
}

loc_804A2530:
{
    goto loc_804A267C;
}

loc_804A2534:
{
}

loc_804A2538:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(16))) {
        goto loc_804A25B4;
    }
}

loc_804A253C:
{
    goto loc_804A267C;
}

loc_804A2540:
{
    r4 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_804A27E0;
}

loc_804A255C:
{
    r7 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 4);
    r6 = MemoryInline::FlatRead8((r3 + 1));
    r4 = 65536;
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8 = (r8_rot_1 & -16777216);
    r5 = MemoryInline::FlatRead8((r3 + 2));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & -65536);
    r6 = MemoryInline::FlatRead8((r3 + 3));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r3 = (r3_rot_5 & -256);
    r5 = (r8 + r7);
    r3 = (r6 + r3);
    r3 = (r5 + r3);
}

loc_804A2590:
{
    MemoryInline::FlatWrite32((r29 + 8), r3);
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_804A27E0;
    }
}

loc_804A2598:
{
    r3 = 2;
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_804A27E0;
}

loc_804A25B4:
{
    r3 = r22;
    if constexpr (KnownRegArgsCpuCall<0x804A4D00u>(&func_804A4D00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A4D00_4BB0 = func_804A4D00_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804A4D00_4BB0);
        r4 = static_cast<uint32_t>(regargs_result_804A4D00_4BB0 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A4D00u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_804A25C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A264C;
    }
}

loc_804A25C4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r22, 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r22);
}

loc_804A25CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A2608;
    }
}

loc_804A25D0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r22 + 1));
}

loc_804A25D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A2608;
    }
}

loc_804A25DC:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r0 & -4096);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r22 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r22 + 3));
    r22 = (r22 + 16);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_804A27E0;
}

loc_804A2608:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r0 & -4096);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 0u, r22);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r22 + 1));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r22 + 2));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r5 = (r5_rot_2 & -16777216);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r22 + 3));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_4 & -65536);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r22 = (r22 + 16);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    goto loc_804A27E0;
}

loc_804A264C:
{
    r3 = (r29 + 8);
    r4 = 0;
    goto loc_804A266C;
}

loc_804A2658:
{
    r0 = MemoryInline::FlatRead8(r22);
    r4 = (r4 + 1);
    r22 = (r22 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_804A266C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804A2674:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_804A2658;
    }
}

loc_804A2678:
{
    goto loc_804A27E0;
}

loc_804A267C:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
}

loc_804A268C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_804A26A0;
    }
}

loc_804A2690:
{
    r3 = 655360;
    r4 = (r31 + 244);
    r3 = (r3 + 1);
    ctx->lr = 0x804A26A0u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_5B4B = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_5B4B);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_5B4B >> 32);
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
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABD0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804A26A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r22 + r0);
    goto loc_804A2860;
}

loc_804A26AC:
{
    r5 = MemoryInline::FlatRead32((r23 + 104));
}

loc_804A26B4:
{
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r30 = 0;
    r5 = (r5 + 12);
    r0 = (r4 + -12);
    MemoryInline::FlatWrite32((r23 + 104), r5);
    MemoryInline::FlatWrite32((r23 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r21 = (r3 + r0);
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(5))) {
        goto loc_804A2700;
    }
}

loc_804A26D8:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
}

loc_804A26E8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_804A26F8;
    }
}

loc_804A26EC:
{
    r4 = (r31 + 216);
    r3 = 655360;
    ctx->lr = 0x804A26F8u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABB0_66D4 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_66D4);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_66D4 >> 32);
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
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804A26F8:
{
    r3 = r21;
    goto loc_804A2860;
}

loc_804A2700:
{
}

loc_804A2704:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_804A2710;
    }
}

loc_804A2708:
{
}

loc_804A270C:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(13))) {
        goto loc_804A2718;
    }
}

loc_804A2710:
{
    r0 = (r27 | 128);
    r27 = (r0 & 255);
}

loc_804A2718:
{
    r3 = (r27 & 255);
    r25 = (r3 + 1);
    goto loc_804A2754;
}

loc_804A2724:
{
    r3 = r22;
    r4 = r23;
    r5 = r24;
    r7 = r29;
    r8 = (r25 & 255);
    r6 = 0;
    ctx->lr = 0x804A2740u;
    if constexpr (KnownRegArgsCpuCall<0x804A22E0u>(&func_804A22E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A22E0_7160 = func_804A22E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A22E0_7160);
        r4 = static_cast<uint32_t>(regargs_result_804A22E0_7160 >> 32);
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
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A22E0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804A2744:
{
    r22 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A2754;
    }
}

loc_804A274C:
{
    r3 = 0;
    goto loc_804A2860;
}

loc_804A2754:
{
}

loc_804A2758:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(r21))) {
        goto loc_804A2724;
    }
}

loc_804A275C:
{
    goto loc_804A27E0;
}

loc_804A2760:
{
    r3 = (r29 + 8);
    r4 = 0;
    goto loc_804A2780;
}

loc_804A276C:
{
    r0 = MemoryInline::FlatRead8(r22);
    r4 = (r4 + 1);
    r22 = (r22 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_804A2780:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804A2788:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_804A276C;
    }
}

loc_804A278C:
{
    goto loc_804A27E0;
}

loc_804A2790:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804A2798:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_804A27A0;
    }
}

loc_804A279C:
{
    goto loc_804A27B0;
}

loc_804A27A0:
{
    r0 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    goto loc_804A27E0;
}

loc_804A27B0:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
}

loc_804A27C0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_804A27D4;
    }
}

loc_804A27C4:
{
    r3 = 655360;
    r4 = (r31 + 276);
    r3 = (r3 + 1);
    ctx->lr = 0x804A27D4u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_7FA1 = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_7FA1);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_7FA1 >> 32);
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
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8047ABD0u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804A27D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r22 + r0);
    goto loc_804A2860;
}

loc_804A27E0:
{
    r3 = MemoryInline::FlatRead32((r23 + 104));
}

loc_804A27E8:
{
    r0 = MemoryInline::FlatRead32((r23 + 4));
    r3 = (r3 + r30);
    r0 = (r0 - r30);
    MemoryInline::FlatWrite32((r23 + 104), r3);
    MemoryInline::FlatWrite32((r23 + 4), r0);
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_804A2830;
    }
}

loc_804A2800:
{
    r3 = MemoryInline::FlatRead32(r24);
}

loc_804A2808:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A281C;
    }
}

loc_804A280C:
{
    MemoryInline::FlatWrite32(r24, r29);
    goto loc_804A285C;
}

loc_804A2818:
{
    r3 = r0;
}

loc_804A281C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_804A2824:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A2818;
    }
}

loc_804A2828:
{
    MemoryInline::FlatWrite32(r3, r29);
    goto loc_804A285C;
}

loc_804A2830:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
}

loc_804A2838:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A284C;
    }
}

loc_804A283C:
{
    MemoryInline::FlatWrite32((r26 + 8), r29);
    goto loc_804A285C;
}

loc_804A2848:
{
    r3 = r0;
}

loc_804A284C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_804A2854:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A2848;
    }
}

loc_804A2858:
{
    MemoryInline::FlatWrite32(r3, r29);
}

loc_804A285C:
{
    r3 = r22;
}

loc_804A2860:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A22E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A22E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A22E0 func_804A22E0 preserves=true fpr_mask=0x00000000
