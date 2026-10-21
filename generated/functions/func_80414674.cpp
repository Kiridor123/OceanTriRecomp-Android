#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041A8EC(CpuContext* ctx);
extern "C" void func_8041A8EC_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_8041A8EC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8041A8EC_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_80414674_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80414674u);
    goto loc_80414674;

loc_80414674:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x80413D68 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16712));
    // end of inlined leaf 0x80413D68
}

loc_80414688:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80414694;
    }
}

loc_8041468C:
{
    // inline leaf 0x80413D68 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16712));
    // end of inlined leaf 0x80413D68
    ctx->lr = 0x80414694u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8041A8ECu) && KnownTranslatedCpuCall<0x8041A8ECu>::kAvailable && !KnownTranslatedCpuCall<0x8041A8ECu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8041A8ECu>()) {
        const auto state_free_result_8041A8EC_641 = func_8041A8EC_statefree_v0(r1, r3, r31, 0x80414694u);
        r1 = static_cast<uint32_t>(state_free_result_8041A8EC_641[0]);
        ctx->lr = static_cast<uint32_t>(state_free_result_8041A8EC_641[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8041A8ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r13 = ctx->gpr[13];
    }
}

loc_80414694:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80414674(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80414674_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80414674 func_80414674 preserves=true fpr_mask=0x00000000
