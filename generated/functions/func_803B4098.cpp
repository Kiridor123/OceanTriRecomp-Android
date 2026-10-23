#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B5F8C(CpuContext* ctx);
extern "C" uint32_t func_803B5F8C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" double func_803B4098_ra20_6_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    goto loc_803B4098;

loc_803B4098:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 4;
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x803B5F8Cu>(&func_803B5F8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803B5F8C_4C1 = func_803B5F8C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803B5F8C_4C1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803B5F8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_803B40B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B40C0;
    }
}

loc_803B40B8:
{
    r3 = 0;
    goto loc_803B4158;
}

loc_803B40C0:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 31960);
    r0 = MemoryInline::FlatRead16((r3 + 1496));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5456));
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 1127219200;
    stackword3 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword2));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5496));
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    stackword5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5448));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5472));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803B4114:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803B4124;
    }
}

loc_803B411C:
{
    r3 = 4;
    goto loc_803B4158;
}

loc_803B4124:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5444));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803B412C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803B413C;
    }
}

loc_803B4134:
{
    r3 = 3;
    goto loc_803B4158;
}

loc_803B413C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5504));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803B4144:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803B4154;
    }
}

loc_803B414C:
{
    r3 = 2;
    goto loc_803B4158;
}

loc_803B4154:
{
    r3 = 1;
}

loc_803B4158:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_803B4098(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_803B4098_ra20_6_0_2(ctx, ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000027 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B4098 func_803B4098 preserves=true fpr_mask=0x00000000
