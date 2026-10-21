#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054E838(CpuContext* ctx);
extern "C" uint32_t func_8054E838_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8054E838_statefree(uint32_t);

extern "C" void func_80568520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x80568520u);
    goto loc_80568520;

loc_80568520:
{
    if (MkwStateFreeAbiEnabled(0x8054E838u) && KnownTranslatedCpuCall<0x8054E838u>::kAvailable && !KnownTranslatedCpuCall<0x8054E838u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054E838u>()) {
        const auto state_free_result_8054E838_2AD = func_8054E838_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8054E838_2AD);
    } else {
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8054E838u>(ctx);
        r3 = ctx->gpr[3];
    }
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80568520_statefree(uint32_t native_r3, uint32_t native_lr)
{

    uint32_t cached_r3 = native_r3;

    MKW_GUEST_ENTER(0x80568520u);
    goto loc_80568520;

loc_80568520:
{
    
        const auto state_free_result_8054E838_28D = func_8054E838_statefree(cached_r3);
        cached_r3 = static_cast<uint32_t>(state_free_result_8054E838_28D);
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80568520 symbol=func_80568520_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80568520 func_80568520 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80568520_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80568520(ctx);
    return ctx->gpr[3];
}
