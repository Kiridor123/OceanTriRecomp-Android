#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBB30(CpuContext* ctx);
extern "C" uint64_t func_804CBB30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CD720(CpuContext* ctx);
extern "C" uint64_t func_804CD720_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D4030(CpuContext* ctx);
extern "C" uint64_t func_804D4030_ra0_0_18_0(CpuContext*);
extern "C" void func_804D4070(CpuContext* ctx);
extern "C" uint64_t func_804D4070_ra0_0_18_0(CpuContext*);
extern "C" void func_804D4590(CpuContext* ctx);
extern "C" uint32_t func_804D4590_ra70_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_804CBFA0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r0_subfe_rb_3 = 0;
    uint32_t r0_subfe_rb_4 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_not_6 = 0;
    uint32_t r3_not_7 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_not_1 = 0;
    uint32_t r4_not_2 = 0;
    uint32_t r4_not_3 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r6_ca_5 = 0;
    uint32_t r6_ca_6 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_not_2 = 0;
    uint32_t r6_not_3 = 0;
    uint32_t r6_not_4 = 0;
    uint32_t r6_not_5 = 0;
    uint32_t r6_not_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804CBFA0u);
    goto loc_804CBFA0;

loc_804CBFA0:
{
    MemoryInline::FlatWriteRam32((r1 + -736), r1);
    r1 = (r1 + -736);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 740), r0);
    r29 = r4;
    ctx->lr = 0x804CBFC4u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_F7E = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_F7E);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_F7E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r31 = MemoryInline::FlatRead32((r13 + -15120));
    r28 = r4;
    r30 = r3;
}

loc_804CBFD4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804CBFE0;
    }
}

loc_804CBFD8:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804CD720u>(&func_804CD720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804CD720_14E7 = func_804CD720_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CD720_14E7);
        r4 = static_cast<uint32_t>(regargs_result_804CD720_14E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
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
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CD720u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804CBFE0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r30 ^ -2147483648);
    r5 = MemoryInline::FlatRead32((r31 + 12));
    r4 = (r3 ^ -2147483648);
    r3 = (r28 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4_not_0 = ~(r4);
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_not_0 + r0);
    r4 = (r4 + r4_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_1 = ~(r0);
    r4_ca_1 = (xer >> 29) & 1u;
    r4 = (r4_not_1 + r0);
    r4 = (r4 + r4_ca_1);
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804CC07C;
    }
}

loc_804CC004:
{
    ctx->lr = 0x804CC008u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_1F57 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_1F57);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_1F57 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r5 = MemoryInline::FlatRead32((r31 + 12));
    r7 = 0;
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r6 = (r7 ^ -2147483648);
    r8 = (r5 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0_subfe_rb_1 = r0;
    r0_not_1 = ~(r3);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r0_subfe_rb_1);
    r0 = (r0 + r0_ca_1);
    r5 = (r0 ^ -2147483648);
    r0 = (r8 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r6_not_1 = ~(r6);
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r6_not_1 + r5);
    r6 = (r6 + r6_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_2 = ~(r5);
    r6_ca_2 = (xer >> 29) & 1u;
    r6 = (r6_not_2 + r5);
    r6 = (r6 + r6_ca_2);
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804CC044;
    }
}

loc_804CC038:
{
    r3 = 0;
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
    goto loc_804CC074;
}

loc_804CC044:
{
    r4 = 0x80000000u;
    r3 = (r7 ^ -2147483648);
    r0 = (r8 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_1 = ~(r3);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r5);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_2 = ~(r5);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r5);
    r3 = (r3 + r3_ca_2);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CC06C;
    }
}

loc_804CC060:
{
    r3 = r8;
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
    goto loc_804CC074;
}

loc_804CC06C:
{
    r3 = (r4 + -1);
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
}

loc_804CC074:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804CD720u>(&func_804CD720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804CD720_2E8F = func_804CD720_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CD720_2E8F);
        r4 = static_cast<uint32_t>(regargs_result_804CD720_2E8F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
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
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CD720u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804CC07C:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWrite32((r13 + -15120), r3);
}

loc_804CC088:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804CC09C;
    }
}

loc_804CC08C:
{
    r3 = (r13 + -15120);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_804CC0A4;
}

loc_804CC09C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_804CC0A4:
{
    r30 = MemoryInline::FlatRead32(r31);
    r6 = 0;
    r0 = (r6 ^ -2147483648);
    MemoryInline::FlatWrite32(r31, r6);
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r5 = MemoryInline::FlatRead32((r31 + 28));
    r4 = (r3 ^ -2147483648);
    r3 = (r6 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
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
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804CC0E8;
    }
}

loc_804CC0D4:
{
    r3 = r31;
    r7 = r30;
    r6 = 0;
    r5 = 0;
    ctx->lr = 0x804CC0E8u;
    if constexpr (KnownRegArgsCpuCall<0x804CBB30u>(&func_804CBB30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804CBB30_3B73 = func_804CBB30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBB30_3B73);
        r4 = static_cast<uint32_t>(regargs_result_804CBB30_3B73 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CBB30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804CC0E8:
{
    r28 = MemoryInline::FlatRead32((r13 + -15120));
}

loc_804CC0F0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804CC164;
    }
}

loc_804CC0F4:
{
    ctx->lr = 0x804CC0F8u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_804D5400_4116 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_4116);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_4116 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r5 = MemoryInline::FlatRead32((r28 + 12));
    r7 = 0;
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r6 = (r7 ^ -2147483648);
    r8 = (r5 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0_subfe_rb_3 = r0;
    r0_not_3 = ~(r3);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r0_subfe_rb_3);
    r0 = (r0 + r0_ca_3);
    r5 = (r0 ^ -2147483648);
    r0 = (r8 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r6_not_4 = ~(r6);
    r6_ca_4 = (xer >> 29) & 1u;
    r6 = (r6_not_4 + r5);
    r6 = (r6 + r6_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_5 = ~(r5);
    r6_ca_5 = (xer >> 29) & 1u;
    r6 = (r6_not_5 + r5);
    r6 = (r6 + r6_ca_5);
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804CC134;
    }
}

loc_804CC128:
{
    r3 = 0;
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
    goto loc_804CC164;
}

loc_804CC134:
{
    r4 = 0x80000000u;
    r3 = (r7 ^ -2147483648);
    r0 = (r8 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_5 = ~(r3);
    r3_ca_5 = (xer >> 29) & 1u;
    r3 = (r3_not_5 + r5);
    r3 = (r3 + r3_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_6 = ~(r5);
    r3_ca_6 = (xer >> 29) & 1u;
    r3 = (r3_not_6 + r5);
    r3 = (r3 + r3_ca_6);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CC15C;
    }
}

loc_804CC150:
{
    r3 = r8;
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
    goto loc_804CC164;
}

loc_804CC15C:
{
    r3 = (r4 + -1);
    // inline leaf 0x804777C0 (2 guest instruction(s))
    // mtspr 22 (privileged/OS register) @ 0x804777C0
    PPC_WriteSpr(22, r3);
    // end of inlined leaf 0x804777C0
}

loc_804CC164:
{
    ctx->lr = 0x804CC168u;
    if constexpr (KnownRegArgsCpuCall<0x804D4030u>(&func_804D4030)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_804D4030_4F83 = func_804D4030_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D4030_4F83);
        r4 = static_cast<uint32_t>(regargs_result_804D4030_4F83 >> 32);
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
    r3 = (r1 + 8);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl6_0x804CD870:
{
    r5 = 0;
    MemoryInline::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl6_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x804CD88C:
{
    MemoryInline::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl6_cont_804CD870;
}

loc_inl6_return:
{
}

loc_inl6_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = (r1 + 8);
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl7_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryInline::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl7_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl7_0x804CD668;
    }
}

loc_inl7_0x804CD64C:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryInline::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl7_cont_804CD630;
}

loc_inl7_0x804CD668:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryInline::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl7_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    r12 = r30;
    r3 = r31;
    r4 = r29;
    ctr = r12;
    ctx->lr = 0x804CC18Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl8_0x804CD870:
{
    r5 = 0;
    MemoryInline::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl8_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x804CD88C:
{
    MemoryInline::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl8_cont_804CD870;
}

loc_inl8_return:
{
}

loc_inl8_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = r29;
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl9_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryInline::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl9_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl9_0x804CD668;
    }
}

loc_inl9_0x804CD64C:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryInline::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl9_cont_804CD630;
}

loc_inl9_0x804CD668:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryInline::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl9_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    ctx->lr = 0x804CC1A0u;
    if constexpr (KnownRegArgsCpuCall<0x804D4070u>(&func_804D4070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_804D4070_6340 = func_804D4070_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D4070_6340);
        r4 = static_cast<uint32_t>(regargs_result_804D4070_6340 >> 32);
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
        InvokeDirectCpu<0x804D4070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x804CC1A4u;
    if constexpr (KnownRegArgsCpuCall<0x804D4590u>(&func_804D4590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804D4590_672A = func_804D4590_ra70_1fe_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_804D4590_672A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D4590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804CD720u>(&func_804CD720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804CD720_703F = func_804CD720_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CD720_703F);
        r4 = static_cast<uint32_t>(regargs_result_804CD720_703F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
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
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CD720u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r1 + 740));
    ctx->lr = r0;
    r1 = (r1 + 736);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->xer = xer;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CBFA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CBFA0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CBFA0 func_804CBFA0 preserves=true fpr_mask=0x00000000
