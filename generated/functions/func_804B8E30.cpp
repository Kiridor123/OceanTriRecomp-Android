#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8E30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804B8E30u);
    goto loc_804B8E30;

loc_804B8E30:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = r4;
    r12 = MemoryInline::FlatRead32((r5 + 1308));
    ctr = r12;
    ctx->lr = 0x804B8E5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = r3;
    ctx->lr = 0x804B8E64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B99B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = -872349696;
    r4 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r30 + 4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32(r31);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    ctx->lr = 0x804B8E88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B99B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32(r30);
    r3_mrot_0 = (r0 & 1023);
    r3_mdest_0 = (r3 & -1024);
    r3 = (r3_mdest_0 | r3_mrot_0);
    MemoryInline::FlatWrite32((r31 + 4), r3);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r0 = MemoryInline::FlatRead32((r30 + 8));
    MemoryInline::FlatWrite32((r31 + 12), r0);
    MemoryInline::FlatWrite32(r30, r3);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FDE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B8E30 func_804B8E30 preserves=true fpr_mask=0x00000000
