#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B0A70(CpuContext* ctx);
extern "C" uint64_t func_804B0A70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804B0CF0(CpuContext* ctx);
extern "C" uint64_t func_804B0CF0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804B1210(CpuContext* ctx);
extern "C" uint64_t func_804B1210_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804B1890(CpuContext* ctx);
extern "C" uint64_t func_804B1890_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804B1990(CpuContext* ctx);
extern "C" uint64_t func_804B1990_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CCBA0(CpuContext* ctx);
extern "C" uint64_t func_804CCBA0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CD810(CpuContext* ctx);
extern "C" uint64_t func_804CD810_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D1740(CpuContext* ctx);
extern "C" uint64_t func_804D1740_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804D2900(CpuContext* ctx);
extern "C" uint64_t func_804D2900_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D4030(CpuContext* ctx);
extern "C" uint64_t func_804D4030_ra0_0_18_0(CpuContext*);
extern "C" void func_804E7740(CpuContext* ctx);
extern "C" uint64_t func_804E7740_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804E7790(CpuContext* ctx);
extern "C" uint64_t func_804E7790_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804E7B00(CpuContext* ctx);
extern "C" uint64_t func_804E7B00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E9010(CpuContext* ctx);
extern "C" uint32_t func_804E9010_ra308_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E91A0(CpuContext* ctx);
extern "C" uint64_t func_804E91A0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_804CFE20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_subfc_sub_0 = 0;
    uint32_t r3_subfc_sub_1 = 0;
    uint32_t r3_subfc_sub_2 = 0;
    uint32_t r3_subfc_sub_3 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_ca_4 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_not_1 = 0;
    uint32_t r4_not_2 = 0;
    uint32_t r4_not_3 = 0;
    uint32_t r4_not_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_not_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t xer = ctx->xer;

    goto loc_804CFE20;

loc_804CFE20:
{
    MemoryHw::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r27 = r3;
    r28 = r4;
    r29 = r5;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    ctx->lr = 0x804CFE48u;
    if constexpr (KnownRegArgsCpuCall<0x804D4030u>(&func_804D4030)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_804D4030_14A3 = func_804D4030_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D4030_14A3);
        r4 = static_cast<uint32_t>(regargs_result_804D4030_14A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D4030u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r24 = 0x80750000u;
    r3 = (r24 + -2016);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl2_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl2_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl2_cont_804CD870;
}

loc_inl2_return:
{
}

loc_inl2_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = (r24 + -2016);
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl3_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryHw::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl3_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl3_0x804CD668;
    }
}

loc_inl3_0x804CD64C:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl3_cont_804CD630;
}

loc_inl3_0x804CD668:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl3_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    ctx->lr = 0x804CFE60u;
    if constexpr (KnownRegArgsCpuCall<0x804CCBA0u>(&func_804CCBA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_804CCBA0_1ECC = func_804CCBA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCBA0_1ECC);
        r4 = static_cast<uint32_t>(regargs_result_804CCBA0_1ECC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CCBA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->lr = 0x804CFE64u;
    if constexpr (KnownRegArgsCpuCall<0x804E7B00u>(&func_804E7B00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804E7B00_2205 = func_804E7B00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E7B00_2205);
        r4 = static_cast<uint32_t>(regargs_result_804E7B00_2205 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E7B00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r3 = 128;
    ctx->lr = 0x804CFE6Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D1740u>(&func_804D1740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_804D1740_28AD = func_804D1740_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D1740_28AD);
        r4 = static_cast<uint32_t>(regargs_result_804D1740_28AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D1740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 1;
    ctx->lr = 0x804CFE74u;
    if constexpr (KnownRegArgsCpuCall<0x804E91A0u>(&func_804E91A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804E91A0_2C5A = func_804E91A0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804E91A0_2C5A);
        r4 = static_cast<uint32_t>(regargs_result_804E91A0_2C5A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E91A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    }
    ctx->lr = 0x804CFE78u;
    if constexpr (KnownRegArgsCpuCall<0x804E9010u>(&func_804E9010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804E9010_310E = func_804E9010_ra308_0_8_0(ctx, r3, r8, r9);
        r3 = regargs_result_804E9010_310E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E9010u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
    r3 = 0;
    ctx->lr = 0x804CFE80u;
    if constexpr (KnownRegArgsCpuCall<0x804E7740u>(&func_804E7740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_804E7740_353C = func_804E7740_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804E7740_353C);
        r4 = static_cast<uint32_t>(regargs_result_804E7740_353C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E7740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0;
    ctx->lr = 0x804CFE88u;
    if constexpr (KnownRegArgsCpuCall<0x804E7790u>(&func_804E7790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_804E7790_38B1 = func_804E7790_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804E7790_38B1);
        r4 = static_cast<uint32_t>(regargs_result_804E7790_38B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E7790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    // inline leaf 0x804D1310 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 | 32768);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D1310
    // inline leaf 0x804E9220 (2 guest instruction(s))
    r3 = MemoryHw::FlatRead32((r13 + -14236));
    // end of inlined leaf 0x804E9220
    r24 = r3;
}

loc_804CFE94:
{
    // inline leaf 0x804E9220 (2 guest instruction(s))
    r3 = MemoryHw::FlatRead32((r13 + -14236));
    // end of inlined leaf 0x804E9220
    r0 = (r3 - r24);
}

loc_804CFEA0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_804CFE94;
    }
}

loc_804CFEA4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r5 = 274857984;
    r30 = r4;
    r31 = r3;
    r25 = 0x80000000u;
    r24 = (r5 + 19923);
    r26 = 0;
}

loc_804CFEC0:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x804CFECCu;
    if constexpr (KnownRegArgsCpuCall<0x804D2900u>(&func_804D2900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804D2900_40BB = func_804D2900_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D2900_40BB);
        r4 = static_cast<uint32_t>(regargs_result_804D2900_40BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D2900u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_804CFED0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804CFF10;
    }
}

loc_804CFED4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = MemoryHw::FlatRead32((r25 + 248));
    r6 = (r4 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    r5_not_2 = ~(r31);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r3);
    r5 = (r5 + r5_ca_2);
    r4 = (r26 ^ -2147483648);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & 1073741823);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r24) * static_cast<uint64_t>(r0)) >> 32));
    r0 = (r5 ^ -2147483648);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r3 = (r3_rot_3 & 67108863);
    r3 = (r3 * 1000);
    r3_subfc_sub_2 = r3;
    r3 = (r6 - r3_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r3_subfc_sub_2) ? 1u : 0u) << 29);
    r4_not_2 = ~(r4);
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r4_not_2 + r0);
    r4 = (r4 + r4_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_3 = ~(r0);
    r4_ca_3 = (xer >> 29) & 1u;
    r4 = (r4_not_3 + r0);
    r4 = (r4 + r4_ca_3);
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804CFEC0;
    }
}

loc_804CFF10:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x804D12F0
    r3 = 1;
    r4 = 0;
    ctx->lr = 0x804CFF20u;
    if constexpr (KnownRegArgsCpuCall<0x804D2900u>(&func_804D2900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804D2900_5035 = func_804D2900_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D2900_5035);
        r4 = static_cast<uint32_t>(regargs_result_804D2900_5035 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D2900u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x804CFF2Cu;
    if constexpr (KnownRegArgsCpuCall<0x804B0CF0u>(&func_804B0CF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804B0CF0_56EA = func_804B0CF0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B0CF0_56EA);
        r4 = static_cast<uint32_t>(regargs_result_804B0CF0_56EA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804B0CF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = 2;
    r4 = 0;
    ctx->lr = 0x804CFF38u;
    if constexpr (KnownRegArgsCpuCall<0x804B0CF0u>(&func_804B0CF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804B0CF0_5ACE = func_804B0CF0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B0CF0_5ACE);
        r4 = static_cast<uint32_t>(regargs_result_804B0CF0_5ACE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804B0CF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    goto loc_804CFF54;
}

loc_804CFF3C:
{
    r3 = 0;
    ctx->lr = 0x804CFF44u;
    if constexpr (KnownRegArgsCpuCall<0x804B0A70u>(&func_804B0A70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804B0A70_5ED2 = func_804B0A70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B0A70_5ED2);
        r4 = static_cast<uint32_t>(regargs_result_804B0A70_5ED2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804B0A70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        xer = ctx->xer;
    }
    r3 = 0;
    ctx->lr = 0x804CFF4Cu;
    if constexpr (KnownRegArgsCpuCall<0x804B1210u>(&func_804B1210)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_804B1210_62EE = func_804B1210_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B1210_62EE);
        r4 = static_cast<uint32_t>(regargs_result_804B1210_62EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x804B1210u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0;
    ctx->lr = 0x804CFF54u;
    if constexpr (KnownRegArgsCpuCall<0x804B1990u>(&func_804B1990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804B1990_6689 = func_804B1990_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804B1990_6689);
        r4 = static_cast<uint32_t>(regargs_result_804B1990_6689 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804B1990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_804CFF54:
{
    r3 = 0;
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x804CFF64u;
    if constexpr (KnownRegArgsCpuCall<0x804B1890u>(&func_804B1890)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804B1890_6D62 = func_804B1890_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B1890_6D62);
        r4 = static_cast<uint32_t>(regargs_result_804B1890_6D62 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804B1890u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_804CFF68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CFF3C;
    }
}

loc_804CFF6C:
{
    r3 = 0;
    ctx->lr = 0x804CFF74u;
    if constexpr (KnownRegArgsCpuCall<0x804B1990u>(&func_804B1990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804B1990_71E7 = func_804B1990_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804B1990_71E7);
        r4 = static_cast<uint32_t>(regargs_result_804B1990_71E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804B1990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r3 = -855638016;
}

loc_804CFF78:
{
    r0 = MemoryHw::FlatRead32((r3 + 26636));
    r0 = (r0 & 1);
}

loc_804CFF84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804CFF78;
    }
}

loc_804CFF88:
{
    r4 = 0x804D0000u;
    r3 = 8;
    r4 = (r4 + -18128);
    // inline leaf 0x804CB860 (5 guest instruction(s))
    r5 = MemoryHw::FlatRead32((r13 + -15176));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r5_addr_0 = (r5 + r0);
    r3 = MemoryHw::FlatRead32(r5_addr_0);
    r5_addr_1 = (r5 + r0);
    MemoryHw::FlatWrite32(r5_addr_1, r4);
    // end of inlined leaf 0x804CB860
    ctx->lr = 0x804CFF9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    InvokeDirectCpu<0x804B6620u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    xer = ctx->xer;
    r3 = 0x81400000u;
    // inline leaf 0x804CC760 (2 guest instruction(s))
    MemoryHw::FlatWrite32((r13 + -20112), r3);
    // end of inlined leaf 0x804CC760
    r4 = 0x80000000u;
    r3 = MemoryHw::FlatRead32((r4 + 56));
}

loc_804CFFB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804CFFC0;
    }
}

loc_804CFFB4:
{
    r3 = MemoryHw::FlatRead32((r4 + 12560));
    // inline leaf 0x804CC730 (2 guest instruction(s))
    MemoryHw::FlatWrite32((r13 + -15096), r3);
    // end of inlined leaf 0x804CC730
    goto loc_804CFFC4;
}

loc_804CFFC0:
{
    // inline leaf 0x804CC730 (2 guest instruction(s))
    MemoryHw::FlatWrite32((r13 + -15096), r3);
    // end of inlined leaf 0x804CC730
}

loc_804CFFC4:
{
    r0 = MemoryHw::FlatRead32(r27);
    r3 = 0x80750000u;
    MemoryHw::FlatWriteRam32((r3 + -1304), r0);
    r3 = (r3 + -1304);
    r0 = MemoryHw::FlatRead32(r28);
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    MemoryHw::FlatWriteRam32((r3 + 8), r29);
    // inline leaf 0x804CC6D0 (2 guest instruction(s))
    r3 = MemoryHw::FlatRead32((r13 + -15096));
    // end of inlined leaf 0x804CC6D0
    r5 = 0x804D0000u;
    r4 = r3;
    r3 = (r5 + 16);
    ctx->lr = 0x804CFFF0u;
    if constexpr (KnownRegArgsCpuCall<0x804CD810u>(&func_804CD810)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804CD810_8308 = func_804CD810_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CD810_8308);
        r4 = static_cast<uint32_t>(regargs_result_804CD810_8308 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CD810u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r11 = (r1 + 48);
    r0 = MemoryHw::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CFE20 func_804CFE20 preserves=true fpr_mask=0x00000000
