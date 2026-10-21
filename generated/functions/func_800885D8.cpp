#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003F9A4(CpuContext* ctx);
extern "C" void func_8003F9A4_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8003F9A4_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_800885D8_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x800885D8u);
    goto loc_800885D8;

loc_800885D8:
{
    r4 = r3;
    r3 = 0x80690000u;
    r3 = (r3 + -22584);
    if (MkwStateFreeAbiEnabled(0x8003F9A4u) && KnownTranslatedCpuCall<0x8003F9A4u>::kAvailable && !KnownTranslatedCpuCall<0x8003F9A4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8003F9A4u>()) {
        const auto state_free_result_8003F9A4_37C = func_8003F9A4_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8003F9A4_37C[0]);
        r5 = static_cast<uint32_t>(state_free_result_8003F9A4_37C[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8003F9A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800885D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800885D8_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800885D8 func_800885D8 preserves=true fpr_mask=0x00000000
