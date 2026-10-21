#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F9AD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x800F9AD4u);
    goto loc_800F9AD4;

loc_800F9AD4:
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
    InvokeDirectCpu<0x800AC164u>(ctx);
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003F1F gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFD fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F9AD4 func_800F9AD4 preserves=true fpr_mask=0x00000000
