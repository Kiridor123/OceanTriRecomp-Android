#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BAB4C_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x802BAB4Cu);
    goto loc_802BAB4C;

loc_802BAB4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 56));
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 60));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 68));
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_802BAB4C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802BAB4C_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BAB4C func_802BAB4C preserves=true fpr_mask=0x00000000
