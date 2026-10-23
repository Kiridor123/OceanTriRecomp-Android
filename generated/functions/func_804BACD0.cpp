#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BACD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_804BACD0;

loc_804BACD0:
{
}

loc_804BACD4:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(64))) {
        goto loc_804BACE8;
    }
}

loc_804BACD8:
{
    r0 = (r4 + -64);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r7 = (r4 + 1280);
    goto loc_804BACEC;
}

loc_804BACE8:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
}

loc_804BACEC:
{
}

loc_804BACF0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_804BACFC;
    }
}

loc_804BACF4:
{
    r6 = 8;
    goto loc_804BAD00;
}

loc_804BACFC:
{
    r6 = 12;
}

loc_804BAD00:
{
    r4 = -872349696;
    r6 = (r6 + -1);
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
}

loc_804BAD18:
{
    r0 = (r7 | r0);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804BAD5C;
    }
}

loc_804BAD24:
{
    r4 = (r4 + -32768);
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    PpcSetPairedFprInline(f5, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f4, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 16);
    PpcSetPairedFprInline(f3, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 24);
    PpcSetPairedFprInline(f2, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 32);
    PpcSetPairedFprInline(f1, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 40);
    PpcSetPairedFprInline(f0, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f5.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f4.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f3.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f2.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f1.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

loc_804BAD5C:
{
    r4 = (r4 + -32768);
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    PpcSetPairedFprInline(f3, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 8);
    PpcSetPairedFprInline(f2, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 16);
    PpcSetPairedFprInline(f1, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 24);
    PpcSetPairedFprInline(f0, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f3.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f2.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f1.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000B9 gpr_write=0x000000D1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BACD0 func_804BACD0 preserves=true fpr_mask=0x00000000
