#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012ED54(CpuContext* ctx);
extern "C" uint32_t func_8012ED54_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_80144644(CpuContext* ctx);
extern "C" uint64_t func_80144644_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80339730(CpuContext* ctx);
extern "C" uint64_t func_80339730_ra380_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B4E3C(CpuContext* ctx);
extern "C" uint32_t func_803B4E3C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803B107C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;

    goto loc_803B107C;

loc_803B107C:
{
    r3 = 0;
    ctx->lr = 0x803B1084u;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B4E3C_89D = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_89D;
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80339730_1449 = func_80339730_ra380_1fe_18_0(ctx, r7, r8, r9, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80339730_1449);
        r4 = static_cast<uint32_t>(regargs_result_80339730_1449 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x80339730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        const auto regargs_result_80144644_2630 = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_2630);
        r4 = static_cast<uint32_t>(regargs_result_80144644_2630 >> 32);
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
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
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
        const auto regargs_result_8012ED54_2B0F = func_8012ED54_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012ED54_2B0F;
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
        const auto regargs_result_80144644_3B6F = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_3B6F);
        r4 = static_cast<uint32_t>(regargs_result_80144644_3B6F >> 32);
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
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
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
        const auto regargs_result_8012ED54_404E = func_8012ED54_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012ED54_404E;
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
}

loc_803B17C8:
{
    r11 = (r1 + 144);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B107C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B107C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x68003FBF gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B107C func_803B107C preserves=true fpr_mask=0x00000000
