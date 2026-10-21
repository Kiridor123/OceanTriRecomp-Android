#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BAE20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];

    MKW_GUEST_ENTER(0x804BAE20u);
    goto loc_804BAE20;

loc_804BAE20:
{
}

loc_804BAE24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804BAE30;
    }
}

loc_804BAE28:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2216));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
}

loc_804BAE30:
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
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x0000007F fpr_write=0x00000005 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BAE20 func_804BAE20 preserves=true fpr_mask=0x00000000
