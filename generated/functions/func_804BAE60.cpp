#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BAE60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];

    MKW_GUEST_ENTER(0x804BAE60u);
    goto loc_804BAE60;

loc_804BAE60:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    MemoryInline::FlatWriteFloat32((r3 + 1348), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 1352), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 1356), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 1360), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 1364), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 1368), f6.d);
    r0 = MemoryInline::FlatRead32((r3 + 1532));
    r0 = (r0 | 268435456);
    MemoryInline::FlatWrite32((r3 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x0000007E fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BAE60 func_804BAE60 preserves=true fpr_mask=0x00000000
