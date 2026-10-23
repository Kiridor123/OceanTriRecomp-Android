#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80448A90(CpuContext* ctx);
extern "C" uint32_t func_80448A90_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80448A90_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80448A90_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_80448A60_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80448A60;

loc_80448A60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x80448A78u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80448A90u) && KnownTranslatedCpuCall<0x80448A90u>::kAvailable && !KnownTranslatedCpuCall<0x80448A90u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80448A90u>()) {
        const auto state_free_result_80448A90_458 = func_80448A90_statefree_v0(r1, r3, r31, 0x80448A78u);
        r1 = static_cast<uint32_t>(state_free_result_80448A90_458);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80448A90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80448A60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80448A60_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80448A60 func_80448A60 preserves=true fpr_mask=0x00000000
