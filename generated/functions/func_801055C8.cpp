#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D9F0C(CpuContext* ctx);
extern "C" uint64_t func_800D9F0C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800DB9C8(CpuContext* ctx);
extern "C" uint64_t func_800DB9C8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DC670(CpuContext* ctx);
extern "C" uint64_t func_800DC670_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_801055C8_ra68_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801055C8;

loc_801055C8:
{
    r6 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_801055D4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(26))) {
        goto loc_80105618;
    }
}

loc_801055D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(21));
}

loc_801055DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105654;
    }
}

loc_801055E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010560C;
    }
}

loc_801055E4:
{
}

loc_801055E8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_80105600;
    }
}

loc_801055EC:
{
}

loc_801055F0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_return;
    }
}

loc_801055F4:
{
}

loc_801055F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_80105648;
    }
}

loc_801055FC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_80105600:
{
}

loc_80105604:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(19))) {
        goto loc_80105648;
    }
}

loc_80105608:
{
    goto loc_80105654;
}

loc_8010560C:
{
}

loc_80105610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_return;
    }
}

loc_80105614:
{
    goto loc_80105660;
}

loc_80105618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(53));
}

loc_8010561C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105660;
    }
}

loc_80105620:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010563C;
    }
}

loc_80105624:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(45));
}

loc_80105628:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105654;
    }
}

loc_8010562C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80105630:
{
}

loc_80105634:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(44))) {
        goto loc_8010566C;
    }
}

loc_80105638:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_8010563C:
{
}

loc_80105640:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(76))) {
        goto loc_80105674;
    }
}

loc_80105644:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_80105648:
{
    r3 = (r3 + 24);
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800DC670u>(&func_800DC670)) {
        ctx->gpr[0] = r0;
        ctx->cr = cr;
        const auto regargs_result_800DC670_F32 = func_800DC670_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DC670_F32);
        r4 = static_cast<uint32_t>(regargs_result_800DC670_F32 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC670u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_80105654:
{
    r3 = (r3 + 24);
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x800DC670u>(&func_800DC670)) {
        ctx->gpr[0] = r0;
        ctx->cr = cr;
        const auto regargs_result_800DC670_12F6 = func_800DC670_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DC670_12F6);
        r4 = static_cast<uint32_t>(regargs_result_800DC670_12F6 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC670u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_80105660:
{
    r3 = (r3 + 24);
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800DC670u>(&func_800DC670)) {
        ctx->gpr[0] = r0;
        ctx->cr = cr;
        const auto regargs_result_800DC670_16BD = func_800DC670_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DC670_16BD);
        r4 = static_cast<uint32_t>(regargs_result_800DC670_16BD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DC670u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_8010566C:
{
    r3 = (r3 + 24);
    if constexpr (KnownRegArgsCpuCall<0x800DB9C8u>(&func_800DB9C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800DB9C8_1A92 = func_800DB9C8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DB9C8_1A92);
        r4 = static_cast<uint32_t>(regargs_result_800DB9C8_1A92 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800DB9C8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_80105674:
{
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 2836));
    r4 = 157;
    r5 = 2;
    r6 = (r6 + 24);
    if constexpr (KnownRegArgsCpuCall<0x800D9F0Cu>(&func_800D9F0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800D9F0C_1EDA = func_800D9F0C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D9F0C_1EDA);
        r4 = static_cast<uint32_t>(regargs_result_800D9F0C_1EDA >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800D9F0Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_801055C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801055C8_ra68_2_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000206F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801055C8 func_801055C8 preserves=true fpr_mask=0x00000000
