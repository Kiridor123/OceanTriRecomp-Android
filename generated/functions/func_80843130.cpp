#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80843130(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80843130u);
    goto loc_80843130;

loc_80843130:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 236));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80843130 func_80843130 preserves=true fpr_mask=0x00000000
