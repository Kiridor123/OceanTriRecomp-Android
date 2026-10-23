#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80040520;

loc_80040520:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r1;
    ctx->lr = 0x80040538u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[10] = r10;
    InvokeDirectCpu<0x80040484u>(ctx);
    r0 = ctx->gpr[0];
    r10 = ctx->gpr[10];
}

loc_80040548:
{
    r10 = r31;
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r1 = r10;
    ctx->lr = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80040520 func_80040520 preserves=true fpr_mask=0x00000000
