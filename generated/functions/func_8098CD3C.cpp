#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8098CD3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8098CD3C;

loc_8098CD3C:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8098CD3C func_8098CD3C preserves=true fpr_mask=0x00000000
