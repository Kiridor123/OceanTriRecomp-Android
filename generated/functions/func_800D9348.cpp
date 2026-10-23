#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F58(CpuContext* ctx);
extern "C" uint64_t func_80050F58_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800E048C(CpuContext* ctx);
extern "C" uint64_t func_800E048C_ra18_a_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800F25A4(CpuContext* ctx);
extern "C" uint64_t func_800F25A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F271C(CpuContext* ctx);
extern "C" uint32_t func_800F271C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F2778(CpuContext* ctx);
extern "C" uint64_t func_800F2778_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802B0058(CpuContext* ctx);
extern "C" uint64_t func_802B0058_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BE0EC(CpuContext* ctx);
extern "C" uint32_t func_802BE0EC_ra28_2_8_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" void func_800D9348(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_800D95C4_loc_0 = 0;
    uint32_t addr_psqx_800D97F4_loc_0 = 0;
    uint32_t addr_psqx_800D9800_loc_0 = 0;
    uint32_t addr_psqx_800D980C_loc_0 = 0;
    uint32_t addr_psqx_800D9818_loc_0 = 0;
    uint32_t addr_psqx_800D9824_loc_0 = 0;
    uint32_t addr_psqx_800D9830_loc_0 = 0;
    uint32_t addr_psqx_800D983C_loc_0 = 0;
    uint32_t addr_psqx_800D9848_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800D9348;

loc_800D9348:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -240), 0, 248u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 244u, (r1 + 244), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 112u, (r1 + 112), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    r11 = (r1 + 112);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r21 = r3;
    r22 = r4;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 32), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 40), r0);
    r23 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = MemoryInline::FlatRead32((r4 + 44));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 24), r0);
    r0 = MemoryInline::FlatRead32((r4 + 48));
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 28), r0);
    r25 = 0;
    r24 = (r1 + 24);
    f28.d = MemoryInline::FlatReadFloat64((r2 + -30368));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -30392));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -30400));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -30388));
}

loc_800D93E0:
{
    r4 = MemoryInline::FlatRead32(r24);
}

loc_800D93E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_800D9528;
    }
}

loc_800D93EC:
{
    r3 = MemoryInline::FlatRead32((r22 + 40));
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800F271Cu>(&func_800F271C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800F271C_1D32 = func_800F271C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800F271C_1D32;
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
        InvokeDirectCpu<0x800F271Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r20 = r3;
    r3 = MemoryInline::FlatRead32((r22 + 40));
    r4 = MemoryInline::FlatRead32(r24);
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800F271Cu>(&func_800F271C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800F271C_2059 = func_800F271C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800F271C_2059;
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
        InvokeDirectCpu<0x800F271Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r26 = r3;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -30408));
    if constexpr (KnownRegArgsCpuCall<0x802B0058u>(&func_802B0058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802B0058_2355 = func_802B0058_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B0058_2355);
        r4 = static_cast<uint32_t>(regargs_result_802B0058_2355 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B0058u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_800D941C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800D94D8;
    }
}

loc_800D9420:
{
    ctx->lr = 0x800D9424u;
    if constexpr (KnownRegArgsCpuCall<0x802BE0ECu>(&func_802BE0EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802BE0EC_2715 = func_802BE0EC_ra28_2_8_0(ctx, r3, r5, f1.d);
        r3 = regargs_result_802BE0EC_2715;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE0ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800D9428:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800D9484;
    }
}

loc_800D942C:
{
    r20 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r22 + 8));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_800D9438:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D9464;
    }
}

loc_800D9440:
{
    r0 = (r26 & 255);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r26 = fctiwzword0;
    f29.d = f27.d;
}

loc_800D9464:
{
    r3 = (r23 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + -28035));
}

loc_800D9470:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800D947C;
    }
}

loc_800D9474:
{
    r28 = 3;
    goto loc_800D9500;
}

loc_800D947C:
{
    r28 = 2;
    goto loc_800D9500;
}

loc_800D9484:
{
    r26 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r22 + 8));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_800D9490:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D94B8;
    }
}

loc_800D9494:
{
    r0 = (r20 & 255);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r20 = fctiwzword1;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -30384));
}

loc_800D94B8:
{
    r3 = (r23 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + -28035));
}

loc_800D94C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800D94D0;
    }
}

loc_800D94C8:
{
    r28 = 1;
    goto loc_800D9500;
}

loc_800D94D0:
{
    r28 = 0;
    goto loc_800D9500;
}

loc_800D94D8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r4 = (r22 + 4);
    ctx->lr = 0x800D94E4u;
    if constexpr (KnownRegArgsCpuCall<0x800E048Cu>(&func_800E048C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800E048C_350D = func_800E048C_ra18_a_18_0(ctx, r3, r4, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800E048C_350D);
        r4 = static_cast<uint32_t>(regargs_result_800E048C_350D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E048Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r26 = r3;
    r3 = (r23 + 196608);
    r3 = MemoryInline::FlatRead8((r3 + -28035));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r28 = (r0 & 255);
}

loc_800D9500:
{
    r3 = MemoryInline::FlatRead32((r22 + 40));
    r4 = MemoryInline::FlatRead32(r24);
    r5 = 0;
    r6 = (r20 & 255);
    ctx->lr = 0x800D9514u;
    if constexpr (KnownRegArgsCpuCall<0x800F2778u>(&func_800F2778)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800F2778_3C01 = func_800F2778_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F2778_3C01);
        r4 = static_cast<uint32_t>(regargs_result_800F2778_3C01 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F2778u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r22 + 40));
    r4 = MemoryInline::FlatRead32(r24);
    r5 = 1;
    r6 = (r26 & 255);
    ctx->lr = 0x800D9528u;
    if constexpr (KnownRegArgsCpuCall<0x800F2778u>(&func_800F2778)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800F2778_4034 = func_800F2778_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F2778_4034);
        r4 = static_cast<uint32_t>(regargs_result_800F2778_4034 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F2778u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_800D9528:
{
    r24 = (r24 + 4);
    r25 = (r25 + 1);
}

loc_800D9534:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(2))) {
        goto loc_800D93E0;
    }
}

loc_800D9538:
{
    r24 = 0;
    r27 = (r1 + 24);
    r26 = (r1 + 8);
    r25 = (r28 * 100);
    r28 = 19;
    r29 = 15;
    r3 = 0x80590000u;
    r30 = (r3 + 31264);
    r3 = 0x80590000u;
    r31 = (r3 + 31160);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30380));
    f28.d = MemoryInline::FlatReadFloat64((r2 + -30360));
    f26.d = MemoryInline::FlatReadFloat64((r2 + -30368));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -30376));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -30400));
}

loc_800D9574:
{
    r4 = MemoryInline::FlatRead32(r27);
}

loc_800D957C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_800D9798;
    }
}

loc_800D9580:
{
    r3 = MemoryInline::FlatRead32((r22 + 40));
    // inline leaf 0x800F26E4 (14 guest instruction(s))
}

loc_inl1_0x800F26E4:
{
}

loc_inl1_0x800F26E8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(49))) {
        goto loc_inl1_0x800F26F4;
    }
}

loc_inl1_0x800F26EC:
{
    r3 = 0;
    goto loc_inl1_cont_800F26E4;
}

loc_inl1_0x800F26F4:
{
}

loc_inl1_0x800F26F8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(256))) {
        goto loc_inl1_0x800F2704;
    }
}

loc_inl1_0x800F26FC:
{
    r3 = 0;
    goto loc_inl1_cont_800F26E4;
}

loc_inl1_0x800F2704:
{
    r5 = MemoryInline::FlatRead32((r13 + -17396));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -256);
    r0 = (r5 + r0);
    r3 = (r0 + r4);
    r3 = MemoryInline::FlatRead8((r3 + 898));
}

loc_inl1_cont_800F26E4:
{
    // end of inlined leaf 0x800F26E4
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r22 + 40));
    r4 = MemoryInline::FlatRead32(r27);
    r5 = (r1 + 16);
    ctx->lr = 0x800D959Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F25A4u>(&func_800F25A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800F25A4_4BD9 = func_800F25A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F25A4_4BD9);
        r4 = static_cast<uint32_t>(regargs_result_800F25A4_4BD9 >> 32);
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
        InvokeDirectCpu<0x800F25A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_800D95A4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(20))) {
        goto loc_800D95AC;
    }
}

loc_800D95A8:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r28));
}

loc_800D95AC:
{
    r0 = MemoryInline::FlatRead16((r1 + 18));
}

loc_800D95B4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(16))) {
        goto loc_800D95BC;
    }
}

loc_800D95B8:
{
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r29));
}

loc_800D95BC:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    addr_lfsx_800D95C4_loc_0 = (r30 + r0);
    f25.d = MemoryInline::FlatReadFloat32(addr_lfsx_800D95C4_loc_0);
    r0 = MemoryInline::FlatRead16((r1 + 18));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r31_addr_2 = (r31 + r0);
    r20 = MemoryInline::FlatRead32(r31_addr_2);
    r20 = (r20 + r25);
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_800D95E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800D9614;
    }
}

loc_800D95E8:
{
    r3 = (r21 + 24);
    r4 = (r22 + 4);
    ctx->lr = 0x800D95F4u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050F58_55A0 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_55A0);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_55A0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f24.d = f1.d;
    r3 = (r21 + 36);
    r4 = (r22 + 4);
    ctx->lr = 0x800D9604u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050F58_5A89 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_5A89);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_5A89 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    SetCRFloatResident(cr, 0, f1.d, f24.d);
}

loc_800D9608:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D969C;
    }
}

loc_800D960C:
{
    f24.d = f1.d;
    goto loc_800D969C;
}

loc_800D9614:
{
}

loc_800D9618:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_800D9634;
    }
}

loc_800D961C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r3 = (r3 + 4);
    r4 = (r22 + 4);
    ctx->lr = 0x800D962Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050F58_610B = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_610B);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_610B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f24.d = f1.d;
    goto loc_800D969C;
}

loc_800D9634:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_800D9640:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800D968C;
    }
}

loc_800D9644:
{
    ctx->lr = 0x800D9648u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800D964C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D968C;
    }
}

loc_800D9650:
{
    r0 = MemoryInline::FlatRead32((r21 + 8));
}

loc_800D9658:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_800D9664;
    }
}

loc_800D965C:
{
}

loc_800D9660:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_800D9678;
    }
}

loc_800D9664:
{
    r3 = (r23 + 28);
    r4 = (r22 + 4);
    ctx->lr = 0x800D9670u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050F58_69FD = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_69FD);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_69FD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f24.d = f1.d;
    goto loc_800D969C;
}

loc_800D9678:
{
    r3 = (r21 + 24);
    r4 = (r22 + 4);
    ctx->lr = 0x800D9684u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050F58_6F15 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_6F15);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_6F15 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f24.d = f1.d;
    goto loc_800D969C;
}

loc_800D968C:
{
    r3 = (r21 + 24);
    r4 = (r22 + 4);
    ctx->lr = 0x800D9698u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050F58_742D = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_742D);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_742D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f24.d = f1.d;
}

loc_800D969C:
{
    SetCRFloatResident(cr, 0, f24.d, f25.d);
}

loc_800D96A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800D96AC;
    }
}

loc_800D96A4:
{
    MemoryInline::FlatWriteFloat32((r22 + 28), f30.d);
    goto loc_800D9798;
}

loc_800D96AC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d / f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f24.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = fctiwzword2;
    r20_addr_2 = (r20 + r0);
    r0 = MemoryInline::FlatRead8(r20_addr_2);
}

loc_800D96C8:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_800D9734;
    }
}

loc_800D96CC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f1.d = PpcFmulsInline(f27.d, f0.d);
    MemoryInline::FlatWriteFloat32((r22 + 28), f1.d);
    r0 = MemoryInline::FlatRead8(r26);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f0.d, f29.d);
    MemoryInline::FlatWriteFloat32((r22 + 28), f1.d);
    r0 = MemoryInline::FlatRead8((r22 + 75));
}

loc_800D9708:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D9798;
    }
}

loc_800D970C:
{
    r0 = MemoryInline::FlatRead8((r22 + 78));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r22 + 28), f0.d);
    goto loc_800D9798;
}

loc_800D9734:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f1.d = PpcFmulsInline(f27.d, f0.d);
    MemoryInline::FlatWriteFloat32((r22 + 32), f1.d);
    r0 = MemoryInline::FlatRead8(r26);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f0.d, f29.d);
    MemoryInline::FlatWriteFloat32((r22 + 32), f1.d);
    r0 = MemoryInline::FlatRead8((r22 + 75));
}

loc_800D9770:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D9798;
    }
}

loc_800D9774:
{
    r0 = MemoryInline::FlatRead8((r22 + 78));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r22 + 32), f0.d);
}

loc_800D9798:
{
    r27 = (r27 + 4);
    r26 = (r26 + 1);
    r24 = (r24 + 1);
}

loc_800D97A8:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(2))) {
        goto loc_800D9574;
    }
}

loc_800D97AC:
{
    r0 = MemoryInline::FlatRead8((r22 + 36));
}

loc_800D97B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D97F0;
    }
}

loc_800D97B8:
{
    if constexpr (KnownRegArgsCpuCall<0x802B0058u>(&func_802B0058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802B0058_87D3 = func_802B0058_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B0058_87D3);
        r4 = static_cast<uint32_t>(regargs_result_802B0058_87D3 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802B0058u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_800D97C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D97D0;
    }
}

loc_800D97C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30400));
    MemoryInline::FlatWriteFloat32((r22 + 32), f0.d);
    goto loc_800D97F0;
}

loc_800D97D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r22 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30400));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800D97DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D97EC;
    }
}

loc_800D97E4:
{
    MemoryInline::FlatWriteFloat32((r22 + 32), f0.d);
    goto loc_800D97F0;
}

loc_800D97EC:
{
    MemoryInline::FlatWriteFloat32((r22 + 28), f0.d);
}

loc_800D97F0:
{
    r0 = 232;
    addr_psqx_800D97F4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D97F4_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 112), 0, 136u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 112u, (r1 + 224));
    r0 = 216;
    addr_psqx_800D9800_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D9800_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 208));
    r0 = 200;
    addr_psqx_800D980C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D980C_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 192));
    r0 = 184;
    addr_psqx_800D9818_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D9818_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 176));
    r0 = 168;
    addr_psqx_800D9824_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D9824_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 160));
    r0 = 152;
    addr_psqx_800D9830_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D9830_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 144));
    r0 = 136;
    addr_psqx_800D983C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D983C_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 128));
    r0 = 120;
    addr_psqx_800D9848_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D9848_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::ReadResolved32(guest_range_3, 132u, (r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[24] = f24;
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

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xFF00000B fpr_write=0xFF00001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D9348 func_800D9348 preserves=true fpr_mask=0x00000000
