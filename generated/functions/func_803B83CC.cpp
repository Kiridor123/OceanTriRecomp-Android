#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A880C(CpuContext* ctx);
extern "C" uint32_t func_803A880C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80457948(CpuContext* ctx);
extern "C" uint64_t func_80457948_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803B83CC_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x803B83CCu);
    goto loc_803B83CC;

loc_803B83CC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    ctx->lr = 0x803B83E8u;
    if constexpr (KnownRegArgsCpuCall<0x803A880Cu>(&func_803A880C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803A880C_61A = func_803A880C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A880C_61A;
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
        InvokeDirectCpu<0x803A880Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r31 = r3;
}

loc_803B83F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B84E8;
    }
}

loc_803B83F4:
{
    f0.d = MemoryInline::FlatReadFloat64((r3 + 27208));
    MemoryInline::FlatWriteFloat64((r3 + 27216), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    if constexpr (KnownRegArgsCpuCall<0x80457948u>(&func_80457948)) {
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80457948_AB0 = func_80457948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457948_AB0);
        r4 = static_cast<uint32_t>(regargs_result_80457948_AB0 >> 32);
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457948u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat64((r31 + 27208), f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 27216));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5400));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803B8414:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_803B849C;
    }
}

loc_803B8418:
{
    f0.d = MemoryInline::FlatReadFloat64((r31 + 27208));
    f1.d = (f0.d - f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5392));
    f2.d = (f0.d * f1.d);
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead32((r3 + 248));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    r3 = 1125908480;
    r3 = (r3 + -8573);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_2 & 131071);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5424));
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = (f0.d - f1.d);
    f1.d = (f2.d / f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5384));
    f1.d = (f1.d / f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r31 + 27224));
    f1.d = (f1.d / f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5376));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803B8478:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803B8480;
    }
}

loc_803B847C:
{
    f1.d = f0.d;
}

loc_803B8480:
{
}

loc_803B8484:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_803B848C;
    }
}

loc_803B8488:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5400));
}

loc_803B848C:
{
    f0.d = MemoryInline::FlatReadFloat64((r31 + 27232));
    f0.d = (f0.d - f1.d);
    MemoryInline::FlatWriteFloat64((r31 + 27232), f0.d);
    goto loc_803B84B4;
}

loc_803B849C:
{
}

loc_803B84A0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(1))) {
        goto loc_803B84B4;
    }
}

loc_803B84A4:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 27232));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5376));
    f0.d = (f1.d - f0.d);
    MemoryInline::FlatWriteFloat64((r31 + 27232), f0.d);
}

loc_803B84B4:
{
    r0 = MemoryInline::FlatRead32((r31 + 36));
}

loc_803B84BC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803B84E8;
    }
}

loc_803B84C0:
{
    f0.d = MemoryInline::FlatReadFloat64((r31 + 27232));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r31 + 36));
}

loc_803B84DC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803B84E8;
    }
}

loc_803B84E0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 36), r0);
}

loc_803B84E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B83CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B83CC_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B83CC func_803B83CC preserves=true fpr_mask=0x00000000
