#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050199C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8050199C;

loc_8050199C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1496));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStInline<0u, 0u>(ctx, r3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 16);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 24);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 32);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 40);
    PPC_PsqStInline<0u, 0u>(ctx, r3_psq_tmp_4, PPC_PsFromScalarInline(f0.d));
    ctx->fpr[0] = f0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8050199C_statefree(uint32_t native_r2, uint32_t native_r3, PPC_FPR native_f0, uint32_t native_lr, uint32_t native_gqr0)
{

    uint32_t cached_r2 = native_r2;
    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f0 = PPC_FPR{};

    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;

    goto loc_8050199C;

loc_8050199C:
{
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r2 + -1496));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, cached_r3, PPC_PsFromScalarInline(cached_f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (cached_r3 + 8);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_0, PPC_PsFromScalarInline(cached_f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (cached_r3 + 16);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_1, PPC_PsFromScalarInline(cached_f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (cached_r3 + 24);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_2, PPC_PsFromScalarInline(cached_f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (cached_r3 + 32);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_3, PPC_PsFromScalarInline(cached_f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (cached_r3 + 40);
    PPC_PsqStStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_4, PPC_PsFromScalarInline(cached_f0.d));
return cached_f0.raw;
}


    return cached_f0.raw;
}
// RECOMP_STATE_FREE_ABI address=0x8050199C symbol=func_8050199C_statefree gpr_in=0x0000000C gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000001 cr_in=0x00 cr_out=0x00 gqr_in=0x01 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8050199C func_8050199C preserves=true fpr_mask=0x00000000


extern "C" void func_8050199C_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8050199C(ctx);
}
