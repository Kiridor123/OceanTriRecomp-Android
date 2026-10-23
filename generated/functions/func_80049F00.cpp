#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80049F00_ra148_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[8] = arg_r8;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_80049F00;

loc_80049F00:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r4 = r3;
    r5 = 0x80660000u;
    r5 = (r5 + -21920);
    r0 = MemoryInline::FlatRead16((r5 + 24));
    MemoryInline::FlatWrite16((r3 + 14624), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 26));
    MemoryInline::FlatWrite16((r3 + 14626), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 28));
    MemoryInline::FlatWrite16((r3 + 14628), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 30));
    MemoryInline::FlatWrite16((r3 + 14630), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 2192));
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r3 = r31;
    r5 = 24576;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80049F00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80049F00_ra148_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80049F00 func_80049F00 preserves=true fpr_mask=0x00000000
