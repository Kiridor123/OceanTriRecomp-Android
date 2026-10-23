#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BAC10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_804BAC10;

loc_804BAC10:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = -872349696;
    r4 = (r0 - r4);
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r4 = (r4 + 1024);
    r0 = (r4 | 524288);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r4 = (r5 + -32768);
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    PpcSetPairedFprInline(f5, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f4.d = MemoryHw::FlatReadFloat32((r3 + 8));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 16);
    PpcSetPairedFprInline(f3, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    f2.d = MemoryHw::FlatReadFloat32((r3 + 24));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 32);
    PpcSetPairedFprInline(f1, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    f0.d = MemoryHw::FlatReadFloat32((r3 + 40));
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f5.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f4.d));
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f3.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f1.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BAC10 func_804BAC10 preserves=true fpr_mask=0x00000000
