#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BF068(CpuContext* ctx);
extern "C" uint32_t func_802BF068_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802BF068_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802BF068_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_802BF018_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    goto loc_802BF018;

loc_802BF018:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r31 + 12);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r31 + 24);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r31 + 36);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r31 + 76);
    ctx->lr = 0x802BF050u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802BF068u) && KnownTranslatedCpuCall<0x802BF068u>::kAvailable && !KnownTranslatedCpuCall<0x802BF068u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802BF068u>()) {
        const auto state_free_result_802BF068_62C = func_802BF068_statefree_v0(r1, r3, r31, 0x802BF050u);
        r1 = static_cast<uint32_t>(state_free_result_802BF068_62C);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BF068u>(ctx);
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

extern "C" void func_802BF018(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802BF018_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BF018 func_802BF018 preserves=true fpr_mask=0x00000000
