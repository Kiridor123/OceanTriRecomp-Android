#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082BD20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8082BD20;

loc_8082BD20:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082BD28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8082BD2C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FDF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082BD20 func_8082BD20 preserves=true fpr_mask=0x00000000
