#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D8B20(CpuContext* ctx);
extern "C" uint64_t func_802D8B20_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D8D2C(CpuContext* ctx);
extern "C" uint64_t func_802D8D2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D8E58(CpuContext* ctx);
extern "C" uint64_t func_802D8E58_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802D8F0C(CpuContext* ctx);
extern "C" uint64_t func_802D8F0C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8035B660(CpuContext* ctx);
extern "C" uint64_t func_8035B660_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A8DB0(CpuContext* ctx);
extern "C" uint32_t func_803A8DB0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803AAF24(CpuContext* ctx);
extern "C" uint64_t func_803AAF24_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803AB978(CpuContext* ctx);
extern "C" uint64_t func_803AB978_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803ABBD8(CpuContext* ctx);
extern "C" uint64_t func_803ABBD8_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803ABD40(CpuContext* ctx);
extern "C" uint64_t func_803ABD40_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803ABEA8(CpuContext* ctx);
extern "C" uint64_t func_803ABEA8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AC714(CpuContext* ctx);
extern "C" uint64_t func_803AC714_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803ACD74(CpuContext* ctx);
extern "C" uint64_t func_803ACD74_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803ACEF4(CpuContext* ctx);
extern "C" uint64_t func_803ACEF4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B211C(CpuContext* ctx);
extern "C" uint64_t func_803B211C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B224C(CpuContext* ctx);
extern "C" uint64_t func_803B224C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B234C(CpuContext* ctx);
extern "C" uint64_t func_803B234C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B3414(CpuContext* ctx);
extern "C" uint32_t func_803B3414_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4DC4(CpuContext* ctx);
extern "C" uint32_t func_803B4DC4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B5094(CpuContext* ctx);
extern "C" uint32_t func_803B5094_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B537C(CpuContext* ctx);
extern "C" uint32_t func_803B537C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803B23B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    goto loc_803B23B8;

loc_803B23B8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r1 + 196), r0);
    r11 = (r1 + 192);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r31 = MemoryInline::FlatRead32((r13 + -16864));
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r30 = r3;
    r0 = MemoryInline::FlatRead16((r31 + 16));
    MemoryInline::FlatWriteRam16((r3 + 480), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 484), r0);
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r26 = r3;
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r29 = (r26 + r0);
    r0 = MemoryInline::FlatRead8((r28 + 250));
}

loc_803B2410:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_803B2438;
    }
}

loc_803B2414:
{
    r3 = 21;
    ctx->lr = 0x803B241Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_1D27 = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_1D27;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x803B242Cu;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8045E54C_2057 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_2057);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_2057 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = 0;
    r4 = (r1 + 8);
    ctx->lr = 0x803B2438u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8035B660_275A = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_275A);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_275A >> 32);
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
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_803B2438:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2319));
}

loc_803B2448:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803B2464;
    }
}

loc_803B244C:
{
    r3 = (r30 + 340);
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = (r4 + 26488);
    r5 = 140;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_803B24E8;
}

loc_803B2464:
{
    r3 = (r29 + 632);
    r4 = r30;
    ctx->lr = 0x803B2470u;
    if constexpr (KnownRegArgsCpuCall<0x803B211Cu>(&func_803B211C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803B211C_2D80 = func_803B211C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B211C_2D80);
        r4 = static_cast<uint32_t>(regargs_result_803B211C_2D80 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B211Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = r30;
    r4 = (r29 + 632);
    ctx->lr = 0x803B247Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B224Cu>(&func_803B224C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803B224C_31B1 = func_803B224C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B224C_31B1);
        r4 = static_cast<uint32_t>(regargs_result_803B224C_31B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B224Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_803B2484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B24C0;
    }
}

loc_803B2488:
{
    r0 = MemoryInline::FlatRead8((r28 + 250));
}

loc_803B2490:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_803B24C0;
    }
}

loc_803B2494:
{
}

loc_803B2498:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_803B24C0;
    }
}

loc_803B249C:
{
    r3 = 28;
    ctx->lr = 0x803B24A4u;
    if constexpr (KnownRegArgsCpuCall<0x803B3414u>(&func_803B3414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B3414_377E = func_803B3414_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B3414_377E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B3414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x803B24B4u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8045E54C_3AAE = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_3AAE);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_3AAE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = 0;
    r4 = (r1 + 8);
    ctx->lr = 0x803B24C0u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8035B660_41B1 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_41B1);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_41B1 >> 32);
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
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_803B24C0:
{
    r3 = (r29 + 632);
    ctx->lr = 0x803B24C8u;
    if constexpr (KnownRegArgsCpuCall<0x803B234Cu>(&func_803B234C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803B234C_455F = func_803B234C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B234C_455F);
        r4 = static_cast<uint32_t>(regargs_result_803B234C_455F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B234Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r30 + 340);
    r4 = (r29 + 632);
    r5 = 140;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 436);
    r4 = (r29 + 736);
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803B24E8:
{
    // inline leaf 0x803B3B98 (6 guest instruction(s))
    r3 = 0x806C0000u;
    r4 = (r3 + 31960);
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r3 = (r0 - r3);
    // end of inlined leaf 0x803B3B98
    MemoryInline::FlatWriteRam32((r30 + 328), r3);
    r0 = MemoryInline::FlatRead32((r30 + 328));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5456));
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    r26 = 1127219200;
    stackword9 = r26;
    MemoryInline::FlatWriteRam32((r1 + 136), r26);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80660000u;
    r27 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5500));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_4E60 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_4E60;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r30 + 332), r3);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    MemoryInline::FlatWriteRam32((r30 + 336), r0);
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r4 + 1168);
    r4 = (r4 + 1250);
    ctx->lr = 0x803B2544u;
    if constexpr (KnownRegArgsCpuCall<0x802D8B20u>(&func_802D8B20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802D8B20_5361 = func_802D8B20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D8B20_5361);
        r4 = static_cast<uint32_t>(regargs_result_802D8B20_5361 >> 32);
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
        InvokeDirectCpu<0x802D8B20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam16((r30 + 934), static_cast<uint16_t>(r3));
    // inline leaf 0x803B3B98 (6 guest instruction(s))
    r3 = 0x806C0000u;
    r4 = (r3 + 31960);
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r3 = (r0 - r3);
    // end of inlined leaf 0x803B3B98
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5496));
    r0 = (r3 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    stackword11 = r26;
    MemoryInline::FlatWriteRam32((r1 + 144), r26);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword10));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5500));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 152), f0.d);
    r0 = fctiwzword0;
    r3 = (r0 & 65535);
    ctx->lr = 0x803B2588u;
    if constexpr (KnownRegArgsCpuCall<0x802D8D2Cu>(&func_802D8D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802D8D2C_5B68 = func_802D8D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D8D2C_5B68);
        r4 = static_cast<uint32_t>(regargs_result_802D8D2C_5B68 >> 32);
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
        InvokeDirectCpu<0x802D8D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam16((r30 + 936), static_cast<uint16_t>(r3));
    r3 = (r30 + 938);
    ctx->lr = 0x803B2594u;
    if constexpr (KnownRegArgsCpuCall<0x802D8E58u>(&func_802D8E58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802D8E58_5F67 = func_802D8E58_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D8E58_5F67);
        r4 = static_cast<uint32_t>(regargs_result_802D8E58_5F67 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x802D8E58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r4 + 1168);
    r4 = (r4 + 1250);
    ctx->lr = 0x803B25A4u;
    if constexpr (KnownRegArgsCpuCall<0x802D8F0Cu>(&func_802D8F0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802D8F0C_634B = func_802D8F0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D8F0C_634B);
        r4 = static_cast<uint32_t>(regargs_result_802D8F0C_634B >> 32);
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
        InvokeDirectCpu<0x802D8F0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r30 + 988), r3);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = (r4 + 1168);
    r5 = 82;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 82);
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = (r4 + 1250);
    r5 = 82;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 164);
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = (r4 + 1332);
    r5 = 164;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 1076), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x803B25F4u;
    if constexpr (KnownRegArgsCpuCall<0x803B5094u>(&func_803B5094)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B5094_6A97 = func_803B5094_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B5094_6A97;
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
        InvokeDirectCpu<0x803B5094u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803B25F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B265C;
    }
}

loc_803B25FC:
{
    ctx->lr = 0x803B2600u;
    if constexpr (KnownRegArgsCpuCall<0x803A8DB0u>(&func_803A8DB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803A8DB0_6E27 = func_803A8DB0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A8DB0_6E27;
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
        InvokeDirectCpu<0x803A8DB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r3 + -65536);
    r0 = (r3 + 5536);
    r0 = (r0 & 65535);
}

loc_803B2610:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(12))) {
        goto loc_803B265C;
    }
}

loc_803B2614:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x80600000u;
    r3 = (r3 + -32072);
    r3_addr_1 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead32((r30 + 328));
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 * 30);
}

loc_803B2634:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_803B2644;
    }
}

loc_803B2638:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r30 + 1076), static_cast<uint8_t>(r0));
    goto loc_803B265C;
}

loc_803B2644:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 * 30);
}

loc_803B2650:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_803B265C;
    }
}

loc_803B2654:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 1076), static_cast<uint8_t>(r0));
}

loc_803B265C:
{
    ctx->lr = 0x803B2660u;
    if constexpr (KnownRegArgsCpuCall<0x803AAF24u>(&func_803AAF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803AAF24_75A0 = func_803AAF24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAF24_75A0);
        r4 = static_cast<uint32_t>(regargs_result_803AAF24_75A0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803AAF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803B2664:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B26B0;
    }
}

loc_803B2668:
{
    ctx->lr = 0x803B266Cu;
    if constexpr (KnownRegArgsCpuCall<0x803A8DB0u>(&func_803A8DB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803A8DB0_797B = func_803A8DB0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A8DB0_797B;
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
        InvokeDirectCpu<0x803A8DB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
}

loc_803B2674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803B26A4;
    }
}

loc_803B2678:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = 0;
    // inline leaf 0x803AA304 (8 guest instruction(s))
    r0 = (r4 * 96);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 148));
    r3 = (r0 & 32);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x803AA304
}

loc_803B2688:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B2698;
    }
}

loc_803B268C:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r28 + 250), static_cast<uint8_t>(r0));
    goto loc_803B272C;
}

loc_803B2698:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r28 + 250), static_cast<uint8_t>(r0));
    goto loc_803B272C;
}

loc_803B26A4:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r28 + 250), static_cast<uint8_t>(r0));
    goto loc_803B272C;
}

loc_803B26B0:
{
    r0 = MemoryInline::FlatRead8((r28 + 250));
}

loc_803B26B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803B272C;
    }
}

loc_803B26BC:
{
    r3 = 0;
    ctx->lr = 0x803B26C4u;
    if constexpr (KnownRegArgsCpuCall<0x803B5094u>(&func_803B5094)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B5094_81B6 = func_803B5094_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B5094_81B6;
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
        InvokeDirectCpu<0x803B5094u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803B26C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B26E0;
    }
}

loc_803B26CC:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r28 + 250));
    r5 = r30;
    ctx->lr = 0x803B26DCu;
    if constexpr (KnownRegArgsCpuCall<0x803ACEF4u>(&func_803ACEF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803ACEF4_8596 = func_803ACEF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803ACEF4_8596);
        r4 = static_cast<uint32_t>(regargs_result_803ACEF4_8596 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x803ACEF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    goto loc_803B272C;
}

loc_803B26E0:
{
    r3 = 0;
    ctx->lr = 0x803B26E8u;
    if constexpr (KnownRegArgsCpuCall<0x803B537Cu>(&func_803B537C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B537C_89C4 = func_803B537C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B537C_89C4;
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
        InvokeDirectCpu<0x803B537Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803B26EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B2700;
    }
}

loc_803B26F0:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r28 + 250));
    ctx->lr = 0x803B26FCu;
    if constexpr (KnownRegArgsCpuCall<0x803ABBD8u>(&func_803ABBD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803ABBD8_8D95 = func_803ABBD8_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803ABBD8_8D95);
        r4 = static_cast<uint32_t>(regargs_result_803ABBD8_8D95 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803ABBD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    goto loc_803B272C;
}

loc_803B2700:
{
    r3 = 0;
    ctx->lr = 0x803B2708u;
    if constexpr (KnownRegArgsCpuCall<0x803B4DC4u>(&func_803B4DC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B4DC4_9320 = func_803B4DC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4DC4_9320;
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
        InvokeDirectCpu<0x803B4DC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803B270C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B2720;
    }
}

loc_803B2710:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r28 + 250));
    ctx->lr = 0x803B271Cu;
    if constexpr (KnownRegArgsCpuCall<0x803ABD40u>(&func_803ABD40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803ABD40_96F1 = func_803ABD40_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803ABD40_96F1);
        r4 = static_cast<uint32_t>(regargs_result_803ABD40_96F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803ABD40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    goto loc_803B272C;
}

loc_803B2720:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead8((r28 + 250));
    ctx->lr = 0x803B272Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AB978u>(&func_803AB978)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803AB978_9CB0 = func_803AB978_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803AB978_9CB0);
        r4 = static_cast<uint32_t>(regargs_result_803AB978_9CB0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803AB978u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_803B272C:
{
    r0 = MemoryInline::FlatRead8((r28 + 250));
}

loc_803B2734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803B2744;
    }
}

loc_803B2738:
{
}

loc_803B273C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_803B2750;
    }
}

loc_803B2740:
{
    goto loc_803B275C;
}

loc_803B2744:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 482), static_cast<uint8_t>(r0));
    goto loc_803B2798;
}

loc_803B2750:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r30 + 482), static_cast<uint8_t>(r0));
    goto loc_803B2798;
}

loc_803B275C:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8((r30 + 482), static_cast<uint8_t>(r0));
    r3 = (r30 + 340);
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = (r4 + 26488);
    r5 = 140;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 938);
    r4 = 0;
    r5 = 48;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWriteRam16((r30 + 934), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r30 + 936), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r30 + 988), r0);
}

loc_803B2798:
{
    r0 = MemoryInline::FlatRead8((r30 + 482));
}

loc_803B27A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803B281C;
    }
}

loc_803B27A4:
{
    r3 = 0;
    ctx->lr = 0x803B27ACu;
    if constexpr (KnownRegArgsCpuCall<0x803B4DC4u>(&func_803B4DC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803B4DC4_A895 = func_803B4DC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4DC4_A895;
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
        InvokeDirectCpu<0x803B4DC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_803B27B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B27D4;
    }
}

loc_803B27B4:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    ctx->lr = 0x803B27BCu;
    if constexpr (KnownRegArgsCpuCall<0x803ABEA8u>(&func_803ABEA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803ABEA8_AC59 = func_803ABEA8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803ABEA8_AC59);
        r4 = static_cast<uint32_t>(regargs_result_803ABEA8_AC59 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x803ABEA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead32((r3 + 27308));
    MemoryInline::FlatWriteRam32((r30 + 1000), r0);
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = r29;
    ctx->lr = 0x803B27D4u;
    if constexpr (KnownRegArgsCpuCall<0x803AC714u>(&func_803AC714)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803AC714_B12B = func_803AC714_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AC714_B12B);
        r4 = static_cast<uint32_t>(regargs_result_803AC714_B12B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x803AC714u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_803B27D4:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = r29;
    ctx->lr = 0x803B27E0u;
    if constexpr (KnownRegArgsCpuCall<0x803ACD74u>(&func_803ACD74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_803ACD74_B594 = func_803ACD74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803ACD74_B594);
        r4 = static_cast<uint32_t>(regargs_result_803ACD74_B594 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x803ACD74u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r4 + 148));
    r0 = (r3 & 1);
}

loc_803B27F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B2800;
    }
}

loc_803B27F4:
{
    r0 = (r3 & 1024);
}

loc_803B27FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B281C;
    }
}

loc_803B2800:
{
    r0 = MemoryInline::FlatRead16((r4 + 152));
}

loc_803B2808:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(25))) {
        goto loc_803B281C;
    }
}

loc_803B280C:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2226), static_cast<uint8_t>(r0));
}

loc_803B281C:
{
    r0 = MemoryInline::FlatRead16((r31 + 16));
}

loc_803B2824:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(10000))) {
        goto loc_803B2834;
    }
}

loc_803B2828:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8((r30 + 483), static_cast<uint8_t>(r0));
    goto loc_803B283C;
}

loc_803B2834:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 483), static_cast<uint8_t>(r0));
}

loc_803B283C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r30 + 1008), r0);
    r11 = (r1 + 192);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B23B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B23B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B23B8 func_803B23B8 preserves=true fpr_mask=0x00000000
