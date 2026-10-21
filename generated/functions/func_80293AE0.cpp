#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80293AE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r2 = ctx->gpr[2];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x80293AE0u);
    goto loc_80293AE0;

loc_80293AE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14184));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80293AE0 func_80293AE0 preserves=true fpr_mask=0x00000000
