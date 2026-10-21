#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABD0(CpuContext* ctx);
extern "C" uint64_t func_8047ABD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80493BBC(CpuContext* ctx);
extern "C" uint64_t func_80493BBC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80492100_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80492100u);
    goto loc_80492100;

loc_80492100:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80740000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 4;
    r5 = (r5 + -6152);
    r31 = 0;
    r30 = 0;
    r29 = r4;
    r28 = r3;
    ctr = r0;
}

loc_8049213C:
{
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r4 = (r5 + r0);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_80492150:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492178;
    }
}

loc_80492154:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_8049215C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492178;
    }
}

loc_80492160:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_80492168:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492240;
    }
}

loc_8049216C:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80492174:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492240;
    }
}

loc_80492178:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r4 = (r5 + r0);
    r5_addr_3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_3);
}

loc_80492190:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804921B8;
    }
}

loc_80492194:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_8049219C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804921B8;
    }
}

loc_804921A0:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_804921A8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492240;
    }
}

loc_804921AC:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_804921B4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492240;
    }
}

loc_804921B8:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r4 = (r5 + r0);
    r5_addr_4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_4);
}

loc_804921D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804921F8;
    }
}

loc_804921D4:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_804921DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804921F8;
    }
}

loc_804921E0:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_804921E8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492240;
    }
}

loc_804921EC:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_804921F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492240;
    }
}

loc_804921F8:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r4 = (r5 + r0);
    r5_addr_5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_5);
}

loc_80492210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492238;
    }
}

loc_80492214:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_8049221C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80492238;
    }
}

loc_80492220:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_80492228:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492240;
    }
}

loc_8049222C:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80492234:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80492240;
    }
}

loc_80492238:
{
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8049213C;
    }
}

loc_80492240:
{
    r0 = (r31 & 255);
}

loc_80492248:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_80492260;
    }
}

loc_8049224C:
{
    r0 = (r0 * 52);
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    r30 = (r3 + r0);
    r30 = (r30 + 16);
}

loc_80492260:
{
}

loc_80492264:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80492298;
    }
}

loc_80492268:
{
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
}

loc_80492278:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80492388;
    }
}

loc_8049227C:
{
    r3 = 1966080;
    r4 = 0x80610000u;
    r5 = r28;
    r3 = (r3 + 1);
    r4 = (r4 + 25044);
    ctx->lr = 0x80492294u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_190C = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_190C);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_190C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    goto loc_80492388;
}

loc_80492298:
{
    r3 = 0x80740000u;
    r3 = (r3 + -6152);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
}

loc_804922A8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_804922C4;
    }
}

loc_804922AC:
{
    r3 = 1966080;
    r4 = 0x80610000u;
    r5 = r28;
    r3 = (r3 + 3);
    r4 = (r4 + 25088);
    ctx->lr = 0x804922C4u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABD0u>(&func_8047ABD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABD0_2162 = func_8047ABD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABD0_2162);
        r4 = static_cast<uint32_t>(regargs_result_8047ABD0_2162 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_804922C4:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_804922CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804922DC;
    }
}

loc_804922D0:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
}

loc_804922D8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(640))) {
        goto loc_804922E8;
    }
}

loc_804922DC:
{
    r0 = 640;
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    goto loc_804922EC;
}

loc_804922E8:
{
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
}

loc_804922EC:
{
    r0 = 0;
    r3 = r28;
    MemoryInline::FlatWrite8((r29 + 32), static_cast<uint8_t>(r0));
    r4 = r29;
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    ctx->lr = 0x80492308u;
    if constexpr (KnownRegArgsCpuCall<0x80493BBCu>(&func_80493BBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80493BBC_2B8E = func_80493BBC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80493BBC_2B8E);
        r4 = static_cast<uint32_t>(regargs_result_80493BBC_2B8E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x80493BBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_80492310:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80492324;
    }
}

loc_80492314:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    goto loc_80492330;
}

loc_80492324:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
}

loc_80492330:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (r0 & 30);
}

loc_8049233C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(30))) {
        goto loc_80492388;
    }
}

loc_80492340:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80492348:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80492388;
    }
}

loc_8049234C:
{
    r3 = (r31 & 255);
    r4 = 4;
    r0 = (r3 * 52);
    r6 = 0x80740000u;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r4));
    r5 = 1;
    r6 = (r6 + -6152);
    r4 = (r6 + r0);
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r5));
    r4 = 0;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r6 + 832));
    r6 = 0;
    ctr = r12;
    ctx->lr = 0x80492388u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

loc_80492388:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_80492100(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80492100_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80492100 func_80492100 preserves=true fpr_mask=0x00000000
