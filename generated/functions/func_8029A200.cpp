#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CFAF4(CpuContext* ctx);
extern "C" uint64_t func_800CFAF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800CFB34(CpuContext* ctx);
extern "C" uint64_t func_800CFB34_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8011EEE8(CpuContext* ctx);
extern "C" void func_8011EEE8_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_802789F8(CpuContext* ctx);
extern "C" void func_802789F8_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" void func_8011EEE8_statefree(uint32_t);
extern "C" uint64_t func_802789F8_statefree(uint32_t);

extern "C" uint64_t func_8029A200_ra10_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8029A200u);
    goto loc_8029A200;

loc_8029A200:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
    r3 = 2;
    if constexpr (KnownRegArgsCpuCall<0x800CFB34u>(&func_800CFB34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFB34_97E = func_800CFB34_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFB34_97E);
        r4 = static_cast<uint32_t>(regargs_result_800CFB34_97E >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFB34u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = (r3 & 65535);
    r29 = 0;
    goto loc_8029A24C;
}

loc_8029A23C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802789F8u) && KnownTranslatedCpuCall<0x802789F8u>::kAvailable && !KnownTranslatedCpuCall<0x802789F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802789F8u>()) {
        const auto state_free_result_802789F8_CC0 = func_802789F8_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_802789F8_CC0);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802789F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = (r29 + 1);
    r31 = (r31 + 2848);
}

loc_8029A24C:
{
}

loc_8029A250:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r30))) {
        goto loc_8029A23C;
    }
}

loc_8029A254:
{
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFAF4u>(&func_800CFAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFAF4_FB3 = func_800CFAF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFAF4_FB3);
        r4 = static_cast<uint32_t>(regargs_result_800CFAF4_FB3 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFAF4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r28 = r3;
    r3 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800CFB34u>(&func_800CFB34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFB34_1236 = func_800CFB34_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFB34_1236);
        r4 = static_cast<uint32_t>(regargs_result_800CFB34_1236 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFB34u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = (r3 & 65535);
    r29 = 0;
    r31 = 0;
    goto loc_8029A28C;
}

loc_8029A278:
{
    MemoryInline::FlatWrite8((r28 + 2099), static_cast<uint8_t>(r31));
    r3 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8011EEE8u) && KnownTranslatedCpuCall<0x8011EEE8u>::kAvailable && !KnownTranslatedCpuCall<0x8011EEE8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011EEE8u>()) {
        func_8011EEE8_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8011EEE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = (r29 + 1);
    r28 = (r28 + 2840);
}

loc_8029A28C:
{
}

loc_8029A290:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r30))) {
        goto loc_8029A278;
    }
}

loc_8029A294:
{
    r0 = 0;
    r3 = 0x806C0000u;
    r3 = (r3 + -2080);
    MemoryInline::FlatWriteRam8((r3 + 534), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 530), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 542), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 554), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 560), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 548), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029A200(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029A200_ra10_0_18_0(ctx, ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000013 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029A200 func_8029A200 preserves=true fpr_mask=0x00000000
