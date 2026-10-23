#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8050BF40(CpuContext* ctx);
extern "C" uint64_t func_8050BF40_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050C060(CpuContext* ctx);
extern "C" uint64_t func_8050C060_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050CB70(CpuContext* ctx);
extern "C" uint64_t func_8050CB70_ra98_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80520C84(CpuContext* ctx);
extern "C" uint64_t func_80520C84_ra608_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80513310_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_80513310;

loc_80513310:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
}

loc_8051331C:
{
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r31 = r3;
    r29 = r4;
    MemoryInline::FlatWrite32((r3 + 68), r4);
    MemoryInline::FlatWrite32((r3 + 72), r5);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80513350;
    }
}

loc_80513340:
{
    r4 = r6;
    r5 = 8;
    r3 = (r3 + 76);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80513350:
{
    r0 = (r29 + -1);
}

loc_80513358:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80513404;
    }
}

loc_8051335C:
{
    r12 = MemoryInline::FlatRead32((r31 + 60));
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r5 = (r31 + 76);
    r3 = MemoryInline::FlatRead32((r31 + 68));
    r4 = MemoryInline::FlatRead32((r31 + 72));
    r6 = MemoryInline::FlatRead32((r31 + 64));
    ctr = r12;
    ctx->lr = 0x80513380u;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    r0 = MemoryInline::FlatRead32((r13 + -13784));
    r30 = MemoryInline::FlatRead32((r31 + 8));
}

loc_8051338C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80513398;
    }
}

loc_80513390:
{
    r30 = 0;
    goto loc_805133D8;
}

loc_80513398:
{
    r31 = 0;
    goto loc_805133C4;
}

loc_805133A0:
{
    r3 = MemoryInline::FlatRead32((r13 + -13784));
    r4 = r31;
    // inline leaf 0x8050B2C0 (12 guest instruction(s))
}

loc_inl0_0x8050B2C0:
{
}

loc_inl0_0x8050B2C4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl0_0x8050B2D4;
    }
}

loc_inl0_0x8050B2C8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl0_0x8050B2D0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl0_0x8050B2DC;
    }
}

loc_inl0_0x8050B2D4:
{
    r3 = 0;
    goto loc_inl0_cont_8050B2C0;
}

loc_inl0_0x8050B2DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl0_cont_8050B2C0:
{
    // end of inlined leaf 0x8050B2C0
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_805133B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r30))) {
        goto loc_805133C0;
    }
}

loc_805133B8:
{
    r30 = r3;
    goto loc_805133D8;
}

loc_805133C0:
{
    r31 = (r31 + 1);
}

loc_805133C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -13784));
    // inline leaf 0x8050B2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8050B2B0
}

loc_805133D0:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r3))) {
        goto loc_805133A0;
    }
}

loc_805133D4:
{
    r30 = 0;
}

loc_805133D8:
{
}

loc_805133DC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_805134E8;
    }
}

loc_805133E0:
{
    r3 = MemoryInline::FlatRead32(r30);
}

loc_805133E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_805133F0;
    }
}

loc_805133EC:
{
    ctx->lr = 0x805133F0u;
    if constexpr (KnownRegArgsCpuCall<0x8050BF40u>(&func_8050BF40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8050BF40_1A22 = func_8050BF40_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050BF40_1A22);
        r4 = static_cast<uint32_t>(regargs_result_8050BF40_1A22 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x8050BF40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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

loc_805133F0:
{
    r0 = -1;
    MemoryInline::FlatWrite32(r30, r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 16), r0);
    goto loc_805134E8;
}

loc_80513404:
{
    r3 = (r1 + 24);
    r4 = (r13 + -19096);
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 3;
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x80520CE4 (1 guest instruction(s))
    // end of inlined leaf 0x80520CE4
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r30 = 0x80760000u;
    r4 = MemoryInline::FlatRead32((r13 + -19080));
    r3 = (r30 + 14744);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -13764));
    r5 = MemoryInline::FlatRead32((r31 + 68));
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 39), r4);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 255);
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam32((r1 + 43), r0);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_2778 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_2778);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_2778 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80513468:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051347C;
    }
}

loc_8051346C:
{
    r3 = (r1 + 47);
    r4 = (r30 + 14744);
    r5 = 50;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8051347C:
{
    r0 = MemoryInline::FlatRead32((r13 + -13780));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x8051348Cu;
    if constexpr (KnownRegArgsCpuCall<0x80520C84u>(&func_80520C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80520C84_2CAD = func_80520C84_ra608_1fe_18_0(ctx, r3, r9, r10, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520C84_2CAD);
        r4 = static_cast<uint32_t>(regargs_result_80520C84_2CAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x80520C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    r29 = MemoryInline::FlatRead32(r31);
    r0 = 2;
    r30 = MemoryInline::FlatRead32((r13 + -13780));
    r3 = 27901;
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    // inline leaf 0x80520CE8 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CE8
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = (r1 + 24);
    r7 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 20), r30);
    r5 = 73;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x805134C8u;
    if constexpr (KnownRegArgsCpuCall<0x8050C060u>(&func_8050C060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8050C060_3731 = func_8050C060_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050C060_3731);
        r4 = static_cast<uint32_t>(regargs_result_8050C060_3731 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x8050C060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    r30 = 5;
    MemoryInline::FlatWrite32((r31 + 16), r30);
    ctx->lr = 0x805134D4u;
    if constexpr (KnownRegArgsCpuCall<0x8050CB70u>(&func_8050CB70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_8050CB70_3FBD = func_8050CB70_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_8050CB70_3FBD);
        r4 = static_cast<uint32_t>(regargs_result_8050CB70_3FBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
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
        InvokeDirectCpu<0x8050CB70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
    }
    r3 = (r3 + 1000);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 44), r3);
    MemoryInline::FlatWrite32((r31 + 36), r0);
    MemoryInline::FlatWrite32((r31 + 40), r30);
}

loc_805134E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80513310(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80513310_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80513310 func_80513310 preserves=true fpr_mask=0x00000000
