#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8A6C(CpuContext* ctx);
extern "C" uint32_t func_800A8A6C_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800AA334(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800AA714_loc_0 = 0;
    uint32_t addr_psqx_800AA720_loc_0 = 0;
    uint32_t addr_psqx_800AA72C_loc_0 = 0;
    uint32_t addr_psqx_800AA738_loc_0 = 0;
    uint32_t addr_psqx_800AA744_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800AA334;

loc_800AA334:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800AA3A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA3B8;
    }
}

loc_800AA3A4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800AA3B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA3B8;
    }
}

loc_800AA3B4:
{
    r10 = 0;
}

loc_800AA3B8:
{
}

loc_800AA3BC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800AA3D4;
    }
}

loc_800AA3C0:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800AA3CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA3D4;
    }
}

loc_800AA3D0:
{
    r9 = 0;
}

loc_800AA3D4:
{
}

loc_800AA3D8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AA3EC;
    }
}

loc_800AA3DC:
{
    r0 = (r11 + 1073741824);
}

loc_800AA3E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA3EC;
    }
}

loc_800AA3E8:
{
    r8 = 0;
}

loc_800AA3EC:
{
}

loc_800AA3F0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AA408;
    }
}

loc_800AA3F4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800AA400:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA408;
    }
}

loc_800AA404:
{
    r7 = 0;
}

loc_800AA408:
{
}

loc_800AA40C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AA424;
    }
}

loc_800AA410:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AA41C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA424;
    }
}

loc_800AA420:
{
    r6 = 0;
}

loc_800AA424:
{
}

loc_800AA428:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800AA440;
    }
}

loc_800AA42C:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AA438:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA440;
    }
}

loc_800AA43C:
{
    r5 = 0;
}

loc_800AA440:
{
}

loc_800AA444:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AA468;
    }
}

loc_800AA448:
{
    r3 = 0x80590000u;
    r3 = (r3 + 13584);
    r4 = 55;
    r5 = 0x80590000u;
    r5 = (r5 + 13600);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AA468u;
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

loc_800AA468:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800AA48C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA4A4;
    }
}

loc_800AA490:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800AA49C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA4A4;
    }
}

loc_800AA4A0:
{
    r9 = 0;
}

loc_800AA4A4:
{
}

loc_800AA4A8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AA4C0;
    }
}

loc_800AA4AC:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800AA4B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA4C0;
    }
}

loc_800AA4BC:
{
    r8 = 0;
}

loc_800AA4C0:
{
}

loc_800AA4C4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AA4D8;
    }
}

loc_800AA4C8:
{
    r0 = (r10 + 1073741824);
}

loc_800AA4D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA4D8;
    }
}

loc_800AA4D4:
{
    r7 = 0;
}

loc_800AA4D8:
{
}

loc_800AA4DC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AA4F4;
    }
}

loc_800AA4E0:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800AA4EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA4F4;
    }
}

loc_800AA4F0:
{
    r6 = 0;
}

loc_800AA4F4:
{
}

loc_800AA4F8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800AA510;
    }
}

loc_800AA4FC:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AA508:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA510;
    }
}

loc_800AA50C:
{
    r5 = 0;
}

loc_800AA510:
{
}

loc_800AA514:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AA52C;
    }
}

loc_800AA518:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AA524:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AA52C;
    }
}

loc_800AA528:
{
    r4 = 0;
}

loc_800AA52C:
{
}

loc_800AA530:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800AA554;
    }
}

loc_800AA534:
{
    r3 = 0x80590000u;
    r3 = (r3 + 13584);
    r4 = 56;
    r5 = 0x80590000u;
    r5 = (r5 + 13652);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AA554u;
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

loc_800AA554:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r30);
    guest_range_2 = MemoryInline::ResolveRangeHost(r29, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r30 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r29 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r30 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r29 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r30 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r29 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r30 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r29 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r30 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r29 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r30 + 6));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r29 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r30 + 7));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r29 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r29 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r30 + 9));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r29 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r30 + 10));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r29 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r30 + 11));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r29 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r30 + 12));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r29 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r30 + 13));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r29 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r30 + 14));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r29 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r30 + 15));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r29 + 15), static_cast<uint8_t>(r0));
    r3 = (r29 + 16);
    r4 = (r30 + 16);
    ctx->lr = 0x800AA5E0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800AA7C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = (r29 + 24);
    r4 = (r30 + 24);
    ctx->lr = 0x800AA5ECu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800AA7C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = (r29 + 32);
    r4 = (r30 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r23 = 0;
    r24 = r30;
    f28.d = MemoryInline::FlatReadFloat32((r2 + -31296));
    f29.d = MemoryInline::FlatReadFloat32((r2 + -31292));
    f30.d = MemoryInline::FlatReadFloat64((r2 + -31280));
    r28 = 1127219200;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -31288));
}

loc_800AA614:
{
    f27.d = MemoryInline::FlatReadFloat32((r24 + 124));
    r25 = (r30 + r23);
    r0 = MemoryInline::FlatRead8((r25 + 121));
}

loc_800AA624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AA660;
    }
}

loc_800AA628:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r3 = (r3 + 236);
    ctx->lr = 0x800AA634u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_3C21 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_3C21;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = PpcFmulsInline(f28.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f1.d = PpcFmulsInline(f27.d, f0.d);
    r0 = MemoryInline::FlatRead8((r25 + 121));
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    stackword12 = r28;
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_800AA660:
{
    f1.d = f27.d;
    ctx->lr = 0x800AA668u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800AA764u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r4 = (r29 + r23);
    MemoryInline::FlatWrite8((r4 + 122), static_cast<uint8_t>(r3));
    r24 = (r24 + 4);
    r23 = (r23 + 1);
}

loc_800AA67C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(3))) {
        goto loc_800AA614;
    }
}

loc_800AA680:
{
    r23 = 0;
    r28 = r30;
    r31 = r29;
    r27 = (r30 + 44);
    r26 = (r29 + 44);
    r25 = (r30 + 80);
    r24 = (r29 + 80);
}

loc_800AA69C:
{
    r0 = MemoryInline::FlatRead32((r28 + 104));
    MemoryInline::FlatWrite32((r31 + 104), r0);
    r3 = r26;
    r4 = r27;
    ctx->lr = 0x800AA6B0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800AA7C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r28 + 68));
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    r3 = r24;
    r4 = r25;
    ctx->lr = 0x800AA6C4u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x800AA7C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r28 = (r28 + 4);
    r31 = (r31 + 4);
    r27 = (r27 + 8);
    r26 = (r26 + 8);
    r25 = (r25 + 8);
    r24 = (r24 + 8);
    r23 = (r23 + 1);
}

loc_800AA6E4:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(3))) {
        goto loc_800AA69C;
    }
}

loc_800AA6E8:
{
    r0 = MemoryInline::FlatRead16((r30 + 116));
    MemoryInline::FlatWrite16((r29 + 116), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 118));
    MemoryInline::FlatWrite8((r29 + 118), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 119));
    MemoryInline::FlatWrite8((r29 + 119), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 120));
    MemoryInline::FlatWrite8((r29 + 120), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 125), static_cast<uint8_t>(r0));
    r0 = 136;
    addr_psqx_800AA714_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800AA714_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r0 = 120;
    addr_psqx_800AA720_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800AA720_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r0 = 104;
    addr_psqx_800AA72C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800AA72C_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r0 = 88;
    addr_psqx_800AA738_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800AA738_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = 72;
    addr_psqx_800AA744_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800AA744_loc_0));
    f27.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800AA334 func_800AA334 preserves=true fpr_mask=0x00000000
