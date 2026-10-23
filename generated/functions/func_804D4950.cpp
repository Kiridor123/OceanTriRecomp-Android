#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CC2E0(CpuContext* ctx);
extern "C" uint64_t func_804CC2E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D2750(CpuContext* ctx);
extern "C" uint64_t func_804D2750_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D40B0(CpuContext* ctx);
extern "C" uint32_t func_804D40B0_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D4160(CpuContext* ctx);
extern "C" uint64_t func_804D4160_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D51A0(CpuContext* ctx);
extern "C" uint64_t func_804D51A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804D4950_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_804D4950;

loc_804D4950:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r31 = r3;
    r3 = r30;
    ctx->lr = 0x804D4978u;
    if constexpr (KnownRegArgsCpuCall<0x804CC2E0u>(&func_804CC2E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804CC2E0_A0D = func_804CC2E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CC2E0_A0D);
        r4 = static_cast<uint32_t>(regargs_result_804CC2E0_A0D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804CC2E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead16((r30 + 712));
}

loc_804D4980:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804D4998;
    }
}

loc_804D4984:
{
}

loc_804D4988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804D49B0;
    }
}

loc_804D498C:
{
}

loc_804D4990:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_804D49BC;
    }
}

loc_804D4994:
{
    goto loc_804D4A74;
}

loc_804D4998:
{
    r0 = MemoryInline::FlatRead32((r30 + 716));
}

loc_804D49A0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_804D4A80;
    }
}

loc_804D49A4:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x804D40B0u>(&func_804D40B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804D40B0_1069 = func_804D40B0_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804D40B0_1069;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804D40B0u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_804D4A80;
}

loc_804D49B0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14988), r0);
    goto loc_804D4A80;
}

loc_804D49BC:
{
    r4 = MemoryInline::FlatRead32((r30 + 736));
    r5 = MemoryInline::FlatRead32((r30 + 740));
}

loc_804D49C8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D49D8;
    }
}

loc_804D49CC:
{
    r3 = MemoryInline::FlatRead32((r30 + 732));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    goto loc_804D49DC;
}

loc_804D49D8:
{
    MemoryInline::FlatWrite32((r4 + 740), r5);
}

loc_804D49DC:
{
}

loc_804D49E0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D49F0;
    }
}

loc_804D49E4:
{
    r3 = MemoryInline::FlatRead32((r30 + 732));
    MemoryInline::FlatWrite32(r3, r4);
    goto loc_804D49F4;
}

loc_804D49F0:
{
    MemoryInline::FlatWrite32((r5 + 736), r4);
}

loc_804D49F4:
{
    r0 = MemoryInline::FlatRead32((r30 + 716));
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 732), r3);
}

loc_804D4A04:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_804D4A80;
    }
}

loc_804D4A08:
{
    r3 = MemoryInline::FlatRead32((r30 + 752));
}

loc_804D4A10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D4A80;
    }
}

loc_804D4A14:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_804D4A18:
{
    r0 = MemoryInline::FlatRead32((r3 + 716));
}

loc_804D4A20:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_804D4A80;
    }
}

loc_804D4A24:
{
    r4 = MemoryInline::FlatRead32((r3 + 724));
    r5 = MemoryInline::FlatRead32((r3 + 756));
    goto loc_804D4A50;
}

loc_804D4A30:
{
    r6 = MemoryInline::FlatRead32(r5);
}

loc_804D4A38:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804D4A4C;
    }
}

loc_804D4A3C:
{
    r0 = MemoryInline::FlatRead32((r6 + 720));
}

loc_804D4A44:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_804D4A4C;
    }
}

loc_804D4A48:
{
    r4 = r0;
}

loc_804D4A4C:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
}

loc_804D4A50:
{
}

loc_804D4A54:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D4A30;
    }
}

loc_804D4A58:
{
    r0 = MemoryInline::FlatRead32((r3 + 720));
}

loc_804D4A60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_804D4A80;
    }
}

loc_804D4A64:
{
    ctx->lr = 0x804D4A68u;
    if constexpr (KnownRegArgsCpuCall<0x804D4160u>(&func_804D4160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804D4160_1DAF = func_804D4160_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804D4160_1DAF);
        r4 = static_cast<uint32_t>(regargs_result_804D4160_1DAF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804D4160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_804D4A6C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D4A18;
    }
}

loc_804D4A70:
{
    goto loc_804D4A80;
}

loc_804D4A74:
{
    r3 = r31;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804D4B0C;
}

loc_804D4A80:
{
    r3 = r30;
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl2_0x804CD870:
{
    r5 = 0;
    MemoryInline::FlatWrite16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryInline::FlatWrite16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl2_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x804CD88C:
{
    MemoryInline::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl2_cont_804CD870;
}

loc_inl2_return:
{
}

loc_inl2_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r0 = MemoryInline::FlatRead16((r30 + 714));
    r0 = (r0 & 1);
}

loc_804D4A90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D4AD8;
    }
}

loc_804D4A94:
{
    r4 = MemoryInline::FlatRead32((r30 + 764));
    r5 = MemoryInline::FlatRead32((r30 + 768));
}

loc_804D4AA0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D4AB0;
    }
}

loc_804D4AA4:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 224), r5);
    goto loc_804D4AB4;
}

loc_804D4AB0:
{
    MemoryInline::FlatWrite32((r4 + 768), r5);
}

loc_804D4AB4:
{
}

loc_804D4AB8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D4AC8;
    }
}

loc_804D4ABC:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 220), r4);
    goto loc_804D4ACC;
}

loc_804D4AC8:
{
    MemoryInline::FlatWrite32((r5 + 764), r4);
}

loc_804D4ACC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 712), static_cast<uint16_t>(r0));
    goto loc_804D4AE0;
}

loc_804D4AD8:
{
    r0 = 8;
    MemoryInline::FlatWrite16((r30 + 712), static_cast<uint16_t>(r0));
}

loc_804D4AE0:
{
    r3 = r30;
    ctx->lr = 0x804D4AE8u;
    if constexpr (KnownRegArgsCpuCall<0x804D2750u>(&func_804D2750)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804D2750_2C2E = func_804D2750_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D2750_2C2E);
        r4 = static_cast<uint32_t>(regargs_result_804D2750_2C2E >> 32);
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
        InvokeDirectCpu<0x804D2750u>(ctx);
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
    r3 = (r30 + 744);
    ctx->lr = 0x804D4AF0u;
    if constexpr (KnownRegArgsCpuCall<0x804D51A0u>(&func_804D51A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804D51A0_32C9 = func_804D51A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D51A0_32C9);
        r4 = static_cast<uint32_t>(regargs_result_804D51A0_32C9 >> 32);
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
        InvokeDirectCpu<0x804D51A0u>(ctx);
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
    r0 = MemoryInline::FlatRead32((r13 + -14988));
}

loc_804D4AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D4B04;
    }
}

loc_804D4AFC:
{
    r3 = 0;
    ctx->lr = 0x804D4B04u;
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
    InvokeDirectCpu<0x804D4360u>(ctx);
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

loc_804D4B04:
{
    r3 = r31;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804D4B0C:
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D4950(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D4950_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x3FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D4950 func_804D4950 preserves=true fpr_mask=0x00000000
