#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80080A08(CpuContext* ctx);
extern "C" uint32_t func_80080A08_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80080A08_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80080A08_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8007ED8C_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8007ED8Cu);
    goto loc_8007ED8C;

loc_8007ED8C:
{
}

loc_8007ED90:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_8007ED9C;
    }
}

loc_8007ED94:
{
    r3 = MemoryInline::FlatRead32((r3 + 312));
    ctx->cr = cr;
    return r3;
}

loc_8007ED9C:
{
    if (MkwStateFreeAbiEnabled(0x80080A08u) && KnownTranslatedCpuCall<0x80080A08u>::kAvailable && !KnownTranslatedCpuCall<0x80080A08u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80080A08u>()) {
        const auto state_free_result_80080A08_4C6 = func_80080A08_statefree_v0(r3, r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80080A08_4C6[0]);
        cr = static_cast<uint32_t>(state_free_result_80080A08_4C6[1]);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80080A08u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8007ED8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8007ED8C_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007ED8C func_8007ED8C preserves=true fpr_mask=0x00000000
