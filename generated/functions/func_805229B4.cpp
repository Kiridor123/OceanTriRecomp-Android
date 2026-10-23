#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_805229B4_ra70_1fe_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    ctx->gpr[6] = arg_r6;
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

    goto loc_805229B4;

loc_805229B4:
{
    r12 = MemoryInline::FlatRead32((r13 + -13568));
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -13560), static_cast<uint8_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_805229C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805229C8:
{
    r3 = 0;
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return ctx->gpr[4];
    return ctx->gpr[4];
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return ctx->gpr[4];
}

}

extern "C" void func_805229B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_805229B4_ra70_1fe_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FF7 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805229B4 func_805229B4 preserves=true fpr_mask=0x00000000
