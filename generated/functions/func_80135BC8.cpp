#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80135BC8_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80135BC8u);
    goto loc_80135BC8;

loc_80135BC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_80135BC8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80135BC8_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80135BC8 func_80135BC8 preserves=true fpr_mask=0x00000000
