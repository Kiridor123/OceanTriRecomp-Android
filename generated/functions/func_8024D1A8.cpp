#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8024D1A8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8024D1A8;

loc_8024D1A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r4 = 0;
    r5 = 153;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl0_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl0_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8026FEF4;
    }
}

loc_inl0_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl0_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8026FEF4;
    }
}

loc_inl0_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl0_cont_8026FECC;
}

loc_inl0_0x8026FEF4:
{
    r3 = 0;
}

loc_inl0_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r31 = (r31_rot_0 & 134217727);
    r0 = MemoryInline::FlatRead16((r30 + 774));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(264));
}

loc_8024D1E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024D368;
    }
}

loc_8024D1E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8024D21C;
    }
}

loc_8024D1E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_8024D1EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024D3C4;
    }
}

loc_8024D1F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8024D20C;
    }
}

loc_8024D1F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8024D1F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024D240;
    }
}

loc_8024D1FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8024D414;
    }
}

loc_8024D200:
{
}

loc_8024D204:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(29))) {
        goto loc_8024D3A8;
    }
}

loc_8024D208:
{
    goto loc_8024D414;
}

loc_8024D20C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_8024D210:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024D3FC;
    }
}

loc_8024D214:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8024D414;
    }
}

loc_8024D218:
{
    goto loc_8024D3E0;
}

loc_8024D21C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(600));
}

loc_8024D220:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024D2D4;
    }
}

loc_8024D224:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8024D234;
    }
}

loc_8024D228:
{
}

loc_8024D22C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(567))) {
        goto loc_8024D294;
    }
}

loc_8024D230:
{
    goto loc_8024D414;
}

loc_8024D234:
{
}

loc_8024D238:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(602))) {
        goto loc_8024D414;
    }
}

loc_8024D23C:
{
    goto loc_8024D328;
}

loc_8024D240:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80272B14_126C = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_126C);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_126C >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8024D250:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8024D294;
    }
}

loc_8024D254:
{
}

loc_8024D258:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8024D278;
    }
}

loc_8024D25C:
{
    r3 = r30;
    r4 = 1;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D274u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D278:
{
    r3 = r30;
    r4 = 4;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D290u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D294:
{
}

loc_8024D298:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8024D2B8;
    }
}

loc_8024D29C:
{
    r3 = r30;
    r4 = 17;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D2B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D2B8:
{
    r3 = r30;
    r4 = 18;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D2D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D2D4:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80272B14_2164 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_2164);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_2164 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8024D2E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8024D328;
    }
}

loc_8024D2E8:
{
}

loc_8024D2EC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8024D30C;
    }
}

loc_8024D2F0:
{
    r3 = r30;
    r4 = 19;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D308u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D30C:
{
    r3 = r30;
    r4 = 21;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D324u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D328:
{
}

loc_8024D32C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8024D34C;
    }
}

loc_8024D330:
{
    r3 = r30;
    r4 = 20;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D348u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D34C:
{
    r3 = r30;
    r4 = 22;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D364u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D368:
{
}

loc_8024D36C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8024D38C;
    }
}

loc_8024D370:
{
    r3 = r30;
    r4 = 10;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D388u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D38C:
{
    r3 = r30;
    r4 = 11;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D3A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D3A8:
{
    r3 = r30;
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D3C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D3C4:
{
    r3 = r30;
    r4 = 7;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D3DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D3E0:
{
    r3 = r30;
    r4 = 8;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D3F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8024D414;
}

loc_8024D3FC:
{
    r3 = r30;
    r4 = 9;
    r5 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x8024D414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8024D414:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8024D1A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8024D1A8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8024D1A8 func_8024D1A8 preserves=true fpr_mask=0x00000000
