#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F1D4(CpuContext* ctx);
extern "C" uint32_t func_8029F1D4_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802AAB68(CpuContext* ctx);
extern "C" uint64_t func_802AAB68_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8029F1D4_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_802AA7C8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802AA7C8u);
    goto loc_802AA7C8;

loc_802AA7C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = 0x806B0000u;
    r5 = (r4 + -1256);
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_802AA7F0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_802AA7FC;
    }
}

loc_802AA7F4:
{
    r3 = 0;
    goto loc_802AA8B0;
}

loc_802AA7FC:
{
    r30 = MemoryInline::FlatRead32((r5 + 8));
    ctr = r0;
}

loc_802AA808:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802AA830;
    }
}

loc_802AA80C:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_802AA814:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AA828;
    }
}

loc_802AA818:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r5 + 12), r0);
    goto loc_802AA838;
}

loc_802AA828:
{
    r30 = (r30 + 268);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802AA80C;
    }
}

loc_802AA830:
{
    r3 = 0;
    goto loc_802AA8B0;
}

loc_802AA838:
{
    // inline leaf 0x802AAE0C (9 guest instruction(s))
}

loc_inl0_0x802AAE0C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r4 = (r4_rot_1 & 67108863);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & -64);
    r0 = (r3 - r0);
    r0 = (r0 & 63);
}

loc_inl0_0x802AAE20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x802AAE28;
    }
}

loc_inl0_0x802AAE24:
{
    r4 = (r4 + 1);
}

loc_inl0_0x802AAE28:
{
    r3 = r4;
}

loc_inl0_cont_802AAE0C:
{
    // end of inlined leaf 0x802AAE0C
    MemoryInline::FlatWrite32((r30 + 260), r3);
    r3 = MemoryInline::FlatRead32((r30 + 260));
    if constexpr (KnownRegArgsCpuCall<0x802AAB68u>(&func_802AAB68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_802AAB68_C2E = func_802AAB68_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AAB68_C2E);
        r4 = static_cast<uint32_t>(regargs_result_802AAB68_C2E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AAB68u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r30 + 256), r3);
    r0 = MemoryInline::FlatRead32((r30 + 260));
}

loc_802AA854:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802AA86C;
    }
}

loc_802AA858:
{
    r0 = MemoryInline::FlatRead32((r30 + 256));
}

loc_802AA860:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AA86C;
    }
}

loc_802AA864:
{
    r3 = 0;
    goto loc_802AA8B0;
}

loc_802AA86C:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r31 = 0;
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r31));
    r3 = (r30 + 206);
    r4 = (r30 + 246);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8029F1D4u) && KnownTranslatedCpuCall<0x8029F1D4u>::kAvailable && !KnownTranslatedCpuCall<0x8029F1D4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8029F1D4u>()) {
        const auto state_free_result_8029F1D4_1315 = func_8029F1D4_statefree(r3, r4);
        r4 = static_cast<uint32_t>(state_free_result_8029F1D4_1315);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8029F1D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 90), static_cast<uint16_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r30 + 11), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 264), static_cast<uint8_t>(r31));
    r3 = r30;
}

loc_802AA8B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AA7C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AA7C8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AA7C8 func_802AA7C8 preserves=true fpr_mask=0x00000000
