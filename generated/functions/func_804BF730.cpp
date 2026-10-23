#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_804BEA00(CpuContext* ctx);
extern "C" uint64_t func_804BEA00_ra38_7e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_804BEBF0(CpuContext* ctx);
extern "C" uint64_t func_804BEBF0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804BEE20(CpuContext* ctx);
extern "C" uint64_t func_804BEE20_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804BEFE0(CpuContext* ctx);
extern "C" uint64_t func_804BEFE0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804BF160(CpuContext* ctx);
extern "C" uint64_t func_804BF160_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804BF730_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804BF730;

loc_804BF730:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r4 + 54));
}

loc_804BF760:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_804BF788;
    }
}

loc_804BF764:
{
}

loc_804BF768:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_804BF788;
    }
}

loc_804BF76C:
{
}

loc_804BF770:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_804BF788;
    }
}

loc_804BF774:
{
}

loc_804BF778:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_804BF828;
    }
}

loc_804BF77C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1367));
}

loc_804BF784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BF828;
    }
}

loc_804BF788:
{
    f4.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r8 = (r4 + 32);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2168));
    r9 = (r3 + 276);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2164));
    r0 = (r3 + 240);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2160));
    r4 = -1;
    r7 = 1127219200;
    r5 = 0;
}

loc_804BF7B0:
{
    r6 = MemoryInline::FlatRead16((r8 + 4));
}

loc_804BF7B8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804BF810;
    }
}

loc_804BF7BC:
{
    r6 = MemoryInline::FlatRead16(r8);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    stackword4 = r7;
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    r6 = (r6 ^ -2147483648);
    stackword5 = r6;
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword5));
    stackword6 = r7;
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32(r9, f0.d);
    r6 = MemoryInline::FlatRead16((r8 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6 = (r6 ^ -2147483648);
    stackword7 = r6;
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r9 + 4), f0.d);
    MemoryInline::FlatWrite8((r9 + 8), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r9 + 9), static_cast<uint8_t>(r5));
    goto loc_804BF814;
}

loc_804BF810:
{
    MemoryInline::FlatWrite8((r9 + 8), static_cast<uint8_t>(r4));
}

loc_804BF814:
{
    r9 = (r9 + -12);
    r8 = (r8 + -8);
}

loc_804BF820:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r0))) {
        goto loc_804BF7B0;
    }
}

loc_804BF824:
{
    goto loc_804BF848;
}

loc_804BF828:
{
    r5 = (r3 + 276);
    r0 = (r3 + 240);
    r4 = -1;
    // nop
}

loc_804BF838:
{
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r4));
    r5 = (r5 + -12);
}

loc_804BF844:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_804BF838;
    }
}

loc_804BF848:
{
    r7 = (r3 + 276);
    r6 = (r3 + 240);
    r4 = r7;
    // nop
}

loc_804BF858:
{
    r0 = MemoryInline::FlatRead8((r4 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_804BF8B8;
    }
}

loc_804BF864:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1320));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BF870:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BF8AC;
    }
}

loc_804BF878:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1328));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BF880:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BF8AC;
    }
}

loc_804BF888:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1324));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BF894:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BF8AC;
    }
}

loc_804BF89C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1332));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BF8A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BF8B8;
    }
}

loc_804BF8AC:
{
    r0 = MemoryInline::FlatRead8((r4 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
}

loc_804BF8B8:
{
    r4 = (r4 + -12);
}

loc_804BF8C0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r6))) {
        goto loc_804BF858;
    }
}

loc_804BF8C4:
{
    // nop
}

loc_804BF8C8:
{
    r0 = MemoryInline::FlatRead8((r6 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BF918;
    }
}

loc_804BF8D4:
{
    r5 = (r6 + 12);
}

loc_804BF8D8:
{
    r4 = MemoryInline::FlatRead8((r5 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BF90C;
    }
}

loc_804BF8E4:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BF8F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BF90C;
    }
}

loc_804BF8F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BF900:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BF90C;
    }
}

loc_804BF904:
{
    r0 = (r4 | 2);
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
}

loc_804BF90C:
{
    r5 = (r5 + 12);
}

loc_804BF914:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r7))) {
        goto loc_804BF8D8;
    }
}

loc_804BF918:
{
    r6 = (r6 + 12);
}

loc_804BF920:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r7))) {
        goto loc_804BF8C8;
    }
}

loc_804BF924:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 312), static_cast<uint16_t>(r0));
    r5 = (r3 + 276);
    r0 = (r3 + 240);
    // nop
}

loc_804BF938:
{
    r4 = MemoryInline::FlatRead8((r5 + 8));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804BF950;
    }
}

loc_804BF944:
{
    r4 = MemoryInline::FlatRead16((r3 + 312));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 312), static_cast<uint16_t>(r4));
}

loc_804BF950:
{
    r5 = (r5 + -12);
}

loc_804BF958:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_804BF938;
    }
}

loc_804BF95C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32596));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BF968:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BFA60;
    }
}

loc_804BF970:
{
    r0 = MemoryInline::FlatRead8((r3 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804BF97C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804BF988;
    }
}

loc_804BF980:
{
}

loc_804BF984:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-2))) {
        goto loc_804BF9CC;
    }
}

loc_804BF988:
{
    r0 = MemoryInline::FlatRead16((r3 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804BF990:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_804BF9A8;
    }
}

loc_804BF994:
{
    r3 = r31;
    ctx->lr = 0x804BF99Cu;
    if constexpr (KnownRegArgsCpuCall<0x804BEBF0u>(&func_804BEBF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_804BEBF0_312F = func_804BEBF0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804BEBF0_312F);
        r4 = static_cast<uint32_t>(regargs_result_804BEBF0_312F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BEBF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BFA64;
    }
}

loc_804BF9A8:
{
    r0 = MemoryInline::FlatRead16((r31 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804BF9B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_804BFA60;
    }
}

loc_804BF9B4:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804BEFE0u>(&func_804BEFE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        const auto regargs_result_804BEFE0_3AE1 = func_804BEFE0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804BEFE0_3AE1);
        r4 = static_cast<uint32_t>(regargs_result_804BEFE0_3AE1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BEFE0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BFA64;
    }
}

loc_804BF9C8:
{
    goto loc_804BFA60;
}

loc_804BF9CC:
{
}

loc_804BF9D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804BF9DC;
    }
}

loc_804BF9D4:
{
}

loc_804BF9D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_804BFA20;
    }
}

loc_804BF9DC:
{
    r0 = MemoryInline::FlatRead16((r3 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804BF9E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_804BF9FC;
    }
}

loc_804BF9E8:
{
    r3 = r31;
    ctx->lr = 0x804BF9F0u;
    if constexpr (KnownRegArgsCpuCall<0x804BEA00u>(&func_804BEA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_804BEA00_455E = func_804BEA00_ra38_7e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_804BEA00_455E);
        r4 = static_cast<uint32_t>(regargs_result_804BEA00_455E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BEA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BFA64;
    }
}

loc_804BF9FC:
{
    r0 = MemoryInline::FlatRead16((r31 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804BFA04:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_804BFA60;
    }
}

loc_804BFA08:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804BEFE0u>(&func_804BEFE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        const auto regargs_result_804BEFE0_4FBE = func_804BEFE0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804BEFE0_4FBE);
        r4 = static_cast<uint32_t>(regargs_result_804BEFE0_4FBE >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BEFE0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BFA64;
    }
}

loc_804BFA1C:
{
    goto loc_804BFA60;
}

loc_804BFA20:
{
    r0 = MemoryInline::FlatRead16((r3 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804BFA28:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_804BFA40;
    }
}

loc_804BFA2C:
{
    r3 = r31;
    ctx->lr = 0x804BFA34u;
    if constexpr (KnownRegArgsCpuCall<0x804BEA00u>(&func_804BEA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_804BEA00_5914 = func_804BEA00_ra38_7e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_804BEA00_5914);
        r4 = static_cast<uint32_t>(regargs_result_804BEA00_5914 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BEA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BFA64;
    }
}

loc_804BFA40:
{
    r0 = MemoryInline::FlatRead16((r31 + 312));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804BFA48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804BFA60;
    }
}

loc_804BFA4C:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804BEE20u>(&func_804BEE20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804BEE20_633F = func_804BEE20_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BEE20_633F);
        r4 = static_cast<uint32_t>(regargs_result_804BEE20_633F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x804BEE20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BFA64;
    }
}

loc_804BFA60:
{
    r30 = 0;
}

loc_804BFA64:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BFB70;
    }
}

loc_804BFA6C:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 300));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 288));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 304));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 292));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f30.d, f30.d);
    f0.d = PpcFmulsInline(f31.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_6EDD = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_6EDD);
        r4 = static_cast<uint32_t>(regargs_result_80468848_6EDD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    r0 = MemoryInline::FlatRead16((r31 + 1276));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1348));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 220));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804BFAB4:
{
    MemoryInline::FlatWriteFloat32((r31 + 1220), f3.d);
    f30.d = PpcFmulsInline(f30.d, f2.d);
    f31.d = PpcFmulsInline(f31.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 1224), f30.d);
    f3.d = PpcFmulsInline(f4.d, f30.d);
    f2.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 1232), f1.d);
    f1.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = PpcFmulsInline(f4.d, f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 1228), f31.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 1252), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 1256), f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BFB28;
    }
}

loc_804BFAF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1260));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1264));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32600));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BFB10:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BFB28;
    }
}

loc_804BFB18:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 308), static_cast<uint8_t>(r0));
    r30 = 0;
    MemoryInline::FlatWrite8((r31 + 296), static_cast<uint8_t>(r0));
}

loc_804BFB28:
{
    r0 = MemoryInline::FlatRead8((r31 + 94));
}

loc_804BFB30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_804BFB64;
    }
}

loc_804BFB34:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_804BFB3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_804BFB64;
    }
}

loc_804BFB40:
{
    r3 = MemoryInline::FlatRead8((r31 + 1278));
}

loc_804BFB48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(200))) {
        goto loc_804BFB58;
    }
}

loc_804BFB4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1220));
    MemoryInline::FlatWriteFloat32((r31 + 1236), f0.d);
    goto loc_804BFB78;
}

loc_804BFB58:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 1278), static_cast<uint8_t>(r0));
    goto loc_804BFB78;
}

loc_804BFB64:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1278), static_cast<uint8_t>(r0));
    goto loc_804BFB78;
}

loc_804BFB70:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1278), static_cast<uint8_t>(r0));
}

loc_804BFB78:
{
    r3 = r31;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    ctx->lr = 0x804BFB84u;
    if constexpr (KnownRegArgsCpuCall<0x804BF160u>(&func_804BF160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804BF160_8265 = func_804BF160_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BF160_8265);
        r4 = static_cast<uint32_t>(regargs_result_804BF160_8265 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
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
        InvokeDirectCpu<0x804BF160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r1 + 68));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BF730(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BF730_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF80003FF fpr_write=0xF80003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BF730 func_804BF730 preserves=true fpr_mask=0x00000000
