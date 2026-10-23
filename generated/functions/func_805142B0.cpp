#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050C060(CpuContext* ctx);
extern "C" uint64_t func_8050C060_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050CB70(CpuContext* ctx);
extern "C" uint64_t func_8050CB70_ra98_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80513310(CpuContext* ctx);
extern "C" uint64_t func_80513310_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80520C84(CpuContext* ctx);
extern "C" uint64_t func_80520C84_ra608_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_805142B0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_805142B0;

loc_805142B0:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r31 = r3;
    r3 = (r1 + 12);
    r29 = r5;
    r28 = r4;
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x805142E8u;
    if constexpr (KnownRegArgsCpuCall<0x80520C84u>(&func_80520C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80520C84_AC4 = func_80520C84_ra608_1fe_18_0(ctx, r3, r9, r10, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520C84_AC4);
        r4 = static_cast<uint32_t>(regargs_result_80520C84_AC4 >> 32);
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
    r3 = MemoryInline::FlatRead16((r28 + 16));
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    r0 = MemoryInline::FlatRead8((r28 + 19));
}

loc_805142F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80514374;
    }
}

loc_805142FC:
{
    r3 = (r1 + 108);
    r4 = (r13 + -19096);
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 3;
    r0 = 6;
    MemoryInline::FlatWriteRam8((r1 + 114), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 115), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x80520CE4 (1 guest instruction(s))
    // end of inlined leaf 0x80520CE4
    MemoryInline::FlatWriteRam32((r1 + 116), r3);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    MemoryInline::FlatWriteRam8((r1 + 121), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r29 + 2));
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    r30 = MemoryInline::FlatRead32((r29 + 4));
    r0 = 2;
    r29 = MemoryInline::FlatRead32(r31);
    r3 = (r3 & 65535);
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    // inline leaf 0x80520CE8 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CE8
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = (r1 + 108);
    r7 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 28), r30);
    r5 = 21;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x80514374u;
    if constexpr (KnownRegArgsCpuCall<0x8050C060u>(&func_8050C060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8050C060_1A12 = func_8050C060_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050C060_1A12);
        r4 = static_cast<uint32_t>(regargs_result_8050C060_1A12 >> 32);
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
}

loc_80514374:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_8051437C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_805144DC;
    }
}

loc_80514380:
{
    r0 = MemoryInline::FlatRead8((r28 + 19));
}

loc_80514388:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805143C0;
    }
}

loc_8051438C:
{
}

loc_80514390:
{
    r4 = 4;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_805143A0;
    }
}

loc_80514398:
{
    r4 = 1;
    goto loc_805143AC;
}

loc_805143A0:
{
}

loc_805143A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_805143AC;
    }
}

loc_805143A8:
{
    r4 = 2;
}

loc_805143AC:
{
    r3 = r31;
    r5 = -1;
    r6 = 0;
    ctx->lr = 0x805143BCu;
    if constexpr (KnownRegArgsCpuCall<0x80513310u>(&func_80513310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80513310_25D9 = func_80513310_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80513310_25D9);
        r4 = static_cast<uint32_t>(regargs_result_80513310_25D9 >> 32);
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
        InvokeDirectCpu<0x80513310u>(ctx);
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
    goto loc_805144DC;
}

loc_805143C0:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
    MemoryInline::FlatWrite32((r31 + 48), r0);
    r3 = MemoryInline::FlatRead16((r28 + 16));
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    r12 = MemoryInline::FlatRead32((r31 + 56));
    r5 = 0;
    MemoryInline::FlatWrite16((r31 + 52), static_cast<uint16_t>(r3));
    r0 = 2;
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r3 = 2;
    MemoryInline::FlatWrite32((r31 + 36), r5);
    MemoryInline::FlatWrite32((r31 + 16), r0);
    ctr = r12;
    ctx->lr = 0x805143F8u;
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
    r3 = (r1 + 32);
    r4 = (r13 + -19096);
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 3;
    r0 = 7;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 44u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r1 + 38), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r1 + 39), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x80520CE4 (1 guest instruction(s))
    // end of inlined leaf 0x80520CE4
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 40), r3);
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 44), r0);
    r3 = MemoryInline::FlatRead16((r31 + 52));
    // inline leaf 0x80520CE8 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CE8
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r1 + 48), static_cast<uint16_t>(r3));
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead8((r31 + 54));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r1 + 50), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r31 + 16));
    r4 = (2 - r5);
    r0 = (r5 + -2);
    r0 = (r4 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r1 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
    ctx->lr = 0x80514468u;
    if constexpr (KnownRegArgsCpuCall<0x80520C84u>(&func_80520C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80520C84_3B02 = func_80520C84_ra608_1fe_18_0(ctx, r3, r9, r10, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520C84_3B02);
        r4 = static_cast<uint32_t>(regargs_result_80520C84_3B02 >> 32);
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
    r30 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead16((r31 + 52));
}

loc_80514474:
{
    r29 = MemoryInline::FlatRead32((r31 + 48));
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(-1))) {
        goto loc_80514480;
    }
}

loc_8051447C:
{
    goto loc_80514484;
}

loc_80514480:
{
    r30 = MemoryInline::FlatRead32(r31);
}

loc_80514484:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    // inline leaf 0x80520CE8 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CE8
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r3));
    r3 = r30;
    r4 = (r1 + 32);
    r7 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r5 = 20;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x805144B4u;
    if constexpr (KnownRegArgsCpuCall<0x8050C060u>(&func_8050C060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8050C060_46AC = func_8050C060_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050C060_46AC);
        r4 = static_cast<uint32_t>(regargs_result_8050C060_46AC >> 32);
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
    ctx->lr = 0x805144B8u;
    if constexpr (KnownRegArgsCpuCall<0x8050CB70u>(&func_8050CB70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_8050CB70_4EF9 = func_8050CB70_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_8050CB70_4EF9);
        r4 = static_cast<uint32_t>(regargs_result_8050CB70_4EF9 >> 32);
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
    r0 = MemoryInline::FlatRead8((r31 + 54));
    r4 = (r3 + 700);
    r3 = 7;
    MemoryInline::FlatWrite32((r31 + 44), r4);
}

loc_805144CC:
{
    MemoryInline::FlatWrite32((r31 + 40), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805144DC;
    }
}

loc_805144D4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 55), static_cast<uint8_t>(r0));
}

loc_805144DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
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

extern "C" void func_805142B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805142B0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805142B0 func_805142B0 preserves=true fpr_mask=0x00000000
