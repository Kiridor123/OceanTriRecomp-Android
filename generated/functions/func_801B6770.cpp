#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80104918(CpuContext* ctx);
extern "C" uint64_t func_80104918_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80104A34(CpuContext* ctx);
extern "C" uint64_t func_80104A34_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8012F990(CpuContext* ctx);
extern "C" uint64_t func_8012F990_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_801B661C(CpuContext* ctx);
extern "C" uint64_t func_801B661C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_801B6770_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B6770;

loc_801B6770:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(15));
}

loc_801B679C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B69EC;
    }
}

loc_801B67A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B67D0;
    }
}

loc_801B67A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_801B67A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B68FC;
    }
}

loc_801B67AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B67C0;
    }
}

loc_801B67B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_801B67B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B67F4;
    }
}

loc_801B67B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B6878;
    }
}

loc_801B67BC:
{
    goto loc_801B6BE4;
}

loc_801B67C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_801B67C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B6974;
    }
}

loc_801B67C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B69B0;
    }
}

loc_801B67CC:
{
    goto loc_801B6938;
}

loc_801B67D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(18));
}

loc_801B67D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B6AA4;
    }
}

loc_801B67D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B67E8;
    }
}

loc_801B67DC:
{
}

loc_801B67E0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(17))) {
        goto loc_801B6BE4;
    }
}

loc_801B67E4:
{
    goto loc_801B6A28;
}

loc_801B67E8:
{
}

loc_801B67EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(103))) {
        goto loc_801B6B54;
    }
}

loc_801B67F0:
{
    goto loc_801B6BE4;
}

loc_801B67F4:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801B6800:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B683C;
    }
}

loc_801B6804:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19968));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B6818u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_113A = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_113A);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_113A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B681C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B683C;
    }
}

loc_801B6820:
{
    r3 = r31;
    r4 = 0;
    r5 = 23;
    r6 = 26;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19964));
    ctx->lr = 0x801B683Cu;
    if constexpr (KnownRegArgsCpuCall<0x801B661Cu>(&func_801B661C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_801B661C_175A = func_801B661C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B661C_175A);
        r4 = static_cast<uint32_t>(regargs_result_801B661C_175A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B661Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_801B683C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -20020));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B6850u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_1C95 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1C95);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1C95 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B6854:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B6BE4;
    }
}

loc_801B6858:
{
    r3 = r31;
    r4 = 0;
    r5 = 39;
    r6 = 26;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19960));
    ctx->lr = 0x801B6874u;
    if constexpr (KnownRegArgsCpuCall<0x801B661Cu>(&func_801B661C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_801B661C_22B5 = func_801B661C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B661C_22B5);
        r4 = static_cast<uint32_t>(regargs_result_801B661C_22B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B661Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B6878:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801B6884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B68C0;
    }
}

loc_801B6888:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19956));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B689Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_28E0 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_28E0);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_28E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B68A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B68C0;
    }
}

loc_801B68A4:
{
    r3 = r31;
    r4 = 0;
    r5 = 23;
    r6 = 26;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19964));
    ctx->lr = 0x801B68C0u;
    if constexpr (KnownRegArgsCpuCall<0x801B661Cu>(&func_801B661C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_801B661C_2F00 = func_801B661C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B661C_2F00);
        r4 = static_cast<uint32_t>(regargs_result_801B661C_2F00 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B661Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_801B68C0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19952));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B68D4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_343B = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_343B);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_343B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B68D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B6BE4;
    }
}

loc_801B68DC:
{
    r3 = r31;
    r4 = 0;
    r5 = 39;
    r6 = 26;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19960));
    ctx->lr = 0x801B68F8u;
    if constexpr (KnownRegArgsCpuCall<0x801B661Cu>(&func_801B661C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_801B661C_3A5B = func_801B661C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B661C_3A5B);
        r4 = static_cast<uint32_t>(regargs_result_801B661C_3A5B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B661Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B68FC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19948));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B6910u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_3FAE = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3FAE);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3FAE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B6914:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B6BE4;
    }
}

loc_801B6918:
{
    r3 = r31;
    r4 = 0;
    r5 = 9;
    r6 = 25;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19944));
    ctx->lr = 0x801B6934u;
    if constexpr (KnownRegArgsCpuCall<0x801B661Cu>(&func_801B661C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_801B661C_45CD = func_801B661C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B661C_45CD);
        r4 = static_cast<uint32_t>(regargs_result_801B661C_45CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B661Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B6938:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19948));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B694Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_4B20 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4B20);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4B20 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B6950:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B6BE4;
    }
}

loc_801B6954:
{
    r3 = r31;
    r4 = 0;
    r5 = 9;
    r6 = 21;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19944));
    ctx->lr = 0x801B6970u;
    if constexpr (KnownRegArgsCpuCall<0x801B661Cu>(&func_801B661C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_801B661C_513F = func_801B661C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B661C_513F);
        r4 = static_cast<uint32_t>(regargs_result_801B661C_513F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B661Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B6974:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19956));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B6988u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_5692 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_5692);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_5692 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B698C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B6BE4;
    }
}

loc_801B6990:
{
    r3 = r31;
    r4 = 0;
    r5 = 37;
    r6 = 11;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -20016));
    ctx->lr = 0x801B69ACu;
    if constexpr (KnownRegArgsCpuCall<0x801B661Cu>(&func_801B661C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_801B661C_5CB2 = func_801B661C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B661C_5CB2);
        r4 = static_cast<uint32_t>(regargs_result_801B661C_5CB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B661Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B69B0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19940));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B69C4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_6205 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6205);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6205 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B69C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B6BE4;
    }
}

loc_801B69CC:
{
    r3 = r31;
    r4 = 0;
    r5 = 9;
    r6 = 25;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19944));
    ctx->lr = 0x801B69E8u;
    if constexpr (KnownRegArgsCpuCall<0x801B661Cu>(&func_801B661C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_801B661C_6824 = func_801B661C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B661C_6824);
        r4 = static_cast<uint32_t>(regargs_result_801B661C_6824 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B661Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B69EC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19940));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B6A00u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_6D77 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_6D77);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_6D77 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B6A04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B6BE4;
    }
}

loc_801B6A08:
{
    r3 = r31;
    r4 = 0;
    r5 = 9;
    r6 = 21;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19944));
    ctx->lr = 0x801B6A24u;
    if constexpr (KnownRegArgsCpuCall<0x801B661Cu>(&func_801B661C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_801B661C_7396 = func_801B661C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801B661C_7396);
        r4 = static_cast<uint32_t>(regargs_result_801B661C_7396 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B661Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B6A28:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19968));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B6A3Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_78E9 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_78E9);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_78E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B6A40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B6BE4;
    }
}

loc_801B6A44:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801B6A50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B6A70;
    }
}

loc_801B6A54:
{
    r3 = r31;
    r4 = 26;
    r5 = 51;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19964));
    ctx->lr = 0x801B6A6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80104918u>(&func_80104918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80104918_7FD4 = func_80104918_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104918_7FD4);
        r4 = static_cast<uint32_t>(regargs_result_80104918_7FD4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80104918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B6A70:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19936));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 26;
    r5 = 9;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19944));
    r7 = (r1 + 8);
    ctx->lr = 0x801B6AA0u;
    if constexpr (KnownRegArgsCpuCall<0x80104A34u>(&func_80104A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80104A34_86D2 = func_80104A34_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104A34_86D2);
        r4 = static_cast<uint32_t>(regargs_result_80104A34_86D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80104A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B6AA4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19968));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B6AB8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_8C25 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_8C25);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_8C25 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B6ABC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B6BE4;
    }
}

loc_801B6AC0:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801B6ACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B6B04;
    }
}

loc_801B6AD0:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19932));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 26;
    r5 = 51;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19964));
    r7 = (r1 + 8);
    ctx->lr = 0x801B6B00u;
    if constexpr (KnownRegArgsCpuCall<0x80104A34u>(&func_80104A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80104A34_94BF = func_80104A34_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104A34_94BF);
        r4 = static_cast<uint32_t>(regargs_result_80104A34_94BF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80104A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B6B04:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19968));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B6B18u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_9A12 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_9A12);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_9A12 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B6B1C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B6BE4;
    }
}

loc_801B6B20:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -19932));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 26;
    r5 = 9;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19944));
    r7 = (r1 + 8);
    ctx->lr = 0x801B6B50u;
    if constexpr (KnownRegArgsCpuCall<0x80104A34u>(&func_80104A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80104A34_A1D3 = func_80104A34_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104A34_A1D3);
        r4 = static_cast<uint32_t>(regargs_result_80104A34_A1D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80104A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B6B54:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19928));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    ctx->lr = 0x801B6B68u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8012F990_A726 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_A726);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_A726 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801B6B6C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B6BE4;
    }
}

loc_801B6B70:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801B6B7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B6BB4;
    }
}

loc_801B6B80:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19956));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    f3.d = f2.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 3;
    r5 = 53;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19924));
    r7 = (r1 + 8);
    ctx->lr = 0x801B6BB0u;
    if constexpr (KnownRegArgsCpuCall<0x80104A34u>(&func_80104A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80104A34_AFBF = func_80104A34_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104A34_AFBF);
        r4 = static_cast<uint32_t>(regargs_result_80104A34_AFBF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80104A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_801B6BE4;
}

loc_801B6BB4:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19956));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -20012));
    f3.d = f2.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 3;
    r5 = 36;
    r6 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19944));
    r7 = (r1 + 8);
    ctx->lr = 0x801B6BE4u;
    if constexpr (KnownRegArgsCpuCall<0x80104A34u>(&func_80104A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80104A34_B6BD = func_80104A34_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104A34_B6BD);
        r4 = static_cast<uint32_t>(regargs_result_80104A34_B6BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80104A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_801B6BE4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801B6770(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801B6770_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B6770 func_801B6770 preserves=true fpr_mask=0x00000000
