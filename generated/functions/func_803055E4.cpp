#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803055E4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
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

    goto loc_803055E4;

loc_803055E4:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r3 = MH3_TickLoad(r3, 2150651364);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 12), r0);
}

loc_803055F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(21))) {
        goto loc_80305624;
    }
}

loc_803055F8:
{
}

loc_803055FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(45))) {
        goto loc_80305624;
    }
}

loc_80305600:
{
}

loc_80305604:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(22))) {
        goto loc_80305630;
    }
}

loc_80305608:
{
}

loc_8030560C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(46))) {
        goto loc_80305630;
    }
}

loc_80305610:
{
}

loc_80305614:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(23))) {
        goto loc_8030563C;
    }
}

loc_80305618:
{
}

loc_8030561C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(47))) {
        goto loc_8030563C;
    }
}

loc_80305620:
{
    goto loc_80305644;
}

loc_80305624:
{
    r3 = 0x805E0000u;
    r30 = (r3 + -16952);
    goto loc_80305644;
}

loc_80305630:
{
    r3 = 0x805E0000u;
    r30 = (r3 + -16936);
    goto loc_80305644;
}

loc_8030563C:
{
    r3 = 0x805E0000u;
    r30 = (r3 + -16920);
}

loc_80305644:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r28 + 12));
    r5 = (r1 + 40);
    r6 = (r1 + 41);
    r7 = (r1 + 42);
    ctx->lr = 0x8030565Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 36);
    ctx->lr = 0x8030567Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
}

loc_80305934:
{
}

loc_80305938:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80305954;
    }
}

loc_8030593C:
{
    r3 = r28;
    r4 = (r29 + 4);
    r5 = 1;
    r6 = MemoryInline::FlatRead32(r29);
    r7 = 0;
    ctx->lr = 0x80305954u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
}

loc_80305954:
{
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    r29 = MemoryInline::FlatRead32((r1 + 148));
    r28 = MemoryInline::FlatRead32((r1 + 144));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803055E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803055E4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xF0003FFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803055E4 func_803055E4 preserves=true fpr_mask=0x00000000
