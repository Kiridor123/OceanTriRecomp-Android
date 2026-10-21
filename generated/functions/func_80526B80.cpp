#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80526B80_ra80_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r7)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    ctx->gpr[7] = arg_r7;

    MKW_GUEST_ENTER(0x80526B80u);
    goto loc_80526B80;

loc_80526B80:
{
    r6 = 0x80790000u;
    r0 = 0;
    r6 = (r6 + 9112);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r6 + 28), r0);
    r5 = 3072;
    r3 = MemoryInline::FlatRead32((r6 + 44));
    MemoryInline::FlatWriteRam32((r6 + 32), r0);
    MemoryInline::FlatWriteRam32((r6 + 36), r0);
    MemoryInline::FlatWriteRam32((r6 + 40), r0);
    MemoryInline::FlatWriteRam32((r6 + 56), r0);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80526B80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80526B80_ra80_0_18_0(ctx, ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80526B80 func_80526B80 preserves=true fpr_mask=0x00000000
