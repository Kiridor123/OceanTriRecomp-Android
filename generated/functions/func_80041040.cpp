#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80041040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80041040u);
    goto loc_80041040;

loc_80041040:
{
    r0 = MemoryInline::FlatRead32((r13 + -18024));
    MemoryInline::FlatWrite32((r13 + -18016), r0);
    MemoryInline::FlatWrite32((r13 + -18020), r0);
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80041040 func_80041040 preserves=true fpr_mask=0x00000000
