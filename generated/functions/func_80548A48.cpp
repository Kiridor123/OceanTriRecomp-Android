#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80548A48_ra8_40_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f6)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    ctx->fpr[6].d = arg_f6;

    MKW_GUEST_ENTER(0x80548A48u);
    goto loc_80548A48;

loc_80548A48:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 6392));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r1 + 16);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 6404));
    r5 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1144));
    r3 = (r3 + 6408);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6F20u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = (-(f0.d));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80548A48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80548A48_ra8_40_18_0(ctx, ctx->gpr[3], ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80548A48 func_80548A48 preserves=true fpr_mask=0x00000000
