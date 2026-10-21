#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EDFD8(CpuContext* ctx);
extern "C" uint64_t func_800EDFD8_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_800EDFD8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800EDFD8_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800EDFD8_statefree_v1(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_800EE040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800EE040u);
    goto loc_800EE040;

loc_800EE040:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x800EE058u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800EDFD8u) && KnownTranslatedCpuCall<0x800EDFD8u>::kAvailable && !KnownTranslatedCpuCall<0x800EDFD8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800EDFD8u>()) {
        const auto state_free_result_800EDFD8_4CF = func_800EDFD8_statefree_v0(r1, r3, r31, 0x800EE058u);
        r1 = static_cast<uint32_t>(state_free_result_800EDFD8_4CF);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800EDFD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r31 + 272);
    ctx->lr = 0x800EE060u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800EDFD8u) && KnownTranslatedCpuCall<0x800EDFD8u>::kAvailable && !KnownTranslatedCpuCall<0x800EDFD8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800EDFD8u>()) {
        const auto state_free_result_800EDFD8_7B2 = func_800EDFD8_statefree_v1(r1, r3, r31, 0x800EE060u);
        r1 = static_cast<uint32_t>(state_free_result_800EDFD8_7B2[0]);
        r4 = static_cast<uint32_t>(state_free_result_800EDFD8_7B2[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800EDFD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_800EE040_statefree_v0(uint32_t native_r1, uint32_t native_r3, uint32_t native_r31, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4{};
    uint32_t cached_r31 = 0;

    MKW_GUEST_ENTER(0x800EE040u);
    goto loc_800EE040;

loc_800EE040:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    cached_r31 = cached_r3;
    native_lr = 0x800EE058u;
    
        const auto state_free_result_800EDFD8_46C = func_800EDFD8_statefree_v0(cached_r1, cached_r3, cached_r31, 0x800EE058u);
        cached_r1 = static_cast<uint32_t>(state_free_result_800EDFD8_46C);
    
    cached_r3 = (cached_r31 + 272);
    native_lr = 0x800EE060u;
    
        const auto state_free_result_800EDFD8_69F = func_800EDFD8_statefree_v1(cached_r1, cached_r3, cached_r31, 0x800EE060u);
        cached_r1 = static_cast<uint32_t>(state_free_result_800EDFD8_69F[0]);
        cached_r4 = static_cast<uint32_t>(state_free_result_800EDFD8_69F[1]);
    
    cached_r3 = cached_r31;
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);


return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r1) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800EE040 symbol=func_800EE040_statefree_v0 gpr_in=0x8000000A gpr_out=0x00000003 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_800EE040_statefree(uint32_t native_r1, uint32_t native_r3, uint32_t native_r4, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r31 = 0;

    MKW_GUEST_ENTER(0x800EE040u);
    goto loc_800EE040;

loc_800EE040:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    cached_r31 = cached_r3;
    native_lr = 0x800EE058u;
    
        const auto state_free_result_800EDFD8_46C = func_800EDFD8_statefree_v0(cached_r1, cached_r3, cached_r31, 0x800EE058u);
        cached_r1 = static_cast<uint32_t>(state_free_result_800EDFD8_46C);
    
    cached_r3 = (cached_r31 + 272);
    native_lr = 0x800EE060u;
    
        const auto state_free_result_800EDFD8_69F = func_800EDFD8_statefree_v1(cached_r1, cached_r3, cached_r31, 0x800EE060u);
        cached_r1 = static_cast<uint32_t>(state_free_result_800EDFD8_69F[0]);
        cached_r4 = static_cast<uint32_t>(state_free_result_800EDFD8_69F[1]);
    
    cached_r3 = cached_r31;
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);


return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r1) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800EE040 symbol=func_800EE040_statefree gpr_in=0x0000001A gpr_out=0x00000003 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EE040 func_800EE040 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_800EE040_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_800EE040(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
