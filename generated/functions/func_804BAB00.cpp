#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BAB00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_804BAB00;

loc_804BAB00:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2224));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BAB0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BAB18;
    }
}

loc_804BAB10:
{
    r0 = 0;
    goto loc_804BAB1C;
}

loc_804BAB18:
{
    r0 = 1;
}

loc_804BAB1C:
{
    r4 = MemoryInline::FlatRead32((r2 + -2480));
    MemoryInline::FlatWrite32((r4 + 1320), r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 12);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 20);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 1324);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 1332);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 1340);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2, f0.d);
    r0 = MemoryInline::FlatRead32((r4 + 1532));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWrite32((r4 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BAB00 func_804BAB00 preserves=true fpr_mask=0x00000000
