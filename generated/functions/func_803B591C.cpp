#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012EDCC(CpuContext* ctx);
extern "C" uint64_t func_8012EDCC_ra18_6_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_803A8844(CpuContext* ctx);
extern "C" uint32_t func_803A8844_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803A9E50(CpuContext* ctx);
extern "C" uint64_t func_803A9E50_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B510C(CpuContext* ctx);
extern "C" uint32_t func_803B510C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803B591C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    goto loc_803B591C;

loc_803B591C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r3 = 0;
    ctx->lr = 0x803B5940u;
    if constexpr (KnownRegArgsCpuCall<0x803B510Cu>(&func_803B510C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B510C_82B = func_803B510C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B510C_82B;
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

loc_803B5944:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B5B64;
    }
}

loc_803B5948:
{
    ctx->lr = 0x803B594Cu;
    if constexpr (KnownRegArgsCpuCall<0x803A8844u>(&func_803A8844)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A8844_B5B = func_803A8844_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A8844_B5B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A8844u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r5 = 0;
    r4 = (r29 + 148);
    r31 = 0;
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 & 16);
}

loc_803B5964:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_803B597C;
    }
}

loc_803B5968:
{
    r0 = (r3 & 1024);
}

loc_803B5970:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1024))) {
        goto loc_803B597C;
    }
}

loc_803B5974:
{
    r5 = 1;
    goto loc_803B59DC;
}

loc_803B597C:
{
    r31 = 1;
    r4 = (r4 + 96);
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 & 16);
}

loc_803B5990:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_803B59A8;
    }
}

loc_803B5994:
{
    r0 = (r3 & 1024);
}

loc_803B599C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1024))) {
        goto loc_803B59A8;
    }
}

loc_803B59A0:
{
    r5 = 1;
    goto loc_803B59DC;
}

loc_803B59A8:
{
    r31 = 2;
    r4 = (r4 + 96);
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 & 16);
}

loc_803B59BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_803B59D4;
    }
}

loc_803B59C0:
{
    r0 = (r3 & 1024);
}

loc_803B59C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1024))) {
        goto loc_803B59D4;
    }
}

loc_803B59CC:
{
    r5 = 1;
    goto loc_803B59DC;
}

loc_803B59D4:
{
    r31 = 3;
    r4 = (r4 + 96);
}

loc_803B59DC:
{
}

loc_803B59E0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803B5B64;
    }
}

loc_803B59E4:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r3 = (r0 & 255);
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r4 = (r0 & 255);
    ctx->lr = 0x803B59F8u;
    if constexpr (KnownRegArgsCpuCall<0x8012EDCCu>(&func_8012EDCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012EDCC_14E4 = func_8012EDCC_ra18_6_18_0(ctx, r3, r4, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8012EDCC_14E4);
        r4 = static_cast<uint32_t>(regargs_result_8012EDCC_14E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8012EDCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
}

loc_803B59FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B5A10;
    }
}

loc_803B5A00:
{
    r3 = r29;
    r4 = r31;
    r5 = 1024;
    ctx->lr = 0x803B5A10u;
    if constexpr (KnownRegArgsCpuCall<0x803A9E50u>(&func_803A9E50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A9E50_1924 = func_803A9E50_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803A9E50_1924);
        r4 = static_cast<uint32_t>(regargs_result_803A9E50_1924 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803A9E50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_803B5A10:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r29 + 147));
}

loc_803B5A1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803B5A3C;
    }
}

loc_803B5A20:
{
}

loc_803B5A24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803B5A94;
    }
}

loc_803B5A28:
{
}

loc_803B5A2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803B5ABC;
    }
}

loc_803B5A30:
{
}

loc_803B5A34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803B5AFC;
    }
}

loc_803B5A38:
{
    goto loc_803B5B54;
}

loc_803B5A3C:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x803B5A4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_803B5A50:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803B5A84;
    }
}

loc_803B5A54:
{
    r3 = r29;
    r4 = 1;
    r5 = 1;
    ctx->lr = 0x803B5A64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_803B5A68:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803B5A84;
    }
}

loc_803B5A6C:
{
    r3 = r29;
    r4 = 2;
    r5 = 1;
    ctx->lr = 0x803B5A7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_803B5A80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B5A8C;
    }
}

loc_803B5A84:
{
    r3 = 1;
    goto loc_803B5B54;
}

loc_803B5A8C:
{
    r3 = 0;
    goto loc_803B5B54;
}

loc_803B5A94:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x803B5AA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_803B5AA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B5AB4;
    }
}

loc_803B5AAC:
{
    r3 = 1;
    goto loc_803B5B54;
}

loc_803B5AB4:
{
    r3 = 0;
    goto loc_803B5B54;
}

loc_803B5ABC:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x803B5ACCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_803B5AD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B5AF4;
    }
}

loc_803B5AD4:
{
    r3 = r29;
    r4 = 1;
    r5 = 1;
    ctx->lr = 0x803B5AE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_803B5AE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B5AF4;
    }
}

loc_803B5AEC:
{
    r3 = 1;
    goto loc_803B5B54;
}

loc_803B5AF4:
{
    r3 = 0;
    goto loc_803B5B54;
}

loc_803B5AFC:
{
    r30 = 0;
    r31 = 0;
}

loc_803B5B04:
{
    r3 = r29;
    r4 = r31;
    // inline leaf 0x803AA324 (12 guest instruction(s))
}

loc_inl0_0x803AA324:
{
    r0 = (r4 * 96);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 148));
}

loc_inl0_0x803AA334:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x803AA340;
    }
}

loc_inl0_0x803AA338:
{
    r3 = 0;
    goto loc_inl0_cont_803AA324;
}

loc_inl0_0x803AA340:
{
    r3 = (r0 & 8);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
}

loc_inl0_cont_803AA324:
{
    // end of inlined leaf 0x803AA324
}

loc_803B5B14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B5B20;
    }
}

loc_803B5B18:
{
    r30 = (r30 + 1);
    goto loc_803B5B3C;
}

loc_803B5B20:
{
    r3 = r29;
    r4 = r31;
    r5 = 1;
    ctx->lr = 0x803B5B30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_803B5B34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B5B3C;
    }
}

loc_803B5B38:
{
    r30 = (r30 + 1);
}

loc_803B5B3C:
{
    r31 = (r31 + 1);
}

loc_803B5B44:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(3))) {
        goto loc_803B5B04;
    }
}

loc_803B5B48:
{
    r0 = (r30 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
}

loc_803B5B54:
{
}

loc_803B5B58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_803B5B64;
    }
}

loc_803B5B5C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 27194), static_cast<uint8_t>(r0));
}

loc_803B5B64:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_803B591C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B591C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B591C func_803B591C preserves=true fpr_mask=0x00000000
