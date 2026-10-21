#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80A00D24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x80A00D24u);
    goto loc_80A00D24;

loc_80A00D24:
{
    r5 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + -5784));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809EE010u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80A00D24 func_80A00D24 preserves=true fpr_mask=0x00000000
