#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007B1C4(CpuContext* ctx);
extern "C" uint64_t func_8007B1C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007B288(CpuContext* ctx);
extern "C" uint64_t func_8007B288_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BF4CC(CpuContext* ctx);
extern "C" uint32_t func_802BF4CC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802C0288_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802C0288;

loc_802C0288:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    // inline leaf 0x802BF4C4 (2 guest instruction(s))
    r3 = (r3 + 10360);
    // end of inlined leaf 0x802BF4C4
    r4 = r3;
    r3 = (r1 + 8);
    r5 = r31;
    // inline leaf 0x80065290 (14 guest instruction(s))
}

loc_inl1_0x80065290:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_inl1_0x80065298:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_inl1_0x800652B4;
    }
}

loc_inl1_0x8006529C:
{
}

loc_inl1_0x800652A0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_inl1_0x800652B4;
    }
}

loc_inl1_0x800652A4:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 * 12);
    r5 = (r6 + r0);
    goto loc_inl1_0x800652BC;
}

loc_inl1_0x800652B4:
{
    r5 = 0;
}

loc_inl1_0x800652BC:
{
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r5);
}

loc_inl1_cont_80065290:
{
    // end of inlined leaf 0x80065290
    r3 = (r1 + 8);
    r4 = 4;
    r5 = -1;
    ctx->lr = 0x802C02C8u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_9C0 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_9C0);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_9C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 5;
    r5 = -1;
    ctx->lr = 0x802C02D8u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_D10 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_D10);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_D10 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 6;
    r5 = -1;
    ctx->lr = 0x802C02E8u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_1060 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_1060);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_1060 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 7;
    r5 = -1;
    ctx->lr = 0x802C02F8u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_13B3 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_13B3);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_13B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x802C0304u;
    if constexpr (KnownRegArgsCpuCall<0x8007B288u>(&func_8007B288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B288_16F8 = func_8007B288_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B288_16F8);
        r4 = static_cast<uint32_t>(regargs_result_8007B288_16F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r31 + -8);
}

loc_802C030C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32))) {
        goto loc_802C0550;
    }
}

loc_802C0310:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = -1;
    ctx->lr = 0x802C0320u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_1AF7 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_1AF7);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_1AF7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 1;
    r5 = -1;
    ctx->lr = 0x802C0330u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_1E4A = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_1E4A);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_1E4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 2;
    r5 = -1;
    ctx->lr = 0x802C0340u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_219D = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_219D);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_219D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 3;
    r5 = -1;
    ctx->lr = 0x802C0350u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_24F0 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_24F0);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_24F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r31 + -3);
}

loc_802C0358:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_802C049C;
    }
}

loc_802C035C:
{
}

loc_802C0360:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802C0380;
    }
}

loc_802C0364:
{
}

loc_802C0368:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_802C03F4;
    }
}

loc_802C036C:
{
}

loc_802C0370:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_802C0428;
    }
}

loc_802C0374:
{
}

loc_802C0378:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(7))) {
        goto loc_802C0510;
    }
}

loc_802C037C:
{
    goto loc_802C0550;
}

loc_802C0380:
{
    ctx->lr = 0x802C0384u;
    if constexpr (KnownRegArgsCpuCall<0x802BF4CCu>(&func_802BF4CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BF4CC_2B3E = func_802BF4CC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BF4CC_2B3E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BF4CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802C0388:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802C03C0;
    }
}

loc_802C038C:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = -1;
    ctx->lr = 0x802C039Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_2E33 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_2E33);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_2E33 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 1;
    r5 = 1;
    ctx->lr = 0x802C03ACu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_3185 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_3185);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_3185 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 2;
    r5 = 2;
    ctx->lr = 0x802C03BCu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_34D7 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_34D7);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_34D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802C0550;
}

loc_802C03C0:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x802C03D0u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_3858 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_3858);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_3858 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 1;
    r5 = 1;
    ctx->lr = 0x802C03E0u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_3BAA = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_3BAA);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_3BAA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 2;
    r5 = 2;
    ctx->lr = 0x802C03F0u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_3EFC = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_3EFC);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_3EFC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802C0550;
}

loc_802C03F4:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 33;
    ctx->lr = 0x802C0404u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_427E = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_427E);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_427E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 1;
    r5 = 34;
    ctx->lr = 0x802C0414u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_45D1 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_45D1);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_45D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 2;
    r5 = 35;
    ctx->lr = 0x802C0424u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_4924 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_4924);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_4924 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802C0550;
}

loc_802C0428:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802C0434:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802C045C;
    }
}

loc_802C0438:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 3;
    ctx->lr = 0x802C0448u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_4E0D = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_4E0D);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_4E0D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 1;
    r5 = 4;
    ctx->lr = 0x802C0458u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_515F = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_515F);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_515F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802C047C;
}

loc_802C045C:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = -1;
    ctx->lr = 0x802C046Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_54E1 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_54E1);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_54E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 1;
    r5 = -1;
    ctx->lr = 0x802C047Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_5834 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_5834);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_5834 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802C047C:
{
    r3 = (r1 + 8);
    r4 = 2;
    r5 = -1;
    ctx->lr = 0x802C048Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_5B9E = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_5B9E);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_5B9E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x802C0498u;
    if constexpr (KnownRegArgsCpuCall<0x8007B288u>(&func_8007B288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B288_5EE4 = func_8007B288_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B288_5EE4);
        r4 = static_cast<uint32_t>(regargs_result_8007B288_5EE4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802C0550;
}

loc_802C049C:
{
    ctx->lr = 0x802C04A0u;
    if constexpr (KnownRegArgsCpuCall<0x802BF4CCu>(&func_802BF4CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BF4CC_6237 = func_802BF4CC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BF4CC_6237;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BF4CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802C04A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802C04DC;
    }
}

loc_802C04A8:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = -1;
    ctx->lr = 0x802C04B8u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_652C = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_652C);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_652C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 1;
    r5 = 1;
    ctx->lr = 0x802C04C8u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_687E = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_687E);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_687E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 2;
    r5 = 2;
    ctx->lr = 0x802C04D8u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_6BD0 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_6BD0);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_6BD0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802C0550;
}

loc_802C04DC:
{
    r30 = 0;
    r0 = (r31 + -3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r31 = (r3 + 5);
}

loc_802C04EC:
{
    r3 = (r1 + 8);
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x802C04FCu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_7016 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_7016);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_7016 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = (r31 + 1);
    r30 = (r30 + 1);
}

loc_802C0508:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(4))) {
        goto loc_802C04EC;
    }
}

loc_802C050C:
{
    goto loc_802C0550;
}

loc_802C0510:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x802C0520u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_7456 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_7456);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_7456 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 1;
    r5 = 2;
    ctx->lr = 0x802C0530u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_77A8 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_77A8);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_77A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 2;
    r5 = 3;
    ctx->lr = 0x802C0540u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_7AFA = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_7AFA);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_7AFA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 3;
    r5 = 4;
    ctx->lr = 0x802C0550u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_7E4C = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_7E4C);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_7E4C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802C0550:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C0288(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C0288_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C0288 func_802C0288 preserves=true fpr_mask=0x00000000
