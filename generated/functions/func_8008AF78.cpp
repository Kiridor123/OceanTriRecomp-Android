#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008AFB0(CpuContext* ctx);
extern "C" uint32_t func_8008AFB0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8008AFB0_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8008AF78_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x8008AF78u);
    goto loc_8008AF78;

loc_8008AF78:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = r3;
    r3 = (r1 + 8);
    r5 = MemoryInline::FlatRead32(r5);
    r0 = (r4 * 12);
    r4 = (r5 + r0);
    ctx->lr = 0x8008AF9Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008AFB0u) && KnownTranslatedCpuCall<0x8008AFB0u>::kAvailable && !KnownTranslatedCpuCall<0x8008AFB0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008AFB0u>()) {
        const auto state_free_result_8008AFB0_4AF = func_8008AFB0_statefree(r1, r3, r4, 0x8008AF9Cu);
        r1 = static_cast<uint32_t>(state_free_result_8008AFB0_4AF[0]);
        r3 = static_cast<uint32_t>(state_free_result_8008AFB0_4AF[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8008AFB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8008AF78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8008AF78_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008AF78 func_8008AF78 preserves=true fpr_mask=0x00000000
