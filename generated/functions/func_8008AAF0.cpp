#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80082F7C(CpuContext* ctx);
extern "C" uint64_t func_80082F7C_ra0_2_18_0(CpuContext*, double);
extern "C" void func_8008AF78(CpuContext* ctx);
extern "C" uint64_t func_8008AF78_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8008B068(CpuContext* ctx);
extern "C" uint32_t func_8008B068_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8008B0A4(CpuContext* ctx);
extern "C" uint64_t func_8008B0A4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8008AAF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8008AECC_loc_0 = 0;
    uint32_t addr_psqx_8008AED8_loc_0 = 0;
    uint32_t addr_psqx_8008AEE4_loc_0 = 0;
    uint32_t addr_psqx_8008AEF0_loc_0 = 0;
    uint32_t addr_psqx_8008AEFC_loc_0 = 0;
    uint32_t addr_psqx_8008AF08_loc_0 = 0;
    uint32_t addr_psqx_8008AF14_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8008AAF0;

loc_8008AAF0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r31 = r3;
    f25.d = f1.d;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8008AB68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008AB80;
    }
}

loc_8008AB6C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008AB78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008AB80;
    }
}

loc_8008AB7C:
{
    r10 = 0;
}

loc_8008AB80:
{
}

loc_8008AB84:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008AB9C;
    }
}

loc_8008AB88:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008AB94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008AB9C;
    }
}

loc_8008AB98:
{
    r9 = 0;
}

loc_8008AB9C:
{
}

loc_8008ABA0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008ABB4;
    }
}

loc_8008ABA4:
{
    r0 = (r11 + 1073741824);
}

loc_8008ABAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008ABB4;
    }
}

loc_8008ABB0:
{
    r8 = 0;
}

loc_8008ABB4:
{
}

loc_8008ABB8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008ABD0;
    }
}

loc_8008ABBC:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008ABC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008ABD0;
    }
}

loc_8008ABCC:
{
    r7 = 0;
}

loc_8008ABD0:
{
}

loc_8008ABD4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008ABEC;
    }
}

loc_8008ABD8:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008ABE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008ABEC;
    }
}

loc_8008ABE8:
{
    r6 = 0;
}

loc_8008ABEC:
{
}

loc_8008ABF0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008AC08;
    }
}

loc_8008ABF4:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008AC00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008AC08;
    }
}

loc_8008AC04:
{
    r5 = 0;
}

loc_8008AC08:
{
}

loc_8008AC0C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008AC30;
    }
}

loc_8008AC10:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 252;
    r5 = 0x80590000u;
    r5 = (r5 + 2120);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008AC30u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8008AC30:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8008AC3Cu;
    if constexpr (KnownRegArgsCpuCall<0x8008B0A4u>(&func_8008B0A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8008B0A4_1FD0 = func_8008B0A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B0A4_1FD0);
        r4 = static_cast<uint32_t>(regargs_result_8008B0A4_1FD0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8008B0A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 36);
    r4 = (r1 + 20);
    ctx->lr = 0x8008AC4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8008B068u>(&func_8008B068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8008B068_234C = func_8008B068_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8008B068_234C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8008B068u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r31;
    r4 = MemoryInline::FlatRead16(r31);
    r4 = (r4 + -1);
    ctx->lr = 0x8008AC5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8008B0A4u>(&func_8008B0A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8008B0A4_2607 = func_8008B0A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B0A4_2607);
        r4 = static_cast<uint32_t>(regargs_result_8008B0A4_2607 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8008B0A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 32);
    r4 = (r1 + 16);
    ctx->lr = 0x8008AC6Cu;
    if constexpr (KnownRegArgsCpuCall<0x8008B068u>(&func_8008B068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8008B068_2983 = func_8008B068_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8008B068_2983;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8008B068u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 36);
    // inline leaf 0x8008B05C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x8008B05C
    SetCRFloatResident(cr, 0, f25.d, f1.d);
}

loc_8008AC78:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008AC90;
    }
}

loc_8008AC80:
{
    r3 = (r1 + 36);
    r4 = r31;
    // inline leaf 0x8008B050 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    // end of inlined leaf 0x8008B050
    goto loc_8008AEC8;
}

loc_8008AC90:
{
    r3 = (r1 + 32);
    // inline leaf 0x8008B05C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x8008B05C
    SetCRFloatResident(cr, 0, f1.d, f25.d);
}

loc_8008AC9C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008ACB4;
    }
}

loc_8008ACA4:
{
    r3 = (r1 + 32);
    r4 = r31;
    // inline leaf 0x8008B050 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    // end of inlined leaf 0x8008B050
    goto loc_8008AEC8;
}

loc_8008ACB4:
{
    r3 = (r1 + 36);
    // inline leaf 0x8008B05C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x8008B05C
    f31.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f1.d));
    r3 = MemoryInline::FlatRead16(r31);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050248u>(ctx);
    f1 = ctx->fpr[1];
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8008ACD8u;
    if constexpr (KnownRegArgsCpuCall<0x80082F7Cu>(&func_80082F7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80082F7C_3434 = func_80082F7C_ra0_2_18_0(ctx, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80082F7C_3434);
        r4 = static_cast<uint32_t>(regargs_result_80082F7C_3434 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80082F7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r30 = r3;
    r4 = MemoryInline::FlatRead16(r31);
    r7 = (r4 + -1);
    r0 = (r3 & 65535);
}

loc_8008ACEC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r7))) {
        goto loc_8008AD3C;
    }
}

loc_8008ACF0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 282;
    r5 = 0x80590000u;
    r5 = (r5 + 2172);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31688));
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r6 = 1127219200;
    stackword7 = r6;
    MemoryInline::FlatWriteRam32((r1 + 40), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = (f0.d - f1.d);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31680));
    r0 = (r7 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    stackword9 = r6;
    MemoryInline::FlatWriteRam32((r1 + 48), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f2.d = (f0.d - f2.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008AD3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8008AD3C:
{
    r3 = r31;
    r4 = (r30 & 65535);
    ctx->lr = 0x8008AD48u;
    if constexpr (KnownRegArgsCpuCall<0x8008B0A4u>(&func_8008B0A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8008B0A4_3DED = func_8008B0A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008B0A4_3DED);
        r4 = static_cast<uint32_t>(regargs_result_8008B0A4_3DED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8008B0A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 28);
    r4 = (r1 + 12);
    ctx->lr = 0x8008AD58u;
    if constexpr (KnownRegArgsCpuCall<0x8008B068u>(&func_8008B068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8008B068_4169 = func_8008B068_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8008B068_4169;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8008B068u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    f1.d = f25.d;
    // inline leaf 0x8008B014 (1 guest instruction(s))
    // end of inlined leaf 0x8008B014
    f31.d = f1.d;
    r3 = (r1 + 28);
    // inline leaf 0x8008B008 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x8008B008
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_8008AD70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8008AD94;
    }
}

loc_8008AD74:
{
    r3 = (r1 + 28);
    r4 = 0;
    // inline leaf 0x8008AFF8 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + -12);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8008AFF8
    r3 = (r1 + 28);
    // inline leaf 0x8008B008 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x8008B008
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_8008AD8C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008AD74;
    }
}

loc_8008AD90:
{
    goto loc_8008ADC0;
}

loc_8008AD94:
{
    r3 = (r1 + 28);
    r4 = 0;
    // inline leaf 0x8008AFE8 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 12);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8008AFE8
    r3 = (r1 + 28);
    // inline leaf 0x8008B008 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x8008B008
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_8008ADAC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AD94;
    }
}

loc_8008ADB4:
{
    r3 = (r1 + 28);
    r4 = 0;
    // inline leaf 0x8008AFF8 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + -12);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8008AFF8
}

loc_8008ADC0:
{
    r3 = (r1 + 28);
    // inline leaf 0x8008B05C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x8008B05C
    SetCRFloatResident(cr, 0, f25.d, f1.d);
}

loc_8008ADCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008ADE0;
    }
}

loc_8008ADD0:
{
    r3 = (r1 + 28);
    r4 = r31;
    // inline leaf 0x8008B050 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    // end of inlined leaf 0x8008B050
    goto loc_8008AEC8;
}

loc_8008ADE0:
{
    r3 = (r1 + 28);
    r4 = 1;
    ctx->lr = 0x8008ADECu;
    if constexpr (KnownRegArgsCpuCall<0x8008AF78u>(&func_8008AF78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8008AF78_4ED8 = func_8008AF78_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8008AF78_4ED8);
        r4 = static_cast<uint32_t>(regargs_result_8008AF78_4ED8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8008AF78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x8008ADFCu;
    if constexpr (KnownRegArgsCpuCall<0x8008B068u>(&func_8008B068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8008B068_5252 = func_8008B068_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8008B068_5252;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8008B068u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 28);
    r4 = r31;
    // inline leaf 0x8008B050 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    // end of inlined leaf 0x8008B050
    f31.d = f1.d;
    r3 = (r1 + 28);
    // inline leaf 0x8008AF6C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // end of inlined leaf 0x8008AF6C
    f30.d = f1.d;
    r3 = (r1 + 24);
    r4 = r31;
    // inline leaf 0x8008B050 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    // end of inlined leaf 0x8008B050
    f29.d = f1.d;
    r3 = (r1 + 24);
    // inline leaf 0x8008AF6C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // end of inlined leaf 0x8008AF6C
    f28.d = f1.d;
    r3 = (r1 + 28);
    // inline leaf 0x8008B05C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x8008B05C
    f27.d = f1.d;
    r3 = (r1 + 24);
    // inline leaf 0x8008B05C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x8008B05C
    f26.d = f1.d;
    r0 = 0;
    SetCRFloatResident(cr, 0, f25.d, f27.d);
}

loc_8008AE54:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008AE6C;
    }
}

loc_8008AE5C:
{
    SetCRFloatResident(cr, 0, f25.d, f1.d);
}

loc_8008AE60:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008AE6C;
    }
}

loc_8008AE68:
{
    r0 = 1;
}

loc_8008AE6C:
{
}

loc_8008AE70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8008AE9C;
    }
}

loc_8008AE74:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 336;
    r5 = 0x80590000u;
    r5 = (r5 + 2240);
    f1.d = f25.d;
    f2.d = f27.d;
    f3.d = f26.d;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008AE9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8008AE9C:
{
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f27.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f27.d));
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f0.d = f1.d;
    f1.d = f31.d;
    f2.d = f30.d;
    f3.d = f29.d;
    f4.d = f28.d;
    f5.d = PpcFmulsInline(f25.d, PPC_PsToScalarInline(f0.d));
    f6.d = f25.d;
    // inline leaf 0x8008AF34 (14 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31672));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f6.d = PpcFmulsInline(f6.d, f7.d);
    f0.d = PpcFmulsInline(f5.d, f4.d);
    f4.d = PPC_Fmadds(f7.d, f2.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31668));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31664));
    f2.d = PPC_Fmsubs(f2.d, f5.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = PPC_Fmadds(f5.d, f0.d, f1.d);
    f1.d = PPC_Fmadds(f6.d, f4.d, f0.d);
    // end of inlined leaf 0x8008AF34
}

loc_8008AEC8:
{
    r0 = 168;
    addr_psqx_8008AECC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008AECC_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 128u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 104u, (r1 + 160));
    r0 = 152;
    addr_psqx_8008AED8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008AED8_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r1 + 144));
    r0 = 136;
    addr_psqx_8008AEE4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008AEE4_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r1 + 128));
    r0 = 120;
    addr_psqx_8008AEF0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008AEF0_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r1 + 112));
    r0 = 104;
    addr_psqx_8008AEFC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008AEFC_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r1 + 96));
    r0 = 88;
    addr_psqx_8008AF08_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008AF08_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 80));
    r0 = 72;
    addr_psqx_8008AF14_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008AF14_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 8u, (r1 + 64));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 124u, (r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xFE0000FF fpr_write=0xFE0000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008AAF0 func_8008AAF0 preserves=true fpr_mask=0x00000000
