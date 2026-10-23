#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B7E80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_804B7E80;

loc_804B7E80:
{
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f3.d);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000000E fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B7E80 func_804B7E80 preserves=true fpr_mask=0x00000000
