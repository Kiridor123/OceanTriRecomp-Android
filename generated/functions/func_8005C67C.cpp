#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005B780(CpuContext* ctx);
extern "C" uint32_t func_8005B780_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005B7C8(CpuContext* ctx);
extern "C" uint32_t func_8005B7C8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8005B804(CpuContext* ctx);
extern "C" uint64_t func_8005B804_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005B8D8(CpuContext* ctx);
extern "C" uint64_t func_8005B8D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005BA04(CpuContext* ctx);
extern "C" uint64_t func_8005BA04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8005BAB4(CpuContext* ctx);
extern "C" uint64_t func_8005BAB4_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_8005C844(CpuContext* ctx);
extern "C" uint64_t func_8005C844_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8005C67C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_8005C67C;

loc_8005C67C:
{
    MemoryInline::FlatWriteRam32((r1 + -1072), r1);
    r1 = (r1 + -1072);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1076), r0);
    r11 = (r1 + 1072);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r4 = r3;
    r3 = (r1 + 520);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_C2A = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_C2A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r1 + 520);
    r4 = 126;
    if constexpr (KnownRegArgsCpuCall<0x8005C844u>(&func_8005C844)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005C844_F00 = func_8005C844_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C844_F00);
        r4 = static_cast<uint32_t>(regargs_result_8005C844_F00 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C844u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r27 = r3;
}

loc_8005C6B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8005C6C0;
    }
}

loc_8005C6B4:
{
    r3 = (r1 + 520);
    ctx->lr = 0x8005C6BCu;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8005BAB4_12C7 = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_12C7);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_12C7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
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
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    goto loc_8005C82C;
}

loc_8005C6C0:
{
    // inline leaf 0x8005B738 (9 guest instruction(s))
}

loc_inl1_0x8005B738:
{
    r3 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl1_0x8005B740:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8005B74C;
    }
}

loc_inl1_0x8005B744:
{
    r3 = 0;
    goto loc_inl1_cont_8005B738;
}

loc_inl1_0x8005B74C:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 20576));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl1_cont_8005B738:
{
    // end of inlined leaf 0x8005B738
    r29 = r3;
    // inline leaf 0x8005B7A4 (9 guest instruction(s))
}

loc_inl2_0x8005B7A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl2_0x8005B7AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8005B7B8;
    }
}

loc_inl2_0x8005B7B0:
{
    r3 = 0;
    goto loc_inl2_cont_8005B7A4;
}

loc_inl2_0x8005B7B8:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 20584));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl2_cont_8005B7A4:
{
    // end of inlined leaf 0x8005B7A4
    r25 = r3;
    // inline leaf 0x8005B7C8 (9 guest instruction(s))
}

loc_inl3_0x8005B7C8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl3_0x8005B7D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8005B7DC;
    }
}

loc_inl3_0x8005B7D4:
{
    r3 = 0;
    goto loc_inl3_cont_8005B7C8;
}

loc_inl3_0x8005B7DC:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 20588));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl3_cont_8005B7C8:
{
    // end of inlined leaf 0x8005B7C8
    r24 = r3;
    r31 = r25;
    r30 = 0;
}

loc_8005C6E0:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8005C6EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(67))) {
        goto loc_8005C784;
    }
}

loc_8005C6F0:
{
    r0 = MemoryInline::FlatRead8((r27 + 3));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r27 + 2));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -48);
    r0 = (r0 * 10);
    r3 = (r4 + r0);
    r26 = (r3 + -48);
    r26 = (r26 & 255);
}

loc_8005C718:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(16))) {
        goto loc_8005C730;
    }
}

loc_8005C71C:
{
    r3 = r27;
    r4 = (r27 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_22A4 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_22A4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r28 = r27;
    goto loc_8005C788;
}

loc_8005C730:
{
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r30));
    r28 = (r1 + 520);
    r3 = r28;
    ctx->lr = 0x8005C740u;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B8D8_2617 = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_2617);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_2617 >> 32);
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
        InvokeDirectCpu<0x8005B8D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8005C744:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005C76C;
    }
}

loc_8005C748:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl4_0x8005B780:
{
    r5 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl4_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryInline::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryInline::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + 20588), r4);
    goto loc_inl4_cont_8005B780;
}

loc_inl4_return:
{
}

loc_inl4_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = r28;
    ctx->lr = 0x8005C75Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8005BAB4_2D4A = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_2D4A);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_2D4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
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
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    // inline leaf 0x8005B7A4 (9 guest instruction(s))
}

loc_inl5_0x8005B7A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl5_0x8005B7AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8005B7B8;
    }
}

loc_inl5_0x8005B7B0:
{
    r3 = 0;
    goto loc_inl5_cont_8005B7A4;
}

loc_inl5_0x8005B7B8:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 20584));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl5_cont_8005B7A4:
{
    // end of inlined leaf 0x8005B7A4
    r25 = r3;
    if constexpr (KnownRegArgsCpuCall<0x8005B7C8u>(&func_8005B7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B7C8_3515 = func_8005B7C8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8005B7C8_3515;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B7C8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r24 = r3;
}

loc_8005C76C:
{
    r3 = r28;
    r4 = (r27 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_379C = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_379C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r26;
    if constexpr (KnownRegArgsCpuCall<0x8005B804u>(&func_8005B804)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B804_3A5E = func_8005B804_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005B804_3A5E);
        r4 = static_cast<uint32_t>(regargs_result_8005B804_3A5E >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B804u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_8005C788;
}

loc_8005C784:
{
    r28 = (r27 + 1);
}

loc_8005C788:
{
    r3 = r28;
    r4 = 126;
    if constexpr (KnownRegArgsCpuCall<0x8005C844u>(&func_8005C844)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005C844_3DB1 = func_8005C844_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C844_3DB1);
        r4 = static_cast<uint32_t>(regargs_result_8005C844_3DB1 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C844u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r27 = r3;
}

loc_8005C79C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8005C6E0;
    }
}

loc_8005C7A0:
{
    r3 = (r1 + 520);
    ctx->lr = 0x8005C7A8u;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B8D8_415E = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_415E);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_415E >> 32);
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
        InvokeDirectCpu<0x8005B8D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8005C7AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005C82C;
    }
}

loc_8005C7B0:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B780_45B4 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_45B4;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r1 + 520);
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8005C844u>(&func_8005C844)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005C844_4839 = func_8005C844_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C844_4839);
        r4 = static_cast<uint32_t>(regargs_result_8005C844_4839 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005C844u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r30 = r3;
}

loc_8005C7D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005C824;
    }
}

loc_8005C7D4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r3 = (r1 + 520);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8005C7E8u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_4CDC = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_4CDC);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_4CDC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BA04u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    if constexpr (KnownRegArgsCpuCall<0x8005B7C8u>(&func_8005B7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B7C8_5351 = func_8005B7C8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8005B7C8_5351;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B7C8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r0 = (r29 + r3);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B780_5602 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_5602;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r30 + 1);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_5878 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_5878);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_5878 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8005C808:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005C82C;
    }
}

loc_8005C80C:
{
    r3 = (r1 + 8);
    r4 = (r30 + 1);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_5C0D = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_5C0D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r1 + 8);
    ctx->lr = 0x8005C820u;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8005BAB4_5F0D = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_5F0D);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_5F0D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
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
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    goto loc_8005C82C;
}

loc_8005C824:
{
    r3 = (r1 + 520);
    ctx->lr = 0x8005C82Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8005BAB4_64FA = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_64FA);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_64FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
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
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
}

loc_8005C82C:
{
    r11 = (r1 + 1072);
    r0 = MemoryInline::FlatRead32((r1 + 1076));
    ctx->lr = r0;
    r1 = (r1 + 1072);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8005C67C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005C67C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005C67C func_8005C67C preserves=true fpr_mask=0x00000000
