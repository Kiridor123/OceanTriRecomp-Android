#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083F5C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8083F5C0u);
    goto loc_8083F5C0;

loc_8083F5C0:
{
    r5 = 0x80870000u;
    r6 = r3;
    r3 = MemoryInline::FlatRead32((r5 + -32128));
    r4 = 0x80840000u;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + 32028), r6);
    MemoryInline::FlatWriteRam32((r5 + -32128), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8083F5C0 func_8083F5C0 preserves=true fpr_mask=0x00000000
