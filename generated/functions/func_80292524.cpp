#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8028F99C(CpuContext* ctx);
extern "C" uint64_t func_8028F99C_ra38_c_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80296DC8(CpuContext* ctx);
extern "C" uint64_t func_80296DC8_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80296EB0(CpuContext* ctx);
extern "C" uint32_t func_80296EB0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80292524(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80292984_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80292524;

loc_80292524:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 228u, (r1 + 228), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 208u, (r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 208);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r30 = r4;
    r27 = r5;
    r3 = (r1 + 168);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 156);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 144);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80292570:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(9))) {
        goto loc_8029257C;
    }
}

loc_80292574:
{
    r3 = 0;
    goto loc_80292980;
}

loc_8029257C:
{
    r0 = MemoryInline::FlatRead16((r29 + 34));
}

loc_80292584:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802925C4;
    }
}

loc_80292588:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292594:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802925C4;
    }
}

loc_8029259C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802925A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802925C4;
    }
}

loc_802925AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802925B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802925C4;
    }
}

loc_802925BC:
{
    r3 = 0;
    goto loc_80292980;
}

loc_802925C4:
{
    r3 = (r1 + 80);
    r4 = (r29 + 12);
    r5 = (r30 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 156);
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 156);
    r4 = (r30 + 44);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_802925F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80292600;
    }
}

loc_802925F8:
{
    r3 = 0;
    goto loc_80292980;
}

loc_80292600:
{
    r3 = (r1 + 68);
    r4 = r29;
    r5 = (r30 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 156);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 156);
    r4 = (r30 + 44);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80292634:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80292650:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8029265C;
    }
}

loc_80292654:
{
    r3 = 0;
    goto loc_80292980;
}

loc_8029265C:
{
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80292664:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802926A4;
    }
}

loc_8029266C:
{
    r3 = (r1 + 56);
    r4 = (r30 + 44);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    InvokeDirectCpu<0x80051F44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 168);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 44);
    r4 = r29;
    r5 = (r1 + 168);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 168);
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80292720;
}

loc_802926A4:
{
    r3 = (r1 + 32);
    r4 = r29;
    r5 = (r29 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 156);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 156);
    r4 = (r30 + 44);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    SetCRFloatResident(cr, 0, f0.d, PPC_PsToScalarInline(f1.d));
}

loc_802926D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802926E0;
    }
}

loc_802926D8:
{
    r3 = 0;
    goto loc_80292980;
}

loc_802926E0:
{
    r3 = (r1 + 20);
    r4 = (r1 + 156);
    f0.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f31.d) / PPC_PsToScalarInline(f1.d)));
    f1.d = (-(f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 156);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    r4 = r29;
    r5 = (r1 + 156);
    ctx->lr = 0x80292710u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_31DD = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_31DD);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_31DD >> 32);
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
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 168);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r31 = (r31 | 2);
}

loc_80292720:
{
    r3 = (r1 + 168);
    r4 = (r30 + 8);
    r5 = (r30 + 44);
    ctx->lr = 0x80292730u;
    if constexpr (KnownRegArgsCpuCall<0x80296DC8u>(&func_80296DC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80296DC8_36F5 = func_80296DC8_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80296DC8_36F5);
        r4 = static_cast<uint32_t>(regargs_result_80296DC8_36F5 >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80296DC8u>(ctx);
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

loc_80292734:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802927E4;
    }
}

loc_80292738:
{
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r3 = 0x806B0000u;
    r28 = (r3 + -7944);
    r3 = (r28 + r0);
    r4 = r30;
    // inline leaf 0x802929A4 (39 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 60u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r5);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r4 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 52), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r4 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 56), f0.d);
    // end of inlined leaf 0x802929A4
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r3 = (r28 + r0);
    r3 = (r3 + 44);
    r4 = r3;
    ctx->lr = 0x80292774u;
    if constexpr (KnownRegArgsCpuCall<0x80296EB0u>(&func_80296EB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80296EB0_5108 = func_80296EB0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80296EB0_5108;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296EB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r0 * 12);
    r3 = 0x806B0000u;
    r0 = (r3 + -7344);
    r3 = (r0 + r4);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 0x806B0000u;
    r3 = (r3 + -6932);
    r3_addr_1 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r31));
    r0 = 0;
    r3 = 0x806B0000u;
    r3 = (r3 + -6920);
    r3_addr_2 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r0));
    r4 = (r4 * 12);
    r3 = 0x806B0000u;
    r0 = (r3 + -7224);
    r3 = (r0 + r4);
    r4 = (r1 + 168);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r13 + -17096), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80292980;
}

loc_802927E4:
{
    r4 = 1;
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 0x806B0000u;
    r3 = (r3 + -6920);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    r3 = (r1 + 116);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 104);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 92);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 104);
    r4 = (r1 + 168);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r30 + 8);
    MemoryInline::FlatWriteRam32((r1 + 128), r3);
    r0 = (r30 + 20);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r0 = (r30 + 32);
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    MemoryInline::FlatWriteRam32((r1 + 140), r3);
    r28 = (r1 + 128);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -14168));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r0 = (r0 & 2);
}

loc_80292850:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80292864;
    }
}

loc_80292854:
{
    r3 = (r1 + 92);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80292870;
}

loc_80292864:
{
    r3 = (r1 + 92);
    r4 = (r1 + 104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80292870:
{
    r27 = 3;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_80292874:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r5 = (r1 + 92);
    r6 = (r1 + 168);
    ctx->lr = 0x80292888u;
    if constexpr (KnownRegArgsCpuCall<0x8028F99Cu>(&func_8028F99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8028F99C_60CE = func_8028F99C_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028F99C_60CE);
        r4 = static_cast<uint32_t>(regargs_result_8028F99C_60CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8028F99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_80292890:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802928A4;
    }
}

loc_80292894:
{
    f31.d = f1.d;
    r3 = (r1 + 116);
    r4 = (r1 + 168);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802928A4:
{
    r27 = (r27 + -1);
    r28 = (r28 + 4);
}

loc_802928B0:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(0))) {
        goto loc_80292874;
    }
}

loc_802928B4:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_802928BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029297C;
    }
}

loc_802928C0:
{
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r3 = 0x806B0000u;
    r28 = (r3 + -7944);
    r3 = (r28 + r0);
    r4 = r30;
    // inline leaf 0x802929A4 (39 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 60u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r4 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r4 + 20));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r4 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 28), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r3 + 36), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r4 + 40));
    MemoryInline::WriteResolved32(guest_range_3, 40u, (r3 + 40), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 44u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r4 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r4 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r3 + 44), r5);
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r3 + 48), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r4 + 52));
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r3 + 52), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 56u, (r4 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r3 + 56), f0.d);
    // end of inlined leaf 0x802929A4
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r3 = (r28 + r0);
    r3 = (r3 + 44);
    r4 = r3;
    ctx->lr = 0x802928FCu;
    if constexpr (KnownRegArgsCpuCall<0x80296EB0u>(&func_80296EB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80296EB0_7DFB = func_80296EB0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80296EB0_7DFB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296EB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r0 * 12);
    r3 = 0x806B0000u;
    r0 = (r3 + -7344);
    r3 = (r0 + r4);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 0x806B0000u;
    r3 = (r3 + -6932);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r31));
    r4 = (r0 * 12);
    r3 = 0x806B0000u;
    r0 = (r3 + -7224);
    r3 = (r0 + r4);
    r4 = (r1 + 116);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r0 * 12);
    r3 = 0x806B0000u;
    r0 = (r3 + -7104);
    r3 = (r0 + r4);
    r4 = (r1 + 104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r13 + -17096), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80292980;
}

loc_8029297C:
{
    r3 = 0;
}

loc_80292980:
{
    r0 = 216;
    addr_psqx_80292984_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80292984_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r11 = (r1 + 208);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC00007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80292524 func_80292524 preserves=true fpr_mask=0x00000000
