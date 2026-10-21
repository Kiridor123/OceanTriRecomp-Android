#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8050B650_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8050B650u);
    goto loc_8050B650;

loc_8050B650:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r4;
    r12 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8050B674:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8050B6AC;
    }
}

loc_8050B678:
{
}

loc_8050B67C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8050B68C;
    }
}

loc_8050B680:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8050B688:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8050B694;
    }
}

loc_8050B68C:
{
    r3 = 0;
    goto loc_8050B6A4;
}

loc_8050B694:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_8050B6A4:
{
    ctr = r12;
    ctx->lr = 0x8050B6ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8050B6AC:
{
    r4 = MemoryInline::FlatRead32(r31);
    r6 = (r4 + -1);
}

loc_8050B6B8:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r6))) {
        goto loc_8050B71C;
    }
}

loc_8050B6BC:
{
}

loc_8050B6C0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_8050B6CC;
    }
}

loc_8050B6C4:
{
}

loc_8050B6C8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r4))) {
        goto loc_8050B6D4;
    }
}

loc_8050B6CC:
{
    r3 = 0;
    goto loc_8050B6E4;
}

loc_8050B6D4:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r0 * r30);
    r3 = (r3 + r0);
}

loc_8050B6E4:
{
    r5 = (r30 + 1);
}

loc_8050B6E8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8050B6F4;
    }
}

loc_8050B6EC:
{
}

loc_8050B6F0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r4))) {
        goto loc_8050B6FC;
    }
}

loc_8050B6F4:
{
    r4 = 0;
    goto loc_8050B70C;
}

loc_8050B6FC:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r0 * r5);
    r4 = (r4 + r0);
}

loc_8050B70C:
{
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r6 - r30);
    r5 = (r5 * r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8050B71C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050B650(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050B650_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050B650 func_8050B650 preserves=true fpr_mask=0x00000000
