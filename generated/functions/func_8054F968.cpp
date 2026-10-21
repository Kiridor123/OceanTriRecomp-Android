#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80549A84(CpuContext* ctx);
extern "C" uint64_t func_80549A84_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8054F968_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r10_addr_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
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

    MKW_GUEST_ENTER(0x8054F968u);
    goto loc_8054F968;

loc_8054F968:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 6460), 0, 174u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 172u, (r3 + 6632));
    MemoryInline::FlatWrite8((r3 + 6481), static_cast<uint8_t>(r4));
    r0 = (r5 + 1);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 168u, (r3 + 6628));
    MemoryInline::FlatWrite16((r3 + 6648), static_cast<uint16_t>(r6));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 524280);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r6 = (r4 + r0);
    goto loc_8054FA10;
}

loc_8054F9A8:
{
    r8 = MemoryInline::FlatRead16((r6 + 2));
    r7 = r6;
    r5 = MemoryInline::FlatRead16(r6);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r10_addr_2 = (r10 + r0);
    r9 = MemoryInline::FlatRead16(r10_addr_2);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & -8);
    r6 = (r10 + r4);
    r10_addr_3 = (r10 + r0);
    MemoryInline::FlatWrite16(r10_addr_3, static_cast<uint16_t>(r5));
}

loc_8054F9CC:
{
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r9));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 172u, (r3 + 6632));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 168u, (r3 + 6628));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r8_addr_2 = (r8 + r0);
    r0 = MemoryInline::FlatRead16(r8_addr_2);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r5 = (r8 + r0);
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r9))) {
        goto loc_8054FA10;
    }
}

loc_8054F9F4:
{
    r10 = MemoryInline::FlatRead16((r5 + 2));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r4 = (r4_rot_3 & -8);
    r8_addr_3 = (r8 + r4);
    r0 = MemoryInline::FlatRead16(r8_addr_3);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r9));
    r8_addr_4 = (r8 + r4);
    MemoryInline::FlatWrite16(r8_addr_4, static_cast<uint16_t>(r9));
}

loc_8054FA10:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 172u, (r3 + 6632));
    r10 = MemoryInline::ReadResolved32(guest_range_0, 168u, (r3 + 6628));
    r0 = (r4 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r0 = (r10 + r0);
}

loc_8054FA28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_8054F9A8;
    }
}

loc_8054FA2C:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r4 = (r10 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r6 = (r10 + r0);
    r10_addr_4 = (r10 + r0);
    r8 = MemoryInline::FlatRead16(r10_addr_4);
    r7 = MemoryInline::FlatRead16((r6 + 2));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & -8);
    r10_addr_5 = (r10 + r5);
    r9 = MemoryInline::FlatRead16(r10_addr_5);
    r4 = (r10 + r0);
    r10_addr_6 = (r10 + r5);
    MemoryInline::FlatWrite16(r10_addr_6, static_cast<uint16_t>(r8));
}

loc_8054FA60:
{
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r9));
    r4 = MemoryInline::ReadResolved16(guest_range_0, 172u, (r3 + 6632));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 168u, (r3 + 6628));
    r0 = (r4 + 1);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & 524280);
    r7_addr_0 = (r7 + r0);
    r0 = MemoryInline::FlatRead16(r7_addr_0);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_11 & -8);
    r5 = (r7 + r0);
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r9))) {
        goto loc_8054FAA8;
    }
}

loc_8054FA8C:
{
    r8 = MemoryInline::FlatRead16((r5 + 2));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r4 = (r4_rot_4 & -8);
    r7_addr_1 = (r7 + r4);
    r0 = MemoryInline::FlatRead16(r7_addr_1);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r9));
    r7_addr_2 = (r7 + r4);
    MemoryInline::FlatWrite16(r7_addr_2, static_cast<uint16_t>(r9));
}

loc_8054FAA8:
{
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWrite16((r6 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r6 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r3 + 6640), r6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 6460));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8054FAD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r0 = (r3 & 65535);
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = (r1 + 8);
    r4 = (r13 + -18496);
    ctx->lr = 0x8054FAE8u;
    if constexpr (KnownRegArgsCpuCall<0x80549A84u>(&func_80549A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80549A84_26A2 = func_80549A84_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80549A84_26A2);
        r4 = static_cast<uint32_t>(regargs_result_80549A84_26A2 >> 32);
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x80549A84u>(ctx);
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
    r3 = MemoryInline::FlatRead32((r31 + 6460));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 136));
    ctr = r12;
    ctx->lr = 0x8054FAFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r4 = MemoryInline::FlatRead16((r31 + 6632));
    r5 = MemoryInline::FlatRead32((r31 + 6628));
    r0 = (r4 + 1);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & 524280);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_13 & -8);
    r7 = (r5 + r0);
    MemoryInline::FlatWrite32((r31 + 6640), r7);
    r8 = MemoryInline::FlatRead16((r7 + 4));
    r5 = r8;
    goto loc_8054FB68;
}

loc_8054FB2C:
{
    r4 = MemoryInline::FlatRead16((r31 + 6632));
    r6 = MemoryInline::FlatRead32((r31 + 6628));
    r0 = (r4 + 1);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_15 & 524280);
    r6_addr_2 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_2);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & -8);
    r0 = (r6 + r0);
}

loc_8054FB4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r7))) {
        goto loc_8054FB70;
    }
}

loc_8054FB50:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_17 & -8);
    r7 = (r6 + r0);
    MemoryInline::FlatWrite32((r31 + 6640), r7);
    r8 = MemoryInline::FlatRead16((r7 + 4));
    r5 = (r5 + r8);
}

loc_8054FB68:
{
}

loc_8054FB6C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r3))) {
        goto loc_8054FB2C;
    }
}

loc_8054FB70:
{
    r0 = (r5 - r8);
    r0 = (r3 - r0);
    r3 = (r31 + 16);
    MemoryInline::FlatWrite16((r31 + 6648), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead32((r31 + 92));
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x8054FB90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r12 = MemoryInline::FlatRead32((r31 + 92));
    r3 = (r31 + 16);
    r12 = MemoryInline::FlatRead32((r12 + 148));
    ctr = r12;
    ctx->lr = 0x8054FBA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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

extern "C" void func_8054F968(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8054F968_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8054F968 func_8054F968 preserves=true fpr_mask=0x00000000
