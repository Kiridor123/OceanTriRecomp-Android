#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006E6F4(CpuContext* ctx);
extern "C" uint32_t func_8006E6F4_ra0_2_8_0(CpuContext*, double);

extern "C" MkwStateFreeResult2 func_8006E6F4_statefree(uint32_t, PPC_FPR);

extern "C" uint32_t func_8006E6CC_ra0_2_8_0(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x8006E6CCu);
    goto loc_8006E6CC;

loc_8006E6CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8006E6F4u) && KnownTranslatedCpuCall<0x8006E6F4u>::kAvailable && !KnownTranslatedCpuCall<0x8006E6F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8006E6F4u>()) {
        const auto state_free_result_8006E6F4_3F5 = func_8006E6F4_statefree(r1, f1);
        r1 = static_cast<uint32_t>(state_free_result_8006E6F4_3F5[0]);
        r3 = static_cast<uint32_t>(state_free_result_8006E6F4_3F5[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8006E6F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r3 = (r3_rot_0 & 255);
    r3 = (r3 + -127);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_8006E6CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8006E6CC_ra0_2_8_0(ctx, ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006E6CC func_8006E6CC preserves=true fpr_mask=0x00000000
