#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8099315C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8099315C;

loc_8099315C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 27960), r0);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 27816), r0);
    r3 = (r3 + 27816);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 28656), r0);
    r3 = 0x806E0000u;
    MemoryInline::FlatWriteRam32((r3 + -31480), r0);
    r3 = (r3 + -31480);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r3 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r3 + 29112), r0);
    r3 = 0x80990000u;
    r31 = (r3 + 14620);
    goto loc_809931C8;
}

loc_809931BC:
{
    ctr = r12;
    ctx->lr = 0x809931C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = (r31 + 4);
}

loc_809931C8:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_809931D0:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_809931BC;
    }
}

loc_809931D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8099315C func_8099315C preserves=true fpr_mask=0x00000000
