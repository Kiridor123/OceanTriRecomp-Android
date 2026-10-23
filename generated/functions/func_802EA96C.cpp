#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F23C(CpuContext* ctx);
extern "C" uint32_t func_8012F23C_ra8_e_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_802E2770(CpuContext* ctx);
extern "C" uint64_t func_802E2770_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_802EA96C_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_802EA96C;

loc_802EA96C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r31 = r4;
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead8((r4 + 485));
}

loc_802EA998:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_802EA9A8;
    }
}

loc_802EA99C:
{
    r3 = 0x80810000u;
    r30 = (r3 + -32768);
    goto loc_802EAACC;
}

loc_802EA9A8:
{
    r0 = MemoryInline::FlatRead32((r4 + 456));
    r0 = (r0 & 1);
}

loc_802EA9B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802EAAC4;
    }
}

loc_802EA9B8:
{
    r0 = (r5 & 255);
}

loc_802EA9C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802EA9FC;
    }
}

loc_802EA9C4:
{
    r0 = MemoryInline::FlatRead8((r4 + 1085));
}

loc_802EA9CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802EA9DC;
    }
}

loc_802EA9D0:
{
    r4 = -317063168;
    r30 = (r4 + 16384);
    goto loc_802EAA04;
}

loc_802EA9DC:
{
}

loc_802EA9E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802EA9F0;
    }
}

loc_802EA9E4:
{
    r4 = -85721088;
    r30 = (r4 + 2048);
    goto loc_802EAA04;
}

loc_802EA9F0:
{
    r4 = 1290010624;
    r30 = (r4 + -7424);
    goto loc_802EAA04;
}

loc_802EA9FC:
{
    r4 = -278396928;
    r30 = (r4 + -26880);
}

loc_802EAA04:
{
    r4 = 190;
    ctx->lr = 0x802EAA0Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802EAA10:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802EAACC;
    }
}

loc_802EAA14:
{
    r3 = r31;
    ctx->lr = 0x802EAA1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F23Cu>(&func_8012F23C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F23C_D97 = func_8012F23C_ra8_e_8_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = regargs_result_8012F23C_D97;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F23Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_802EAA20:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802EAACC;
    }
}

loc_802EAA24:
{
    r4 = MemoryInline::FlatRead32((r29 + 400));
    r3 = -1431633920;
    r0 = (r3 + -21845);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_1 & 268435455);
    r0 = (r0 * 24);
    r3 = (r4 - r0);
}

loc_802EAA44:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(12))) {
        goto loc_802EAA84;
    }
}

loc_802EAA48:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12728));
    r0 = (r3 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12604));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = r30;
    r4 = -522125312;
    r4 = (r4 + -8192);
    if constexpr (KnownRegArgsCpuCall<0x802E2770u>(&func_802E2770)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_802E2770_173B = func_802E2770_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2770_173B);
        r4 = static_cast<uint32_t>(regargs_result_802E2770_173B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802E2770u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r30 = r3;
    goto loc_802EAACC;
}

loc_802EAA84:
{
    r0 = (r3 + -12);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12728));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12604));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = -522125312;
    r3 = (r3 + -8192);
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x802E2770u>(&func_802E2770)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_802E2770_1E19 = func_802E2770_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2770_1E19);
        r4 = static_cast<uint32_t>(regargs_result_802E2770_1E19 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802E2770u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r30 = r3;
    goto loc_802EAACC;
}

loc_802EAAC4:
{
    r3 = -457179136;
    r30 = (r3 + 23296);
}

loc_802EAACC:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_802EAAD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802EAAEC;
    }
}

loc_802EAAD8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 468));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12712));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802EAAE4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802EAAF4;
    }
}

loc_802EAAEC:
{
    r0 = 0;
    goto loc_802EAAF8;
}

loc_802EAAF4:
{
    r0 = 255;
}

loc_802EAAF8:
{
    r3 = (r30 | r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802EA96C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802EA96C_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802EA96C func_802EA96C preserves=true fpr_mask=0x00000000
