#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EB3A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804EB3A0u);
    goto loc_804EB3A0;

loc_804EB3A0:
{
    r0 = MemoryInline::FlatRead32((r13 + -14224));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r13 + -14224), r0);
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804EB3A0 func_804EB3A0 preserves=true fpr_mask=0x00000000
