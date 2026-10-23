#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CE8E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804CE8E0;

loc_804CE8E0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -15072), r0);
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CE8E0 func_804CE8E0 preserves=true fpr_mask=0x00000000
