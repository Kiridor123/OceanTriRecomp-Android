#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800697CC(CpuContext* ctx);
extern "C" uint32_t func_800697CC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800732F4(CpuContext* ctx);
extern "C" uint32_t func_800732F4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007350C(CpuContext* ctx);
extern "C" uint32_t func_8007350C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800807B0(CpuContext* ctx);
extern "C" uint64_t func_800807B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80088F88(CpuContext* ctx);
extern "C" uint64_t func_80088F88_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80089100(CpuContext* ctx);
extern "C" uint64_t func_80089100_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80089290(CpuContext* ctx);
extern "C" uint64_t func_80089290_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8007EAF0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8007EAF0;

loc_8007EAF0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
}

loc_8007EB0C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8007EB18;
    }
}

loc_8007EB10:
{
    r3 = 0;
    goto loc_8007ED24;
}

loc_8007EB18:
{
    r0 = MemoryInline::FlatRead32((r3 + 312));
}

loc_8007EB20:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8007ED20;
    }
}

loc_8007EB24:
{
    r3 = r0;
    r4 = 65536;
    r4 = (r4 + 3);
    r5 = 0;
    r6 = r31;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8007EB48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 312), r0);
    r0 = MemoryInline::FlatRead32((r31 + 388));
    r0 = (r0 & 1);
}

loc_8007EB5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8007EB74;
    }
}

loc_8007EB60:
{
    r0 = MemoryInline::FlatRead32((r31 + 324));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 324), r0);
    r3 = 1;
    goto loc_8007ED24;
}

loc_8007EB74:
{
    r0 = MemoryInline::FlatRead32((r31 + 376));
}

loc_8007EB7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007EC00;
    }
}

loc_8007EB80:
{
    r3 = r31;
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = (r1 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800980FCu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r27 = 0;
    r29 = 0;
    goto loc_8007EBF8;
}

loc_8007EBA4:
{
    r3 = r31;
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = (r1 + 32);
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098094u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 52);
    r4 = (r1 + 36);
    ctx->lr = 0x8007EBCCu;
    if constexpr (KnownRegArgsCpuCall<0x800697CCu>(&func_800697CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800697CC_16F6 = func_800697CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800697CC_16F6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800697CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryInline::FlatRead32((r31 + 376));
    r3_addr_2 = (r3 + r29);
    r28 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = (r1 + 52);
    // inline leaf 0x80073754 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073754
}

loc_8007EBE0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r28))) {
        goto loc_8007EBF0;
    }
}

loc_8007EBE4:
{
    r3 = (r1 + 52);
    r4 = r28;
    ctx->lr = 0x8007EBF0u;
    if constexpr (KnownRegArgsCpuCall<0x80088F88u>(&func_80088F88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80088F88_1B52 = func_80088F88_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80088F88_1B52);
        r4 = static_cast<uint32_t>(regargs_result_80088F88_1B52 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80088F88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
}

loc_8007EBF0:
{
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_8007EBF8:
{
}

loc_8007EBFC:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r30))) {
        goto loc_8007EBA4;
    }
}

loc_8007EC00:
{
    r0 = MemoryInline::FlatRead32((r31 + 380));
}

loc_8007EC08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007EC8C;
    }
}

loc_8007EC0C:
{
    r3 = r31;
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80098214u>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r27 = 0;
    r29 = 0;
    goto loc_8007EC84;
}

loc_8007EC30:
{
    r3 = r31;
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 20);
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800981ACu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 48);
    r4 = (r1 + 24);
    ctx->lr = 0x8007EC58u;
    if constexpr (KnownRegArgsCpuCall<0x8007350Cu>(&func_8007350C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007350C_2447 = func_8007350C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007350C_2447;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007350Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryInline::FlatRead32((r31 + 380));
    r3_addr_5 = (r3 + r29);
    r28 = MemoryInline::FlatRead32(r3_addr_5);
    r3 = (r1 + 48);
    // inline leaf 0x80073460 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073460
}

loc_8007EC6C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r28))) {
        goto loc_8007EC7C;
    }
}

loc_8007EC70:
{
    r3 = (r1 + 48);
    r4 = r28;
    ctx->lr = 0x8007EC7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80089100u>(&func_80089100)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80089100_28A3 = func_80089100_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80089100_28A3);
        r4 = static_cast<uint32_t>(regargs_result_80089100_28A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80089100u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
}

loc_8007EC7C:
{
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_8007EC84:
{
}

loc_8007EC88:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r30))) {
        goto loc_8007EC30;
    }
}

loc_8007EC8C:
{
    r0 = MemoryInline::FlatRead32((r31 + 384));
}

loc_8007EC94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007ED18;
    }
}

loc_8007EC98:
{
    r3 = r31;
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009832Cu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r27 = 0;
    r29 = 0;
    goto loc_8007ED10;
}

loc_8007ECBC:
{
    r3 = r31;
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800982C4u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 44);
    r4 = (r1 + 12);
    ctx->lr = 0x8007ECE4u;
    if constexpr (KnownRegArgsCpuCall<0x800732F4u>(&func_800732F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800732F4_3196 = func_800732F4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800732F4_3196;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800732F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryInline::FlatRead32((r31 + 384));
    r3_addr_8 = (r3 + r29);
    r28 = MemoryInline::FlatRead32(r3_addr_8);
    r3 = (r1 + 44);
    // inline leaf 0x80073248 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073248
}

loc_8007ECF8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r28))) {
        goto loc_8007ED08;
    }
}

loc_8007ECFC:
{
    r3 = (r1 + 44);
    r4 = r28;
    ctx->lr = 0x8007ED08u;
    if constexpr (KnownRegArgsCpuCall<0x80089290u>(&func_80089290)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80089290_35F2 = func_80089290_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80089290_35F2);
        r4 = static_cast<uint32_t>(regargs_result_80089290_35F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80089290u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
}

loc_8007ED08:
{
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_8007ED10:
{
}

loc_8007ED14:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r30))) {
        goto loc_8007ECBC;
    }
}

loc_8007ED18:
{
    r3 = 1;
    goto loc_8007ED24;
}

loc_8007ED20:
{
    ctx->lr = 0x8007ED24u;
    if constexpr (KnownRegArgsCpuCall<0x800807B0u>(&func_800807B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_800807B0_3B4D = func_800807B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800807B0_3B4D);
        r4 = static_cast<uint32_t>(regargs_result_800807B0_3B4D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x800807B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    }
}

loc_8007ED24:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8007EAF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007EAF0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8007EAF0 func_8007EAF0 preserves=true fpr_mask=0x00000000
