#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B82C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t mkw_fifo_burst_0[16];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x804B82C0u);
    goto loc_804B82C0;

loc_804B82C0:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r4 = -872349696;
    r5 = (31 - r0);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r5 = (r5_rot_0 & 112);
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = (r5 + 1536);
    r0 = (r0 | 983040);
    r5 = (r4 + -32768);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryHw::FlatRead32((r3 + 12));
    r6 = (r6 ^ r6);
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 16);
    PpcSetPairedFprInline(f5, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 24);
    PpcSetPairedFprInline(f4, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 32);
    PpcSetPairedFprInline(f3, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 40);
    PpcSetPairedFprInline(f2, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 48);
    PpcSetPairedFprInline(f1, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 56);
    PpcSetPairedFprInline(f0, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 16u);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f5.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f4.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f3.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f2.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f1.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f0.d);
    r0 = 1;
    r3 = MemoryHw::FlatRead32((r2 + -2480));
    MemoryHw::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000005C gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B82C0 func_804B82C0 preserves=true fpr_mask=0x00000000
