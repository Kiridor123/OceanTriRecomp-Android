#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEA98(CpuContext* ctx);
extern "C" uint64_t func_800CEA98_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80125FB8(CpuContext* ctx);
extern "C" uint32_t func_80125FB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012ED54(CpuContext* ctx);
extern "C" uint32_t func_8012ED54_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_80142444(CpuContext* ctx);
extern "C" uint64_t func_80142444_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80142D4C(CpuContext* ctx);
extern "C" uint64_t func_80142D4C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80144644(CpuContext* ctx);
extern "C" uint64_t func_80144644_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80146B80(CpuContext* ctx);
extern "C" uint64_t func_80146B80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80339730(CpuContext* ctx);
extern "C" uint64_t func_80339730_ra380_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B4B9C(CpuContext* ctx);
extern "C" uint32_t func_803B4B9C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4E3C(CpuContext* ctx);
extern "C" uint32_t func_803B4E3C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B6F90(CpuContext* ctx);
extern "C" uint64_t func_803B6F90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80451350(CpuContext* ctx);
extern "C" uint64_t func_80451350_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803B0FFC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_803B0FFC;

loc_803B0FFC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r1 + 112), r0);
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
}

loc_803B1030:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B17C8;
    }
}

loc_803B1034:
{
    r29 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803B103C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803B17C8;
    }
}

loc_803B1040:
{
    r0 = MemoryInline::FlatRead8((r29 + 26997));
}

loc_803B1048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B17C8;
    }
}

loc_803B104C:
{
    r3 = 0;
    ctx->lr = 0x803B1054u;
    if constexpr (KnownRegArgsCpuCall<0x803B4B9Cu>(&func_803B4B9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803B4B9C_1A97 = func_803B4B9C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4B9C_1A97;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B4B9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r27 = r3;
    r0 = MemoryInline::FlatRead8((r29 + 27000));
}

loc_803B1060:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(13))) {
        goto loc_803B17C8;
    }
}

loc_803B1064:
{
    r3 = 0x80600000u;
    r3 = (r3 + -31944);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x803B107Cu:
        goto loc_803B107C;
        break;
    case 0x803B134Cu:
        goto loc_803B134C;
        break;
    case 0x803B13C4u:
        goto loc_803B13C4;
        break;
    case 0x803B141Cu:
        goto loc_803B141C;
        break;
    case 0x803B1440u:
        goto loc_803B1440;
        break;
    case 0x803B1594u:
        goto loc_803B1594;
        break;
    case 0x803B17C8u:
        goto loc_803B17C8;
        break;
    case 0x803B15D8u:
        goto loc_803B15D8;
        break;
    case 0x803B1600u:
        goto loc_803B1600;
        break;
    case 0x803B1628u:
        goto loc_803B1628;
        break;
    case 0x803B1788u:
        goto loc_803B1788;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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

loc_803B107C:
{
    r3 = 0;
    ctx->lr = 0x803B1084u;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B4E3C_2575 = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_2575;
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
        InvokeDirectCpu<0x803B4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803B1088:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B1118;
    }
}

loc_803B108C:
{
    r0 = MemoryInline::FlatRead8((r29 + 26999));
}

loc_803B1094:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_803B17C8;
    }
}

loc_803B1098:
{
    r3 = MemoryInline::FlatRead32((r29 + 27004));
    r3 = MH3_TickLoad(r3, 2151354520);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 27004), r0);
    r0 = MemoryInline::FlatRead32((r29 + 27004));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5496));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5500));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5460));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803B10DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_803B17C8;
    }
}

loc_803B10E0:
{
    r3 = (r29 + 817);
    r4 = (r29 + 26464);
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_803B10F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B1108;
    }
}

loc_803B10FC:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B1108:
{
    ctx->lr = 0x803B110Cu;
    if constexpr (KnownRegArgsCpuCall<0x80339730u>(&func_80339730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80339730_3174 = func_80339730_ra380_1fe_18_0(ctx, r7, r8, r9, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80339730_3174);
        r4 = static_cast<uint32_t>(regargs_result_80339730_3174 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
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
        InvokeDirectCpu<0x80339730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    r0 = 11;
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B1118:
{
    r0 = (r27 & 255);
}

loc_803B1120:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803B1138;
    }
}

loc_803B1124:
{
}

loc_803B1128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803B11A4;
    }
}

loc_803B112C:
{
}

loc_803B1130:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803B1254;
    }
}

loc_803B1134:
{
    goto loc_803B17C8;
}

loc_803B1138:
{
    r0 = MemoryInline::FlatRead8((r29 + 26999));
}

loc_803B1140:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_803B17C8;
    }
}

loc_803B1144:
{
    r3 = MemoryInline::FlatRead32((r29 + 27004));
    r3 = MH3_TickLoad(r3, 2151354692);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 27004), r0);
    r0 = MemoryInline::FlatRead32((r29 + 27004));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5496));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5500));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5460));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803B1188:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_803B17C8;
    }
}

loc_803B118C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 27004), r0);
    r3 = MemoryInline::FlatRead8((r29 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B11A4:
{
    r27 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r27);
    MemoryInline::FlatWriteRam32((r1 + 32), r27);
    r0 = MemoryInline::FlatRead8((r29 + 26999));
}

loc_803B11B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_803B17C8;
    }
}

loc_803B11BC:
{
    r0 = MemoryInline::FlatRead8((r29 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803B11C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803B17C8;
    }
}

loc_803B11CC:
{
    r3 = 0;
    r4 = (r1 + 36);
    r5 = (r1 + 32);
    ctx->lr = 0x803B11DCu;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80144644_4467 = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_4467);
        r4 = static_cast<uint32_t>(regargs_result_80144644_4467 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_803B11E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B17C8;
    }
}

loc_803B11E8:
{
    r3 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = 0x803B11F0u;
    if constexpr (KnownRegArgsCpuCall<0x8012ED54u>(&func_8012ED54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_8012ED54_4991 = func_8012ED54_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012ED54_4991;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012ED54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_803B11F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803B17C8;
    }
}

loc_803B11F8:
{
    r3 = MemoryInline::FlatRead32((r29 + 27004));
    r3 = MH3_TickLoad(r3, 2151354872);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 27004), r0);
    r0 = MemoryInline::FlatRead32((r29 + 27004));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5496));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5500));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5460));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803B123C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_803B17C8;
    }
}

loc_803B1240:
{
    MemoryInline::FlatWrite32((r29 + 27004), r27);
    r3 = MemoryInline::FlatRead8((r29 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B1254:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = MemoryInline::FlatRead8((r29 + 26999));
}

loc_803B1268:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_803B17C8;
    }
}

loc_803B126C:
{
    r0 = MemoryInline::FlatRead8((r29 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803B1278:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_803B17C8;
    }
}

loc_803B127C:
{
    r4 = 0;
    r0 = MemoryInline::FlatRead16((r30 + 8824));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803B1288:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803B1294;
    }
}

loc_803B128C:
{
    r4 = 1;
    r3 = 0;
}

loc_803B1294:
{
    r0 = MemoryInline::FlatRead16((r30 + 8840));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803B129C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803B12A8;
    }
}

loc_803B12A0:
{
    r4 = (r4 + 1);
    r3 = 1;
}

loc_803B12A8:
{
    r0 = MemoryInline::FlatRead16((r30 + 8856));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803B12B0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803B12BC;
    }
}

loc_803B12B4:
{
    r4 = (r4 + 1);
    r3 = 2;
}

loc_803B12BC:
{
}

loc_803B12C0:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(1))) {
        goto loc_803B17C8;
    }
}

loc_803B12C4:
{
    r4 = (r1 + 28);
    r5 = (r1 + 24);
    ctx->lr = 0x803B12D0u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80144644_5A0A = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_5A0A);
        r4 = static_cast<uint32_t>(regargs_result_80144644_5A0A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_803B12D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B17C8;
    }
}

loc_803B12DC:
{
    r3 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = 0x803B12E4u;
    if constexpr (KnownRegArgsCpuCall<0x8012ED54u>(&func_8012ED54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_8012ED54_5F34 = func_8012ED54_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012ED54_5F34;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012ED54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_803B12E8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803B17C8;
    }
}

loc_803B12EC:
{
    r3 = MemoryInline::FlatRead32((r29 + 27004));
    r3 = MH3_TickLoad(r3, 2151355116);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 27004), r0);
    r0 = MemoryInline::FlatRead32((r29 + 27004));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5496));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5500));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5460));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803B1330:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_803B17C8;
    }
}

loc_803B1334:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 27004), r0);
    r3 = MemoryInline::FlatRead8((r29 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B134C:
{
    r27 = 0;
    MemoryInline::FlatWrite32((r29 + 27004), r27);
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead8((r3 + 815));
    r4 = MemoryInline::FlatRead8((r29 + 26999));
    r5 = r29;
    r6 = 0x806D0000u;
    r12 = MemoryInline::FlatRead32((r6 + -6000));
    ctr = r12;
    ctx->lr = 0x803B1378u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
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
    r0 = (r3 & 255);
}

loc_803B1380:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B138C;
    }
}

loc_803B1384:
{
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r27));
    goto loc_803B17C8;
}

loc_803B138C:
{
    r3 = MemoryInline::FlatRead8((r29 + 26999));
    r0 = (r3 + 3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3 = (r29 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 793));
    if constexpr (KnownRegArgsCpuCall<0x803B6F90u>(&func_803B6F90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803B6F90_702D = func_803B6F90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B6F90_702D);
        r4 = static_cast<uint32_t>(regargs_result_803B6F90_702D >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B6F90u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803B13A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B13B4;
    }
}

loc_803B13AC:
{
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r27));
    goto loc_803B17C8;
}

loc_803B13B4:
{
    r3 = MemoryInline::FlatRead8((r29 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B13C4:
{
    r3 = MemoryInline::FlatRead8((r29 + 26999));
    r0 = (r3 + 3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r27 = (r29 + r0);
    r3 = MemoryInline::FlatRead8((r27 + 793));
    ctx->lr = 0x803B13DCu;
    if constexpr (KnownRegArgsCpuCall<0x80146B80u>(&func_80146B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80146B80_761E = func_80146B80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80146B80_761E);
        r4 = static_cast<uint32_t>(regargs_result_80146B80_761E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x80146B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_803B13E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B17C8;
    }
}

loc_803B13E4:
{
    r3 = MemoryInline::FlatRead8((r27 + 793));
    ctx->lr = 0x803B13ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    InvokeDirectCpu<0x801410B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
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
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 26998), static_cast<uint8_t>(r0));
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_803B13FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B1410;
    }
}

loc_803B1400:
{
    r3 = MemoryInline::FlatRead8((r29 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B1410:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B141C:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x803B1428u;
    if constexpr (KnownRegArgsCpuCall<0x800CEA98u>(&func_800CEA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800CEA98_8309 = func_800CEA98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEA98_8309);
        r4 = static_cast<uint32_t>(regargs_result_800CEA98_8309 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CEA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_803B142C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803B17C8;
    }
}

loc_803B1430:
{
    r3 = MemoryInline::FlatRead8((r29 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B1440:
{
    r3 = (r1 + 72);
    ctx->lr = 0x803B1448u;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_88E1 = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_88E1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80125FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = 0;
    ctx->lr = 0x803B1450u;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B4E3C_8B53 = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_8B53;
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
        InvokeDirectCpu<0x803B4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803B1454:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B1460;
    }
}

loc_803B1458:
{
    r27 = 3;
    goto loc_803B1468;
}

loc_803B1460:
{
    r3 = MemoryInline::FlatRead8((r29 + 26999));
    r27 = (r3 + 3);
}

loc_803B1468:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r31 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r31 + 793));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 32352);
    r3_addr_2 = (r3 + r0);
    r28 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_803B1488:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_803B17C8;
    }
}

loc_803B148C:
{
    goto loc_803B14AC;
}

loc_803B1490:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl5_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_inl5_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x802B06E4:
{
    r3 = r0;
    goto loc_inl5_cont_802B06CC;
}

loc_inl5_return:
{
}

loc_inl5_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803B14A4:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r0))) {
        goto loc_803B14B8;
    }
}

loc_803B14A8:
{
    r28 = (r28 + 8);
}

loc_803B14AC:
{
    r26 = MemoryInline::FlatRead8(r28);
}

loc_803B14B4:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(255))) {
        goto loc_803B1490;
    }
}

loc_803B14B8:
{
    r0 = (r26 & 255);
}

loc_803B14C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_803B17C8;
    }
}

loc_803B14C4:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r4 = (r27 & 65535);
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 1132), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 797));
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r27);
    MemoryInline::FlatWrite8((r3 + 1144), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 798));
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r27);
    MemoryInline::FlatWrite8((r3 + 1150), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 799));
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r27);
    MemoryInline::FlatWrite8((r3 + 1156), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 800));
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r27);
    MemoryInline::FlatWrite8((r3 + 1162), static_cast<uint8_t>(r4));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & -16);
    r4 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 1132));
    MemoryInline::FlatWrite32((r4 + 8820), r0);
    r0 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWrite32((r4 + 8828), r0);
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r4 + 8824), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 793));
    MemoryInline::FlatWrite16((r4 + 8826), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 8832), r0);
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r0 = MemoryInline::FlatRead8((r31 + 794));
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    r4 = (r4 + 8);
    ctx->lr = 0x803B1574u;
    if constexpr (KnownRegArgsCpuCall<0x80142444u>(&func_80142444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142444_9F3B = func_80142444_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142444_9F3B);
        r4 = static_cast<uint32_t>(regargs_result_80142444_9F3B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80142444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = MemoryInline::FlatRead8((r31 + 793));
    r4 = (r1 + 72);
    r5 = (r27 & 65535);
    ctx->lr = 0x803B1584u;
    if constexpr (KnownRegArgsCpuCall<0x80142D4Cu>(&func_80142D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80142D4C_A418 = func_80142D4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80142D4C_A418);
        r4 = static_cast<uint32_t>(regargs_result_80142D4C_A418 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
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
        InvokeDirectCpu<0x80142D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        f0 = ctx->fpr[0];
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
    r3 = MemoryInline::FlatRead8((r29 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B1594:
{
    r27 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r27);
    r3 = MemoryInline::FlatRead8((r29 + 26999));
    r0 = (r3 + 3);
    r3 = (r0 & 65535);
    r4 = (r1 + 20);
    r5 = (r1 + 16);
    ctx->lr = 0x803B15B8u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80144644_AF28 = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_AF28);
        r4 = static_cast<uint32_t>(regargs_result_80144644_AF28 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_803B15C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B17C8;
    }
}

loc_803B15C4:
{
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r27));
    r3 = MemoryInline::FlatRead8((r29 + 26999));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 26999), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B15D8:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x803B15E4u;
    if constexpr (KnownRegArgsCpuCall<0x800CEA98u>(&func_800CEA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800CEA98_B4F0 = func_800CEA98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEA98_B4F0);
        r4 = static_cast<uint32_t>(regargs_result_800CEA98_B4F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CEA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_803B15E8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803B17C8;
    }
}

loc_803B15EC:
{
    ctx->lr = 0x803B15F0u;
    if constexpr (KnownRegArgsCpuCall<0x80339730u>(&func_80339730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80339730_BAB1 = func_80339730_ra380_1fe_18_0(ctx, r7, r8, r9, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80339730_BAB1);
        r4 = static_cast<uint32_t>(regargs_result_80339730_BAB1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
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
        InvokeDirectCpu<0x80339730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    r3 = MemoryInline::FlatRead8((r29 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B1600:
{
    if constexpr (KnownRegArgsCpuCall<0x80451350u>(&func_80451350)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80451350_C3CA = func_80451350_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80451350_C3CA);
        r4 = static_cast<uint32_t>(regargs_result_80451350_C3CA >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80451350u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = MemoryInline::FlatRead8((r29 + 27044));
}

loc_803B1610:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_803B17C8;
    }
}

loc_803B1614:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 27044), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B1628:
{
    r3 = (r1 + 40);
    ctx->lr = 0x803B1630u;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_C897 = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_C897;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80125FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = 0;
    ctx->lr = 0x803B1638u;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B4E3C_CB09 = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_CB09;
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
        InvokeDirectCpu<0x803B4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803B163C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B1648;
    }
}

loc_803B1640:
{
    r28 = 3;
    goto loc_803B1650;
}

loc_803B1648:
{
    r3 = MemoryInline::FlatRead8((r29 + 26999));
    r28 = (r3 + 3);
}

loc_803B1650:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r31 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r31 + 793));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 32352);
    r3_addr_3 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_3);
}

loc_803B1670:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_803B17C8;
    }
}

loc_803B1674:
{
    goto loc_803B1694;
}

loc_803B1678:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl7_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_5);
}

loc_inl7_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x802B06E4:
{
    r3 = r0;
    goto loc_inl7_cont_802B06CC;
}

loc_inl7_return:
{
}

loc_inl7_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803B168C:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r0))) {
        goto loc_803B16A0;
    }
}

loc_803B1690:
{
    r27 = (r27 + 8);
}

loc_803B1694:
{
    r26 = MemoryInline::FlatRead8(r27);
}

loc_803B169C:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(255))) {
        goto loc_803B1678;
    }
}

loc_803B16A0:
{
    r0 = (r26 & 255);
}

loc_803B16A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_803B17C8;
    }
}

loc_803B16AC:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    r4 = (r28 & 65535);
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 1132), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 797));
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r28);
    MemoryInline::FlatWrite8((r3 + 1144), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 798));
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r28);
    MemoryInline::FlatWrite8((r3 + 1150), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 799));
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r28);
    MemoryInline::FlatWrite8((r3 + 1156), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 800));
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r28);
    MemoryInline::FlatWrite8((r3 + 1162), static_cast<uint8_t>(r4));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & -16);
    r4 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 1132));
    MemoryInline::FlatWrite32((r4 + 8820), r0);
    r0 = MemoryInline::FlatRead32((r27 + 4));
    MemoryInline::FlatWrite32((r4 + 8828), r0);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r4 + 8824), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 793));
    MemoryInline::FlatWrite16((r4 + 8826), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 8832), r0);
    // inline leaf 0x80451720 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x80451720
}

loc_803B1748:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B1788;
    }
}

loc_803B174C:
{
    r3 = (r1 + 40);
    r4 = MemoryInline::FlatRead32((r27 + 4));
    r0 = MemoryInline::FlatRead8((r31 + 794));
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    r4 = (r4 + 8);
    ctx->lr = 0x803B1768u;
    if constexpr (KnownRegArgsCpuCall<0x80142444u>(&func_80142444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142444_E111 = func_80142444_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142444_E111);
        r4 = static_cast<uint32_t>(regargs_result_80142444_E111 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80142444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = MemoryInline::FlatRead8((r31 + 793));
    r4 = (r1 + 40);
    r5 = (r28 & 65535);
    ctx->lr = 0x803B1778u;
    if constexpr (KnownRegArgsCpuCall<0x80142D4Cu>(&func_80142D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80142D4C_E5EE = func_80142D4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80142D4C_E5EE);
        r4 = static_cast<uint32_t>(regargs_result_80142D4C_E5EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
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
        InvokeDirectCpu<0x80142D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        f0 = ctx->fpr[0];
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
    r3 = MemoryInline::FlatRead8((r29 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B17C8;
}

loc_803B1788:
{
    r27 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 8), r27);
    r3 = MemoryInline::FlatRead8((r29 + 26999));
    r0 = (r3 + 3);
    r3 = (r0 & 65535);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x803B17ACu;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80144644_F0FC = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_F0FC);
        r4 = static_cast<uint32_t>(regargs_result_80144644_F0FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_803B17B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B17C8;
    }
}

loc_803B17B8:
{
    MemoryInline::FlatWrite8((r29 + 27000), static_cast<uint8_t>(r27));
    r3 = MemoryInline::FlatRead8((r29 + 26999));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 26999), static_cast<uint8_t>(r0));
}

loc_803B17C8:
{
    r11 = (r1 + 144);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B0FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B0FFC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x03FFFFFF gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B0FFC func_803B0FFC preserves=true fpr_mask=0x00000000
