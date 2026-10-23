#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CDCA0(CpuContext* ctx);
extern "C" uint64_t func_804CDCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804DA544_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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
    const uint32_t r15_entry = r15;
    const uint32_t r16_entry = r16;
    const uint32_t r17_entry = r17;
    const uint32_t r18_entry = r18;
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
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

    goto loc_804DA544;

loc_804DA544:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457458 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    // end of inlined leaf 0x80457458
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r20 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r19 = 0x80630000u;
    r10 = (r4 + r3);
    r5 = MemoryInline::FlatRead32((r3 + 48));
    r9 = (r0 + r3);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r8 = (r5 + r3);
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r7 = (r4 + r3);
    r5 = MemoryInline::FlatRead32((r3 + 72));
    r6 = (r0 + r3);
    r4 = MemoryInline::FlatRead32((r3 + 76));
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r5 = (r5 + r3);
    r4 = (r4 + r3);
    r30 = 0x807A0000u;
    r0 = (r0 + r3);
    r29 = 0x80790000u;
    r28 = 0x80790000u;
    r27 = 0x80790000u;
    r26 = 0x80660000u;
    r25 = 0x80580000u;
    r24 = 0x80570000u;
    r23 = 0x80040000u;
    r22 = 0x80000000u;
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r20));
    r31 = r3;
    r19 = (r19 + -23472);
    MemoryInline::FlatWrite32((r3 + 12), r10);
    r30 = (r30 + -864);
    r29 = (r29 + 32608);
    r28 = (r28 + 27680);
    MemoryInline::FlatWrite32((r3 + 16), r9);
    r27 = (r27 + 13024);
    r26 = (r26 + -22144);
    r25 = (r25 + -12320);
    MemoryInline::FlatWrite32((r3 + 48), r8);
    r24 = (r24 + -960);
    r23 = (r23 + -3488);
    r22 = (r22 + 16384);
    MemoryInline::FlatWrite32((r3 + 56), r7);
    r17 = 1;
    r15 = 4;
    r18 = 8;
    MemoryInline::FlatWrite32((r3 + 64), r6);
    r21 = 0x80630000u;
    MemoryInline::FlatWrite32((r3 + 72), r5);
    MemoryInline::FlatWrite32((r3 + 76), r4);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    goto loc_804DA714;
}

loc_804DA628:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_804DA630:
{
    r16 = (r0 + r18);
    if ((static_cast<uint32_t>(r17) > static_cast<uint32_t>(13))) {
        goto loc_804DA6E8;
    }
}

loc_804DA638:
{
    r3 = (r21 + -23352);
    r3_addr_2 = (r3 + r15);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804DA6E8u:
        goto loc_804DA6E8;
        break;
    case 0x804DA648u:
        goto loc_804DA648;
        break;
    case 0x804DA650u:
        goto loc_804DA650;
        break;
    case 0x804DA658u:
        goto loc_804DA658;
        break;
    case 0x804DA67Cu:
        goto loc_804DA67C;
        break;
    case 0x804DA6A0u:
        goto loc_804DA6A0;
        break;
    case 0x804DA6A8u:
        goto loc_804DA6A8;
        break;
    case 0x804DA6B0u:
        goto loc_804DA6B0;
        break;
    case 0x804DA6B8u:
        goto loc_804DA6B8;
        break;
    case 0x804DA6C8u:
        goto loc_804DA6C8;
        break;
    case 0x804DA6D8u:
        goto loc_804DA6D8;
        break;
    case 0x804DA6C0u:
        goto loc_804DA6C0;
        break;
    case 0x804DA6D0u:
        goto loc_804DA6D0;
        break;
    case 0x804DA6E0u:
        goto loc_804DA6E0;
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
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

loc_804DA648:
{
    MemoryInline::FlatWrite32(r16, r22);
    goto loc_804DA708;
}

loc_804DA650:
{
    MemoryInline::FlatWrite32(r16, r23);
    goto loc_804DA708;
}

loc_804DA658:
{
    r5 = MemoryInline::FlatRead32((r16 + 4));
}

loc_804DA660:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804DA674;
    }
}

loc_804DA664:
{
    r4 = r17;
    r3 = (r19 + 0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804DA674u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CDCA0_21C4 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_21C4);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_21C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    } else {
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
        InvokeDirectCpu<0x804CDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    }
}

loc_804DA674:
{
    MemoryInline::FlatWrite32(r16, r20);
    goto loc_804DA708;
}

loc_804DA67C:
{
    r5 = MemoryInline::FlatRead32((r16 + 4));
}

loc_804DA684:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804DA698;
    }
}

loc_804DA688:
{
    r4 = r17;
    r3 = (r19 + 40);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804DA698u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CDCA0_2CDD = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_2CDD);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_2CDD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    } else {
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
        InvokeDirectCpu<0x804CDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    }
}

loc_804DA698:
{
    MemoryInline::FlatWrite32(r16, r20);
    goto loc_804DA708;
}

loc_804DA6A0:
{
    MemoryInline::FlatWrite32(r16, r24);
    goto loc_804DA708;
}

loc_804DA6A8:
{
    MemoryInline::FlatWrite32(r16, r25);
    goto loc_804DA708;
}

loc_804DA6B0:
{
    MemoryInline::FlatWrite32(r16, r26);
    goto loc_804DA708;
}

loc_804DA6B8:
{
    MemoryInline::FlatWrite32(r16, r27);
    goto loc_804DA708;
}

loc_804DA6C0:
{
    MemoryInline::FlatWrite32(r16, r28);
    goto loc_804DA708;
}

loc_804DA6C8:
{
    MemoryInline::FlatWrite32(r16, r29);
    goto loc_804DA708;
}

loc_804DA6D0:
{
    MemoryInline::FlatWrite32(r16, r30);
    goto loc_804DA708;
}

loc_804DA6D8:
{
    MemoryInline::FlatWrite32(r16, r20);
    goto loc_804DA708;
}

loc_804DA6E0:
{
    MemoryInline::FlatWrite32(r16, r20);
    goto loc_804DA708;
}

loc_804DA6E8:
{
    r5 = MemoryInline::FlatRead32((r16 + 4));
}

loc_804DA6F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804DA704;
    }
}

loc_804DA6F4:
{
    r4 = r17;
    r3 = (r19 + 80);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804DA704u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CDCA0_3B17 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_3B17);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_3B17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    } else {
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
        InvokeDirectCpu<0x804CDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    }
}

loc_804DA704:
{
    MemoryInline::FlatWrite32(r16, r20);
}

loc_804DA708:
{
    r18 = (r18 + 8);
    r17 = (r17 + 1);
    r15 = (r15 + 4);
}

loc_804DA714:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_804DA71C:
{
    if ((static_cast<uint32_t>(r17) < static_cast<uint32_t>(r0))) {
        goto loc_804DA628;
    }
}

loc_804DA720:
{
    r3 = -1431633920;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 56), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r31 + 60));
    r3 = (r3 + -21845);
    r4 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r5 = (r5_rot_0 & 536870911);
}

loc_804DA738:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804DA834;
    }
}

loc_804DA73C:
{
}

loc_804DA740:
{
    r6 = (r5 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_804DA808;
    }
}

loc_804DA748:
{
    r0 = (r6 + 7);
    r3 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_804DA75C:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_804DA808;
    }
}

loc_804DA760:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 56));
    r4 = (r4 + 8);
    r6_addr_2 = (r6 + r3);
    r0 = MemoryInline::FlatRead32(r6_addr_2);
    r0 = (r0 + r31);
    r6_addr_3 = (r6 + r3);
    MemoryInline::FlatWrite32(r6_addr_3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 24));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 36));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 48));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 60));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 60), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 72), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r3 = (r3 + 96);
    r0 = MemoryInline::FlatRead32((r6 + 84));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 84), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DA760;
    }
}

loc_804DA808:
{
    r0 = (r5 - r4);
    r6 = (r4 * 12);
    ctr = r0;
}

loc_804DA818:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_804DA834;
    }
}

loc_804DA81C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 56));
    r3_addr_6 = (r3 + r6);
    r0 = MemoryInline::FlatRead32(r3_addr_6);
    r0 = (r0 + r31);
    r3_addr_7 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_7, r0);
    r6 = (r6 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DA81C;
    }
}

loc_804DA834:
{
    r11 = (r1 + 80);
    r3 = 1;
    // inline leaf 0x804574A4 (18 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    // end of inlined leaf 0x804574A4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->gpr[15] = r15_entry;
    ctx->gpr[16] = r16_entry;
    ctx->gpr[17] = r17_entry;
    ctx->gpr[18] = r18_entry;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
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

extern "C" void func_804DA544(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DA544_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DA544 func_804DA544 preserves=true fpr_mask=0x00000000
