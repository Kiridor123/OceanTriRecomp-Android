#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012A688(CpuContext* ctx);
extern "C" uint32_t func_8012A688_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80291B6C(CpuContext* ctx);
extern "C" uint64_t func_80291B6C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_802D2A64(CpuContext* ctx);
extern "C" uint64_t func_802D2A64_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);

extern "C" uint64_t func_802D1774_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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

    goto loc_802D1774;

loc_802D1774:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r3;
    r3 = (r1 + 12);
    ctx->lr = 0x802D1790u;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_73F = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_73F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 974), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 976));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D17A0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802D1938;
    }
}

loc_802D17A4:
{
    r3 = r31;
    r4 = 2;
    // inline leaf 0x802D2BDC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 492));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    // end of inlined leaf 0x802D2BDC
}

loc_802D17B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802D1938;
    }
}

loc_802D17B8:
{
    r3 = r31;
    r4 = (r31 + 376);
    r5 = (r31 + 804);
    r6 = (r1 + 8);
    r7 = -6;
    ctx->lr = 0x802D17D0u;
    if constexpr (KnownRegArgsCpuCall<0x80291B6Cu>(&func_80291B6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80291B6C_CFA = func_80291B6C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80291B6C_CFA);
        r4 = static_cast<uint32_t>(regargs_result_80291B6C_CFA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80291B6Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_802D17D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802D1874;
    }
}

loc_802D17D8:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 412), f2.d);
    r0 = MemoryInline::FlatRead8((r31 + 368));
}

loc_802D17E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D17F8;
    }
}

loc_802D17EC:
{
}

loc_802D17F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802D1830;
    }
}

loc_802D17F4:
{
    goto loc_802D1910;
}

loc_802D17F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 380));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13304));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802D1808:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802D1818;
    }
}

loc_802D1810:
{
    MemoryInline::FlatWriteFloat32((r31 + 380), f2.d);
    goto loc_802D1910;
}

loc_802D1818:
{
    r3 = r31;
    r4 = 6;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x802D182Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D2A64u>(&func_802D2A64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802D2A64_17E7 = func_802D2A64_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2A64_17E7);
        r4 = static_cast<uint32_t>(regargs_result_802D2A64_17E7 >> 32);
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
        InvokeDirectCpu<0x802D2A64u>(ctx);
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
    goto loc_802D1910;
}

loc_802D1830:
{
    r3 = r31;
    r4 = 2;
    r5 = 13;
    // inline leaf 0x802D2B9C (12 guest instruction(s))
}

loc_inl1_0x802D2B9C:
{
    r6 = MemoryInline::FlatRead8((r3 + 369));
    r0 = (r4 & 255);
}

loc_inl1_0x802D2BA8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x802D2BC4;
    }
}

loc_inl1_0x802D2BAC:
{
    r3 = MemoryInline::FlatRead16((r3 + 370));
    r0 = (r5 & 65535);
}

loc_inl1_0x802D2BB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x802D2BC4;
    }
}

loc_inl1_0x802D2BBC:
{
    r3 = 1;
    goto loc_inl1_cont_802D2B9C;
}

loc_inl1_0x802D2BC4:
{
    r3 = 0;
}

loc_inl1_cont_802D2B9C:
{
    // end of inlined leaf 0x802D2B9C
}

loc_802D1844:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802D1910;
    }
}

loc_802D1848:
{
    r3 = r31;
    r4 = 2;
    r5 = 13;
    r6 = 0;
    ctx->lr = 0x802D185Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D2A64u>(&func_802D2A64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802D2A64_237B = func_802D2A64_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2A64_237B);
        r4 = static_cast<uint32_t>(regargs_result_802D2A64_237B >> 32);
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
        InvokeDirectCpu<0x802D2A64u>(ctx);
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
    r3 = r31;
    r4 = 0;
    // inline leaf 0x802D2A5C (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 368), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802D2A5C
    r3 = r31;
    // inline leaf 0x802D4264 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 905), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D4264
    goto loc_802D1910;
}

loc_802D1874:
{
    r3 = r31;
    r4 = (r31 + 376);
    r5 = (r31 + 804);
    r6 = (r1 + 8);
    r7 = 1;
    ctx->lr = 0x802D188Cu;
    if constexpr (KnownRegArgsCpuCall<0x80291B6Cu>(&func_80291B6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80291B6C_2D97 = func_80291B6C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80291B6C_2D97);
        r4 = static_cast<uint32_t>(regargs_result_80291B6C_2D97 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80291B6Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_802D1890:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802D1910;
    }
}

loc_802D1894:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 412), f2.d);
    r0 = MemoryInline::FlatRead8((r31 + 368));
}

loc_802D18A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_802D18E8;
    }
}

loc_802D18A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 380));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13296));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802D18B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802D18C8;
    }
}

loc_802D18B8:
{
    MemoryInline::FlatWriteFloat32((r31 + 380), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 974), static_cast<uint8_t>(r0));
    goto loc_802D1910;
}

loc_802D18C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13132));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802D18D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D1910;
    }
}

loc_802D18D8:
{
    MemoryInline::FlatWriteFloat32((r31 + 380), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 974), static_cast<uint8_t>(r0));
    goto loc_802D1910;
}

loc_802D18E8:
{
    r3 = r31;
    r4 = 2;
    r5 = 12;
    r6 = 0;
    ctx->lr = 0x802D18FCu;
    if constexpr (KnownRegArgsCpuCall<0x802D2A64u>(&func_802D2A64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802D2A64_3924 = func_802D2A64_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2A64_3924);
        r4 = static_cast<uint32_t>(regargs_result_802D2A64_3924 >> 32);
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
        InvokeDirectCpu<0x802D2A64u>(ctx);
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
    r3 = r31;
    r4 = 2;
    // inline leaf 0x802D2A5C (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 368), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802D2A5C
    r3 = r31;
    // inline leaf 0x802D4264 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 905), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D4264
}

loc_802D1910:
{
    r3 = r31;
    r4 = (r31 + 376);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    r7 = 4;
    ctx->lr = 0x802D1928u;
    if constexpr (KnownRegArgsCpuCall<0x80291B6Cu>(&func_80291B6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80291B6C_4326 = func_80291B6C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80291B6C_4326);
        r4 = static_cast<uint32_t>(regargs_result_80291B6C_4326 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80291B6Cu>(ctx);
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
        cr = ctx->cr;
    }
}

loc_802D192C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802D1938;
    }
}

loc_802D1930:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 416), f0.d);
}

loc_802D1938:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

extern "C" void func_802D1774(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D1774_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D1774 func_802D1774 preserves=true fpr_mask=0x00000000
