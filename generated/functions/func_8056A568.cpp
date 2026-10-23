#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80568520(CpuContext* ctx);
extern "C" uint32_t func_80568520_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80568520_statefree(uint32_t, uint32_t);

extern "C" uint32_t func_8056A568_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;

    goto loc_8056A568;

loc_8056A568:
{
    r3 = (r3 + -6660);
    if (MkwStateFreeAbiEnabled(0x80568520u) && KnownTranslatedCpuCall<0x8054E838u>::kAvailable && !KnownTranslatedCpuCall<0x8054E838u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8054E838u>() && KnownTranslatedCpuCall<0x80568520u>::kAvailable && !KnownTranslatedCpuCall<0x80568520u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80568520u>()) {
        const auto state_free_result_80568520_38C = func_80568520_statefree(r3, ctx->lr);
        r3 = static_cast<uint32_t>(state_free_result_80568520_38C);
    } else {
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80568520u>(ctx);
        r3 = ctx->gpr[3];
    }
    return r3;
}

}

extern "C" void func_8056A568(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8056A568_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056A568 func_8056A568 preserves=true fpr_mask=0x00000000
