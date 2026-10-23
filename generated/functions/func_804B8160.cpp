#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_804B8160;

loc_804B8160:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f1.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    MemoryInline::FlatWriteFloat32(r6, f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B8160 func_804B8160 preserves=true fpr_mask=0x00000000
