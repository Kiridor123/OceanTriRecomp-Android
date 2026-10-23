#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800D50D0_rac8_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_800D50D0;

loc_800D50D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = MemoryInline::FlatRead32((r13 + -17584));
    r29 = (r3 * 76);
    r31 = (r30 + r29);
    r0 = MemoryInline::FlatRead32((r31 + 12400));
}

loc_800D50FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D5108;
    }
}

loc_800D5100:
{
    r3 = -1;
    goto loc_800D514C;
}

loc_800D5108:
{
    r3 = MemoryInline::FlatRead32((r31 + 12472));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 12472), r0);
    r0 = MemoryInline::FlatRead32((r31 + 12472));
}

loc_800D511C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_800D5148;
    }
}

loc_800D5120:
{
    r3 = MemoryInline::FlatRead32((r31 + 12400));
    ctx->lr = 0x800D5128u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800D4CC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 12400), r0);
    r3 = r31;
    MemoryInline::FlatWrite32((r3 + 12404), r0);
    MemoryInline::FlatWrite8((r3 + 12408), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r31 + 12472), r0);
    r3 = 0;
    goto loc_800D514C;
}

loc_800D5148:
{
    r3 = -1;
}

loc_800D514C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_800D50D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800D50D0_rac8_1fe_8_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D50D0 func_800D50D0 preserves=true fpr_mask=0x00000000
