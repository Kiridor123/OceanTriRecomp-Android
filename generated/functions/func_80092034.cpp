#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80091E60(CpuContext* ctx);
extern "C" uint64_t func_80091E60_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80091F4C(CpuContext* ctx);
extern "C" uint32_t func_80091F4C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_80091F4C_statefree(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80092034_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80092034;

loc_80092034:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r3 + 1);
    ctx->lr = 0x80092058u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80091F4Cu) && KnownTranslatedCpuCall<0x80091F4Cu>::kAvailable && !KnownTranslatedCpuCall<0x80091F4Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80091F4Cu>()) {
        const auto state_free_result_80091F4C_4FF = func_80091F4C_statefree(r1, r3, 0x80092058u);
        r1 = static_cast<uint32_t>(state_free_result_80091F4C_4FF[0]);
        r3 = static_cast<uint32_t>(state_free_result_80091F4C_4FF[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091F4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = r3;
    r3 = r30;
    r0 = (r0 | r31);
    r4 = (r0 | -33554432);
    ctx->lr = 0x8009206Cu;
    if constexpr (KnownRegArgsCpuCall<0x80091E60u>(&func_80091E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091E60_7F3 = func_80091E60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80091E60_7F3);
        r4 = static_cast<uint32_t>(regargs_result_80091E60_7F3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091E60u>(ctx);
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

extern "C" void func_80092034(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80092034_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80092034 func_80092034 preserves=true fpr_mask=0x00000000
