#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801235A4(CpuContext* ctx);
extern "C" uint64_t func_801235A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012F568(CpuContext* ctx);
extern "C" uint64_t func_8012F568_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012F92C(CpuContext* ctx);
extern "C" uint64_t func_8012F92C_ra68_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_8012F980(CpuContext* ctx);
extern "C" uint64_t func_8012F980_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8012F9A0(CpuContext* ctx);
extern "C" uint64_t func_8012F9A0_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013006C(CpuContext* ctx);
extern "C" uint32_t func_8013006C_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_801304DC(CpuContext* ctx);
extern "C" uint64_t func_801304DC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80124604_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_80124604;

loc_80124604:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r28 = r4;
    r30 = r5;
    r31 = r6;
    r0 = (r6 & 65535);
    r0 = (r0 & 1);
}

loc_8012463C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80124654;
    }
}

loc_80124640:
{
    ctx->lr = 0x80124644u;
    if constexpr (KnownRegArgsCpuCall<0x8012F9A0u>(&func_8012F9A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F9A0_C31 = func_8012F9A0_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F9A0_C31);
        r4 = static_cast<uint32_t>(regargs_result_8012F9A0_C31 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F9A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_80124648:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80124654;
    }
}

loc_8012464C:
{
    r3 = 1;
    goto loc_80124928;
}

loc_80124654:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 8);
}

loc_80124660:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801246D0;
    }
}

loc_80124664:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 2280));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    ctx->lr = 0x80124678u;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F980_15B1 = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_15B1);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_15B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_8012467C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801246D0;
    }
}

loc_80124680:
{
    r0 = MemoryInline::FlatRead8((r29 + 2257));
    r0 = (r0 & 1);
}

loc_8012468C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801246C8;
    }
}

loc_80124690:
{
    r7 = MemoryInline::FlatRead32((r29 + 2272));
    r3 = r29;
    r4 = MemoryInline::FlatRead16(r7);
    r5 = MemoryInline::FlatRead32((r7 + 4));
    r6 = MemoryInline::FlatRead32((r7 + 8));
    r7 = MemoryInline::FlatRead32((r7 + 12));
    ctx->lr = 0x801246ACu;
    if constexpr (KnownRegArgsCpuCall<0x8012F568u>(&func_8012F568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F568_1D8A = func_8012F568_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F568_1D8A);
        r4 = static_cast<uint32_t>(regargs_result_8012F568_1D8A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r29 + 2304));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28256));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801246B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801246D0;
    }
}

loc_801246BC:
{
    r3 = r29;
    ctx->lr = 0x801246C4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F92Cu>(&func_8012F92C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_8012F92C_262D = func_8012F92C_ra68_1fa_18_0(ctx, r3, r5, r6, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F92C_262D);
        r4 = static_cast<uint32_t>(regargs_result_8012F92C_262D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F92Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    goto loc_801246D0;
}

loc_801246C8:
{
    r3 = 1;
    goto loc_80124928;
}

loc_801246D0:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 16);
}

loc_801246DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012471C;
    }
}

loc_801246E0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 396));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 528));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801246EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012471C;
    }
}

loc_801246F4:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r29 + 2256));
    r5 = 255;
    if constexpr (KnownRegArgsCpuCall<0x801235A4u>(&func_801235A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_801235A4_306D = func_801235A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801235A4_306D);
        r4 = static_cast<uint32_t>(regargs_result_801235A4_306D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x801235A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r29 + 2256), static_cast<uint8_t>(r3));
    r3 = r29;
    r4 = 2;
    ctx->lr = 0x80124714u;
    if constexpr (KnownRegArgsCpuCall<0x801304DCu>(&func_801304DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_801304DC_34F2 = func_801304DC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801304DC_34F2);
        r4 = static_cast<uint32_t>(regargs_result_801304DC_34F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x801304DCu>(ctx);
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
    r3 = 1;
    goto loc_80124928;
}

loc_8012471C:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 32);
}

loc_80124728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80124748;
    }
}

loc_8012472C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 396));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 528));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80124738:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124748;
    }
}

loc_80124740:
{
    r3 = 1;
    goto loc_80124928;
}

loc_80124748:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 64);
}

loc_80124754:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80124774;
    }
}

loc_80124758:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 396));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 528));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80124764:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124774;
    }
}

loc_8012476C:
{
    r3 = 1;
    goto loc_80124928;
}

loc_80124774:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 2);
}

loc_80124780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801247A8;
    }
}

loc_80124784:
{
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 2300));
    ctx->lr = 0x80124790u;
    if constexpr (KnownRegArgsCpuCall<0x8013006Cu>(&func_8013006C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013006C_4049 = func_8013006C_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8013006C_4049;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013006Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_80124794:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801247A8;
    }
}

loc_80124798:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 524));
    MemoryInline::FlatWriteFloat32((r29 + 396), f0.d);
    r3 = 1;
    goto loc_80124928;
}

loc_801247A8:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 4);
}

loc_801247B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801247D4;
    }
}

loc_801247B8:
{
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 32), r0);
}

loc_801247C8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801247D4;
    }
}

loc_801247CC:
{
    r3 = 1;
    goto loc_80124928;
}

loc_801247D4:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 256);
}

loc_801247E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012481C;
    }
}

loc_801247E4:
{
    r0 = MemoryInline::FlatRead16((r29 + 2384));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28304));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2308));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012480C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012481C;
    }
}

loc_80124814:
{
    r3 = 1;
    goto loc_80124928;
}

loc_8012481C:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 512);
}

loc_80124828:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80124864;
    }
}

loc_8012482C:
{
    r0 = MemoryInline::FlatRead16((r29 + 2386));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28304));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2308));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80124854:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124864;
    }
}

loc_8012485C:
{
    r3 = 1;
    goto loc_80124928;
}

loc_80124864:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 128);
}

loc_80124870:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012488C;
    }
}

loc_80124874:
{
    r0 = (r30 & 255);
    r0 = (r0 & 2);
}

loc_80124880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012488C;
    }
}

loc_80124884:
{
    r3 = 1;
    goto loc_80124928;
}

loc_8012488C:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 1024);
}

loc_80124898:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801248D4;
    }
}

loc_8012489C:
{
    r0 = MemoryInline::FlatRead16((r29 + 2326));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28304));
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword10));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2308));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801248C4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801248D4;
    }
}

loc_801248CC:
{
    r3 = 1;
    goto loc_80124928;
}

loc_801248D4:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 2048);
}

loc_801248E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801248FC;
    }
}

loc_801248E4:
{
    r0 = (r30 & 255);
    r0 = (r0 & 8);
}

loc_801248F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801248FC;
    }
}

loc_801248F4:
{
    r3 = 1;
    goto loc_80124928;
}

loc_801248FC:
{
    r0 = (r31 & 65535);
    r0 = (r0 & 4096);
}

loc_80124908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80124924;
    }
}

loc_8012490C:
{
    r0 = (r30 & 255);
    r0 = (r0 & 16);
}

loc_80124918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80124924;
    }
}

loc_8012491C:
{
    r3 = 1;
    goto loc_80124928;
}

loc_80124924:
{
    r3 = 0;
}

loc_80124928:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80124604(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80124604_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80124604 func_80124604 preserves=true fpr_mask=0x00000000
