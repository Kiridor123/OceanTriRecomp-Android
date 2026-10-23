#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D30BC(CpuContext* ctx);
extern "C" uint64_t func_800D30BC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800E2728(CpuContext* ctx);
extern "C" uint64_t func_800E2728_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8014160C(CpuContext* ctx);
extern "C" uint64_t func_8014160C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801422B0(CpuContext* ctx);
extern "C" uint64_t func_801422B0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80146C90(CpuContext* ctx);
extern "C" uint64_t func_80146C90_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B9A24(CpuContext* ctx);
extern "C" uint64_t func_803B9A24_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_801431F4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    goto loc_801431F4;

loc_801431F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl0_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB50;
    }
}

loc_inl0_0x800CFB48:
{
    r3 = 0;
    goto loc_inl0_cont_800CFB34;
}

loc_inl0_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB64;
    }
}

loc_inl0_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFB34;
}

loc_inl0_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl0_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r29 = r3;
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80143228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801433C8;
    }
}

loc_8014322C:
{
    r0 = MemoryInline::FlatRead8((r30 + 4));
}

loc_80143234:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143264;
    }
}

loc_80143238:
{
    r3 = r30;
    ctx->lr = 0x80143240u;
    if constexpr (KnownRegArgsCpuCall<0x803B9A24u>(&func_803B9A24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_803B9A24_11B4 = func_803B9A24_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B9A24_11B4);
        r4 = static_cast<uint32_t>(regargs_result_803B9A24_11B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
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
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B9A24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
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
    r3 = r30;
    r4 = 11;
    ctx->lr = 0x8014324Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80126520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r12 = r3;
}

loc_80143254:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80143264;
    }
}

loc_80143258:
{
    r3 = r30;
    ctr = r12;
    ctx->lr = 0x80143264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r7 = ctx->gpr[7];
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

loc_80143264:
{
    r3 = (r30 + 36);
    ctx->lr = 0x8014326Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E2728u>(&func_800E2728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_800E2728_204C = func_800E2728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E2728_204C);
        r4 = static_cast<uint32_t>(regargs_result_800E2728_204C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x800E2728u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r3 = MemoryInline::FlatRead32((r30 + 304));
}

loc_80143274:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80143284;
    }
}

loc_80143278:
{
    ctx->lr = 0x8014327Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D30BCu>(&func_800D30BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_800D30BC_284F = func_800D30BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D30BC_284F);
        r4 = static_cast<uint32_t>(regargs_result_800D30BC_284F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
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
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D30BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 304), r0);
}

loc_80143284:
{
    r31 = MemoryInline::FlatRead8((r30 + 3));
    r3 = r30;
    // inline leaf 0x802C0770 (7 guest instruction(s))
    r5 = 255;
    r4 = 0x806C0000u;
    r4 = (r4 + -6272);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r3 = (r4 + r0);
    MemoryInline::FlatWrite8((r3 + 4096), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802C0770
    r3 = r30;
    // inline leaf 0x8013924C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 1156));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8013924C
}

loc_8014329C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801432C0;
    }
}

loc_801432A0:
{
    r3 = MemoryInline::FlatRead32((r30 + 1156));
}

loc_801432A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801432C0;
    }
}

loc_801432AC:
{
    r4 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x801432C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r7 = ctx->gpr[7];
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

loc_801432C0:
{
    r3 = r30;
    ctx->lr = 0x801432C8u;
    if constexpr (KnownRegArgsCpuCall<0x803B9A24u>(&func_803B9A24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_803B9A24_37D2 = func_803B9A24_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B9A24_37D2);
        r4 = static_cast<uint32_t>(regargs_result_803B9A24_37D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
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
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B9A24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
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
    r3 = MemoryInline::FlatRead32((r30 + 2836));
}

loc_801432D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801432D8;
    }
}

loc_801432D4:
{
    // inline leaf 0x800D8EA8 (5 guest instruction(s))
}

loc_inl3_0x800D8EA8:
{
}

loc_inl3_0x800D8EAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x800D8EB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_inl3_cont_800D8EA8;
}

loc_inl3_return:
{
}

loc_inl3_cont_800D8EA8:
{
    // end of inlined leaf 0x800D8EA8
}

loc_801432D8:
{
    r3 = r30;
    ctx->lr = 0x801432E0u;
    if constexpr (KnownRegArgsCpuCall<0x801422B0u>(&func_801422B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        const auto regargs_result_801422B0_41FE = func_801422B0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801422B0_41FE);
        r4 = static_cast<uint32_t>(regargs_result_801422B0_41FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801422B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead32((r30 + 456));
    r0 = (r0 & 9);
}

loc_801432E8:
{
}

loc_801432EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_801433C8;
    }
}

loc_801432F0:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl4_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl4_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CFB10;
    }
}

loc_inl4_0x800CFB08:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl4_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl4_0x800CFB24;
    }
}

loc_inl4_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl4_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = (r29 & 65535);
    ctr = r0;
}

loc_80143304:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8014334C;
    }
}

loc_80143308:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80143310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143344;
    }
}

loc_80143314:
{
    r4 = MemoryInline::FlatRead8((r30 + 11));
    r0 = MemoryInline::FlatRead8((r3 + 11));
}

loc_80143320:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80143344;
    }
}

loc_80143324:
{
    r3 = 0x805A0000u;
    r3 = (r3 + 8904);
    r3_addr_1 = (r3 + r31);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80143338:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_801433C8;
    }
}

loc_8014333C:
{
    ctx->lr = 0x80143340u;
    if constexpr (KnownRegArgsCpuCall<0x80146C90u>(&func_80146C90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80146C90_4E1D = func_80146C90_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80146C90_4E1D);
        r4 = static_cast<uint32_t>(regargs_result_80146C90_4E1D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x80146C90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    goto loc_801433C8;
}

loc_80143344:
{
    r3 = (r3 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80143308;
    }
}

loc_8014334C:
{
    r3 = 0x806A0000u;
    r28 = (r3 + 31072);
    r29 = 0;
}

loc_80143358:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80143360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801433B0;
    }
}

loc_80143364:
{
    r0 = MemoryInline::FlatRead32((r28 + 48));
}

loc_8014336C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801433B0;
    }
}

loc_80143370:
{
    r3 = MemoryInline::FlatRead8((r28 + 2));
    ctx->lr = 0x80143378u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80141538u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r3 = (r3 & 255);
}

loc_80143380:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_801433B0;
    }
}

loc_80143384:
{
    r0 = MemoryInline::FlatRead8((r30 + 11));
}

loc_8014338C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801433B0;
    }
}

loc_80143390:
{
    r3 = 0x805A0000u;
    r3 = (r3 + 8904);
    r3_addr_2 = (r3 + r31);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801433A4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_801433C8;
    }
}

loc_801433A8:
{
    ctx->lr = 0x801433ACu;
    if constexpr (KnownRegArgsCpuCall<0x80146C90u>(&func_80146C90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80146C90_5DCF = func_80146C90_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80146C90_5DCF);
        r4 = static_cast<uint32_t>(regargs_result_80146C90_5DCF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x80146C90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    goto loc_801433C8;
}

loc_801433B0:
{
    r29 = (r29 + 1);
    r28 = (r28 + 68);
}

loc_801433BC:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(128))) {
        goto loc_80143358;
    }
}

loc_801433C0:
{
    r3 = MemoryInline::FlatRead8((r30 + 11));
    ctx->lr = 0x801433C8u;
    if constexpr (KnownRegArgsCpuCall<0x8014160Cu>(&func_8014160C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8014160C_6611 = func_8014160C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8014160C_6611);
        r4 = static_cast<uint32_t>(regargs_result_8014160C_6611 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x8014160Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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

loc_801433C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801431F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801431F4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801431F4 func_801431F4 preserves=true fpr_mask=0x00000000
