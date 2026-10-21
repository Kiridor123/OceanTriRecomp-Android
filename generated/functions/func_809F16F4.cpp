#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809F16F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x809F16F4u);
    goto loc_809F16F4;

loc_809F16F4:
{
    r5 = (r5 & 255);
    r6 = 65536;
    r6 = (r6 + -1);
    r6 = (r6 & 65535);
    r7 = 0x80790000u;
    r7 = MemoryInline::FlatRead32((r7 + 28704));
    r12 = MemoryInline::FlatRead32((r7 + 64));
    ctr = r12;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002F3F gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809F16F4 func_809F16F4 preserves=true fpr_mask=0x00000000
