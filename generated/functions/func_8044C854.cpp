#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8044C854_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8044C854;

loc_8044C854:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4372));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_8044C854(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8044C854_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8044C854 func_8044C854 preserves=true fpr_mask=0x00000000
