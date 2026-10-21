#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DD844(CpuContext* ctx);
extern "C" uint64_t func_800DD844_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_80103724_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80103724u);
    goto loc_80103724;

loc_80103724:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_80103748:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80103860;
    }
}

loc_8010374C:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
}

loc_80103754:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(53))) {
        goto loc_80103788;
    }
}

loc_80103758:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(22));
}

loc_8010375C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801037C0;
    }
}

loc_80103760:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010377C;
    }
}

loc_80103764:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_80103768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80103810;
    }
}

loc_8010376C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80103860;
    }
}

loc_80103770:
{
}

loc_80103774:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9))) {
        goto loc_801037C0;
    }
}

loc_80103778:
{
    goto loc_80103860;
}

loc_8010377C:
{
}

loc_80103780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24))) {
        goto loc_801037E4;
    }
}

loc_80103784:
{
    goto loc_80103860;
}

loc_80103788:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(72));
}

loc_8010378C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801037C0;
    }
}

loc_80103790:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801037AC;
    }
}

loc_80103794:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(56));
}

loc_80103798:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80103810;
    }
}

loc_8010379C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80103860;
    }
}

loc_801037A0:
{
}

loc_801037A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(55))) {
        goto loc_801037E4;
    }
}

loc_801037A8:
{
    goto loc_801037C0;
}

loc_801037AC:
{
}

loc_801037B0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(89))) {
        goto loc_80103860;
    }
}

loc_801037B4:
{
}

loc_801037B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(86))) {
        goto loc_801037C0;
    }
}

loc_801037BC:
{
    goto loc_80103860;
}

loc_801037C0:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29528));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29536));
    ctx->lr = 0x801037D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    goto loc_80103888;
}

loc_801037E4:
{
    r4 = MemoryInline::FlatRead8((r3 + 6));
}

loc_801037EC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80103808;
    }
}

loc_801037F0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r30 + 24);
    r5 = 1;
    ctx->lr = 0x80103808u;
    if constexpr (KnownRegArgsCpuCall<0x800DD844u>(&func_800DD844)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800DD844_12CA = func_800DD844_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DD844_12CA);
        r4 = static_cast<uint32_t>(regargs_result_800DD844_12CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DD844u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_80103808:
{
    r3 = 1;
    goto loc_80103888;
}

loc_80103810:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29536));
    ctx->lr = 0x80103824u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80103828:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80103834;
    }
}

loc_8010382C:
{
    r3 = 1;
    goto loc_80103888;
}

loc_80103834:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_8010383C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80103858;
    }
}

loc_80103840:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r30 + 24);
    r5 = -1;
    ctx->lr = 0x80103858u;
    if constexpr (KnownRegArgsCpuCall<0x800DD844u>(&func_800DD844)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800DD844_1AE6 = func_800DD844_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DD844_1AE6);
        r4 = static_cast<uint32_t>(regargs_result_800DD844_1AE6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DD844u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_80103858:
{
    r3 = 0;
    goto loc_80103888;
}

loc_80103860:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_80103868:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80103884;
    }
}

loc_8010386C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r30 + 24);
    r5 = -1;
    ctx->lr = 0x80103884u;
    if constexpr (KnownRegArgsCpuCall<0x800DD844u>(&func_800DD844)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800DD844_201C = func_800DD844_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DD844_201C);
        r4 = static_cast<uint32_t>(regargs_result_800DD844_201C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DD844u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_80103884:
{
    r3 = 0;
}

loc_80103888:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80103724(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80103724_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80103724 func_80103724 preserves=true fpr_mask=0x00000000
