#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802C1DCC(CpuContext* ctx);
extern "C" uint32_t func_802C1DCC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802C1E78(CpuContext* ctx);
extern "C" uint64_t func_802C1E78_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_802C1DCC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802C2108_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802C2108;

loc_802C2108:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = 0;
    ctx->lr = 0x802C2124u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802C1DCCu) && KnownTranslatedCpuCall<0x802C1DCCu>::kAvailable && !KnownTranslatedCpuCall<0x802C1DCCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802C1DCCu>()) {
        const auto state_free_result_802C1DCC_4E6 = func_802C1DCC_statefree(r1, r3, r13, 0x802C2124u);
        r1 = static_cast<uint32_t>(state_free_result_802C1DCC_4E6[0]);
        r3 = static_cast<uint32_t>(state_free_result_802C1DCC_4E6[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802C1DCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
    r4 = r31;
    ctx->lr = 0x802C212Cu;
    if constexpr (KnownRegArgsCpuCall<0x802C1E78u>(&func_802C1E78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802C1E78_7BC = func_802C1E78_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802C1E78_7BC);
        r4 = static_cast<uint32_t>(regargs_result_802C1E78_7BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802C1E78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C2108(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C2108_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000000 fpr_write=0x8000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C2108 func_802C2108 preserves=true fpr_mask=0x00000000
