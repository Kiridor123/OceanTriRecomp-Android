#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801302D0(CpuContext* ctx);
extern "C" uint64_t func_801302D0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80131098(CpuContext* ctx);
extern "C" uint64_t func_80131098_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801359B4(CpuContext* ctx);
extern "C" uint64_t func_801359B4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8018297C(CpuContext* ctx);
extern "C" uint64_t func_8018297C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80182608_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_801827B0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80182608;

loc_80182608:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    r0 = (r4 & 255);
}

loc_8018262C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_801827A8;
    }
}

loc_80182630:
{
    r4 = 0x805B0000u;
    r4 = (r4 + -20324);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80182648u:
        goto loc_80182648;
        break;
    case 0x801826BCu:
        goto loc_801826BC;
        break;
    case 0x801826C4u:
        goto loc_801826C4;
        break;
    case 0x801826CCu:
        goto loc_801826CC;
        break;
    case 0x80182700u:
        goto loc_80182700;
        break;
    case 0x80182720u:
        goto loc_80182720;
        break;
    case 0x8018275Cu:
        goto loc_8018275C;
        break;
    case 0x80182770u:
        goto loc_80182770;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80182648:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 880));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 396));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24392));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8018265C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018266C;
    }
}

loc_80182664:
{
    r3 = 2;
    goto loc_801827AC;
}

loc_8018266C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24436));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80182674:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80182684;
    }
}

loc_8018267C:
{
    r3 = 1;
    goto loc_801827AC;
}

loc_80182684:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24388));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8018268C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018269C;
    }
}

loc_80182694:
{
    r3 = 4;
    goto loc_801827AC;
}

loc_8018269C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801826A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801826B4;
    }
}

loc_801826AC:
{
    r3 = 3;
    goto loc_801827AC;
}

loc_801826B4:
{
    r3 = 0;
    goto loc_801827AC;
}

loc_801826BC:
{
    ctx->lr = 0x801826C0u;
    if constexpr (KnownRegArgsCpuCall<0x8018297Cu>(&func_8018297C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8018297C_1731 = func_8018297C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8018297C_1731);
        r4 = static_cast<uint32_t>(regargs_result_8018297C_1731 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8018297Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_801827AC;
}

loc_801826C4:
{
    r3 = MemoryInline::FlatRead8((r3 + 815));
    goto loc_801827AC;
}

loc_801826CC:
{
    r4 = 23;
    r5 = 0;
    ctx->lr = 0x801826D8u;
    if constexpr (KnownRegArgsCpuCall<0x80131098u>(&func_80131098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80131098_1BBB = func_80131098_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80131098_1BBB);
        r4 = static_cast<uint32_t>(regargs_result_80131098_1BBB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80131098u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_801826DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801826F8;
    }
}

loc_801826E0:
{
    // inline leaf 0x8012E60C (11 guest instruction(s))
}

loc_inl0_0x8012E60C:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl0_0x8012E614:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_inl0_0x8012E630;
    }
}

loc_inl0_0x8012E618:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r3 + -16);
}

loc_inl0_0x8012E624:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_inl0_0x8012E630;
    }
}

loc_inl0_0x8012E628:
{
    r3 = 1;
    goto loc_inl0_cont_8012E60C;
}

loc_inl0_0x8012E630:
{
    r3 = 0;
}

loc_inl0_cont_8012E60C:
{
    // end of inlined leaf 0x8012E60C
    r4 = (1 - r3);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    goto loc_801827AC;
}

loc_801826F8:
{
    r3 = 0;
    goto loc_801827AC;
}

loc_80182700:
{
    r5 = MemoryInline::FlatRead16((r3 + 818));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = 900;
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3 = 0;
    r0_subfc_sub_1 = r0;
    r0 = (r5 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r4 + r3);
    r0 = (r0 + r0_ca_1);
    r3 = (r0 & 255);
    goto loc_801827AC;
}

loc_80182720:
{
    ctx->lr = 0x80182724u;
    if constexpr (KnownRegArgsCpuCall<0x801359B4u>(&func_801359B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_801359B4_2727 = func_801359B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359B4_2727);
        r4 = static_cast<uint32_t>(regargs_result_801359B4_2727 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x801359B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = r31;
    ctx->lr = 0x80182730u;
    if constexpr (KnownRegArgsCpuCall<0x801302D0u>(&func_801302D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_801302D0_2BE7 = func_801302D0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801302D0_2BE7);
        r4 = static_cast<uint32_t>(regargs_result_801302D0_2BE7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x801302D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24324));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 528));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 396));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8018274C:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
    r3 = (r0 & 255);
    goto loc_801827AC;
}

loc_8018275C:
{
    r3 = MemoryInline::FlatRead8((r3 + 816));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_801827AC;
}

loc_80182770:
{
    r4 = 3;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_80182780:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_8018278C;
    }
}

loc_80182784:
{
    r3 = 0;
    goto loc_801827AC;
}

loc_8018278C:
{
    r3 = r31;
    ctx->lr = 0x80182794u;
    if constexpr (KnownRegArgsCpuCall<0x8018297Cu>(&func_8018297C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8018297C_356F = func_8018297C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8018297C_356F);
        r4 = static_cast<uint32_t>(regargs_result_8018297C_356F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8018297Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    goto loc_801827AC;
}

loc_801827A8:
{
    r3 = 0;
}

loc_801827AC:
{
    r0 = 24;
    addr_psqx_801827B0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801827B0_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80182608(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80182608_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80182608 func_80182608 preserves=true fpr_mask=0x00000000
