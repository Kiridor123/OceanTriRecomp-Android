#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABD0(CpuContext* ctx);
extern "C" uint64_t func_8047ABD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80492978_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_80492978;

loc_80492978:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80740000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 4;
    r4 = (r4 + -6152);
    r31 = 0;
    r30 = 0;
    r29 = r3;
    ctr = r0;
}

loc_804929AC:
{
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r5 = (r4 + r0);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_804929C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804929E8;
    }
}

loc_804929C4:
{
    r0 = MemoryInline::FlatRead8((r5 + 16));
}

loc_804929CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804929E8;
    }
}

loc_804929D0:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
}

loc_804929D8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492AB0;
    }
}

loc_804929DC:
{
    r0 = MemoryInline::FlatRead16((r5 + 22));
}

loc_804929E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492AB0;
    }
}

loc_804929E8:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r5 = (r4 + r0);
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_3);
}

loc_80492A00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492A28;
    }
}

loc_80492A04:
{
    r0 = MemoryInline::FlatRead8((r5 + 16));
}

loc_80492A0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492A28;
    }
}

loc_80492A10:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
}

loc_80492A18:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492AB0;
    }
}

loc_80492A1C:
{
    r0 = MemoryInline::FlatRead16((r5 + 22));
}

loc_80492A24:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492AB0;
    }
}

loc_80492A28:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r5 = (r4 + r0);
    r4_addr_4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_4);
}

loc_80492A40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492A68;
    }
}

loc_80492A44:
{
    r0 = MemoryInline::FlatRead8((r5 + 16));
}

loc_80492A4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492A68;
    }
}

loc_80492A50:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
}

loc_80492A58:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492AB0;
    }
}

loc_80492A5C:
{
    r0 = MemoryInline::FlatRead16((r5 + 22));
}

loc_80492A64:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492AB0;
    }
}

loc_80492A68:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r5 = (r4 + r0);
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_5);
}

loc_80492A80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492AA8;
    }
}

loc_80492A84:
{
    r0 = MemoryInline::FlatRead8((r5 + 16));
}

loc_80492A8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492AA8;
    }
}

loc_80492A90:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
}

loc_80492A98:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492AB0;
    }
}

loc_80492A9C:
{
    r0 = MemoryInline::FlatRead16((r5 + 22));
}

loc_80492AA4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492AB0;
    }
}

loc_80492AA8:
{
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804929AC;
    }
}

loc_80492AB0:
{
    r0 = (r31 & 255);
}

loc_80492AB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_80492AD0;
    }
}

loc_80492ABC:
{
    r0 = (r0 * 52);
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    r30 = (r3 + r0);
    r30 = (r30 + 16);
}

loc_80492AD0:
{
}

loc_80492AD4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80492B08;
    }
}

loc_80492AD8:
{
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
}

loc_80492AE8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80492BA4;
    }
}

loc_80492AEC:
{
    r3 = 1966080;
    r4 = 0x80610000u;
    r5 = r29;
    r3 = (r3 + 1);
    r4 = (r4 + 25256);
    ctx->lr = 0x80492B04u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_19B6 = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_19B6);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_19B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8047ABD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_80492BA4;
}

loc_80492B08:
{
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
}

loc_80492B18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_80492B34;
    }
}

loc_80492B1C:
{
    r3 = 1966080;
    r4 = 0x80610000u;
    r5 = r29;
    r3 = (r3 + 3);
    r4 = (r4 + 25304);
    ctx->lr = 0x80492B34u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_2337 = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_2337);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_2337 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8047ABD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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

loc_80492B34:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_80492B3C:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_80492B4C;
    }
}

loc_80492B40:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    goto loc_80492B54;
}

loc_80492B4C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
}

loc_80492B54:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_80492B5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80492BA4;
    }
}

loc_80492B60:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_80492B68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80492BA4;
    }
}

loc_80492B6C:
{
    r3 = (r31 & 255);
    r7 = 0x80740000u;
    r0 = (r3 * 52);
    r8 = 0;
    r7 = (r7 + -6152);
    r4 = 1;
    r5 = (r7 + r0);
    r6 = 0;
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r8));
    r12 = MemoryInline::FlatRead32((r7 + 832));
    r5 = MemoryInline::FlatRead16((r30 + 10));
    ctr = r12;
    ctx->lr = 0x80492BA4u;
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

loc_80492BA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

extern "C" void func_80492978(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80492978_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80492978 func_80492978 preserves=true fpr_mask=0x00000000
