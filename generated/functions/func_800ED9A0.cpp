#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ED9A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x800ED9A0u);
    goto loc_800ED9A0;

loc_800ED9A0:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r5);
    MemoryInline::FlatWrite32((r5 + 8), r4);
    MemoryInline::FlatWrite32((r4 + 8), r3);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000020 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800ED9A0 func_800ED9A0 preserves=true fpr_mask=0x00000000
