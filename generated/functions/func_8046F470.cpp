#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCC90(CpuContext* ctx);
extern "C" uint64_t func_804CCC90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CCD20(CpuContext* ctx);
extern "C" uint64_t func_804CCD20_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8046F470_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r30_addr_8 = 0;
    uint32_t r30_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8046F470u);
    goto loc_8046F470;

loc_8046F470:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r31 = 0x80700000u;
    r31 = (r31 + -25984);
    r8 = (r31 + 0);
    r3 = (r31 + 4608);
    r9 = MemoryInline::FlatRead32((r13 + -16192));
    r7 = MemoryInline::FlatRead32((r13 + -16196));
    r5 = (r9 * 1536);
    r0 = MemoryInline::FlatRead32((r13 + -16144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8046F4AC:
{
    r4 = (r7 * 1536);
    r0 = (r8 + r5);
    MemoryInline::FlatWrite32((r13 + -16168), r0);
    r0 = (r3 + r5);
    MemoryInline::FlatWrite32((r13 + -16176), r0);
    r5 = (r3 + r4);
    r6 = (r8 + r4);
    r3 = (r9 * 1152);
    r4 = (r31 + 9216);
    MemoryInline::FlatWrite32((r13 + -16172), r6);
    r0 = (r7 * 1152);
    MemoryInline::FlatWrite32((r13 + -16180), r5);
    r3 = (r4 + r3);
    MemoryInline::FlatWrite32((r13 + -16184), r3);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r13 + -16188), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8046F59C;
    }
}

loc_8046F4F0:
{
    r0 = MemoryInline::FlatRead32((r13 + -16104));
}

loc_8046F4F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8046F550;
    }
}

loc_8046F4FC:
{
    r0 = MemoryInline::FlatRead32((r13 + -16200));
    r4 = 1536;
    r0 = (r0 * 1536);
    r3 = (r8 + r0);
    MemoryInline::FlatWriteRam32((r1 + 64), r3);
    r6 = (r3 + 384);
    r5 = (r3 + 768);
    r0 = (r3 + 1152);
    MemoryInline::FlatWriteRam32((r1 + 68), r6);
    MemoryInline::FlatWriteRam32((r1 + 72), r5);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_ED9 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_ED9);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_ED9 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r12 = MemoryInline::FlatRead32((r13 + -16144));
    r3 = (r1 + 64);
    r4 = MemoryInline::FlatRead32((r13 + -16156));
    ctr = r12;
    ctx->lr = 0x8046F540u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 64));
    r4 = 1536;
    if constexpr (KnownRegArgsCpuCall<0x804CCD20u>(&func_804CCD20)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCD20_1503 = func_804CCD20_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD20_1503);
        r4 = static_cast<uint32_t>(regargs_result_804CCD20_1503 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCD20u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8046F5E0;
}

loc_8046F550:
{
    r0 = MemoryInline::FlatRead32((r13 + -16200));
    r4 = 1152;
    r0 = (r0 * 1536);
    r3 = (r8 + r0);
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    r5 = (r3 + 384);
    r0 = (r3 + 768);
    MemoryInline::FlatWriteRam32((r1 + 52), r5);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_197A = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_197A);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_197A >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r12 = MemoryInline::FlatRead32((r13 + -16144));
    r3 = (r1 + 48);
    r4 = MemoryInline::FlatRead32((r13 + -16156));
    ctr = r12;
    ctx->lr = 0x8046F58Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r4 = 1152;
    if constexpr (KnownRegArgsCpuCall<0x804CCD20u>(&func_804CCD20)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCD20_1FA7 = func_804CCD20_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD20_1FA7);
        r4 = static_cast<uint32_t>(regargs_result_804CCD20_1FA7 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCD20u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8046F5E0;
}

loc_8046F59C:
{
    r3 = MemoryInline::FlatRead32((r13 + -16200));
    r30 = (r13 + -16132);
    r30_addr_1 = (r30 + r3);
    r0 = MemoryInline::FlatRead8(r30_addr_1);
}

loc_8046F5AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046F5E0;
    }
}

loc_8046F5B0:
{
    r0 = (r3 * 1536);
    r4 = 0;
    r5 = 1536;
    r29 = (r8 + r0);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = 1536;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCCC0_251B = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_251B);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_251B >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r13 + -16200));
    r3 = 0;
    r30_addr_2 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_2, static_cast<uint8_t>(r3));
}

loc_8046F5E0:
{
    r0 = MemoryInline::FlatRead32((r13 + -16148));
}

loc_8046F5E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046F6A0;
    }
}

loc_8046F5EC:
{
    r0 = MemoryInline::FlatRead32((r13 + -16104));
}

loc_8046F5F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8046F650;
    }
}

loc_8046F5F8:
{
    r3 = MemoryInline::FlatRead32((r13 + -16200));
    r0 = (r31 + 4608);
    r4 = 1536;
    r3 = (r3 * 1536);
    r3 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r6 = (r3 + 384);
    r5 = (r3 + 768);
    r0 = (r3 + 1152);
    MemoryInline::FlatWriteRam32((r1 + 36), r6);
    MemoryInline::FlatWriteRam32((r1 + 40), r5);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_2BF1 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_2BF1);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_2BF1 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r12 = MemoryInline::FlatRead32((r13 + -16148));
    r3 = (r1 + 32);
    r4 = MemoryInline::FlatRead32((r13 + -16160));
    ctr = r12;
    ctx->lr = 0x8046F640u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 32));
    r4 = 1536;
    if constexpr (KnownRegArgsCpuCall<0x804CCD20u>(&func_804CCD20)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCD20_321E = func_804CCD20_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD20_321E);
        r4 = static_cast<uint32_t>(regargs_result_804CCD20_321E >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCD20u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8046F6E8;
}

loc_8046F650:
{
    r3 = MemoryInline::FlatRead32((r13 + -16200));
    r0 = (r31 + 4608);
    r4 = 1152;
    r3 = (r3 * 1536);
    r3 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r5 = (r3 + 384);
    r0 = (r3 + 768);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_36AC = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_36AC);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_36AC >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r12 = MemoryInline::FlatRead32((r13 + -16148));
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32((r13 + -16160));
    ctr = r12;
    ctx->lr = 0x8046F690u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r4 = 1152;
    if constexpr (KnownRegArgsCpuCall<0x804CCD20u>(&func_804CCD20)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCD20_3CD9 = func_804CCD20_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD20_3CD9);
        r4 = static_cast<uint32_t>(regargs_result_804CCD20_3CD9 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCD20u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8046F6E8;
}

loc_8046F6A0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16200));
    r30 = (r13 + -16136);
    r30_addr_4 = (r30 + r3);
    r0 = MemoryInline::FlatRead8(r30_addr_4);
}

loc_8046F6B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046F6E8;
    }
}

loc_8046F6B4:
{
    r3 = (r3 * 1536);
    r0 = (r31 + 4608);
    r4 = 0;
    r5 = 1536;
    r29 = (r0 + r3);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = 1536;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCCC0_4264 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_4264);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_4264 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r13 + -16200));
    r3 = 0;
    r30_addr_5 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_5, static_cast<uint8_t>(r3));
}

loc_8046F6E8:
{
    r0 = MemoryInline::FlatRead32((r13 + -16152));
}

loc_8046F6F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046F750;
    }
}

loc_8046F6F4:
{
    r0 = MemoryInline::FlatRead32((r13 + -16104));
}

loc_8046F6FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8046F750;
    }
}

loc_8046F700:
{
    r3 = MemoryInline::FlatRead32((r13 + -16200));
    r0 = (r31 + 9216);
    r4 = 1152;
    r3 = (r3 * 1152);
    r3 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r5 = (r3 + 384);
    r0 = (r3 + 768);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_48F2 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_48F2);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_48F2 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r12 = MemoryInline::FlatRead32((r13 + -16152));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -16164));
    ctr = r12;
    ctx->lr = 0x8046F740u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = 1152;
    if constexpr (KnownRegArgsCpuCall<0x804CCD20u>(&func_804CCD20)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCD20_4F1D = func_804CCD20_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD20_4F1D);
        r4 = static_cast<uint32_t>(regargs_result_804CCD20_4F1D >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCD20u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8046F7A4;
}

loc_8046F750:
{
    r0 = MemoryInline::FlatRead32((r13 + -16152));
}

loc_8046F758:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046F7A4;
    }
}

loc_8046F75C:
{
    r3 = MemoryInline::FlatRead32((r13 + -16200));
    r30 = (r13 + -16140);
    r30_addr_7 = (r30 + r3);
    r0 = MemoryInline::FlatRead8(r30_addr_7);
}

loc_8046F76C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046F7A4;
    }
}

loc_8046F770:
{
    r3 = (r3 * 1152);
    r0 = (r31 + 9216);
    r4 = 0;
    r5 = 1152;
    r29 = (r0 + r3);
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = 1152;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCCC0_5563 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_5563);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_5563 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r13 + -16200));
    r3 = 0;
    r30_addr_8 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_8, static_cast<uint8_t>(r3));
}

loc_8046F7A4:
{
    r3 = -1431633920;
    r5 = MemoryInline::FlatRead32((r13 + -16192));
    r0 = (r3 + -21845);
    r3 = MemoryInline::FlatRead32((r13 + -16200));
    r4 = MemoryInline::FlatRead32((r13 + -16196));
    r7 = (r5 + 1);
    r3 = (r3 + 1);
    r5 = (r4 + 1);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r7)) >> 32));
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(31));
    r6 = (r6_rot_0 & 2147483647);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_0 & 2147483647);
    r6 = (r6 * 3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r4 = (r4 * 3);
    r6 = (r7 - r6);
    MemoryInline::FlatWrite32((r13 + -16192), r6);
    r0 = (r0 * 3);
    r4 = (r5 - r4);
    MemoryInline::FlatWrite32((r13 + -16196), r4);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r13 + -16200), r0);
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046F470(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046F470_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046F470 func_8046F470 preserves=true fpr_mask=0x00000000
