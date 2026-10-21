#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4948(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x800E4948u);
    goto loc_800E4948;

loc_800E4948:
{
    r0 = (r3 & 255);
    r3 = (r13 + -17520);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
}

loc_800E4958:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E4964;
    }
}

loc_800E495C:
{
    f1.d = MemoryInline::FlatReadFloat32((r13 + -17512));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    return;
}

loc_800E4964:
{
    f1.d = MemoryInline::FlatReadFloat32((r13 + -17496));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E4948 func_800E4948 preserves=true fpr_mask=0x00000000
