#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008B768(CpuContext* ctx);
extern "C" uint32_t func_8008B768_ra0_2_8_0(CpuContext*, double);

extern "C" MkwStateFreeResult2 func_8008B768_statefree(uint32_t, PPC_FPR, uint32_t, uint32_t);

extern "C" void func_8008B764(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x8008B764u);
    goto loc_8008B764;

loc_8008B764:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008B768u) && KnownTranslatedCpuCall<0x8008B768u>::kAvailable && !KnownTranslatedCpuCall<0x8008B768u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008B768u>()) {
        const auto state_free_result_8008B768_326 = func_8008B768_statefree(r1, f1, ctx->lr, ctx->gqr[6]);
        r1 = static_cast<uint32_t>(state_free_result_8008B768_326[0]);
        r3 = static_cast<uint32_t>(state_free_result_8008B768_326[1]);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8008B768u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_8008B764_statefree_v0(uint32_t native_r1, PPC_FPR native_f1, uint32_t native_lr, uint32_t native_gqr6)
{

    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3{};
    PPC_FPR cached_f1 = native_f1;

    MKW_GUEST_ENTER(0x8008B764u);
    goto loc_8008B764;

loc_8008B764:
{
    
        const auto state_free_result_8008B768_2B3 = func_8008B768_statefree(cached_r1, cached_f1, native_lr, native_gqr6);
        cached_r1 = static_cast<uint32_t>(state_free_result_8008B768_2B3[0]);
        cached_r3 = static_cast<uint32_t>(state_free_result_8008B768_2B3[1]);

    return { static_cast<uint64_t>(cached_r1), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8008B764 symbol=func_8008B764_statefree_v0 gpr_in=0x00000002 gpr_out=0x0000000A fpr_in=0x00000002 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x40 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8008B764_statefree(uint32_t native_r1, uint32_t native_r3, PPC_FPR native_f1, uint32_t native_lr, uint32_t native_gqr6)
{

    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f1 = native_f1;

    MKW_GUEST_ENTER(0x8008B764u);
    goto loc_8008B764;

loc_8008B764:
{
    
        const auto state_free_result_8008B768_2B3 = func_8008B768_statefree(cached_r1, cached_f1, native_lr, native_gqr6);
        cached_r1 = static_cast<uint32_t>(state_free_result_8008B768_2B3[0]);
        cached_r3 = static_cast<uint32_t>(state_free_result_8008B768_2B3[1]);

    return { static_cast<uint64_t>(cached_r1), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8008B764 symbol=func_8008B764_statefree gpr_in=0x0000000A gpr_out=0x0000000A fpr_in=0x00000002 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x40 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000000A gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008B764 func_8008B764 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8008B764_ra0_2_8_0(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    ctx->fpr[1].d = arg_f1;
    [[clang::noinline]] func_8008B764(ctx);
    return ctx->gpr[3];
}
