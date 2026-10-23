#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802DA314(CpuContext* ctx);
extern "C" uint32_t func_802DA314_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802DA76C(CpuContext* ctx);
extern "C" uint32_t func_802DA76C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802DA93C(CpuContext* ctx);
extern "C" void func_802DA93C_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802DA974(CpuContext* ctx);
extern "C" uint64_t func_802DA974_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802DA314_statefree(uint32_t);
extern "C" uint64_t func_802DA76C_statefree(uint32_t);
extern "C" void func_802DA93C_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_802DA884_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_802DA884;

loc_802DA884:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    // inline leaf 0x802DA7B8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 4));
    // end of inlined leaf 0x802DA7B8
    r0 = (r3 & 255);
}

loc_802DA8A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DA8B8;
    }
}

loc_802DA8AC:
{
}

loc_802DA8B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802DA8CC;
    }
}

loc_802DA8B4:
{
    goto loc_802DA924;
}

loc_802DA8B8:
{
    r3 = r30;
    ctx->lr = 0x802DA8C0u;
    if constexpr (KnownRegArgsCpuCall<0x802DA974u>(&func_802DA974)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DA974_839 = func_802DA974_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802DA974_839);
        r4 = static_cast<uint32_t>(regargs_result_802DA974_839 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802DA974u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = r30;
    // inline leaf 0x802DA7A8 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA7A8
    goto loc_802DA924;
}

loc_802DA8CC:
{
    r3 = r30;
    // inline leaf 0x802DA96C (2 guest instruction(s))
    r3 = (r3 + 16);
    // end of inlined leaf 0x802DA96C
    r31 = r3;
    r3 = r30;
    r4 = 1;
    // inline leaf 0x802DA774 (8 guest instruction(s))
}

loc_inl3_0x802DA774:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_inl3_0x802DA77C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x802DA78C;
    }
}

loc_inl3_0x802DA780:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
}

loc_inl3_0x802DA78C:
{
    r3 = MemoryInline::FlatRead8((r3 + 7));
}

loc_inl3_cont_802DA774:
{
    // end of inlined leaf 0x802DA774
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r31 + 4));
    // inline leaf 0x802DA944 (10 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 7));
    r4 = (r4 & 255);
    r4 = (r4 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    r3 = r0;
    // end of inlined leaf 0x802DA944
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802DA314u) && KnownTranslatedCpuCall<0x802DA314u>::kAvailable && !KnownTranslatedCpuCall<0x802DA314u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802DA314u>()) {
        const auto state_free_result_802DA314_11FE = func_802DA314_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_802DA314_11FE);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802DA314u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 & 255);
}

loc_802DA900:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(33))) {
        goto loc_802DA924;
    }
}

loc_802DA904:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802DA76Cu) && KnownTranslatedCpuCall<0x802DA76Cu>::kAvailable && !KnownTranslatedCpuCall<0x802DA76Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802DA76Cu>()) {
        const auto state_free_result_802DA76C_15CF = func_802DA76C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_802DA76C_15CF);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802DA76Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 & 255);
}

loc_802DA914:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(100))) {
        goto loc_802DA924;
    }
}

loc_802DA918:
{
    r3 = r30;
    r4 = 100;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802DA93Cu) && KnownTranslatedCpuCall<0x802DA93Cu>::kAvailable && !KnownTranslatedCpuCall<0x802DA93Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802DA93Cu>()) {
        func_802DA93C_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802DA93Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_802DA924:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DA884(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DA884_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DA884 func_802DA884 preserves=true fpr_mask=0x00000000
