#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80385B0C(CpuContext* ctx);
extern "C" void func_80385B0C_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80385B0C_statefree(uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_80385B38_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_80385B38;

loc_80385B38:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 417), static_cast<uint8_t>(r0));
    r4 = (r4 & 255);
    r5 = (r5 & 255);
    if (MkwStateFreeAbiEnabled(0x80385B0Cu) && KnownTranslatedCpuCall<0x80385B0Cu>::kAvailable && !KnownTranslatedCpuCall<0x80385B0Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80385B0Cu>()) {
        const auto state_free_result_80385B0C_3D6 = func_80385B0C_statefree(r3, r4, r5);
        r0 = static_cast<uint32_t>(state_free_result_80385B0C_3D6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80385B0Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_80385B38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80385B38_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80385B38 func_80385B38 preserves=true fpr_mask=0x00000000
