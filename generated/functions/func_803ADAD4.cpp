#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A7ECC(CpuContext* ctx);
extern "C" uint64_t func_803A7ECC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803A818C(CpuContext* ctx);
extern "C" uint64_t func_803A818C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B4D4C(CpuContext* ctx);
extern "C" uint32_t func_803B4D4C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4DC4(CpuContext* ctx);
extern "C" uint32_t func_803B4DC4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4E3C(CpuContext* ctx);
extern "C" uint32_t func_803B4E3C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803ADAD4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_803ADAD4;

loc_803ADAD4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803ADAF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ADC88;
    }
}

loc_803ADAFC:
{
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
}

loc_803ADB0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ADC88;
    }
}

loc_803ADB10:
{
    r29 = 0;
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803ADB24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ADB38;
    }
}

loc_803ADB28:
{
    r0 = MemoryInline::FlatRead32((r3 + 26460));
}

loc_803ADB30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803ADB38;
    }
}

loc_803ADB34:
{
    r29 = 1;
}

loc_803ADB38:
{
}

loc_803ADB3C:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_803ADC88;
    }
}

loc_803ADB40:
{
    r28 = 0;
    r29 = 0;
}

loc_803ADB48:
{
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r0 + r29);
    r3 = MemoryInline::FlatRead8((r3 + 724));
}

loc_803ADB58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ADBE8;
    }
}

loc_803ADB5C:
{
    ctx->lr = 0x803ADB60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x801410B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r28 = (r28 + 1);
    r3 = 0;
    ctx->lr = 0x803ADB6Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B4DC4u>(&func_803B4DC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4DC4_1587 = func_803B4DC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4DC4_1587;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4DC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803ADB70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803ADB8C;
    }
}

loc_803ADB74:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 26999), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 776), static_cast<uint8_t>(r0));
    goto loc_803ADBF4;
}

loc_803ADB8C:
{
    r3 = 0;
    ctx->lr = 0x803ADB94u;
    if constexpr (KnownRegArgsCpuCall<0x803B4D4Cu>(&func_803B4D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4D4C_19F8 = func_803B4D4C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4D4C_19F8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803ADB98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803ADBB4;
    }
}

loc_803ADB9C:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 26999), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 776), static_cast<uint8_t>(r0));
    goto loc_803ADBF4;
}

loc_803ADBB4:
{
    r3 = 0;
    ctx->lr = 0x803ADBBCu;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4E3C_1E69 = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_1E69;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803ADBC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803ADBE8;
    }
}

loc_803ADBC4:
{
}

loc_803ADBC8:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(2))) {
        goto loc_803ADBE8;
    }
}

loc_803ADBCC:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 26999), static_cast<uint8_t>(r0));
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 776), static_cast<uint8_t>(r0));
    goto loc_803ADBF4;
}

loc_803ADBE8:
{
    r29 = (r29 + 1);
}

loc_803ADBF0:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_803ADB48;
    }
}

loc_803ADBF4:
{
    r3 = 0;
    ctx->lr = 0x803ADBFCu;
    if constexpr (KnownRegArgsCpuCall<0x803B4DC4u>(&func_803B4DC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4DC4_2424 = func_803B4DC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4DC4_2424;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4DC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803ADC00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803ADC40;
    }
}

loc_803ADC04:
{
    r3 = 0;
    ctx->lr = 0x803ADC0Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4E3C_2763 = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_2763;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803ADC10:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803ADC24;
    }
}

loc_803ADC14:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead8((r3 + 26464));
    ctx->lr = 0x803ADC20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x801410B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    goto loc_803ADC40;
}

loc_803ADC24:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead8((r3 + 26464));
}

loc_803ADC30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ADC40;
    }
}

loc_803ADC34:
{
}

loc_803ADC38:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(1))) {
        goto loc_803ADC40;
    }
}

loc_803ADC3C:
{
    ctx->lr = 0x803ADC40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x801410B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_803ADC40:
{
    r5 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = r30;
    r4 = (r5 + 27048);
    r5 = MemoryInline::FlatRead8((r5 + 27045));
    r6 = 0;
    ctx->lr = 0x803ADC58u;
    if constexpr (KnownRegArgsCpuCall<0x803A7ECCu>(&func_803A7ECC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803A7ECC_32C8 = func_803A7ECC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803A7ECC_32C8);
        r4 = static_cast<uint32_t>(regargs_result_803A7ECC_32C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803A7ECCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r30;
    r0 = MemoryInline::FlatRead8((r30 + 233));
    r4 = 0x80600000u;
    r4 = (r4 + -32652);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead8(r4_addr_1);
    r5 = MemoryInline::FlatRead8((r30 + 234));
    ctx->lr = 0x803ADC74u;
    if constexpr (KnownRegArgsCpuCall<0x803A818Cu>(&func_803A818C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803A818C_3A35 = func_803A818C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803A818C_3A35);
        r4 = static_cast<uint32_t>(regargs_result_803A818C_3A35 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803A818Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r31 & 255);
}

loc_803ADC7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_803ADC88;
    }
}

loc_803ADC80:
{
    r3 = 3;
    // inline leaf 0x800CF2B8 (7 guest instruction(s))
}

loc_inl2_0x800CF2B8:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CF2C0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(7))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x800CF2C4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 37), static_cast<uint8_t>(r3));
    goto loc_inl2_cont_800CF2B8;
}

loc_inl2_return:
{
}

loc_inl2_cont_800CF2B8:
{
    // end of inlined leaf 0x800CF2B8
}

loc_803ADC88:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803ADAD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803ADAD4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x007FFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803ADAD4 func_803ADAD4 preserves=true fpr_mask=0x00000000
