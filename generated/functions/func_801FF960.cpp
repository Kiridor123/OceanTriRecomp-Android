#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FF99C(CpuContext* ctx);
extern "C" uint64_t func_801FF99C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801FF9E8(CpuContext* ctx);
extern "C" uint64_t func_801FF9E8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_801FF99C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_801FF99C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801FF960_ra28_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_801FF960;

loc_801FF960:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 + 4);
    ctx->lr = 0x801FF97Cu;
    if constexpr (KnownRegArgsCpuCall<0x801FF9E8u>(&func_801FF9E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801FF9E8_4D8 = func_801FF9E8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_801FF9E8_4D8);
        r4 = static_cast<uint32_t>(regargs_result_801FF9E8_4D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801FF9E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 364);
    ctx->lr = 0x801FF984u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801FF99Cu) && KnownTranslatedCpuCall<0x801FF99Cu>::kAvailable && !KnownTranslatedCpuCall<0x801FF99Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801FF99Cu>()) {
        const auto state_free_result_801FF99C_887 = func_801FF99C_statefree_v0(r1, r3, r31, 0x801FF984u);
        r1 = static_cast<uint32_t>(state_free_result_801FF99C_887[0]);
        r4 = static_cast<uint32_t>(state_free_result_801FF99C_887[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801FF99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801FF960(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801FF960_ra28_0_18_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000002A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FF960 func_801FF960 preserves=true fpr_mask=0x00000000
