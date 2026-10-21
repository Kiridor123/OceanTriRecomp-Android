#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FB328(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x809FB328u);
    goto loc_809FB328;

loc_809FB328:
{
    r7 = r4;
    r4 = MemoryInline::FlatRead8(r4);
    r5 = (r7 + 1);
    r6 = (r7 + 5);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 12));
    r7 = (r7 + 16);
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809FB344u>(ctx);
    r4 = ctx->gpr[4];
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x80000000 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809FB328 func_809FB328 preserves=true fpr_mask=0x00000000
