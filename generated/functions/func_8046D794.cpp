#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046D794(CpuContext* MKW_RESTRICT ctx)
{
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8046D794;

loc_8046D794:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = MemoryInline::FlatReadFloat64(r3);
    PPC_Mtfsf(255, f31.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r1_psq_tmp_1 = (r1 + 32);
    PpcSetPairedFprInline(f31, PPC_PsqLStackInline<0u, 0u>(ctx, r1_psq_tmp_1));
    f31.d = leaf_stack_saved_f31_entry;
    r1 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->fpr[31] = f31;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8046D794_statefree(uint32_t native_r1, uint32_t native_r3, PPC_FPR native_f31, uint32_t native_lr, uint32_t native_gqr0)
{

    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f31 = native_f31;

    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    goto loc_8046D794;

loc_8046D794:
{
    leaf_stack_saved_f31_entry = cached_f31.d;
    MemoryInline::FlatWriteRam32((cached_r1 + -64), cached_r1);
    cached_r1 = (cached_r1 + -64);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (cached_r1 + 32);
    PPC_PsqStStateInline<0u, 0u, true>(native_gqr0, r1_psq_tmp_0, PPC_PsFromScalarInline(cached_f31.d));
    cached_f31.d = MemoryInline::FlatReadFloat64(cached_r3);
    PPC_Mtfsf(255, cached_f31.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r1_psq_tmp_1 = (cached_r1 + 32);
    PpcSetPairedFprInline(cached_f31, PPC_PsqLStateInline<0u, 0u, true>(native_gqr0, r1_psq_tmp_1));
    cached_f31.d = leaf_stack_saved_f31_entry;
    cached_r1 = (cached_r1 + 64);
return { static_cast<uint64_t>(cached_r1), cached_f31.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x8046D794 symbol=func_8046D794_statefree gpr_in=0x0000000A gpr_out=0x00000002 fpr_in=0x80000000 fpr_out=0x80000000 cr_in=0x00 cr_out=0x00 gqr_in=0x01 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00000002 gpr_return=0x00000000 fpr_read=0x80000000 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046D794 func_8046D794 preserves=true fpr_mask=0x00000000


extern "C" void func_8046D794_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8046D794(ctx);
}
