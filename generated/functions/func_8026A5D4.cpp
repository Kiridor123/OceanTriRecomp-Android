#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A5D4_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8026A5D4;

loc_8026A5D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    MemoryInline::FlatWriteFloat32((r3 + 140), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 136), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 132), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 128), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_8026A5D4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8026A5D4_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026A5D4 func_8026A5D4 preserves=true fpr_mask=0x00000000
