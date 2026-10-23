#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012D270(CpuContext* ctx);
extern "C" uint32_t func_8012D270_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012F960(CpuContext* ctx);
extern "C" uint32_t func_8012F960_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012F980(CpuContext* ctx);
extern "C" uint64_t func_8012F980_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8019E6D4(CpuContext* ctx);
extern "C" uint32_t func_8019E6D4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B510C(CpuContext* ctx);
extern "C" uint32_t func_803B510C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8012F960_statefree(uint32_t);

extern "C" uint64_t func_801A9EC4_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_801A9EC4;

loc_801A9EC4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
}

loc_801A9EDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801A9EE8;
    }
}

loc_801A9EE0:
{
    r3 = 0;
    goto loc_801AA148;
}

loc_801A9EE8:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_801A9EF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(25))) {
        goto loc_801A9EFC;
    }
}

loc_801A9EF4:
{
    r3 = 0;
    goto loc_801AA148;
}

loc_801A9EFC:
{
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_801A9F0C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_801AA144;
    }
}

loc_801A9F10:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_801A9F18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801AA144;
    }
}

loc_801A9F1C:
{
    r3 = 0;
    ctx->lr = 0x801A9F24u;
    if constexpr (KnownRegArgsCpuCall<0x803B510Cu>(&func_803B510C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B510C_CED = func_803B510C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B510C_CED;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B510Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801A9F28:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA07C;
    }
}

loc_801A9F2C:
{
    r3 = r31;
    r4 = 3;
    r5 = 10;
    r6 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8019E6D4u>(&func_8019E6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E6D4_103B = func_8019E6D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8019E6D4_103B;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8019E6D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_801A9F44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801A9F80;
    }
}

loc_801A9F48:
{
    r3 = r31;
    r4 = 6;
    r5 = 15;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl1_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl1_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl1_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8012D298;
    }
}

loc_inl1_0x8012D290:
{
    r3 = 1;
    goto loc_inl1_cont_8012D270;
}

loc_inl1_0x8012D298:
{
    r3 = 0;
}

loc_inl1_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801A9F5C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801A9F78;
    }
}

loc_801A9F60:
{
    r3 = r31;
    r4 = 6;
    r5 = 23;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl2_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl2_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8012D298;
    }
}

loc_inl2_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl2_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8012D298;
    }
}

loc_inl2_0x8012D290:
{
    r3 = 1;
    goto loc_inl2_cont_8012D270;
}

loc_inl2_0x8012D298:
{
    r3 = 0;
}

loc_inl2_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801A9F74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA144;
    }
}

loc_801A9F78:
{
    r3 = 1;
    goto loc_801AA148;
}

loc_801A9F80:
{
    r3 = r31;
    r4 = 3;
    r5 = 35;
    r6 = 39;
    if constexpr (KnownRegArgsCpuCall<0x8019E6D4u>(&func_8019E6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E6D4_1ACA = func_8019E6D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8019E6D4_1ACA;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8019E6D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_801A9F98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801A9FD4;
    }
}

loc_801A9F9C:
{
    r3 = r31;
    r4 = 6;
    r5 = 15;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl3_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl3_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8012D298;
    }
}

loc_inl3_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl3_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8012D298;
    }
}

loc_inl3_0x8012D290:
{
    r3 = 1;
    goto loc_inl3_cont_8012D270;
}

loc_inl3_0x8012D298:
{
    r3 = 0;
}

loc_inl3_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801A9FB0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801A9FCC;
    }
}

loc_801A9FB4:
{
    r3 = r31;
    r4 = 6;
    r5 = 23;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl4_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl4_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8012D298;
    }
}

loc_inl4_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl4_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8012D298;
    }
}

loc_inl4_0x8012D290:
{
    r3 = 1;
    goto loc_inl4_cont_8012D270;
}

loc_inl4_0x8012D298:
{
    r3 = 0;
}

loc_inl4_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801A9FC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA144;
    }
}

loc_801A9FCC:
{
    r3 = 1;
    goto loc_801AA148;
}

loc_801A9FD4:
{
    r3 = r31;
    r4 = 3;
    r5 = 44;
    r6 = 51;
    if constexpr (KnownRegArgsCpuCall<0x8019E6D4u>(&func_8019E6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E6D4_2559 = func_8019E6D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8019E6D4_2559;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8019E6D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_801A9FEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA028;
    }
}

loc_801A9FF0:
{
    r3 = r31;
    r4 = 6;
    r5 = 15;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl5_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl5_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8012D298;
    }
}

loc_inl5_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl5_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8012D298;
    }
}

loc_inl5_0x8012D290:
{
    r3 = 1;
    goto loc_inl5_cont_8012D270;
}

loc_inl5_0x8012D298:
{
    r3 = 0;
}

loc_inl5_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801AA004:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801AA020;
    }
}

loc_801AA008:
{
    r3 = r31;
    r4 = 6;
    r5 = 23;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl6_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl6_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8012D298;
    }
}

loc_inl6_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl6_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8012D298;
    }
}

loc_inl6_0x8012D290:
{
    r3 = 1;
    goto loc_inl6_cont_8012D270;
}

loc_inl6_0x8012D298:
{
    r3 = 0;
}

loc_inl6_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801AA01C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA144;
    }
}

loc_801AA020:
{
    r3 = 1;
    goto loc_801AA148;
}

loc_801AA028:
{
    r3 = r31;
    r4 = 3;
    r5 = 63;
    r6 = 71;
    if constexpr (KnownRegArgsCpuCall<0x8019E6D4u>(&func_8019E6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E6D4_2FE8 = func_8019E6D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8019E6D4_2FE8;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8019E6D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_801AA040:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA144;
    }
}

loc_801AA044:
{
    r3 = r31;
    r4 = 6;
    r5 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8012D270u>(&func_8012D270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D270_32FD = func_8012D270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8012D270_32FD;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_801AA058:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801AA074;
    }
}

loc_801AA05C:
{
    r3 = r31;
    r4 = 6;
    r5 = 23;
    if constexpr (KnownRegArgsCpuCall<0x8012D270u>(&func_8012D270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D270_3648 = func_8012D270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8012D270_3648;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_801AA070:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA144;
    }
}

loc_801AA074:
{
    r3 = 1;
    goto loc_801AA148;
}

loc_801AA07C:
{
    r3 = r31;
    r4 = 3;
    r5 = 11;
    r6 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8019E6D4u>(&func_8019E6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E6D4_39DD = func_8019E6D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8019E6D4_39DD;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8019E6D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_801AA094:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA0B8;
    }
}

loc_801AA098:
{
    r3 = r31;
    r4 = 6;
    r5 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8012D270u>(&func_8012D270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D270_3CF2 = func_8012D270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8012D270_3CF2;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_801AA0AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA144;
    }
}

loc_801AA0B0:
{
    r3 = 1;
    goto loc_801AA148;
}

loc_801AA0B8:
{
    r3 = r31;
    r4 = 3;
    r5 = 73;
    r6 = 82;
    if constexpr (KnownRegArgsCpuCall<0x8019E6D4u>(&func_8019E6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E6D4_4087 = func_8019E6D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8019E6D4_4087;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8019E6D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_801AA0D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA0F4;
    }
}

loc_801AA0D4:
{
    r3 = r31;
    r4 = 6;
    r5 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8012D270u>(&func_8012D270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D270_439C = func_8012D270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8012D270_439C;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_801AA0E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA144;
    }
}

loc_801AA0EC:
{
    r3 = 1;
    goto loc_801AA148;
}

loc_801AA0F4:
{
    r3 = r31;
    r4 = 6;
    r5 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8012D270u>(&func_8012D270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D270_4723 = func_8012D270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8012D270_4723;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_801AA108:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA144;
    }
}

loc_801AA10C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012F960u) && KnownTranslatedCpuCall<0x8012F960u>::kAvailable && !KnownTranslatedCpuCall<0x8012F960u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012F960u>()) {
        const auto state_free_result_8012F960_4AB3 = func_8012F960_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8012F960_4AB3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8012F960u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = (r3 & 65535);
}

loc_801AA11C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_801AA144;
    }
}

loc_801AA120:
{
    r3 = r31;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -21864));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -21496));
    ctx->lr = 0x801AA134u;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012F980_4F7F = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_4F7F);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_4F7F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8012F980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_801AA138:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AA144;
    }
}

loc_801AA13C:
{
    r3 = 2;
    goto loc_801AA148;
}

loc_801AA144:
{
    r3 = 0;
}

loc_801AA148:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801A9EC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801A9EC4_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A9EC4 func_801A9EC4 preserves=true fpr_mask=0x00000000
