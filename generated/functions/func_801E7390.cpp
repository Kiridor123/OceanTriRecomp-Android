#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E7358(CpuContext* ctx);
extern "C" uint64_t func_801E7358_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802740A0(CpuContext* ctx);
extern "C" uint32_t func_802740A0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803591A4(CpuContext* ctx);
extern "C" uint64_t func_803591A4_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_802740A0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802740A0_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_801E7390_ra98_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[7] = arg_r7;
    uint32_t xer = ctx->xer;

    goto loc_801E7390;

loc_801E7390:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r3 = (r1 + 8);
    r4 = (r1 + 12);
    // inline leaf 0x80359594 (14 guest instruction(s))
}

loc_inl0_0x80359594:
{
    r5 = 0x806C0000u;
    r6 = (r5 + 6120);
}

loc_inl0_0x803595A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x803595B8;
    }
}

loc_inl0_0x803595A4:
{
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 16));
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
}

loc_inl0_0x803595B8:
{
}

loc_inl0_0x803595BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x803595C0:
{
    r0 = MemoryInline::FlatRead16((r6 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam32(r4, r0);
    goto loc_inl0_cont_80359594;
}

loc_inl0_return:
{
}

loc_inl0_cont_80359594:
{
    // end of inlined leaf 0x80359594
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = 0x801E73BCu;
    if constexpr (KnownRegArgsCpuCall<0x803591A4u>(&func_803591A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803591A4_ADD = func_803591A4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_803591A4_ADD);
        r4 = static_cast<uint32_t>(regargs_result_803591A4_ADD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803591A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead16((r1 + 8));
    if constexpr (KnownRegArgsCpuCall<0x801E7358u>(&func_801E7358)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E7358_E93 = func_801E7358_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801E7358_E93);
        r4 = static_cast<uint32_t>(regargs_result_801E7358_E93 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801E7358u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r3 * r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D398u>(ctx);
    r3 = MemoryInline::FlatRead16((r1 + 8));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802740A0u) && KnownTranslatedCpuCall<0x802740A0u>::kAvailable && !KnownTranslatedCpuCall<0x802740A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802740A0u>()) {
        const auto state_free_result_802740A0_1268 = func_802740A0_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_802740A0_1268);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802740A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_801E73E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E73F4;
    }
}

loc_801E73E8:
{
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r4 = 5;
    // inline leaf 0x8020EB64 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 2816), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8020EB64
}

loc_801E73F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E7390(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E7390_ra98_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000219A gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E7390 func_801E7390 preserves=true fpr_mask=0x00000000
