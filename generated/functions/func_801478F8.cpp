#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AFF64(CpuContext* ctx);
extern "C" uint32_t func_802AFF64_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801478F8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801478F8;

loc_801478F8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r29 = r4;
    r31 = r5;
    r3 = 0;
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
}

loc_80147928:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80147934;
    }
}

loc_8014792C:
{
    r3 = 0;
    goto loc_80147B04;
}

loc_80147934:
{
}

loc_80147938:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80147944;
    }
}

loc_8014793C:
{
    r3 = 0;
    goto loc_80147B04;
}

loc_80147944:
{
    r0 = (r29 & 255);
}

loc_8014794C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80147958;
    }
}

loc_80147950:
{
    r3 = 0;
    goto loc_80147B04;
}

loc_80147958:
{
    r3 = MemoryInline::FlatRead8((r3 + 237));
    ctx->lr = 0x80147960u;
    if constexpr (KnownRegArgsCpuCall<0x802AFF64u>(&func_802AFF64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_802AFF64_D65 = func_802AFF64_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802AFF64_D65;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AFF64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r3 & 255);
    r0 = (r31 & 255);
}

loc_8014796C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80147978;
    }
}

loc_80147970:
{
    r3 = 0;
    goto loc_80147B04;
}

loc_80147978:
{
    r5 = r30;
    r6 = 0;
    r3 = (r29 & 255);
}

loc_80147988:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801479D4;
    }
}

loc_8014798C:
{
    r4 = (r3 + -8);
}

loc_80147994:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_801479B8;
    }
}

loc_80147998:
{
    r0 = (r4 + 7);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    ctr = r0;
}

loc_801479A8:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(0))) {
        goto loc_801479B8;
    }
}

loc_801479AC:
{
    r5 = (r5 + 32);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801479AC;
    }
}

loc_801479B8:
{
    r3 = (r29 & 255);
    r0 = (r3 - r6);
    ctr = r0;
}

loc_801479C8:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r3))) {
        goto loc_801479D4;
    }
}

loc_801479CC:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801479CC;
    }
}

loc_801479D4:
{
    r6 = MemoryInline::FlatRead32(r5);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801479E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801479EC;
    }
}

loc_801479E4:
{
    r3 = 0;
    goto loc_80147B04;
}

loc_801479EC:
{
    r5 = r30;
    r4 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147A3C;
    }
}

loc_801479F8:
{
    r3 = (r6 + -8);
}

loc_80147A00:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(8))) {
        goto loc_80147A24;
    }
}

loc_80147A04:
{
    r0 = (r3 + 7);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_6 & 536870911);
    ctr = r0;
}

loc_80147A14:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80147A24;
    }
}

loc_80147A18:
{
    r5 = (r5 + 32);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80147A18;
    }
}

loc_80147A24:
{
    r0 = (r6 - r4);
    ctr = r0;
}

loc_80147A30:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r6))) {
        goto loc_80147A3C;
    }
}

loc_80147A34:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80147A34;
    }
}

loc_80147A3C:
{
    r6 = 0;
    r3 = (r31 & 255);
}

loc_80147A48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80147A94;
    }
}

loc_80147A4C:
{
    r4 = (r3 + -8);
}

loc_80147A54:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_80147A78;
    }
}

loc_80147A58:
{
    r0 = (r4 + 7);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_9 & 536870911);
    ctr = r0;
}

loc_80147A68:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(0))) {
        goto loc_80147A78;
    }
}

loc_80147A6C:
{
    r5 = (r5 + 64);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80147A6C;
    }
}

loc_80147A78:
{
    r3 = (r31 & 255);
    r0 = (r3 - r6);
    ctr = r0;
}

loc_80147A88:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r3))) {
        goto loc_80147A94;
    }
}

loc_80147A8C:
{
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80147A8C;
    }
}

loc_80147A94:
{
    r6 = MemoryInline::FlatRead32(r5);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r6 = (r6_rot_2 & 1073741823);
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80147AA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80147AB0;
    }
}

loc_80147AA8:
{
    r3 = 0;
    goto loc_80147B04;
}

loc_80147AB0:
{
    r4 = 0;
}

loc_80147AB8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80147B00;
    }
}

loc_80147ABC:
{
    r3 = (r6 + -8);
}

loc_80147AC4:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(8))) {
        goto loc_80147AE8;
    }
}

loc_80147AC8:
{
    r0 = (r3 + 7);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_12 & 536870911);
    ctr = r0;
}

loc_80147AD8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80147AE8;
    }
}

loc_80147ADC:
{
    r30 = (r30 + 32);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80147ADC;
    }
}

loc_80147AE8:
{
    r0 = (r6 - r4);
    ctr = r0;
}

loc_80147AF4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r6))) {
        goto loc_80147B00;
    }
}

loc_80147AF8:
{
    r30 = (r30 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80147AF8;
    }
}

loc_80147B00:
{
    r3 = r30;
}

loc_80147B04:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801478F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801478F8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801478F8 func_801478F8 preserves=true fpr_mask=0x00000000
