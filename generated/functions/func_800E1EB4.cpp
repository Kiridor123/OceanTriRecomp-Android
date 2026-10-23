#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007B3AC(CpuContext* ctx);
extern "C" uint64_t func_8007B3AC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800E1C90(CpuContext* ctx);
extern "C" uint64_t func_800E1C90_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800E1EB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800E21C4_loc_0 = 0;
    uint32_t addr_psqx_800E21D0_loc_0 = 0;
    uint32_t addr_psqx_800E21DC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800E1EB4;

loc_800E1EB4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 352));
}

loc_800E1EEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E21C0;
    }
}

loc_800E1EF0:
{
    r4 = 3;
    ctx->lr = 0x800E1EF8u;
    if constexpr (KnownRegArgsCpuCall<0x800E1C90u>(&func_800E1C90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E1C90_D9C = func_800E1C90_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E1C90_D9C);
        r4 = static_cast<uint32_t>(regargs_result_800E1C90_D9C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E1C90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f29.d = MemoryInline::FlatReadFloat32((r2 + -30312));
}

loc_800E1F00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E2104;
    }
}

loc_800E1F04:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 92));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 68), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f29.d);
}

loc_800E1F18:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E201C;
    }
}

loc_800E1F20:
{
    MemoryInline::FlatWriteFloat32((r31 + 68), f29.d);
    r27 = 0;
    r28 = r31;
    r29 = 0;
    r30 = 2;
}

loc_800E1F34:
{
    r3 = MemoryInline::FlatRead32((r31 + 352));
    r4 = (r27 + 3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x800E1F4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r28 + 256), r29);
}

loc_800E1F54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E1FD4;
    }
}

loc_800E1F58:
{
    r5 = 0;
    r4 = r31;
    ctr = r30;
}

loc_800E1F64:
{
    r0 = MemoryInline::FlatRead32((r4 + 284));
}

loc_800E1F6C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800E1FD4;
    }
}

loc_800E1F70:
{
    r0 = MemoryInline::FlatRead32((r4 + 288));
}

loc_800E1F78:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800E1FD4;
    }
}

loc_800E1F7C:
{
    r0 = MemoryInline::FlatRead32((r4 + 292));
}

loc_800E1F84:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800E1FD4;
    }
}

loc_800E1F88:
{
    r0 = MemoryInline::FlatRead32((r4 + 296));
}

loc_800E1F90:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800E1FD4;
    }
}

loc_800E1F94:
{
    r0 = MemoryInline::FlatRead32((r4 + 300));
}

loc_800E1F9C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800E1FD4;
    }
}

loc_800E1FA0:
{
    r0 = MemoryInline::FlatRead32((r4 + 304));
}

loc_800E1FA8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800E1FD4;
    }
}

loc_800E1FAC:
{
    r0 = MemoryInline::FlatRead32((r4 + 308));
}

loc_800E1FB4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800E1FD4;
    }
}

loc_800E1FB8:
{
    r0 = MemoryInline::FlatRead32((r4 + 312));
}

loc_800E1FC0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800E1FD4;
    }
}

loc_800E1FC4:
{
    r4 = (r4 + 32);
    r5 = (r5 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E1F64;
    }
}

loc_800E1FD0:
{
    ctx->lr = 0x800E1FD4u;
    if constexpr (KnownRegArgsCpuCall<0x8007B3ACu>(&func_8007B3AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8007B3AC_2244 = func_8007B3AC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8007B3AC_2244);
        r4 = static_cast<uint32_t>(regargs_result_8007B3AC_2244 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8007B3ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800E1FD4:
{
    r3 = r31;
    r4 = r27;
    ctx->lr = 0x800E1FE0u;
    if constexpr (KnownRegArgsCpuCall<0x800E1C90u>(&func_800E1C90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E1C90_2B70 = func_800E1C90_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E1C90_2B70);
        r4 = static_cast<uint32_t>(regargs_result_800E1C90_2B70 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E1C90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800E1FE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E1FFC;
    }
}

loc_800E1FE8:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 92));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x800E1FFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800E1FFC:
{
    r28 = (r28 + 4);
    r27 = (r27 + 1);
}

loc_800E2008:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(3))) {
        goto loc_800E1F34;
    }
}

loc_800E200C:
{
    r0 = MemoryInline::FlatRead32((r31 + 76));
    r0 = (r0 & -4);
    MemoryInline::FlatWrite32((r31 + 76), r0);
    goto loc_800E2104;
}

loc_800E201C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 72));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800E2024:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E202C;
    }
}

loc_800E2028:
{
    goto loc_800E2050;
}

loc_800E202C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f2.d = f29.d;
    f3.d = f29.d;
    f4.d = f29.d;
    f5.d = MemoryInline::FlatReadFloat32((r2 + -30308));
    f6.d = f5.d;
    f7.d = f29.d;
    // inline leaf 0x800522EC (30 guest instruction(s))
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32448));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f6.d = PpcFmulsInline(f3.d, f3.d);
    f9.d = PpcFmulsInline(f8.d, f8.d);
    f10.d = PpcFmulsInline(f9.d, f3.d);
    f0.d = PpcFmulsInline(f9.d, f8.d);
    f11.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32436));
    f0.d = PpcFmulsInline(f0.d, f11.d);
    f12.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32432));
    f0.d = PpcFmulsInline(f0.d, f9.d);
    f9.d = PpcFmulsInline(f0.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f10.d));
    f6.d = PpcFmulsInline(f7.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f10.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    f3.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f9.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = (-(f12.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f9.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    // end of inlined leaf 0x800522EC
    f29.d = f1.d;
}

loc_800E2050:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    r28 = 0;
    r29 = r31;
}

loc_800E205C:
{
    r3 = r31;
    r4 = (r28 + 3);
    ctx->lr = 0x800E2068u;
    if constexpr (KnownRegArgsCpuCall<0x800E1C90u>(&func_800E1C90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E1C90_3F45 = func_800E1C90_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E1C90_3F45);
        r4 = static_cast<uint32_t>(regargs_result_800E1C90_3F45 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E1C90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800E206C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E2078;
    }
}

loc_800E2070:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 224));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
}

loc_800E2078:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_800E2084:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_800E205C;
    }
}

loc_800E2088:
{
    r28 = 0;
    r29 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30312));
}

loc_800E2094:
{
    r3 = r31;
    r4 = (r28 + 3);
    ctx->lr = 0x800E20A0u;
    if constexpr (KnownRegArgsCpuCall<0x800E1C90u>(&func_800E1C90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E1C90_4562 = func_800E1C90_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E1C90_4562);
        r4 = static_cast<uint32_t>(regargs_result_800E1C90_4562 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E1C90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800E20A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E20D8;
    }
}

loc_800E20A8:
{
    SetCRFloatResident(cr, 0, f30.d, f31.d);
}

loc_800E20AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E20D8;
    }
}

loc_800E20B0:
{
    r3 = MemoryInline::FlatRead32((r31 + 352));
    r4 = (r28 + 3);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 224));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f1.d = PpcFmulsInline(f29.d, f0.d);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x800E20D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800E20F4;
}

loc_800E20D8:
{
    r3 = MemoryInline::FlatRead32((r31 + 352));
    r4 = (r28 + 3);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x800E20F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800E20F4:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_800E2100:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_800E2094;
    }
}

loc_800E2104:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30308));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    r28 = 0;
    r29 = r31;
}

loc_800E2118:
{
    r3 = r31;
    r4 = r28;
    ctx->lr = 0x800E2124u;
    if constexpr (KnownRegArgsCpuCall<0x800E1C90u>(&func_800E1C90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E1C90_5714 = func_800E1C90_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E1C90_5714);
        r4 = static_cast<uint32_t>(regargs_result_800E1C90_5714 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E1C90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800E2128:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E2134;
    }
}

loc_800E212C:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 212));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
}

loc_800E2134:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_800E2140:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_800E2118;
    }
}

loc_800E2144:
{
    r28 = 0;
    r29 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30312));
}

loc_800E2150:
{
    r3 = r31;
    r4 = r28;
    ctx->lr = 0x800E215Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E1C90u>(&func_800E1C90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E1C90_5D2B = func_800E1C90_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E1C90_5D2B);
        r4 = static_cast<uint32_t>(regargs_result_800E1C90_5D2B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E1C90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800E2160:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E2194;
    }
}

loc_800E2164:
{
    SetCRFloatResident(cr, 0, f30.d, f31.d);
}

loc_800E2168:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E2194;
    }
}

loc_800E216C:
{
    r3 = MemoryInline::FlatRead32((r31 + 352));
    r4 = r28;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 212));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f1.d = PpcFmulsInline(f29.d, f0.d);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x800E2190u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800E21B0;
}

loc_800E2194:
{
    r3 = MemoryInline::FlatRead32((r31 + 352));
    r4 = r28;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x800E21B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800E21B0:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_800E21BC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_800E2150;
    }
}

loc_800E21C0:
{
    r0 = 72;
    addr_psqx_800E21C4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E21C4_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 76u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 52u, (r1 + 64));
    r0 = 56;
    addr_psqx_800E21D0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E21D0_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 48));
    r0 = 40;
    addr_psqx_800E21DC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E21DC_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 32));
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E1EB4 func_800E1EB4 preserves=true fpr_mask=0x00000000
