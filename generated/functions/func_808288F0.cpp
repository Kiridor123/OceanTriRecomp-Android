#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808288F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x808288F0u);
    goto loc_808288F0;

loc_808288F0:
{
    r4 = 0x80840000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18544));
    r4 = 0x80840000u;
    r4 = (r4 + 25168);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808288F0 func_808288F0 preserves=true fpr_mask=0x00000000
