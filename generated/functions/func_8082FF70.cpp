#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082FF70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;

    goto loc_8082FF70;

loc_8082FF70:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FEF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082FF70 func_8082FF70 preserves=true fpr_mask=0x00000000
