#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C2E80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804C2E80;

loc_804C2E80:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -15232), r0);
    MemoryInline::FlatWrite32((r13 + -15216), r0);
    MemoryInline::FlatWrite32((r13 + -15228), r0);
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C2E80 func_804C2E80 preserves=true fpr_mask=0x00000000
