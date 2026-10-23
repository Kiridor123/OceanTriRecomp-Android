#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027D7B0(CpuContext* ctx);
extern "C" uint32_t func_8027D7B0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_8027D7B0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8027D7B0_statefree_v0(uint32_t, uint32_t);

extern "C" uint32_t func_802CD760_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_802CD760;

loc_802CD760:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 1120));
}

loc_802CD77C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802CD788;
    }
}

loc_802CD780:
{
    r3 = 1;
    goto loc_802CD7AC;
}

loc_802CD788:
{
    r3 = MemoryInline::FlatRead32((r3 + 364));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027D7B0u) && KnownTranslatedCpuCall<0x8027D7B0u>::kAvailable && !KnownTranslatedCpuCall<0x8027D7B0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027D7B0u>()) {
        const auto state_free_result_8027D7B0_5A8 = func_8027D7B0_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8027D7B0_5A8[0]);
        r3 = static_cast<uint32_t>(state_free_result_8027D7B0_5A8[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8027D7B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        xer = ctx->xer;
    }
}

loc_802CD794:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CD7A8;
    }
}

loc_802CD798:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1120), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_802CD7AC;
}

loc_802CD7A8:
{
    r3 = 0;
}

loc_802CD7AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802CD760(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802CD760_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802CD760 func_802CD760 preserves=true fpr_mask=0x00000000
