#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052BAA4(CpuContext* ctx);
extern "C" uint64_t func_8052BAA4_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8052BCCC(CpuContext* ctx);
extern "C" uint64_t func_8052BCCC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80534E18(CpuContext* ctx);
extern "C" uint32_t func_80534E18_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80534F6C(CpuContext* ctx);
extern "C" uint64_t func_80534F6C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8053500C(CpuContext* ctx);
extern "C" uint64_t func_8053500C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8053526C(CpuContext* ctx);
extern "C" uint64_t func_8053526C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_805365A8(CpuContext* ctx);
extern "C" uint64_t func_805365A8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8052C3F8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8052C3F8;

loc_8052C3F8:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r29 = r3;
    r30 = r4;
    r31 = r5;
}

loc_8052C420:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052C42C;
    }
}

loc_8052C424:
{
    r3 = 0;
    goto loc_8052C67C;
}

loc_8052C42C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8052C434:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052C440;
    }
}

loc_8052C438:
{
    r3 = 0;
    goto loc_8052C67C;
}

loc_8052C440:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8052C450u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r7 = ctx->gpr[7];
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
    r22 = r3;
    r3 = r30;
    // inline leaf 0x80534DFC (7 guest instruction(s))
}

loc_inl1_0x80534DFC:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_inl1_0x80534E04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80534E10;
    }
}

loc_inl1_0x80534E08:
{
    r3 = MemoryInline::FlatRead16((r3 + 10));
    goto loc_inl1_cont_80534DFC;
}

loc_inl1_0x80534E10:
{
    r3 = 0;
}

loc_inl1_cont_80534DFC:
{
    // end of inlined leaf 0x80534DFC
    r0 = (r3 & 65535);
}

loc_8052C460:
{
    r24 = r3;
    r26 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052C4B0;
    }
}

loc_8052C46C:
{
    r12 = MemoryInline::FlatRead32(r22);
    r3 = r22;
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r5 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r6 = MemoryInline::FlatRead16((r4 + 14));
    ctr = r12;
    ctx->lr = 0x8052C48Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r7 = ctx->gpr[7];
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
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r4 = r22;
    r5 = 1;
    r6 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x8052C4ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r7 = ctx->gpr[7];
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
    goto loc_8052C570;
}

loc_8052C4B0:
{
    r3 = r30;
    // inline leaf 0x80534E18 (8 guest instruction(s))
}

loc_inl2_0x80534E18:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_inl2_0x80534E20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80534E30;
    }
}

loc_inl2_0x80534E24:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r3 = (r3 + r0);
    goto loc_inl2_cont_80534E18;
}

loc_inl2_0x80534E30:
{
    r3 = 0;
}

loc_inl2_cont_80534E18:
{
    // end of inlined leaf 0x80534E18
    r27 = r3;
    r25 = (r24 & 65535);
    r23 = r27;
    r28 = 0;
    goto loc_8052C500;
}

loc_8052C4CC:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r23;
    ctx->lr = 0x8052C4D8u;
    if constexpr (KnownRegArgsCpuCall<0x8052BAA4u>(&func_8052BAA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8052BAA4_20F4 = func_8052BAA4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8052BAA4_20F4);
        r4 = static_cast<uint32_t>(regargs_result_8052BAA4_20F4 >> 32);
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
        InvokeDirectCpu<0x8052BAA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r21 = r3;
    r3 = r30;
    // inline leaf 0x80534E38 (8 guest instruction(s))
}

loc_inl3_0x80534E38:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_inl3_0x80534E40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x80534E50;
    }
}

loc_inl3_0x80534E44:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r3 = (r0 & 1);
    goto loc_inl3_cont_80534E38;
}

loc_inl3_0x80534E50:
{
    r3 = 0;
}

loc_inl3_cont_80534E38:
{
    // end of inlined leaf 0x80534E38
    r5 = r3;
    r3 = r30;
    r4 = r21;
    ctx->lr = 0x8052C4F4u;
    if constexpr (KnownRegArgsCpuCall<0x80534F6Cu>(&func_80534F6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80534F6C_273F = func_80534F6C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80534F6C_273F);
        r4 = static_cast<uint32_t>(regargs_result_80534F6C_273F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x80534F6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r26 = (r26 + r3);
    r23 = (r23 + 20);
    r28 = (r28 + 1);
}

loc_8052C500:
{
}

loc_8052C504:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r25))) {
        goto loc_8052C4CC;
    }
}

loc_8052C508:
{
    r12 = MemoryInline::FlatRead32(r22);
    r3 = r22;
    r5 = r31;
    r6 = (r26 & 65535);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r4 = MemoryInline::FlatRead32((r30 + 4));
    ctr = r12;
    ctx->lr = 0x8052C528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r7 = ctx->gpr[7];
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
    r25 = (r24 & 65535);
    r21 = 0;
    goto loc_8052C568;
}

loc_8052C534:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r27;
    ctx->lr = 0x8052C540u;
    if constexpr (KnownRegArgsCpuCall<0x8052BAA4u>(&func_8052BAA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8052BAA4_3491 = func_8052BAA4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8052BAA4_3491);
        r4 = static_cast<uint32_t>(regargs_result_8052BAA4_3491 >> 32);
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
        InvokeDirectCpu<0x8052BAA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r23 = r3;
    r3 = r30;
    // inline leaf 0x80534E38 (8 guest instruction(s))
}

loc_inl4_0x80534E38:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_inl4_0x80534E40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x80534E50;
    }
}

loc_inl4_0x80534E44:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r3 = (r0 & 1);
    goto loc_inl4_cont_80534E38;
}

loc_inl4_0x80534E50:
{
    r3 = 0;
}

loc_inl4_cont_80534E38:
{
    // end of inlined leaf 0x80534E38
    r5 = r3;
    r3 = r23;
    r4 = r22;
    r6 = 1;
    ctx->lr = 0x8052C560u;
    if constexpr (KnownRegArgsCpuCall<0x805365A8u>(&func_805365A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_805365A8_3AE9 = func_805365A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805365A8_3AE9);
        r4 = static_cast<uint32_t>(regargs_result_805365A8_3AE9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x805365A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r27 = (r27 + 20);
    r21 = (r21 + 1);
}

loc_8052C568:
{
}

loc_8052C56C:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r25))) {
        goto loc_8052C534;
    }
}

loc_8052C570:
{
    r3 = r30;
    // inline leaf 0x80534E58 (7 guest instruction(s))
}

loc_inl5_0x80534E58:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl5_0x80534E60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x80534E6C;
    }
}

loc_inl5_0x80534E64:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    goto loc_inl5_cont_80534E58;
}

loc_inl5_0x80534E6C:
{
    r3 = 0;
}

loc_inl5_cont_80534E58:
{
    // end of inlined leaf 0x80534E58
    r0 = (r3 & 65535);
}

loc_8052C57C:
{
    r25 = r3;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052C678;
    }
}

loc_8052C584:
{
    r3 = r30;
    // inline leaf 0x80534E74 (8 guest instruction(s))
}

loc_inl6_0x80534E74:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl6_0x80534E7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x80534E8C;
    }
}

loc_inl6_0x80534E80:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + r0);
    goto loc_inl6_cont_80534E74;
}

loc_inl6_0x80534E8C:
{
    r3 = 0;
}

loc_inl6_cont_80534E74:
{
    // end of inlined leaf 0x80534E74
    r23 = r3;
    r26 = (r25 & 65535);
    r21 = 0;
    goto loc_8052C670;
}

loc_8052C59C:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r4 = r23;
    r5 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8052C5B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r7 = ctx->gpr[7];
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
    r20 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80534CD4 (6 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 39u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    }
    // end of inlined leaf 0x80534CD4
    r3 = (r1 + 8);
    // inline leaf 0x80534FD4 (14 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r3 + 18), r0);
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 16), r0);
    }
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r3 + 38), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r3 + 22), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r3 + 26), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r3 + 30), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved16(guest_range_1, 34u, (r3 + 34), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r3 + 36), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80534FD4
    r4 = r20;
    r5 = r30;
    r3 = (r1 + 8);
    ctx->lr = 0x8052C5DCu;
    if constexpr (KnownRegArgsCpuCall<0x8053500Cu>(&func_8053500C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8053500C_57D9 = func_8053500C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8053500C_57D9);
        r4 = static_cast<uint32_t>(regargs_result_8053500C_57D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8053500Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r0 = MemoryInline::FlatRead16((r1 + 26));
}

loc_8052C5E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052C668;
    }
}

loc_8052C5E8:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = (r23 + 17);
    ctx->lr = 0x8052C5F4u;
    if constexpr (KnownRegArgsCpuCall<0x8052BAA4u>(&func_8052BAA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8052BAA4_6075 = func_8052BAA4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8052BAA4_6075);
        r4 = static_cast<uint32_t>(regargs_result_8052BAA4_6075 >> 32);
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
        InvokeDirectCpu<0x8052BAA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r28 = MemoryInline::FlatRead32((r3 + 16));
    r27 = (r3 + 16);
    goto loc_8052C660;
}

loc_8052C600:
{
    r22 = MemoryInline::FlatRead32((r28 + 8));
}

loc_8052C608:
{
    if ((static_cast<uint32_t>(r22) == static_cast<uint32_t>(r20))) {
        goto loc_8052C65C;
    }
}

loc_8052C60C:
{
    r0 = (r24 & 65535);
}

loc_8052C610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052C648;
    }
}

loc_8052C614:
{
    r3 = r30;
    // inline leaf 0x80534E38 (8 guest instruction(s))
}

loc_inl9_0x80534E38:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_inl9_0x80534E40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x80534E50;
    }
}

loc_inl9_0x80534E44:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r3 = (r0 & 1);
    goto loc_inl9_cont_80534E38;
}

loc_inl9_0x80534E50:
{
    r3 = 0;
}

loc_inl9_cont_80534E38:
{
    // end of inlined leaf 0x80534E38
    r25 = r3;
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80534E18u>(&func_80534E18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80534E18_67E7 = func_80534E18_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80534E18_67E7;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80534E18u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r6 = r25;
    r7 = r22;
    r5 = (r24 & 65535);
    ctx->lr = 0x8052C640u;
    if constexpr (KnownRegArgsCpuCall<0x8052BCCCu>(&func_8052BCCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8052BCCC_6AAC = func_8052BCCC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8052BCCC_6AAC);
        r4 = static_cast<uint32_t>(regargs_result_8052BCCC_6AAC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8052BCCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
}

loc_8052C644:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052C65C;
    }
}

loc_8052C648:
{
    r5 = MemoryInline::FlatRead32((r28 + 8));
    r4 = r29;
    r6 = r31;
    r3 = (r1 + 8);
    ctx->lr = 0x8052C65Cu;
    if constexpr (KnownRegArgsCpuCall<0x8053526Cu>(&func_8053526C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8053526C_7010 = func_8053526C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8053526C_7010);
        r4 = static_cast<uint32_t>(regargs_result_8053526C_7010 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8053526Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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

loc_8052C65C:
{
    r28 = MemoryInline::FlatRead32(r28);
}

loc_8052C660:
{
}

loc_8052C664:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r27))) {
        goto loc_8052C600;
    }
}

loc_8052C668:
{
    r23 = (r23 + 36);
    r21 = (r21 + 1);
}

loc_8052C670:
{
}

loc_8052C674:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r26))) {
        goto loc_8052C59C;
    }
}

loc_8052C678:
{
    r3 = 1;
}

loc_8052C67C:
{
    r11 = (r1 + 96);
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_8052C3F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052C3F8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052C3F8 func_8052C3F8 preserves=true fpr_mask=0x00000000
