#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80043BAC(CpuContext* ctx);
extern "C" uint32_t func_80043BAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8026A73C(CpuContext* ctx);
extern "C" void func_8026A73C_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8026A73C_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_8026A8C8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8026A8C8u);
    goto loc_8026A8C8;

loc_8026A8C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80043BACu>(&func_80043BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80043BAC_4D6 = func_80043BAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80043BAC_4D6;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80043BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_8026A8F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026A934;
    }
}

loc_8026A8F8:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026A904:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026A914;
    }
}

loc_8026A908:
{
    r3 = r30;
    r4 = 25;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026A914:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 256);
}

loc_8026A920:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026A96C;
    }
}

loc_8026A924:
{
    r3 = r30;
    r4 = 26;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
    goto loc_8026A96C;
}

loc_8026A934:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 32);
}

loc_8026A940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026A950;
    }
}

loc_8026A944:
{
    r3 = r30;
    r4 = 25;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026A950:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 64);
}

loc_8026A95C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026A96C;
    }
}

loc_8026A960:
{
    r3 = r30;
    r4 = 26;
    // inline leaf 0x8026A73C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A73C
}

loc_8026A96C:
{
    r31 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r31 & 2048);
}

loc_8026A978:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026A988;
    }
}

loc_8026A97C:
{
    r3 = r30;
    r4 = 28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8026A73Cu) && KnownTranslatedCpuCall<0x8026A73Cu>::kAvailable && !KnownTranslatedCpuCall<0x8026A73Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026A73Cu>()) {
        const auto state_free_result_8026A73C_11CE = func_8026A73C_statefree(r3, r4);
        r5 = static_cast<uint32_t>(state_free_result_8026A73C_11CE[0]);
        r6 = static_cast<uint32_t>(state_free_result_8026A73C_11CE[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026A73Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8026A988:
{
    r0 = (r31 & 1024);
}

loc_8026A990:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026A9A0;
    }
}

loc_8026A994:
{
    r3 = r30;
    r4 = 27;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8026A73Cu) && KnownTranslatedCpuCall<0x8026A73Cu>::kAvailable && !KnownTranslatedCpuCall<0x8026A73Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8026A73Cu>()) {
        const auto state_free_result_8026A73C_15ED = func_8026A73C_statefree(r3, r4);
        r5 = static_cast<uint32_t>(state_free_result_8026A73C_15ED[0]);
        r6 = static_cast<uint32_t>(state_free_result_8026A73C_15ED[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026A73Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8026A9A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026A8C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026A8C8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026A8C8 func_8026A8C8 preserves=true fpr_mask=0x00000000
