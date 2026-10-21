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

extern "C" void func_800BD298(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800BDB38_loc_0 = 0;
    uint32_t addr_psqx_800BDB44_loc_0 = 0;
    uint32_t addr_psqx_800BDB50_loc_0 = 0;
    uint32_t addr_psqx_800BDB5C_loc_0 = 0;
    uint32_t addr_psqx_800BDB68_loc_0 = 0;
    uint32_t addr_psqx_800BDB74_loc_0 = 0;
    uint32_t addr_psqx_800BDB80_loc_0 = 0;
    uint32_t addr_psqx_800BDB8C_loc_0 = 0;
    uint32_t addr_psqx_800BDB98_loc_0 = 0;
    uint32_t addr_psqx_800BDBA4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
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
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
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

    MKW_GUEST_ENTER(0x800BD298u);
    goto loc_800BD298;

loc_800BD298:
{
    guest_range_2 = MemoryHw::ResolveRangeHost((r1 + -928), 0, 936u, false, true);
    MemoryHw::WriteResolved32(guest_range_2, 0u, (r1 + -928), r1);
    r1 = (r1 + -928);
    r0 = ctx->lr;
    MemoryHw::WriteResolved32(guest_range_2, 932u, (r1 + 932), r0);
    MemoryHw::WriteResolvedFloat64(guest_range_2, 912u, (r1 + 912), f31.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 920);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 896u, (r1 + 896), f30.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 904);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 880u, (r1 + 880), f29.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 888);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 864u, (r1 + 864), f28.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 872);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 848u, (r1 + 848), f27.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 856);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 832u, (r1 + 832), f26.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 840);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 816u, (r1 + 816), f25.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 824);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 800u, (r1 + 800), f24.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 808);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 784u, (r1 + 784), f23.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 792);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryHw::WriteResolvedFloat64(guest_range_2, 768u, (r1 + 768), f22.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 776);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    r11 = (r1 + 768);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
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

loc_800BD32C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD344;
    }
}

loc_800BD330:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BD33C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD344;
    }
}

loc_800BD340:
{
    r10 = 0;
}

loc_800BD344:
{
}

loc_800BD348:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BD360;
    }
}

loc_800BD34C:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BD358:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD360;
    }
}

loc_800BD35C:
{
    r9 = 0;
}

loc_800BD360:
{
}

loc_800BD364:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BD378;
    }
}

loc_800BD368:
{
    r0 = (r11 + 1073741824);
}

loc_800BD370:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD378;
    }
}

loc_800BD374:
{
    r8 = 0;
}

loc_800BD378:
{
}

loc_800BD37C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BD394;
    }
}

loc_800BD380:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BD38C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD394;
    }
}

loc_800BD390:
{
    r7 = 0;
}

loc_800BD394:
{
}

loc_800BD398:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BD3B0;
    }
}

loc_800BD39C:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BD3A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD3B0;
    }
}

loc_800BD3AC:
{
    r6 = 0;
}

loc_800BD3B0:
{
}

loc_800BD3B4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BD3CC;
    }
}

loc_800BD3B8:
{
    r3 = (r5 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BD3C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD3CC;
    }
}

loc_800BD3C8:
{
    r4 = 0;
}

loc_800BD3CC:
{
}

loc_800BD3D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BD3F4;
    }
}

loc_800BD3D4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 512;
    r5 = 0x80590000u;
    r5 = (r5 + 18560);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BD3F4u;
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

loc_800BD3F4:
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

loc_800BD42C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD444;
    }
}

loc_800BD430:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BD43C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD444;
    }
}

loc_800BD440:
{
    r10 = 0;
}

loc_800BD444:
{
}

loc_800BD448:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BD460;
    }
}

loc_800BD44C:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BD458:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD460;
    }
}

loc_800BD45C:
{
    r9 = 0;
}

loc_800BD460:
{
}

loc_800BD464:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BD478;
    }
}

loc_800BD468:
{
    r0 = (r11 + 1073741824);
}

loc_800BD470:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD478;
    }
}

loc_800BD474:
{
    r8 = 0;
}

loc_800BD478:
{
}

loc_800BD47C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BD494;
    }
}

loc_800BD480:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BD48C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD494;
    }
}

loc_800BD490:
{
    r7 = 0;
}

loc_800BD494:
{
}

loc_800BD498:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BD4B0;
    }
}

loc_800BD49C:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BD4A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD4B0;
    }
}

loc_800BD4AC:
{
    r5 = 0;
}

loc_800BD4B0:
{
}

loc_800BD4B4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BD4CC;
    }
}

loc_800BD4B8:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BD4C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD4CC;
    }
}

loc_800BD4C8:
{
    r4 = 0;
}

loc_800BD4CC:
{
}

loc_800BD4D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BD4F0;
    }
}

loc_800BD4D4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 516;
    r5 = 0x80590000u;
    r5 = (r5 + 18612);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BD4F0u;
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

loc_800BD4F0:
{
    r3 = MemoryHw::FlatRead32((r28 + 36));
    ctx->lr = 0x800BD4F8u;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_3763 = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_3763;
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

loc_800BD520:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD538;
    }
}

loc_800BD524:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800BD530:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD538;
    }
}

loc_800BD534:
{
    r10 = 0;
}

loc_800BD538:
{
}

loc_800BD53C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BD554;
    }
}

loc_800BD540:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800BD54C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD554;
    }
}

loc_800BD550:
{
    r9 = 0;
}

loc_800BD554:
{
}

loc_800BD558:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BD56C;
    }
}

loc_800BD55C:
{
    r0 = (r11 + 1073741824);
}

loc_800BD564:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD56C;
    }
}

loc_800BD568:
{
    r8 = 0;
}

loc_800BD56C:
{
}

loc_800BD570:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BD588;
    }
}

loc_800BD574:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800BD580:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD588;
    }
}

loc_800BD584:
{
    r7 = 0;
}

loc_800BD588:
{
}

loc_800BD58C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BD5A4;
    }
}

loc_800BD590:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800BD59C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD5A4;
    }
}

loc_800BD5A0:
{
    r6 = 0;
}

loc_800BD5A4:
{
}

loc_800BD5A8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BD5C0;
    }
}

loc_800BD5AC:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BD5B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BD5C0;
    }
}

loc_800BD5BC:
{
    r5 = 0;
}

loc_800BD5C0:
{
}

loc_800BD5C4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BD5E8;
    }
}

loc_800BD5C8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 518;
    r5 = 0x80590000u;
    r5 = (r5 + 18672);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BD5E8u;
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

loc_800BD5E8:
{
    r3 = (r1 + 472);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r27;
    r4 = (r1 + 472);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B7E14u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 520);
    r4 = (r1 + 472);
    r5 = r28;
    ctx->lr = 0x800BD60Cu;
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
        const auto regargs_result_800C8F74_4851 = func_800C8F74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800C8F74_4851);
        r4 = static_cast<uint32_t>(regargs_result_800C8F74_4851 >> 32);
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
    ctx->lr = 0x800BD624u;
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
    r3 = (r1 + 424);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 376);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r28;
    r4 = (r1 + 376);
    ctx->lr = 0x800BD654u;
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
    InvokeDirectCpu<0x800AE3C4u>(ctx);
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
    r3 = (r1 + 424);
    r4 = (r1 + 472);
    r5 = (r1 + 376);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = 0x80690000u;
    r3 = (r3 + 28856);
    // inline leaf 0x800515D4 (1 guest instruction(s))
    // end of inlined leaf 0x800515D4
    r4 = 0;
    ctx->lr = 0x800BD678u;
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
    r3 = (r1 + 424);
    r4 = 0;
    // inline leaf 0x8009CDC8 (22 guest instruction(s))
}

loc_inl5_0x8009CDC8:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r4 = (r3 + r4);
    // psq_load w=1 quant=0 (using MemoryHw::PPC_PsqL)
    PpcSetPairedFprInline(f0, MemoryHw::PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using MemoryHw::PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 16);
    PpcSetPairedFprInline(f1, MemoryHw::PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryHw::FlatReadFloat32((r4 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d) - PPC_PsToScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl5_0x8009CDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8009CDF8:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    r6 = 0x80790000u;
    r6 = (r6 + 14232);
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    PpcSetPairedFprInline(f3, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls1Inline(PPC_PsFromScalarInline(f0.d), f3.d));
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f3.d));
    f0.d = PpcFmulsInline(f2.d, PPC_PsToScalarInline(f0.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_inl5_cont_8009CDC8;
}

loc_inl5_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl5_cont_8009CDC8:
{
    // end of inlined leaf 0x8009CDC8
    f27.d = f1.d;
    r3 = (r1 + 424);
    r4 = 1;
    // inline leaf 0x8009CDC8 (22 guest instruction(s))
}

loc_inl6_0x8009CDC8:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r4 = (r3 + r4);
    // psq_load w=1 quant=0 (using MemoryHw::PPC_PsqL)
    PpcSetPairedFprInline(f0, MemoryHw::PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using MemoryHw::PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 16);
    PpcSetPairedFprInline(f1, MemoryHw::PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryHw::FlatReadFloat32((r4 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d) - PPC_PsToScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl6_0x8009CDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8009CDF8:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    r6 = 0x80790000u;
    r6 = (r6 + 14232);
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    PpcSetPairedFprInline(f3, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls1Inline(PPC_PsFromScalarInline(f0.d), f3.d));
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f3.d));
    f0.d = PpcFmulsInline(f2.d, PPC_PsToScalarInline(f0.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_inl6_cont_8009CDC8;
}

loc_inl6_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl6_cont_8009CDC8:
{
    // end of inlined leaf 0x8009CDC8
    f28.d = f1.d;
    r3 = (r1 + 424);
    r4 = 2;
    // inline leaf 0x8009CDC8 (22 guest instruction(s))
}

loc_inl7_0x8009CDC8:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r4 = (r3 + r4);
    // psq_load w=1 quant=0 (using MemoryHw::PPC_PsqL)
    PpcSetPairedFprInline(f0, MemoryHw::PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using MemoryHw::PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 16);
    PpcSetPairedFprInline(f1, MemoryHw::PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryHw::FlatReadFloat32((r4 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d) - PPC_PsToScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl7_0x8009CDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8009CDF8:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    r6 = 0x80790000u;
    r6 = (r6 + 14232);
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    PpcSetPairedFprInline(f3, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls1Inline(PPC_PsFromScalarInline(f0.d), f3.d));
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f3.d));
    f0.d = PpcFmulsInline(f2.d, PPC_PsToScalarInline(f0.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_inl7_cont_8009CDC8;
}

loc_inl7_return:
{
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl7_cont_8009CDC8:
{
    // end of inlined leaf 0x8009CDC8
    f29.d = f1.d;
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800B5BA4u>(ctx);
    r3 = ctx->gpr[3];
    r24 = r3;
    f25.d = MemoryHw::FlatReadFloat32((r2 + -31024));
    r25 = 0x80690000u;
    goto loc_800BD6DC;
}

loc_800BD6C0:
{
    r3 = (r24 + 204);
    r4 = (r25 + 28844);
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

loc_800BD6DC:
{
}

loc_800BD6E0:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_800BD6F0;
    }
}

loc_800BD6E4:
{
    f0.d = MemoryHw::FlatReadFloat32((r24 + 204));
    SetCRFloatResident(cr, 0, f0.d, f25.d);
}

loc_800BD6EC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800BD6C0;
    }
}

loc_800BD6F0:
{
    r0 = MemoryHw::FlatRead8((r31 + 169));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f2.d = MemoryHw::FlatReadFloat64((r2 + -31008));
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryHw::FlatWriteRam32((r1 + 716), r0);
    r3 = 1127219200;
    stackword13 = r3;
    MemoryHw::FlatWriteRam32((r1 + 712), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = MemoryHw::FlatReadFloat32((r2 + -31020));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r0 = MemoryHw::FlatRead8((r31 + 170));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    stackword14 = r0;
    MemoryHw::FlatWriteRam32((r1 + 724), r0);
    stackword15 = r3;
    MemoryHw::FlatWriteRam32((r1 + 720), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword15), static_cast<uint32_t>(stackword14));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r3 = r26;
    r0 = MemoryHw::FlatRead16(r31);
    r4 = (r0 & 2048);
    r12 = MemoryHw::FlatRead32(r3);
    r12 = MemoryHw::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800BD758u;
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
    ctx->lr = 0x800BD778u;
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
    ctx->lr = 0x800BD790u;
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
    f31.d = MemoryHw::FlatReadFloat32((r2 + -31012));
    r25 = 0x80690000u;
    f30.d = MemoryHw::FlatReadFloat32((r2 + -31016));
    goto loc_800BDB2C;
}

loc_800BD7A4:
{
    r3 = r24;
    // inline leaf 0x800AB410 (9 guest instruction(s))
}

loc_inl8_0x800AB410:
{
    r4 = r3;
    f1.d = MemoryHw::FlatReadFloat32((r3 + 48));
    f0.d = MemoryHw::FlatReadFloat32((r3 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r3 = MemoryHw::FlatRead32((r3 + 200));
}

loc_inl8_0x800AB428:
{
    f0.d = MemoryHw::FlatReadFloat32((r3 + 88));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl8_cont_800AB410:
{
    // end of inlined leaf 0x800AB410
    f24.d = f1.d;
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_800BD7B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800BDB14;
    }
}

loc_800BD7B8:
{
    r3 = r24;
    ctx->lr = 0x800BD7C0u;
    if constexpr (KnownRegArgsCpuCall<0x800AB340u>(&func_800AB340)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800AB340_97A8 = func_800AB340_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB340_97A8;
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
    f23.d = f1.d;
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_800BD7C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800BDB14;
    }
}

loc_800BD7CC:
{
    f22.d = MemoryHw::FlatReadFloat32((r2 + -31024));
    r0 = MemoryHw::FlatRead8((r31 + 176));
}

loc_800BD7D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BD80C;
    }
}

loc_800BD7DC:
{
    r3 = (r1 + 168);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r24;
    r4 = (r1 + 168);
    ctx->lr = 0x800BD7F0u;
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
        const auto regargs_result_800A7F64_9E10 = func_800A7F64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A7F64_9E10);
        r4 = static_cast<uint32_t>(regargs_result_800A7F64_9E10 >> 32);
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
    r3 = (r1 + 168);
    r4 = r3;
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f0, MemoryHw::PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using MemoryHw::PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 4);
    PpcSetPairedFprInline(f1, MemoryHw::PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_4));
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
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
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
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
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f23.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f0.d));
}

loc_800BD80C:
{
    r3 = r26;
    r4 = r24;
    r5 = r31;
    r6 = r27;
    r7 = r22;
    r8 = 0;
    ctx->lr = 0x800BD828u;
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
    r3 = (r1 + 328);
    r4 = r24;
    r5 = MemoryHw::FlatRead8((r31 + 175));
    ctx->lr = 0x800BD83Cu;
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
        const auto regargs_result_800BCEFC_B67E = func_800BCEFC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_800BCEFC_B67E);
        r4 = static_cast<uint32_t>(regargs_result_800BCEFC_B67E >> 32);
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
    r3 = (r1 + 280);
    r4 = MemoryHw::FlatRead8((r31 + 177));
    f1.d = f26.d;
    f2.d = f25.d;
    f3.d = f24.d;
    f4.d = f23.d;
    f5.d = f22.d;
    r5 = (r1 + 328);
    ctx->lr = 0x800BD860u;
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
        const auto regargs_result_800BCD78_C0F2 = func_800BCD78_ra38_be_0_2(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f7.d);
        f1.d = regargs_result_800BCD78_C0F2;
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
    r3 = (r1 + 156);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 144);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 132);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 120);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 120);
    r4 = (r1 + 520);
    r5 = r24;
    r12 = r30;
    ctr = r12;
    ctx->lr = 0x800BD898u;
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
    r3 = (r1 + 120);
    r4 = (r1 + 424);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    r3 = (r1 + 144);
    r4 = (r1 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 144);
    ctx->lr = 0x800BD8BCu;
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
        const auto regargs_result_800B5A48_D02C = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_D02C;
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
    r3 = (r1 + 36);
    f1.d = MemoryHw::FlatReadFloat32((r1 + 124));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 120));
    f2.d = (-(f0.d));
    f3.d = MemoryHw::FlatReadFloat32((r2 + -31000));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryHw::FlatWriteRamFloat32(r3, f1.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 156);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 156);
    ctx->lr = 0x800BD8E8u;
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
        const auto regargs_result_800B5A48_D7DD = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_D7DD;
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

loc_800BD8EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BD930;
    }
}

loc_800BD8F0:
{
    r3 = (r1 + 24);
    f3.d = MemoryHw::FlatReadFloat32((r1 + 120));
    f0.d = (-(f3.d));
    f2.d = MemoryHw::FlatReadFloat32((r1 + 128));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = MemoryHw::FlatReadFloat32((r1 + 124));
    f0.d = (-(f4.d));
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
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
    goto loc_800BD96C;
}

loc_800BD930:
{
    r3 = (r1 + 156);
    r4 = (r1 + 120);
    r5 = (r24 + 204);
    ctx->lr = 0x800BD940u;
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
        const auto regargs_result_80051884_E1CE = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_E1CE);
        r4 = static_cast<uint32_t>(regargs_result_80051884_E1CE >> 32);
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
    r3 = (r1 + 156);
    ctx->lr = 0x800BD948u;
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
        const auto regargs_result_800B5A48_E904 = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_E904;
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

loc_800BD94C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800BD95C;
    }
}

loc_800BD950:
{
    r3 = (r1 + 156);
    r4 = (r25 + 28808);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800BD95C:
{
    r3 = (r1 + 132);
    r4 = (r1 + 156);
    r5 = (r1 + 120);
    ctx->lr = 0x800BD96Cu;
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
        const auto regargs_result_80051884_F026 = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_F026);
        r4 = static_cast<uint32_t>(regargs_result_80051884_F026 >> 32);
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
}

loc_800BD96C:
{
    r3 = (r1 + 132);
    ctx->lr = 0x800BD974u;
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
        const auto regargs_result_800B5A48_F76F = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_F76F;
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
    r3 = (r24 + 204);
    r4 = (r1 + 132);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 108);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 108);
    r4 = (r1 + 424);
    r5 = (r24 + 172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 164));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    MemoryHw::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 152));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    MemoryHw::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 140));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    MemoryHw::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 116));
    MemoryHw::FlatWriteRamFloat32((r1 + 20), f0.d);
    r3 = (r1 + 232);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 156));
    f1.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 144));
    f2.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 132));
    f3.d = PpcFmulsInline(f29.d, f0.d);
    f4.d = MemoryHw::FlatReadFloat32((r1 + 108));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 160));
    f5.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 148));
    f6.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r1 + 136));
    f7.d = PpcFmulsInline(f29.d, f0.d);
    f8.d = MemoryHw::FlatReadFloat32((r1 + 112));
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
    r3 = (r1 + 184);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 184);
    r4 = (r1 + 232);
    r5 = (r1 + 280);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 96);
    guest_range_3 = MemoryHw::ResolveRangeHost((r1 + 184), 0, 48u, true, false);
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 196));
    f2.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 28u, (r1 + 212));
    f3.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 44u, (r1 + 228));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    guest_range_4 = MemoryHw::ResolveRangeHost((r3 + -24), 0, 36u, false, true);
    if (!MemoryHw::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryHw::WriteResolvedFloat32(guest_range_4, 24u, r3, f1.d);
        MemoryHw::WriteResolvedFloat32(guest_range_4, 28u, (r3 + 4), f2.d);
    }
    MemoryHw::WriteResolvedFloat32(guest_range_4, 32u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 84);
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 184));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 188));
        }
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 200));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 204));
        }
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 216));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 36u, (r1 + 220));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryHw::WriteResolvedPair32(guest_range_4, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryHw::WriteResolvedFloat32(guest_range_4, 12u, r3, f1.d);
        MemoryHw::WriteResolvedFloat32(guest_range_4, 16u, (r3 + 4), f2.d);
    }
    MemoryHw::WriteResolvedFloat32(guest_range_4, 20u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 72);
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 184));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 188));
        }
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 200));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 204));
        }
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 216));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_3, 36u, (r1 + 220));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryHw::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryHw::WriteResolvedFloat32(guest_range_4, 0u, r3, f1.d);
        MemoryHw::WriteResolvedFloat32(guest_range_4, 4u, (r3 + 4), f2.d);
    }
    MemoryHw::WriteResolvedFloat32(guest_range_4, 8u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 96);
    r4 = (r1 + 84);
    r5 = (r1 + 72);
    r6 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800BC0F8u>(ctx);
    r0 = MemoryHw::FlatRead8((r31 + 173));
}

loc_800BDAA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800BDB14;
    }
}

loc_800BDAA8:
{
    r3 = (r1 + 60);
    guest_range_5 = MemoryHw::ResolveRangeHost((r1 + 188), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 0u, (r1 + 188));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 4u, (r1 + 192));
        }
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 16u, (r1 + 204));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 20u, (r1 + 208));
        }
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 32u, (r1 + 220));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 36u, (r1 + 224));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryHw::FlatWriteRamFloat32(r3, f1.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 48);
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 0u, (r1 + 188));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 4u, (r1 + 192));
        }
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 16u, (r1 + 204));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 20u, (r1 + 208));
        }
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 32u, (r1 + 220));
            f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 36u, (r1 + 224));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryHw::FlatWriteRamFloat32(r3, f1.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryHw::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 96);
    r4 = (r1 + 60);
    r5 = (r1 + 48);
    r6 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800BC0F8u>(ctx);
}

loc_800BDB14:
{
    r3 = r28;
    r4 = r24;
    r12 = r23;
    ctr = r12;
    ctx->lr = 0x800BDB28u;
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
}

loc_800BDB2C:
{
}

loc_800BDB30:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_800BD7A4;
    }
}

loc_800BDB34:
{
    r0 = 920;
    addr_psqx_800BDB38_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BDB38_loc_0));
    guest_range_6 = MemoryHw::ResolveRangeHost((r1 + 768), 0, 168u, true, false);
    f31.d = MemoryHw::ReadResolvedFloat64(guest_range_6, 144u, (r1 + 912));
    r0 = 904;
    addr_psqx_800BDB44_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BDB44_loc_0));
    f30.d = MemoryHw::ReadResolvedFloat64(guest_range_6, 128u, (r1 + 896));
    r0 = 888;
    addr_psqx_800BDB50_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BDB50_loc_0));
    f29.d = MemoryHw::ReadResolvedFloat64(guest_range_6, 112u, (r1 + 880));
    r0 = 872;
    addr_psqx_800BDB5C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BDB5C_loc_0));
    f28.d = MemoryHw::ReadResolvedFloat64(guest_range_6, 96u, (r1 + 864));
    r0 = 856;
    addr_psqx_800BDB68_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BDB68_loc_0));
    f27.d = MemoryHw::ReadResolvedFloat64(guest_range_6, 80u, (r1 + 848));
    r0 = 840;
    addr_psqx_800BDB74_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BDB74_loc_0));
    f26.d = MemoryHw::ReadResolvedFloat64(guest_range_6, 64u, (r1 + 832));
    r0 = 824;
    addr_psqx_800BDB80_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BDB80_loc_0));
    f25.d = MemoryHw::ReadResolvedFloat64(guest_range_6, 48u, (r1 + 816));
    r0 = 808;
    addr_psqx_800BDB8C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BDB8C_loc_0));
    f24.d = MemoryHw::ReadResolvedFloat64(guest_range_6, 32u, (r1 + 800));
    r0 = 792;
    addr_psqx_800BDB98_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BDB98_loc_0));
    f23.d = MemoryHw::ReadResolvedFloat64(guest_range_6, 16u, (r1 + 784));
    r0 = 776;
    addr_psqx_800BDBA4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BDBA4_loc_0));
    f22.d = MemoryHw::ReadResolvedFloat64(guest_range_6, 0u, (r1 + 768));
    r11 = (r1 + 768);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryHw::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryHw::ReadResolved32(guest_range_6, 164u, (r1 + 932));
    ctx->lr = r0;
    r1 = (r1 + 928);
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
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFC0FFFF fpr_write=0xFFC0FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BD298 func_800BD298 preserves=true fpr_mask=0x00000000
