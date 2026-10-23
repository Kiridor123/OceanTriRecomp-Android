#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004C1BC(CpuContext* ctx);
extern "C" uint64_t func_8004C1BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004CB3C(CpuContext* ctx);
extern "C" uint64_t func_8004CB3C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800DBCE8(CpuContext* ctx);
extern "C" uint64_t func_800DBCE8_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801EC810(CpuContext* ctx);
extern "C" uint32_t func_801EC810_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801ECA44(CpuContext* ctx);
extern "C" uint64_t func_801ECA44_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801F2060(CpuContext* ctx);
extern "C" uint64_t func_801F2060_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802121A0(CpuContext* ctx);
extern "C" uint64_t func_802121A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80212258(CpuContext* ctx);
extern "C" uint64_t func_80212258_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802122B4(CpuContext* ctx);
extern "C" uint64_t func_802122B4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80212310(CpuContext* ctx);
extern "C" uint64_t func_80212310_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021234C(CpuContext* ctx);
extern "C" uint64_t func_8021234C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80212398(CpuContext* ctx);
extern "C" uint64_t func_80212398_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021B850(CpuContext* ctx);
extern "C" uint64_t func_8021B850_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802A8F24(CpuContext* ctx);
extern "C" uint64_t func_802A8F24_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A8FB4(CpuContext* ctx);
extern "C" uint64_t func_802A8FB4_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_801F20A4_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_801F20A4;

loc_801F20A4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r30 = r4;
    r31 = 0;
    r29 = 0;
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r29));
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801F20D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F20F0;
    }
}

loc_801F20DC:
{
}

loc_801F20E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F21F4;
    }
}

loc_801F20E4:
{
}

loc_801F20E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F2378;
    }
}

loc_801F20EC:
{
    goto loc_801F23A4;
}

loc_801F20F0:
{
    r3 = 16;
    ctx->lr = 0x801F20F8u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_130C = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_130C);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_130C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F20FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F2144;
    }
}

loc_801F2100:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r30 + 4));
    r0 = (r0 * 42);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 13184));
}

loc_801F2118:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801F2138;
    }
}

loc_801F211C:
{
    r3 = MemoryInline::FlatRead8(r30);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 16), r29);
    r3 = 0;
    ctx->lr = 0x801F2134u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DBC94_18ED = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_18ED);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_18ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801F23A4;
}

loc_801F2138:
{
    r3 = 2;
    ctx->lr = 0x801F2140u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DBC94_2011 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2011);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2011 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801F23A4;
}

loc_801F2144:
{
    r3 = 32;
    ctx->lr = 0x801F214Cu;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_26C8 = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_26C8);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_26C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F2150:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F2164;
    }
}

loc_801F2154:
{
    r3 = 1;
    ctx->lr = 0x801F215Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DBC94_2AA7 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2AA7);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2AA7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r31 = 2;
    goto loc_801F23A4;
}

loc_801F2164:
{
    r3 = 12;
    ctx->lr = 0x801F216Cu;
    if constexpr (KnownRegArgsCpuCall<0x80212258u>(&func_80212258)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80212258_316C = func_80212258_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80212258_316C);
        r4 = static_cast<uint32_t>(regargs_result_80212258_316C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80212258u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F2170:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F21AC;
    }
}

loc_801F2174:
{
    ctx->lr = 0x801F2178u;
    if constexpr (KnownRegArgsCpuCall<0x80212310u>(&func_80212310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80212310_34CE = func_80212310_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80212310_34CE);
        r4 = static_cast<uint32_t>(regargs_result_80212310_34CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80212310u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = r3;
    r3 = MemoryInline::FlatRead8((r30 + 4));
    r4 = MemoryInline::FlatRead8((r30 + 5));
    r5 = (r0 & 65535);
    r6 = 4;
    r7 = 8;
    r8 = (r30 + 8);
    ctx->lr = 0x801F2198u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F24u>(&func_802A8F24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_802A8F24_38BC = func_802A8F24_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F24_38BC);
        r4 = static_cast<uint32_t>(regargs_result_802A8F24_38BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802A8F24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x801F21A8u;
    if constexpr (KnownRegArgsCpuCall<0x801F2060u>(&func_801F2060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801F2060_3F9F = func_801F2060_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801F2060_3F9F);
        r4 = static_cast<uint32_t>(regargs_result_801F2060_3F9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801F2060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_801F23A4;
}

loc_801F21AC:
{
    r3 = 3072;
    ctx->lr = 0x801F21B4u;
    if constexpr (KnownRegArgsCpuCall<0x802122B4u>(&func_802122B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802122B4_42AD = func_802122B4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802122B4_42AD);
        r4 = static_cast<uint32_t>(regargs_result_802122B4_42AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802122B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F21B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F23A4;
    }
}

loc_801F21BC:
{
    ctx->lr = 0x801F21C0u;
    if constexpr (KnownRegArgsCpuCall<0x80212398u>(&func_80212398)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80212398_460F = func_80212398_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80212398_460F);
        r4 = static_cast<uint32_t>(regargs_result_80212398_460F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80212398u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    r3 = r30;
    // inline leaf 0x801F2018 (18 guest instruction(s))
}

loc_inl1_0x801F2018:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl1_0x801F2020:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x801F2058;
    }
}

loc_inl1_0x801F2024:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 * 42);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 13184));
    r0 = (r0 * 12);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 3584));
    r0 = (r3 + -11);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    r3 = (r3 + 1);
    goto loc_inl1_cont_801F2018;
}

loc_inl1_0x801F2058:
{
    r3 = 3;
}

loc_inl1_cont_801F2018:
{
    // end of inlined leaf 0x801F2018
    r4 = (r3 & 255);
    r3 = MemoryInline::FlatRead8((r30 + 7));
    r5 = (r29 & 65535);
    r6 = 2048;
    r7 = 1024;
    r8 = (r30 + 10);
    ctx->lr = 0x801F21E8u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F24u>(&func_802A8F24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_802A8F24_4DAF = func_802A8F24_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F24_4DAF);
        r4 = static_cast<uint32_t>(regargs_result_802A8F24_4DAF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802A8F24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
    goto loc_801F23A4;
}

loc_801F21F4:
{
    ctx->lr = 0x801F21F8u;
    if constexpr (KnownRegArgsCpuCall<0x8021234Cu>(&func_8021234C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021234C_54B2 = func_8021234C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8021234C_54B2);
        r4 = static_cast<uint32_t>(regargs_result_8021234C_54B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8021234Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = r3;
    r3 = (r30 + 16);
    r4 = (r0 & 65535);
    r5 = 4;
    r6 = 8;
    r7 = 65536;
    r7 = (r7 + -1);
    r7 = (r7 & 65535);
    ctx->lr = 0x801F221Cu;
    if constexpr (KnownRegArgsCpuCall<0x802A8FB4u>(&func_802A8FB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_802A8FB4_5883 = func_802A8FB4_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8FB4_5883);
        r4 = static_cast<uint32_t>(regargs_result_802A8FB4_5883 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802A8FB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801F2220:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801F2230;
    }
}

loc_801F2224:
{
}

loc_801F2228:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_801F2368;
    }
}

loc_801F222C:
{
    goto loc_801F23A4;
}

loc_801F2230:
{
    r3 = MemoryInline::FlatRead8(r30);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r30 + 4));
    r0 = (r0 * 42);
    r3 = (r3 + r0);
    r28 = (r3 + 13184);
    r3 = MemoryInline::FlatRead16(r28);
    ctx->lr = 0x801F2258u;
    if constexpr (KnownRegArgsCpuCall<0x8021B850u>(&func_8021B850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8021B850_61EB = func_8021B850_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B850_61EB);
        r4 = static_cast<uint32_t>(regargs_result_8021B850_61EB >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8021B850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r27 = 0;
    r29 = r28;
}

loc_801F2260:
{
    r3 = MemoryInline::FlatRead16((r29 + 2));
}

loc_801F2268:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_801F2270;
    }
}

loc_801F226C:
{
    ctx->lr = 0x801F2270u;
    if constexpr (KnownRegArgsCpuCall<0x8021B850u>(&func_8021B850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8021B850_6750 = func_8021B850_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B850_6750);
        r4 = static_cast<uint32_t>(regargs_result_8021B850_6750 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8021B850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_801F2270:
{
    r29 = (r29 + 2);
    r27 = (r27 + 1);
}

loc_801F227C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(2))) {
        goto loc_801F2260;
    }
}

loc_801F2280:
{
    r3 = MemoryInline::FlatRead16((r28 + 12));
}

loc_801F2288:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_801F2294;
    }
}

loc_801F228C:
{
    ctx->lr = 0x801F2290u;
    if constexpr (KnownRegArgsCpuCall<0x8021B850u>(&func_8021B850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8021B850_6D57 = func_8021B850_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B850_6D57);
        r4 = static_cast<uint32_t>(regargs_result_8021B850_6D57 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8021B850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801F22A0;
}

loc_801F2294:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8004CB3Cu>(&func_8004CB3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004CB3C_71C2 = func_8004CB3C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004CB3C_71C2);
        r4 = static_cast<uint32_t>(regargs_result_8004CB3C_71C2 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004CB3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F22A0:
{
    r3 = MemoryInline::FlatRead16((r28 + 14));
}

loc_801F22A8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_801F22B4;
    }
}

loc_801F22AC:
{
    ctx->lr = 0x801F22B0u;
    if constexpr (KnownRegArgsCpuCall<0x8021B850u>(&func_8021B850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8021B850_758C = func_8021B850_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B850_758C);
        r4 = static_cast<uint32_t>(regargs_result_8021B850_758C >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8021B850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801F22C0;
}

loc_801F22B4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8004CB3Cu>(&func_8004CB3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004CB3C_79F7 = func_8004CB3C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004CB3C_79F7);
        r4 = static_cast<uint32_t>(regargs_result_8004CB3C_79F7 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004CB3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F22C0:
{
    r3 = MemoryInline::FlatRead16((r28 + 6));
}

loc_801F22C8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_801F22D4;
    }
}

loc_801F22CC:
{
    ctx->lr = 0x801F22D0u;
    if constexpr (KnownRegArgsCpuCall<0x8021B850u>(&func_8021B850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8021B850_7DC0 = func_8021B850_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B850_7DC0);
        r4 = static_cast<uint32_t>(regargs_result_8021B850_7DC0 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8021B850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801F22E0;
}

loc_801F22D4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8004CB3Cu>(&func_8004CB3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004CB3C_822B = func_8004CB3C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004CB3C_822B);
        r4 = static_cast<uint32_t>(regargs_result_8004CB3C_822B >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004CB3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F22E0:
{
    r3 = MemoryInline::FlatRead16((r28 + 8));
}

loc_801F22E8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_801F22F4;
    }
}

loc_801F22EC:
{
    ctx->lr = 0x801F22F0u;
    if constexpr (KnownRegArgsCpuCall<0x8021B850u>(&func_8021B850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8021B850_85F4 = func_8021B850_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B850_85F4);
        r4 = static_cast<uint32_t>(regargs_result_8021B850_85F4 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8021B850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801F2300;
}

loc_801F22F4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8004CB3Cu>(&func_8004CB3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004CB3C_8A5F = func_8004CB3C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004CB3C_8A5F);
        r4 = static_cast<uint32_t>(regargs_result_8004CB3C_8A5F >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004CB3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F2300:
{
    r3 = MemoryInline::FlatRead16((r28 + 10));
}

loc_801F2308:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_801F2314;
    }
}

loc_801F230C:
{
    ctx->lr = 0x801F2310u;
    if constexpr (KnownRegArgsCpuCall<0x8021B850u>(&func_8021B850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8021B850_8E29 = func_8021B850_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B850_8E29);
        r4 = static_cast<uint32_t>(regargs_result_8021B850_8E29 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8021B850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801F2320;
}

loc_801F2314:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8004CB3Cu>(&func_8004CB3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004CB3C_9294 = func_8004CB3C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004CB3C_9294);
        r4 = static_cast<uint32_t>(regargs_result_8004CB3C_9294 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004CB3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F2320:
{
    r3 = MemoryInline::FlatRead16((r28 + 16));
}

loc_801F2328:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_801F2334;
    }
}

loc_801F232C:
{
    ctx->lr = 0x801F2330u;
    if constexpr (KnownRegArgsCpuCall<0x8021B850u>(&func_8021B850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8021B850_965E = func_8021B850_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021B850_965E);
        r4 = static_cast<uint32_t>(regargs_result_8021B850_965E >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8021B850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801F2340;
}

loc_801F2334:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8004CB3Cu>(&func_8004CB3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004CB3C_9AC9 = func_8004CB3C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004CB3C_9AC9);
        r4 = static_cast<uint32_t>(regargs_result_8004CB3C_9AC9 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004CB3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F2340:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F234Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004C1BCu>(&func_8004C1BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8004C1BC_9E13 = func_8004C1BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C1BC_9E13);
        r4 = static_cast<uint32_t>(regargs_result_8004C1BC_9E13 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8004C1BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = r26;
    ctx->lr = 0x801F2354u;
    if constexpr (KnownRegArgsCpuCall<0x801EC810u>(&func_801EC810)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801EC810_A1E8 = func_801EC810_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801EC810_A1E8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x801EC810u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 4), static_cast<uint8_t>(r0));
    r3 = 3;
    ctx->lr = 0x801F2364u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DBCE8_A4E7 = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_A4E7);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_A4E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801F23A4;
}

loc_801F2368:
{
    r3 = MemoryInline::FlatRead8(r30);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_801F23A4;
}

loc_801F2378:
{
    r3 = MemoryInline::FlatRead32((r4 + 20));
    if constexpr (KnownRegArgsCpuCall<0x801ECA44u>(&func_801ECA44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ECA44_AC4D = func_801ECA44_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801ECA44_AC4D);
        r4 = static_cast<uint32_t>(regargs_result_801ECA44_AC4D >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801ECA44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F2384:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F23A4;
    }
}

loc_801F2388:
{
    r3 = 48;
    ctx->lr = 0x801F2390u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_AF84 = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_AF84);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_AF84 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F2394:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F23A4;
    }
}

loc_801F2398:
{
    r31 = 1;
    r3 = 0;
    ctx->lr = 0x801F23A4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DBC94_B371 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_B371);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_B371 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801F23A4:
{
    r3 = r31;
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F20A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F20A4_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF8 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F20A4 func_801F20A4 preserves=true fpr_mask=0x00000000
