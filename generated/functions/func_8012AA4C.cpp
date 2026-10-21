#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012A874(CpuContext* ctx);
extern "C" uint32_t func_8012A874_ra70_e_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8012A99C(CpuContext* ctx);
extern "C" uint64_t func_8012A99C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012C150(CpuContext* ctx);
extern "C" uint64_t func_8012C150_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012CFF4(CpuContext* ctx);
extern "C" uint64_t func_8012CFF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012D118(CpuContext* ctx);
extern "C" uint64_t func_8012D118_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012D20C(CpuContext* ctx);
extern "C" uint64_t func_8012D20C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012D860(CpuContext* ctx);
extern "C" uint32_t func_8012D860_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80131098(CpuContext* ctx);
extern "C" uint64_t func_80131098_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027CFD4(CpuContext* ctx);
extern "C" uint64_t func_8027CFD4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802D8478(CpuContext* ctx);
extern "C" uint64_t func_802D8478_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80345718(CpuContext* ctx);
extern "C" uint64_t func_80345718_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8012AA4C_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_8012B3B8_loc_0 = 0;
    uint32_t addr_psqx_8012B3C4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t stackword22 = 0;
    uint32_t stackword23 = 0;
    uint32_t stackword24 = 0;
    uint32_t stackword25 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r14 = ctx->gpr[14];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r14_entry = r14;
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
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8012AA4Cu);
    goto loc_8012AA4C;

loc_8012AA4C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 144);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r15 = r3;
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 8), r4);
    r16 = r5;
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 12), r6);
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = 255;
    r29 = 255;
    r28 = 255;
    r27 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28236));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 16), f0.d);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    r26 = -1;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_2, 56u, (r1 + 56), static_cast<uint8_t>(r0));
    r14 = 255;
    r17 = 0;
    r3 = MemoryInline::FlatRead8(r16);
    r0 = (r3 & 128);
}

loc_8012AACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012AAE0;
    }
}

loc_8012AAD0:
{
    r25 = 1;
    r0 = (r3 & 127);
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r0));
    goto loc_8012AAE4;
}

loc_8012AAE0:
{
    r25 = 0;
}

loc_8012AAE4:
{
    r3 = MemoryInline::FlatRead8(r16);
    r0 = (r3 & 64);
}

loc_8012AAF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012AB04;
    }
}

loc_8012AAF4:
{
    r24 = 1;
    r0 = (r3 & 191);
}

loc_8012AAFC:
{
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r0));
    goto loc_8012AB08;
}

loc_8012AB04:
{
    r24 = 0;
}

loc_8012AB08:
{
    r3 = MemoryInline::FlatRead8(r16);
    r0 = (r3 & 32);
}

loc_8012AB14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012AB28;
    }
}

loc_8012AB18:
{
    r23 = 1;
    r0 = (r3 & 223);
}

loc_8012AB20:
{
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r0));
    goto loc_8012AB2C;
}

loc_8012AB28:
{
    r23 = 0;
}

loc_8012AB2C:
{
    r3 = MemoryInline::FlatRead8(r16);
    r0 = (r3 & 16);
}

loc_8012AB38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012AB4C;
    }
}

loc_8012AB3C:
{
    r22 = 1;
    r0 = (r3 & 239);
}

loc_8012AB44:
{
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r0));
    goto loc_8012AB50;
}

loc_8012AB4C:
{
    r22 = 0;
}

loc_8012AB50:
{
    r0 = MemoryInline::FlatRead8(r16);
}

loc_8012AB58:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_8012B3B4;
    }
}

loc_8012AB5C:
{
    r3 = 0x805A0000u;
    r3 = (r3 + 6892);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8012AB74u:
        goto loc_8012AB74;
        break;
    case 0x8012ABFCu:
        goto loc_8012ABFC;
        break;
    case 0x8012AD04u:
        goto loc_8012AD04;
        break;
    case 0x8012AB80u:
        goto loc_8012AB80;
        break;
    case 0x8012AB98u:
        goto loc_8012AB98;
        break;
    case 0x8012ABB0u:
        goto loc_8012ABB0;
        break;
    case 0x8012AC14u:
        goto loc_8012AC14;
        break;
    case 0x8012AC2Cu:
        goto loc_8012AC2C;
        break;
    case 0x8012AC44u:
        goto loc_8012AC44;
        break;
    case 0x8012AC90u:
        goto loc_8012AC90;
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
        ctx->gpr[14] = r14;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8012AB74:
{
    r21 = 0;
    r20 = 0;
    goto loc_8012AD08;
}

loc_8012AB80:
{
    r21 = 0;
    r20 = 1;
    r3 = (r1 + 32);
    r4 = (r15 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_8012AD08;
}

loc_8012AB98:
{
    r21 = 0;
    r20 = 2;
    r3 = (r1 + 32);
    r4 = (r15 + 432);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_8012AD08;
}

loc_8012ABB0:
{
    r21 = 0;
    r20 = 3;
    r3 = MemoryInline::FlatRead8((r15 + 3));
    r4 = MemoryInline::FlatRead8((r15 + 10));
    ctx->lr = 0x8012ABC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r15 + 1132));
    ctx->lr = 0x8012ABD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r17 = r3;
}

loc_8012ABD8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012ABEC;
    }
}

loc_8012ABDC:
{
    r3 = (r1 + 32);
    r4 = (r17 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_8012AD08;
}

loc_8012ABEC:
{
    r3 = (r1 + 32);
    r4 = (r15 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_8012AD08;
}

loc_8012ABFC:
{
    r21 = 1;
    r20 = 0;
    r3 = (r1 + 32);
    r4 = (r15 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_8012AD08;
}

loc_8012AC14:
{
    r21 = 1;
    r20 = 1;
    r3 = (r1 + 32);
    r4 = (r15 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_8012AD08;
}

loc_8012AC2C:
{
    r21 = 1;
    r20 = 2;
    r3 = (r1 + 32);
    r4 = (r15 + 432);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_8012AD08;
}

loc_8012AC44:
{
    r21 = 1;
    r20 = 3;
    r3 = MemoryInline::FlatRead8((r15 + 3));
    r4 = MemoryInline::FlatRead8((r15 + 10));
    ctx->lr = 0x8012AC58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r15 + 1132));
    ctx->lr = 0x8012AC64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r17 = r3;
}

loc_8012AC6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AC80;
    }
}

loc_8012AC70:
{
    r3 = (r1 + 32);
    r4 = (r17 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_8012AD08;
}

loc_8012AC80:
{
    r3 = (r1 + 32);
    r4 = (r15 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_8012AD08;
}

loc_8012AC90:
{
    r0 = 3;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = r15;
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead8(r4);
    r5 = 0;
    ctx->lr = 0x8012ACB0u;
    if constexpr (KnownRegArgsCpuCall<0x80131098u>(&func_80131098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80131098_41F1 = func_80131098_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80131098_41F1);
        r4 = static_cast<uint32_t>(regargs_result_80131098_41F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80131098u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r14 = r3;
}

loc_8012ACB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012ACCC;
    }
}

loc_8012ACBC:
{
    // inline leaf 0x8012E60C (11 guest instruction(s))
}

loc_inl3_0x8012E60C:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl3_0x8012E614:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_inl3_0x8012E630;
    }
}

loc_inl3_0x8012E618:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r3 + -16);
}

loc_inl3_0x8012E624:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_inl3_0x8012E630;
    }
}

loc_inl3_0x8012E628:
{
    r3 = 1;
    goto loc_inl3_cont_8012E60C;
}

loc_inl3_0x8012E630:
{
    r3 = 0;
}

loc_inl3_cont_8012E60C:
{
    // end of inlined leaf 0x8012E60C
}

loc_8012ACC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012ACCC;
    }
}

loc_8012ACC8:
{
    r14 = 0;
}

loc_8012ACCC:
{
}

loc_8012ACD0:
{
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(0))) {
        goto loc_8012ACEC;
    }
}

loc_8012ACD4:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r14 + 2));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_8012B3B4;
}

loc_8012ACEC:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r0));
    r0 = 255;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_8012B3B4;
}

loc_8012AD04:
{
    goto loc_8012B3B4;
}

loc_8012AD08:
{
}

loc_8012AD0C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(3))) {
        goto loc_8012AD1C;
    }
}

loc_8012AD10:
{
}

loc_8012AD14:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8012AE08;
    }
}

loc_8012AD18:
{
    goto loc_8012ADD4;
}

loc_8012AD1C:
{
}

loc_8012AD20:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_8012ADA0;
    }
}

loc_8012AD24:
{
    f31.d = MemoryInline::FlatReadFloat32((r17 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8012AD30:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012ADA0;
    }
}

loc_8012AD38:
{
    r18 = 1;
    r4 = MemoryInline::FlatRead8((r17 + 54));
}

loc_8012AD44:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8012AD98;
    }
}

loc_8012AD48:
{
    r3 = r17;
    ctx->lr = 0x8012AD50u;
    if constexpr (KnownRegArgsCpuCall<0x80345718u>(&func_80345718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80345718_5146 = func_80345718_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80345718_5146);
        r4 = static_cast<uint32_t>(regargs_result_80345718_5146 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80345718u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r17 = r3;
}

loc_8012AD58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AD98;
    }
}

loc_8012AD5C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8012AD64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012AD98;
    }
}

loc_8012AD68:
{
    r18 = 2;
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r17 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r17 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r17 + 12));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r17 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r17 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r17 + 24));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    f31.d = MemoryInline::FlatReadFloat32((r17 + 28));
}

loc_8012AD98:
{
    f31.d = PpcFmulsInline(f31.d, f31.d);
    goto loc_8012AE10;
}

loc_8012ADA0:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8(r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28192));
    stackword22 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    stackword23 = r0;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword23), static_cast<uint32_t>(stackword22));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28228));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f31.d = PpcFmulsInline(f0.d, f0.d);
    r18 = 1;
    goto loc_8012AE10;
}

loc_8012ADD4:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8(r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28192));
    stackword24 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    stackword25 = r0;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword25), static_cast<uint32_t>(stackword24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28228));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f31.d = PpcFmulsInline(f0.d, f0.d);
    r18 = 1;
    goto loc_8012AE10;
}

loc_8012AE08:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    r18 = 0;
}

loc_8012AE10:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8012AE1C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8012AE28;
    }
}

loc_8012AE20:
{
}

loc_8012AE24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8012B004;
    }
}

loc_8012AE28:
{
    r3 = 2;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl6_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl6_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800CFB50;
    }
}

loc_inl6_0x800CFB48:
{
    r3 = 0;
    goto loc_inl6_cont_800CFB34;
}

loc_inl6_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl6_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl6_0x800CFB64;
    }
}

loc_inl6_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl6_cont_800CFB34;
}

loc_inl6_0x800CFB64:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl6_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r14 = r3;
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl7_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl7_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x800CFB10;
    }
}

loc_inl7_0x800CFB08:
{
    r3 = 0;
    goto loc_inl7_cont_800CFAF4;
}

loc_inl7_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl7_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl7_0x800CFB24;
    }
}

loc_inl7_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl7_cont_800CFAF4;
}

loc_inl7_0x800CFB24:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl7_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r19 = r3;
    r31 = 0;
    r14 = (r14 & 65535);
    goto loc_8012AFF4;
}

loc_8012AE4C:
{
    r0 = MemoryInline::FlatRead8(r19);
}

loc_8012AE54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AE58:
{
    r3 = MemoryInline::FlatRead8((r19 + 8));
    ctx->lr = 0x8012AE60u;
    if constexpr (KnownRegArgsCpuCall<0x8012D20Cu>(&func_8012D20C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012D20C_691E = func_8012D20C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012D20C_691E);
        r4 = static_cast<uint32_t>(regargs_result_8012D20C_691E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D20Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012AE64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AE68:
{
    r3 = r15;
    r4 = r19;
    ctx->lr = 0x8012AE74u;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012D118_6CEF = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_6CEF);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_6CEF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_8012AE78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AE7C:
{
}

loc_8012AE80:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_8012AE94;
    }
}

loc_8012AE84:
{
    r3 = r19;
    if constexpr (KnownRegArgsCpuCall<0x8027CFD4u>(&func_8027CFD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027CFD4_7194 = func_8027CFD4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027CFD4_7194);
        r4 = static_cast<uint32_t>(regargs_result_8027CFD4_7194 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027CFD4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012AE90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AE94:
{
}

loc_8012AE98:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(1))) {
        goto loc_8012AEAC;
    }
}

loc_8012AE9C:
{
    r3 = r19;
    ctx->lr = 0x8012AEA4u;
    if constexpr (KnownRegArgsCpuCall<0x8012D860u>(&func_8012D860)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8012D860_7567 = func_8012D860_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012D860_7567;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D860u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012AEA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AEAC:
{
}

loc_8012AEB0:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_8012AEC0;
    }
}

loc_8012AEB4:
{
    r0 = MemoryInline::FlatRead8((r19 + 9));
}

loc_8012AEBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8012AFEC;
    }
}

loc_8012AEC0:
{
}

loc_8012AEC4:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(1))) {
        goto loc_8012AED4;
    }
}

loc_8012AEC8:
{
    r0 = MemoryInline::FlatRead8((r19 + 9));
}

loc_8012AED0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8012AFEC;
    }
}

loc_8012AED4:
{
    r3 = r15;
    r4 = (r31 & 255);
    // inline leaf 0x80131974 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 911));
    r3 = 1;
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80131974
}

loc_8012AEE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AEE8:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r19 + 1446));
    ctx->lr = 0x8012AEF4u;
    if constexpr (KnownRegArgsCpuCall<0x8012A99Cu>(&func_8012A99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012A99C_7DC2 = func_8012A99C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012A99C_7DC2);
        r4 = static_cast<uint32_t>(regargs_result_8012A99C_7DC2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012AEF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AEFC:
{
    r3 = r15;
    r4 = (r31 & 255);
    ctx->lr = 0x8012AF08u;
    if constexpr (KnownRegArgsCpuCall<0x8012C150u>(&func_8012C150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012C150_81D1 = func_8012C150_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012C150_81D1);
        r4 = static_cast<uint32_t>(regargs_result_8012C150_81D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012C150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r17 = r3;
}

loc_8012AF10:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8012AF20;
    }
}

loc_8012AF14:
{
    r0 = MemoryInline::FlatRead32((r15 + 1060));
}

loc_8012AF1C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AF20:
{
}

loc_8012AF24:
{
    if ((static_cast<uint32_t>(r21) == static_cast<uint32_t>(1))) {
        goto loc_8012AF30;
    }
}

loc_8012AF28:
{
}

loc_8012AF2C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8012AF58;
    }
}

loc_8012AF30:
{
    r3 = r15;
    r4 = r18;
    r5 = (r1 + 32);
    r6 = (r1 + 20);
    r7 = (r19 + 60);
    f1.d = f31.d;
    r8 = (r1 + 16);
    ctx->lr = 0x8012AF50u;
    if constexpr (KnownRegArgsCpuCall<0x8012A874u>(&func_8012A874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8012A874_89C7 = func_8012A874_ra70_e_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d);
        r4 = regargs_result_8012A874_89C7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A874u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_8012AF54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AF58:
{
    r0 = (r30 & 255);
}

loc_8012AF60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8012AF80;
    }
}

loc_8012AF64:
{
    r30 = r31;
}

loc_8012AF6C:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(1))) {
        goto loc_8012AF78;
    }
}

loc_8012AF70:
{
    f30.d = MemoryInline::FlatReadFloat32((r1 + 16));
    goto loc_8012AFEC;
}

loc_8012AF78:
{
    r26 = r17;
    goto loc_8012AFEC;
}

loc_8012AF80:
{
}

loc_8012AF84:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(1))) {
        goto loc_8012AFD8;
    }
}

loc_8012AF88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r17));
}

loc_8012AF8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012AF9C;
    }
}

loc_8012AF90:
{
    r30 = r31;
    r26 = r17;
    goto loc_8012AFEC;
}

loc_8012AF9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012AFEC;
    }
}

loc_8012AFA0:
{
    r27 = (r27 + 1);
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl9_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl9_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x800CEF40;
    }
}

loc_inl9_0x800CEF3C:
{
    r0 = 1;
}

loc_inl9_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_8 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl9_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = (r27 & 255);
    r3 = (r3 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
}

loc_8012AFC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012AFEC;
    }
}

loc_8012AFCC:
{
    r30 = r31;
    r26 = r17;
    goto loc_8012AFEC;
}

loc_8012AFD8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8012AFE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012AFEC;
    }
}

loc_8012AFE4:
{
    r30 = r31;
    f30.d = f0.d;
}

loc_8012AFEC:
{
    r31 = (r31 + 1);
    r19 = (r19 + 2848);
}

loc_8012AFF4:
{
    r0 = (r31 & 255);
}

loc_8012AFFC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r14))) {
        goto loc_8012AE4C;
    }
}

loc_8012B000:
{
    r14 = r30;
}

loc_8012B004:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8012B010:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B024;
    }
}

loc_8012B014:
{
}

loc_8012B018:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8012B024;
    }
}

loc_8012B01C:
{
}

loc_8012B020:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8012B180;
    }
}

loc_8012B024:
{
    r3 = 0x806C0000u;
    r19 = (r3 + -2080);
    r0 = MemoryInline::FlatRead8((r3 + -2080));
}

loc_8012B034:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B16C;
    }
}

loc_8012B038:
{
}

loc_8012B03C:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8012B050;
    }
}

loc_8012B040:
{
    r3 = r19;
    ctx->lr = 0x8012B048u;
    if constexpr (KnownRegArgsCpuCall<0x802D8478u>(&func_802D8478)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802D8478_9F67 = func_802D8478_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D8478_9F67);
        r4 = static_cast<uint32_t>(regargs_result_802D8478_9F67 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802D8478u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012B04C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012B16C;
    }
}

loc_8012B050:
{
}

loc_8012B054:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_8012B16C;
    }
}

loc_8012B058:
{
    r3 = MemoryInline::FlatRead8((r15 + 481));
    r0 = MemoryInline::FlatRead8((r19 + 420));
}

loc_8012B064:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012B16C;
    }
}

loc_8012B068:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r19 + 806));
    ctx->lr = 0x8012B074u;
    if constexpr (KnownRegArgsCpuCall<0x8012A99Cu>(&func_8012A99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012A99C_A4B3 = func_8012A99C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012A99C_A4B3);
        r4 = static_cast<uint32_t>(regargs_result_8012A99C_A4B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012B078:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012B16C;
    }
}

loc_8012B07C:
{
    r0 = MemoryInline::FlatRead8((r19 + 369));
}

loc_8012B084:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_8012B16C;
    }
}

loc_8012B088:
{
    r0 = MemoryInline::FlatRead8((r15 + 911));
}

loc_8012B090:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B16C;
    }
}

loc_8012B094:
{
    r3 = r15;
    // inline leaf 0x8012C268 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 928));
    // end of inlined leaf 0x8012C268
    r17 = r3;
}

loc_8012B0A4:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8012B0B4;
    }
}

loc_8012B0A8:
{
    r0 = MemoryInline::FlatRead8((r19 + 368));
}

loc_8012B0B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8012B16C;
    }
}

loc_8012B0B4:
{
}

loc_8012B0B8:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8012B0C8;
    }
}

loc_8012B0BC:
{
    r0 = MemoryInline::FlatRead8((r19 + 368));
}

loc_8012B0C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012B16C;
    }
}

loc_8012B0C8:
{
}

loc_8012B0CC:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8012B0DC;
    }
}

loc_8012B0D0:
{
    r0 = MemoryInline::FlatRead32((r15 + 1060));
}

loc_8012B0D8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8012B180;
    }
}

loc_8012B0DC:
{
}

loc_8012B0E0:
{
    if ((static_cast<uint32_t>(r21) == static_cast<uint32_t>(1))) {
        goto loc_8012B0EC;
    }
}

loc_8012B0E4:
{
}

loc_8012B0E8:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8012B114;
    }
}

loc_8012B0EC:
{
    r3 = r15;
    r4 = r18;
    r5 = (r1 + 32);
    r6 = (r1 + 20);
    r7 = (r19 + 376);
    f1.d = f31.d;
    r8 = (r1 + 16);
    ctx->lr = 0x8012B10Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012A874u>(&func_8012A874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8012A874_B07E = func_8012A874_ra70_e_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d);
        r4 = regargs_result_8012A874_B07E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A874u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_8012B110:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012B180;
    }
}

loc_8012B114:
{
    r0 = (r30 & 255);
}

loc_8012B11C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8012B13C;
    }
}

loc_8012B120:
{
    r28 = 0;
}

loc_8012B128:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(1))) {
        goto loc_8012B134;
    }
}

loc_8012B12C:
{
    f30.d = MemoryInline::FlatReadFloat32((r1 + 16));
    goto loc_8012B16C;
}

loc_8012B134:
{
    r26 = r17;
    goto loc_8012B16C;
}

loc_8012B13C:
{
}

loc_8012B140:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(1))) {
        goto loc_8012B158;
    }
}

loc_8012B144:
{
}

loc_8012B148:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r17))) {
        goto loc_8012B16C;
    }
}

loc_8012B14C:
{
    r28 = 0;
    r26 = r17;
    goto loc_8012B16C;
}

loc_8012B158:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8012B160:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012B16C;
    }
}

loc_8012B164:
{
    r28 = 0;
    f30.d = f0.d;
}

loc_8012B16C:
{
}

loc_8012B170:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(255))) {
        goto loc_8012B180;
    }
}

loc_8012B174:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r0));
    r14 = r28;
}

loc_8012B180:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead8(r3);
    r0 = (r3 + 253);
    r0 = (r0 & 255);
}

loc_8012B194:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8012B398;
    }
}

loc_8012B198:
{
}

loc_8012B19C:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_8012B380;
    }
}

loc_8012B1A0:
{
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl11_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl11_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl11_0x800CFB50;
    }
}

loc_inl11_0x800CFB48:
{
    r3 = 0;
    goto loc_inl11_cont_800CFB34;
}

loc_inl11_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl11_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl11_0x800CFB64;
    }
}

loc_inl11_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl11_cont_800CFB34;
}

loc_inl11_0x800CFB64:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r4_addr_4 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_4);
}

loc_inl11_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r24 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl12_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl12_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl12_0x800CFB10;
    }
}

loc_inl12_0x800CFB08:
{
    r3 = 0;
    goto loc_inl12_cont_800CFAF4;
}

loc_inl12_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl12_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl12_0x800CFB24;
    }
}

loc_inl12_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl12_cont_800CFAF4;
}

loc_inl12_0x800CFB24:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl12_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r17 = r3;
    r19 = 0;
    r27 = (r24 & 65535);
    goto loc_8012B374;
}

loc_8012B1C4:
{
    r3 = MemoryInline::FlatRead8((r15 + 2));
    r0 = (r19 & 255);
}

loc_8012B1D0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8012B36C;
    }
}

loc_8012B1D4:
{
    r0 = MemoryInline::FlatRead8(r17);
}

loc_8012B1DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B36C;
    }
}

loc_8012B1E0:
{
    r3 = MemoryInline::FlatRead8((r15 + 481));
    r0 = MemoryInline::FlatRead8((r17 + 481));
}

loc_8012B1EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012B36C;
    }
}

loc_8012B1F0:
{
    r4 = MemoryInline::FlatRead8((r17 + 3));
    r0 = MemoryInline::FlatRead8((r15 + 3));
}

loc_8012B1FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_8012B36C;
    }
}

loc_8012B200:
{
    r0 = MemoryInline::FlatRead32((r15 + 456));
    r0 = (r0 & 1);
}

loc_8012B20C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B220;
    }
}

loc_8012B210:
{
    r0 = MemoryInline::FlatRead32((r17 + 456));
    r0 = (r0 & 1);
}

loc_8012B21C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012B36C;
    }
}

loc_8012B220:
{
    r3 = r15;
    ctx->lr = 0x8012B228u;
    if constexpr (KnownRegArgsCpuCall<0x8012CFF4u>(&func_8012CFF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012CFF4_CA26 = func_8012CFF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012CFF4_CA26);
        r4 = static_cast<uint32_t>(regargs_result_8012CFF4_CA26 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012CFF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8012B22C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012B36C;
    }
}

loc_8012B230:
{
    r0 = MemoryInline::FlatRead8((r17 + 485));
}

loc_8012B238:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_8012B36C;
    }
}

loc_8012B23C:
{
}

loc_8012B240:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8012B36C;
    }
}

loc_8012B244:
{
}

loc_8012B248:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_8012B25C;
    }
}

loc_8012B24C:
{
    r3 = r17;
    // inline leaf 0x80133A10 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2380));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x80133A10
}

loc_8012B258:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012B36C;
    }
}

loc_8012B25C:
{
}

loc_8012B260:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_8012B270;
    }
}

loc_8012B264:
{
    r0 = MemoryInline::FlatRead8((r17 + 482));
}

loc_8012B26C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8012B36C;
    }
}

loc_8012B270:
{
}

loc_8012B274:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(1))) {
        goto loc_8012B284;
    }
}

loc_8012B278:
{
    r0 = MemoryInline::FlatRead8((r17 + 482));
}

loc_8012B280:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012B36C;
    }
}

loc_8012B284:
{
    r3 = r17;
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r0 = r3;
    r3 = r15;
    r4 = (r0 & 255);
    ctx->lr = 0x8012B29Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012A99Cu>(&func_8012A99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012A99C_D540 = func_8012A99C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012A99C_D540);
        r4 = static_cast<uint32_t>(regargs_result_8012A99C_D540 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012B2A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012B36C;
    }
}

loc_8012B2A4:
{
    r3 = r15;
    r4 = (r19 & 255);
    // inline leaf 0x8012C270 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 932));
    // end of inlined leaf 0x8012C270
    r24 = r3;
}

loc_8012B2B8:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8012B2C8;
    }
}

loc_8012B2BC:
{
    r0 = MemoryInline::FlatRead32((r15 + 1060));
}

loc_8012B2C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8012B36C;
    }
}

loc_8012B2C8:
{
}

loc_8012B2CC:
{
    if ((static_cast<uint32_t>(r21) == static_cast<uint32_t>(1))) {
        goto loc_8012B2D8;
    }
}

loc_8012B2D0:
{
}

loc_8012B2D4:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8012B300;
    }
}

loc_8012B2D8:
{
    r3 = r15;
    r4 = r18;
    r5 = (r1 + 32);
    r6 = (r1 + 20);
    r7 = (r17 + 392);
    f1.d = f31.d;
    r8 = (r1 + 16);
    ctx->lr = 0x8012B2F8u;
    if constexpr (KnownRegArgsCpuCall<0x8012A874u>(&func_8012A874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8012A874_DDC5 = func_8012A874_ra70_e_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d);
        r4 = regargs_result_8012A874_DDC5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012A874u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_8012B2FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012B36C;
    }
}

loc_8012B300:
{
    r0 = (r29 & 255);
}

loc_8012B308:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8012B33C;
    }
}

loc_8012B30C:
{
    r0 = (r30 & 255);
}

loc_8012B314:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8012B33C;
    }
}

loc_8012B318:
{
}

loc_8012B31C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(255))) {
        goto loc_8012B33C;
    }
}

loc_8012B320:
{
    r29 = r19;
}

loc_8012B328:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(1))) {
        goto loc_8012B334;
    }
}

loc_8012B32C:
{
    f30.d = MemoryInline::FlatReadFloat32((r1 + 16));
    goto loc_8012B36C;
}

loc_8012B334:
{
    r26 = r24;
    goto loc_8012B36C;
}

loc_8012B33C:
{
}

loc_8012B340:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(1))) {
        goto loc_8012B358;
    }
}

loc_8012B344:
{
}

loc_8012B348:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r24))) {
        goto loc_8012B36C;
    }
}

loc_8012B34C:
{
    r29 = r19;
    r26 = r24;
    goto loc_8012B36C;
}

loc_8012B358:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8012B360:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012B36C;
    }
}

loc_8012B364:
{
    r29 = r19;
    f30.d = f0.d;
}

loc_8012B36C:
{
    r19 = (r19 + 1);
    r17 = (r17 + 2840);
}

loc_8012B374:
{
    r0 = (r19 & 255);
}

loc_8012B37C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r27))) {
        goto loc_8012B1C4;
    }
}

loc_8012B380:
{
    r0 = (r29 & 255);
}

loc_8012B388:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8012B398;
    }
}

loc_8012B38C:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r0));
    r14 = r29;
}

loc_8012B398:
{
    r0 = MemoryInline::FlatRead8((r1 + 56));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r14));
}

loc_8012B3B4:
{
    r0 = 168;
    addr_psqx_8012B3B8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8012B3B8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r0 = 152;
    addr_psqx_8012B3C4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8012B3C4_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r11 = (r1 + 144);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[14] = r14_entry;
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

extern "C" void func_8012AA4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012AA4C_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012AA4C func_8012AA4C preserves=true fpr_mask=0x00000000
