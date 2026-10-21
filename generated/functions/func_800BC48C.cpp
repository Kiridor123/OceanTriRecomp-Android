#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051884(CpuContext* ctx);
extern "C" uint64_t func_80051884_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800A7F64(CpuContext* ctx);
extern "C" uint64_t func_800A7F64_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800AB340(CpuContext* ctx);
extern "C" uint32_t func_800AB340_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800B5A48(CpuContext* ctx);
extern "C" uint32_t func_800B5A48_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_800BCD78(CpuContext* ctx);
extern "C" double func_800BCD78_ra38_be_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800BCEFC(CpuContext* ctx);
extern "C" uint64_t func_800BCEFC_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_800C8F74(CpuContext* ctx);
extern "C" uint64_t func_800C8F74_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800BC48C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800BCD10_loc_0 = 0;
    uint32_t addr_psqx_800BCD1C_loc_0 = 0;
    uint32_t addr_psqx_800BCD28_loc_0 = 0;
    uint32_t addr_psqx_800BCD34_loc_0 = 0;
    uint32_t addr_psqx_800BCD40_loc_0 = 0;
    uint32_t addr_psqx_800BCD4C_loc_0 = 0;
    uint32_t addr_psqx_800BCD58_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800BC48Cu);
    goto loc_800BC48C;

loc_800BC48C:
{
    guest_range_2 = MemoryHw::ResolveRangeHost((r1 + -912), 0, 920u, false, true);
    MemoryHw::WriteResolved32(guest_range_2, 0u, (r1 + -912), r1);
    r1 = (r1 + -912);
    r0 = ctx->lr;
    MemoryHw::WriteResolved32(guest_range_2, 916u, (r1 + 916), r0);
    MemoryHw::WriteResolvedFloat64(guest_range_2, 896u, (r1 + 896), f31.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 904);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 880u, (r1 + 880), f30.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 888);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 864u, (r1 + 864), f29.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 872);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 848u, (r1 + 848), f28.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 856);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 832u, (r1 + 832), f27.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 840);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 816u, (r1 + 816), f26.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 824);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 800u, (r1 + 800), f25.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 808);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 800);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r4 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r5 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BC508:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC520;
    }
}

loc_800BC50C:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BC518:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC520;
    }
}

loc_800BC51C:
{
    r10 = 0;
}

loc_800BC520:
{
}

loc_800BC524:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BC53C;
    }
}

loc_800BC528:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BC534:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC53C;
    }
}

loc_800BC538:
{
    r9 = 0;
}

loc_800BC53C:
{
}

loc_800BC540:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BC554;
    }
}

loc_800BC544:
{
    r0 = (r11 + 1073741824);
}

loc_800BC54C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC554;
    }
}

loc_800BC550:
{
    r8 = 0;
}

loc_800BC554:
{
}

loc_800BC558:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BC570;
    }
}

loc_800BC55C:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BC568:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC570;
    }
}

loc_800BC56C:
{
    r7 = 0;
}

loc_800BC570:
{
}

loc_800BC574:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BC58C;
    }
}

loc_800BC578:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BC584:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC58C;
    }
}

loc_800BC588:
{
    r6 = 0;
}

loc_800BC58C:
{
}

loc_800BC590:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BC5A8;
    }
}

loc_800BC594:
{
    r3 = (r5 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BC5A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC5A8;
    }
}

loc_800BC5A4:
{
    r4 = 0;
}

loc_800BC5A8:
{
}

loc_800BC5AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BC5D0;
    }
}

loc_800BC5B0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 365;
    r5 = 0x80590000u;
    r5 = (r5 + 18560);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BC5D0u;
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

loc_800BC5D0:
{
    r3 = r26;
    r4 = r27;
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800BDBC4u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryHw::FlatRead32((r28 + 36));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BC608:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC620;
    }
}

loc_800BC60C:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BC618:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC620;
    }
}

loc_800BC61C:
{
    r10 = 0;
}

loc_800BC620:
{
}

loc_800BC624:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BC63C;
    }
}

loc_800BC628:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BC634:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC63C;
    }
}

loc_800BC638:
{
    r9 = 0;
}

loc_800BC63C:
{
}

loc_800BC640:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BC654;
    }
}

loc_800BC644:
{
    r0 = (r11 + 1073741824);
}

loc_800BC64C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC654;
    }
}

loc_800BC650:
{
    r8 = 0;
}

loc_800BC654:
{
}

loc_800BC658:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BC670;
    }
}

loc_800BC65C:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BC668:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC670;
    }
}

loc_800BC66C:
{
    r7 = 0;
}

loc_800BC670:
{
}

loc_800BC674:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BC68C;
    }
}

loc_800BC678:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BC684:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC68C;
    }
}

loc_800BC688:
{
    r5 = 0;
}

loc_800BC68C:
{
}

loc_800BC690:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BC6A8;
    }
}

loc_800BC694:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BC6A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC6A8;
    }
}

loc_800BC6A4:
{
    r4 = 0;
}

loc_800BC6A8:
{
}

loc_800BC6AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BC6CC;
    }
}

loc_800BC6B0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 369;
    r5 = 0x80590000u;
    r5 = (r5 + 18612);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BC6CCu;
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

loc_800BC6CC:
{
    r3 = MemoryHw::FlatRead32((r28 + 36));
    ctx->lr = 0x800BC6D4u;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_326F = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_326F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800AB3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BC6FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC714;
    }
}

loc_800BC700:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800BC70C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC714;
    }
}

loc_800BC710:
{
    r10 = 0;
}

loc_800BC714:
{
}

loc_800BC718:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BC730;
    }
}

loc_800BC71C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800BC728:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC730;
    }
}

loc_800BC72C:
{
    r9 = 0;
}

loc_800BC730:
{
}

loc_800BC734:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BC748;
    }
}

loc_800BC738:
{
    r0 = (r11 + 1073741824);
}

loc_800BC740:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC748;
    }
}

loc_800BC744:
{
    r8 = 0;
}

loc_800BC748:
{
}

loc_800BC74C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BC764;
    }
}

loc_800BC750:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800BC75C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC764;
    }
}

loc_800BC760:
{
    r7 = 0;
}

loc_800BC764:
{
}

loc_800BC768:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BC780;
    }
}

loc_800BC76C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800BC778:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC780;
    }
}

loc_800BC77C:
{
    r6 = 0;
}

loc_800BC780:
{
}

loc_800BC784:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BC79C;
    }
}

loc_800BC788:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BC794:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC79C;
    }
}

loc_800BC798:
{
    r5 = 0;
}

loc_800BC79C:
{
}

loc_800BC7A0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BC7C4;
    }
}

loc_800BC7A4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 371;
    r5 = 0x80590000u;
    r5 = (r5 + 18672);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BC7C4u;
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

loc_800BC7C4:
{
    r3 = (r1 + 496);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r27;
    r4 = (r1 + 496);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B7E14u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 544);
    r4 = (r1 + 496);
    r5 = r28;
    ctx->lr = 0x800BC7E8u;
    if constexpr (KnownRegArgsCpuCall<0x800C8F74u>(&func_800C8F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800C8F74_435D = func_800C8F74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800C8F74_435D);
        r4 = static_cast<uint32_t>(regargs_result_800C8F74_435D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->gpr[10] = r10;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800C8F74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r26;
    r4 = r28;
    r12 = MemoryHw::FlatRead32(r3);
    r12 = MemoryHw::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x800BC800u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r30 = r3;
    r3 = MemoryHw::FlatRead8((r26 + 208));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r29 = (r29_rot_0 & 1);
    r3 = (r1 + 144);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 132);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryHw::FlatRead8((r31 + 174));
}

loc_800BC82C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_800BC8A4;
    }
}

loc_800BC830:
{
    r3 = (r1 + 448);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 448);
    r4 = (r1 + 496);
    r5 = (r1 + 600);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 448);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = 0;
    ctx->lr = 0x800BC858u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804BAB90u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 60);
    f1.d = MemoryHw::FlatReadFloat32((r1 + 652));
    f2.d = MemoryHw::FlatReadFloat32((r1 + 668));
    f3.d = MemoryHw::FlatReadFloat32((r1 + 684));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryHw::FlatWriteRamFloat32(r3, f1.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 48);
    f1.d = MemoryHw::FlatReadFloat32((r1 + 656));
    f2.d = MemoryHw::FlatReadFloat32((r1 + 672));
    f3.d = MemoryHw::FlatReadFloat32((r1 + 688));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryHw::FlatWriteRamFloat32(r3, f1.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 132);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 132);
    ctx->lr = 0x800BC8A0u;
    if constexpr (KnownRegArgsCpuCall<0x800B5A48u>(&func_800B5A48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800B5A48_60D2 = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_60D2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B5A48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_800BCA24;
}

loc_800BC8A4:
{
    r3 = (r1 + 400);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 400);
    r4 = (r1 + 496);
    r5 = (r1 + 600);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 400);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = 0;
    ctx->lr = 0x800BC8CCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804BAB90u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryHw::FlatRead32((r28 + 32));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BC8F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC90C;
    }
}

loc_800BC8F8:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BC904:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC90C;
    }
}

loc_800BC908:
{
    r10 = 0;
}

loc_800BC90C:
{
}

loc_800BC910:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BC928;
    }
}

loc_800BC914:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BC920:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC928;
    }
}

loc_800BC924:
{
    r9 = 0;
}

loc_800BC928:
{
}

loc_800BC92C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BC940;
    }
}

loc_800BC930:
{
    r0 = (r11 + 1073741824);
}

loc_800BC938:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC940;
    }
}

loc_800BC93C:
{
    r8 = 0;
}

loc_800BC940:
{
}

loc_800BC944:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BC95C;
    }
}

loc_800BC948:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BC954:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC95C;
    }
}

loc_800BC958:
{
    r7 = 0;
}

loc_800BC95C:
{
}

loc_800BC960:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BC978;
    }
}

loc_800BC964:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BC970:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC978;
    }
}

loc_800BC974:
{
    r5 = 0;
}

loc_800BC978:
{
}

loc_800BC97C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BC994;
    }
}

loc_800BC980:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BC98C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BC994;
    }
}

loc_800BC990:
{
    r4 = 0;
}

loc_800BC994:
{
}

loc_800BC998:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BC9B8;
    }
}

loc_800BC99C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 403;
    r5 = 0x80590000u;
    r5 = (r5 + 18724);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BC9B8u;
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

loc_800BC9B8:
{
    r3 = (r1 + 352);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = MemoryHw::FlatRead32((r28 + 32));
    r4 = (r1 + 352);
    ctx->lr = 0x800BC9CCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800A9508u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 352);
    r4 = (r1 + 648);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 36);
    f1.d = MemoryHw::FlatReadFloat32((r1 + 356));
    f2.d = MemoryHw::FlatReadFloat32((r1 + 372));
    f3.d = MemoryHw::FlatReadFloat32((r1 + 388));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryHw::FlatWriteRamFloat32(r3, f1.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 24);
    f1.d = MemoryHw::FlatReadFloat32((r1 + 360));
    f2.d = MemoryHw::FlatReadFloat32((r1 + 376));
    f3.d = MemoryHw::FlatReadFloat32((r1 + 392));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryHw::FlatWriteRamFloat32(r3, f1.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 132);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 132);
    ctx->lr = 0x800BCA24u;
    if constexpr (KnownRegArgsCpuCall<0x800B5A48u>(&func_800B5A48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800B5A48_8364 = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_8364;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B5A48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_800BCA24:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800B5BA4u>(ctx);
    r3 = ctx->gpr[3];
    r24 = r3;
    f30.d = MemoryHw::FlatReadFloat32((r2 + -31024));
    goto loc_800BCA54;
}

loc_800BCA38:
{
    r3 = (r24 + 204);
    r4 = (r1 + 144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r28;
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B5B98u>(ctx);
    r3 = ctx->gpr[3];
    r24 = r3;
}

loc_800BCA54:
{
}

loc_800BCA58:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_800BCA68;
    }
}

loc_800BCA5C:
{
    f0.d = MemoryHw::FlatReadFloat32((r24 + 204));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_800BCA64:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800BCA38;
    }
}

loc_800BCA68:
{
    r0 = MemoryHw::FlatRead8((r31 + 169));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f2.d = MemoryHw::FlatReadFloat64((r2 + -31008));
    r0 = (r0 ^ -2147483648);
    stackword13 = r0;
    MemoryHw::FlatWriteRam32((r1 + 740), r0);
    r3 = 1127219200;
    stackword14 = r3;
    MemoryHw::FlatWriteRam32((r1 + 736), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword14), static_cast<uint32_t>(stackword13));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = MemoryHw::FlatReadFloat32((r2 + -31020));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r0 = MemoryHw::FlatRead8((r31 + 170));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    stackword15 = r0;
    MemoryHw::FlatWriteRam32((r1 + 748), r0);
    stackword16 = r3;
    MemoryHw::FlatWriteRam32((r1 + 744), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword16), static_cast<uint32_t>(stackword15));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r3 = r26;
    r0 = MemoryHw::FlatRead16(r31);
    r4 = (r0 & 2048);
    r12 = MemoryHw::FlatRead32(r3);
    r12 = MemoryHw::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800BCAD0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r24 = r3;
    r3 = r26;
    r0 = MemoryHw::FlatRead16(r31);
    r4 = (r0 & 2048);
    r12 = MemoryHw::FlatRead32(r3);
    r12 = MemoryHw::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800BCAF0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r23 = r3;
    r22 = 1;
    r3 = r28;
    r12 = r24;
    ctr = r12;
    ctx->lr = 0x800BCB08u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r21 = r3;
    f31.d = MemoryHw::FlatReadFloat32((r2 + -31012));
    r24 = 0x80570000u;
    r25 = 0x80570000u;
    f30.d = MemoryHw::FlatReadFloat32((r2 + -31016));
    goto loc_800BCD04;
}

loc_800BCB20:
{
    r3 = r21;
    // inline leaf 0x800AB410 (9 guest instruction(s))
}

loc_inl13_0x800AB410:
{
    r4 = r3;
    f1.d = MemoryHw::FlatReadFloat32((r3 + 48));
    f0.d = MemoryHw::FlatReadFloat32((r3 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r3 = MemoryHw::FlatRead32((r3 + 200));
}

loc_inl13_0x800AB428:
{
    f0.d = MemoryHw::FlatReadFloat32((r3 + 88));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl13_cont_800AB410:
{
    // end of inlined leaf 0x800AB410
    f27.d = f1.d;
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_800BCB30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800BCCEC;
    }
}

loc_800BCB34:
{
    r3 = r21;
    ctx->lr = 0x800BCB3Cu;
    if constexpr (KnownRegArgsCpuCall<0x800AB340u>(&func_800AB340)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800AB340_A428 = func_800AB340_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB340_A428;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
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
        InvokeDirectCpu<0x800AB340u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f26.d = f1.d;
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_800BCB44:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800BCCEC;
    }
}

loc_800BCB48:
{
    f25.d = MemoryHw::FlatReadFloat32((r2 + -31024));
    r0 = MemoryHw::FlatRead8((r31 + 176));
}

loc_800BCB54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BCB88;
    }
}

loc_800BCB58:
{
    r3 = (r1 + 120);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r21;
    r4 = (r1 + 120);
    ctx->lr = 0x800BCB6Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A7F64u>(&func_800A7F64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800A7F64_AA90 = func_800A7F64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A7F64_AA90);
        r4 = static_cast<uint32_t>(regargs_result_800A7F64_AA90 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A7F64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 120);
    r4 = r3;
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f0, MemoryHw::PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, MemoryHw::PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using MemoryHw::PPC_PsqL)
    PpcSetPairedFprInline(f2, MemoryHw::PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using MemoryHw::PPC_PsqL)
    PpcSetPairedFprInline(f1, MemoryHw::PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
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
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    ctx->fpr[2].d = PPC_PsToScalarInline(ctx->fpr[2].d);
    InvokeDirectCpu<0x80050C24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f26.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
}

loc_800BCB88:
{
    r3 = r26;
    r4 = r21;
    r5 = r31;
    r6 = r27;
    r7 = r22;
    r8 = 0;
    ctx->lr = 0x800BCBA4u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800C694Cu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r22 = 0;
    r3 = (r1 + 304);
    r4 = r21;
    r5 = MemoryHw::FlatRead8((r31 + 175));
    ctx->lr = 0x800BCBB8u;
    if constexpr (KnownRegArgsCpuCall<0x800BCEFCu>(&func_800BCEFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        const auto regargs_result_800BCEFC_C26E = func_800BCEFC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_800BCEFC_C26E);
        r4 = static_cast<uint32_t>(regargs_result_800BCEFC_C26E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800BCEFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 256);
    r4 = MemoryHw::FlatRead8((r31 + 177));
    f1.d = f29.d;
    f2.d = f28.d;
    f3.d = f27.d;
    f4.d = f26.d;
    f5.d = f25.d;
    r5 = (r1 + 304);
    ctx->lr = 0x800BCBDCu;
    if constexpr (KnownRegArgsCpuCall<0x800BCD78u>(&func_800BCD78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[6] = f6;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        const auto regargs_result_800BCD78_CCE2 = func_800BCD78_ra38_be_0_2(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f7.d);
        f1.d = regargs_result_800BCD78_CCE2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800BCD78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
    }
    r3 = (r1 + 108);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 96);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 84);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 96);
    r4 = (r1 + 544);
    r5 = r21;
    r12 = r30;
    ctr = r12;
    ctx->lr = 0x800BCC0Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 84);
    r4 = (r21 + 204);
    r5 = (r1 + 96);
    ctx->lr = 0x800BCC1Cu;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
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
        const auto regargs_result_80051884_DAF3 = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_DAF3);
        r4 = static_cast<uint32_t>(regargs_result_80051884_DAF3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    }
    r3 = (r1 + 84);
    ctx->lr = 0x800BCC24u;
    if constexpr (KnownRegArgsCpuCall<0x800B5A48u>(&func_800B5A48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800B5A48_E228 = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_E228;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B5A48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_800BCC28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800BCC38;
    }
}

loc_800BCC2C:
{
    r3 = (r1 + 84);
    r4 = (r1 + 132);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800BCC38:
{
    r3 = (r1 + 108);
    r4 = (r1 + 96);
    r5 = (r1 + 84);
    ctx->lr = 0x800BCC48u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
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
        const auto regargs_result_80051884_E944 = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_E944);
        r4 = static_cast<uint32_t>(regargs_result_80051884_E944 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    }
    r3 = (r21 + 204);
    r4 = (r1 + 108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 72);
    r4 = (r21 + 172);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryHw::FlatRead32(r4);
    r0 = MemoryHw::FlatRead32((r4 + 4));
    MemoryHw::FlatWriteRam32(r3, r5);
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryHw::FlatRead32((r4 + 8));
    MemoryHw::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    f0.d = MemoryHw::FlatReadFloat32((r1 + 116));
    MemoryHw::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 104));
    MemoryHw::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 92));
    MemoryHw::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 80));
    MemoryHw::FlatWriteRamFloat32((r1 + 20), f0.d);
    r3 = (r1 + 208);
    f1.d = MemoryHw::FlatReadFloat32((r1 + 108));
    f2.d = MemoryHw::FlatReadFloat32((r1 + 96));
    f3.d = MemoryHw::FlatReadFloat32((r1 + 84));
    f4.d = MemoryHw::FlatReadFloat32((r1 + 72));
    f5.d = MemoryHw::FlatReadFloat32((r1 + 112));
    f6.d = MemoryHw::FlatReadFloat32((r1 + 100));
    f7.d = MemoryHw::FlatReadFloat32((r1 + 88));
    f8.d = MemoryHw::FlatReadFloat32((r1 + 76));
    // inline leaf 0x80077E54 (17 guest instruction(s))
    f11.d = MemoryHw::FlatReadFloat32((r1 + 8));
    f10.d = MemoryHw::FlatReadFloat32((r1 + 12));
    f9.d = MemoryHw::FlatReadFloat32((r1 + 16));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 20));
    MemoryHw::FlatWriteRamFloat32(r3, f1.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 12), f4.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 16), f5.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 20), f6.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 24), f7.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 28), f8.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 32), f11.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 36), f10.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 40), f9.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x80077E54
    r3 = (r1 + 160);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 160);
    r4 = (r1 + 208);
    r5 = (r1 + 256);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 160);
    r4 = (r24 + -208);
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800BBE8Cu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryHw::FlatRead8((r31 + 173));
}

loc_800BCCD8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800BCCEC;
    }
}

loc_800BCCDC:
{
    r3 = (r1 + 160);
    r4 = (r25 + -160);
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800BBE8Cu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_800BCCEC:
{
    r3 = r28;
    r4 = r21;
    r12 = r23;
    ctr = r12;
    ctx->lr = 0x800BCD00u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r21 = r3;
}

loc_800BCD04:
{
}

loc_800BCD08:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_800BCB20;
    }
}

loc_800BCD0C:
{
    r0 = 904;
    addr_psqx_800BCD10_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BCD10_loc_0));
    guest_range_3 = MemoryHw::ResolveRangeHost((r1 + 800), 0, 120u, true, false);
    f31.d = MemoryHw::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 896));
    r0 = 888;
    addr_psqx_800BCD1C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BCD1C_loc_0));
    f30.d = MemoryHw::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 880));
    r0 = 872;
    addr_psqx_800BCD28_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BCD28_loc_0));
    f29.d = MemoryHw::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 864));
    r0 = 856;
    addr_psqx_800BCD34_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BCD34_loc_0));
    f28.d = MemoryHw::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 848));
    r0 = 840;
    addr_psqx_800BCD40_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BCD40_loc_0));
    f27.d = MemoryHw::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 832));
    r0 = 824;
    addr_psqx_800BCD4C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BCD4C_loc_0));
    f26.d = MemoryHw::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 816));
    r0 = 808;
    addr_psqx_800BCD58_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BCD58_loc_0));
    f25.d = MemoryHw::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 800));
    r11 = (r1 + 800);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryHw::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryHw::ReadResolved32(guest_range_3, 116u, (r1 + 916));
    ctx->lr = r0;
    r1 = (r1 + 912);
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
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE00FFFF fpr_write=0xFE00FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BC48C func_800BC48C preserves=true fpr_mask=0x00000000
