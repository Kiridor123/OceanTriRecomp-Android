#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8051F910_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r4 = arg_r4;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    ctx->gpr[3] = arg_r3;
    ctx->gpr[5] = arg_r5;
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

    goto loc_8051F910;

loc_8051F910:
{
}

loc_8051F914:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8051F918:
{
    r7 = 0x80770000u;
    r7 = (r7 + -28416);
    r12 = MemoryInline::FlatRead32((r7 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8051F928:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8051F92C:
{
    r6 = MemoryInline::FlatRead32((r7 + 20));
    r0 = (r6 + -1);
    MemoryInline::FlatWriteRam32((r7 + 20), r0);
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | ctx->gpr[3];
}

}

extern "C" void func_8051F910(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051F910_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FBE gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051F910 func_8051F910 preserves=true fpr_mask=0x00000000
