#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80143AA4(CpuContext* ctx);
extern "C" void func_80143AA4_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_80143AA4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80143AA4_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_801442A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801442A4;

loc_801442A4:
{
    if (MkwStateFreeAbiEnabled(0x80143AA4u) && KnownTranslatedCpuCall<0x80143AA4u>::kAvailable && !KnownTranslatedCpuCall<0x80143AA4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80143AA4u>()) {
        const auto state_free_result_80143AA4_36E = func_80143AA4_statefree_v0(r3, cr, xer);
        r0 = static_cast<uint32_t>(state_free_result_80143AA4_36E[0]);
        cr = static_cast<uint32_t>(state_free_result_80143AA4_36E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80143AA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_801442A4_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    goto loc_801442A4;

loc_801442A4:
{
    
        const auto state_free_result_80143AA4_2F2 = func_80143AA4_statefree_v0(cached_r3, cached_cr, cached_xer);
        cached_r0 = static_cast<uint32_t>(state_free_result_80143AA4_2F2[0]);
        cached_cr = static_cast<uint32_t>(state_free_result_80143AA4_2F2[1]);
return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x801442A4 symbol=func_801442A4_statefree gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801442A4 func_801442A4 preserves=true fpr_mask=0x00000000


extern "C" void func_801442A4_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_801442A4(ctx);
}
