#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BAA40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_804BAA40;

loc_804BAA40:
{
    r4 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r3 = 393216;
    r0 = (r3 + 4128);
    r3 = MemoryHw::FlatRead32((r2 + -2480));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r5 = (r4 + -32768);
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 1324);
    PpcSetPairedFprInline(f2, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 1332);
    PpcSetPairedFprInline(f1, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 1340);
    PpcSetPairedFprInline(f0, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f2.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f1.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f0.d);
    r0 = MemoryHw::FlatRead32((r3 + 1320));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BAA40 func_804BAA40 preserves=true fpr_mask=0x00000000
