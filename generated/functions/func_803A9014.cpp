#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A880C(CpuContext* ctx);
extern "C" uint32_t func_803A880C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80457948(CpuContext* ctx);
extern "C" uint64_t func_80457948_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_803A9014(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_803A9014;

loc_803A9014:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    ctx->lr = 0x803A9034u;
    if constexpr (KnownRegArgsCpuCall<0x803A880Cu>(&func_803A880C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803A880C_635 = func_803A880C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A880C_635;
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
    r30 = r3;
}

loc_803A903C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A9178;
    }
}

loc_803A9040:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5664));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r31 = 1127219200;
    stackword6 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5672));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5656));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803A9080:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803A9178;
    }
}

loc_803A9088:
{
    f0.d = MemoryInline::FlatReadFloat64((r3 + 27208));
    MemoryInline::FlatWriteFloat64((r3 + 27216), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
        const auto regargs_result_80457948_F1D = func_80457948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457948_F1D);
        r4 = static_cast<uint32_t>(regargs_result_80457948_F1D >> 32);
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
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
    MemoryInline::FlatWriteFloat64((r30 + 27208), f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r30 + 27216));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5648));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803A90A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_803A912C;
    }
}

loc_803A90AC:
{
    f0.d = MemoryInline::FlatReadFloat64((r30 + 27208));
    f1.d = (f0.d - f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5640));
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
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5616));
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    stackword8 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f0.d = (f0.d - f1.d);
    f1.d = (f2.d / f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5632));
    f1.d = (f1.d / f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r30 + 27224));
    f1.d = (f1.d / f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5624));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803A9108:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803A9110;
    }
}

loc_803A910C:
{
    f1.d = f0.d;
}

loc_803A9110:
{
}

loc_803A9114:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_803A911C;
    }
}

loc_803A9118:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5648));
}

loc_803A911C:
{
    f0.d = MemoryInline::FlatReadFloat64((r30 + 27232));
    f0.d = (f0.d - f1.d);
    MemoryInline::FlatWriteFloat64((r30 + 27232), f0.d);
    goto loc_803A9144;
}

loc_803A912C:
{
}

loc_803A9130:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(1))) {
        goto loc_803A9144;
    }
}

loc_803A9134:
{
    f1.d = MemoryInline::FlatReadFloat64((r30 + 27232));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -5624));
    f0.d = (f1.d - f0.d);
    MemoryInline::FlatWriteFloat64((r30 + 27232), f0.d);
}

loc_803A9144:
{
    r0 = MemoryInline::FlatRead32((r30 + 36));
}

loc_803A914C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803A9178;
    }
}

loc_803A9150:
{
    f0.d = MemoryInline::FlatReadFloat64((r30 + 27232));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r30 + 36), r0);
    r0 = MemoryInline::FlatRead32((r30 + 36));
}

loc_803A916C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803A9178;
    }
}

loc_803A9170:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 36), r0);
}

loc_803A9178:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A9014 func_803A9014 preserves=true fpr_mask=0x00000000
