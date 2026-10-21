#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D47D0(CpuContext* ctx);
extern "C" uint32_t func_800D47D0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800D47D0_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_800D47D0_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_800D47F8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800D47F8u);
    goto loc_800D47F8;

loc_800D47F8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r0 = (r4 & 65535);
    r3 = (r0 * 340);
    r3 = (r3 + 32);
    r4 = 32;
    // inline leaf 0x800D47D0 (6 guest instruction(s))
    r0 = (r4 + -1);
    r5 = ~(r0 | r0);
    r3 = (r4 + r3);
    r0 = (r3 + -1);
    r3 = (r5 & r0);
    // end of inlined leaf 0x800D47D0
    r31 = r3;
    r0 = (r27 & 65535);
    r3 = (r0 * 164);
    r3 = (r3 + 32);
    r4 = 32;
    // inline leaf 0x800D47D0 (6 guest instruction(s))
    r0 = (r4 + -1);
    r5 = ~(r0 | r0);
    r3 = (r4 + r3);
    r0 = (r3 + -1);
    r3 = (r5 & r0);
    // end of inlined leaf 0x800D47D0
    r31 = (r3 + r31);
    r0 = (r28 & 65535);
    r3 = (r0 * 188);
    r3 = (r3 + 32);
    r4 = 32;
    // inline leaf 0x800D47D0 (6 guest instruction(s))
    r0 = (r4 + -1);
    r5 = ~(r0 | r0);
    r3 = (r4 + r3);
    r0 = (r3 + -1);
    r3 = (r5 & r0);
    // end of inlined leaf 0x800D47D0
    r31 = (r31 + r3);
    r0 = (r29 & 65535);
    r3 = (r0 * 232);
    r3 = (r3 + 32);
    r4 = 32;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800D47D0u) && KnownTranslatedCpuCall<0x800D47D0u>::kAvailable && !KnownTranslatedCpuCall<0x800D47D0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800D47D0u>()) {
        const auto state_free_result_800D47D0_9C6 = func_800D47D0_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_800D47D0_9C6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800D47D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r31 = (r31 + r3);
    r3 = (r30 * 28);
    r3 = (r3 + 32);
    r4 = 32;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800D47D0u) && KnownTranslatedCpuCall<0x800D47D0u>::kAvailable && !KnownTranslatedCpuCall<0x800D47D0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800D47D0u>()) {
        const auto state_free_result_800D47D0_D52 = func_800D47D0_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_800D47D0_D52[0]);
        r5 = static_cast<uint32_t>(state_free_result_800D47D0_D52[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800D47D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r3 = (r31 + r3);
    r3 = (r3 + 544);
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D47F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D47F8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FA gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D47F8 func_800D47F8 preserves=true fpr_mask=0x00000000
