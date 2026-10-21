#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8A6C(CpuContext* ctx);
extern "C" uint32_t func_800A8A6C_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_800A9A18(CpuContext* ctx);
extern "C" uint64_t func_800A9A18_ra38_fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_800AA014(CpuContext* ctx);
extern "C" uint64_t func_800AA014_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_800C9E30(CpuContext* ctx);
extern "C" double func_800C9E30_ra0_2_0_2(CpuContext*, double);
extern "C" void func_80464590(CpuContext* ctx);
extern "C" uint64_t func_80464590_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800C9E30_statefree(PPC_FPR, PPC_FPR);

extern "C" uint64_t func_800CC614_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800CCCB8_loc_0 = 0;
    uint32_t addr_psqx_800CCCC4_loc_0 = 0;
    uint32_t addr_psqx_800CCCD0_loc_0 = 0;
    uint32_t addr_psqx_800CCCDC_loc_0 = 0;
    uint32_t addr_psqx_800CCCE8_loc_0 = 0;
    uint32_t addr_psqx_800CCCF4_loc_0 = 0;
    uint32_t addr_psqx_800CCD00_loc_0 = 0;
    uint32_t addr_psqx_800CCD0C_loc_0 = 0;
    uint32_t addr_psqx_800CCD18_loc_0 = 0;
    uint32_t addr_psqx_800CCD24_loc_0 = 0;
    uint32_t addr_psqx_800CCD30_loc_0 = 0;
    uint32_t addr_psqx_800CCD3C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword26 = 0;
    uint32_t stackword27 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f20 = ctx->fpr[20];
    PPC_FPR f21 = ctx->fpr[21];
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
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800CC614u);
    goto loc_800CC614;

loc_800CC614:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -352), 0, 360u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 356u, (r1 + 356), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 336u, (r1 + 336), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 320u, (r1 + 320), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 304u, (r1 + 304), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 288u, (r1 + 288), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 272u, (r1 + 272), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    r11 = (r1 + 160);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r22 = r3;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r31 = r7;
    r26 = r8;
    r27 = r9;
    f22.d = f1.d;
    r28 = r10;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800CC6D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC6E8;
    }
}

loc_800CC6D4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CC6E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC6E8;
    }
}

loc_800CC6E4:
{
    r10 = 0;
}

loc_800CC6E8:
{
}

loc_800CC6EC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800CC704;
    }
}

loc_800CC6F0:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CC6FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC704;
    }
}

loc_800CC700:
{
    r9 = 0;
}

loc_800CC704:
{
}

loc_800CC708:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CC71C;
    }
}

loc_800CC70C:
{
    r0 = (r11 + 1073741824);
}

loc_800CC714:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC71C;
    }
}

loc_800CC718:
{
    r8 = 0;
}

loc_800CC71C:
{
}

loc_800CC720:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CC738;
    }
}

loc_800CC724:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CC730:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC738;
    }
}

loc_800CC734:
{
    r7 = 0;
}

loc_800CC738:
{
}

loc_800CC73C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CC754;
    }
}

loc_800CC740:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CC74C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC754;
    }
}

loc_800CC750:
{
    r6 = 0;
}

loc_800CC754:
{
}

loc_800CC758:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CC770;
    }
}

loc_800CC75C:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CC768:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC770;
    }
}

loc_800CC76C:
{
    r5 = 0;
}

loc_800CC770:
{
}

loc_800CC774:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CC798;
    }
}

loc_800CC778:
{
    r3 = 0x80590000u;
    r3 = (r3 + 21920);
    r4 = 42;
    r5 = 0x80590000u;
    r5 = (r5 + 21932);
    r6 = r23;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CC798u;
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

loc_800CC798:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r24 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800CC7BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC7D4;
    }
}

loc_800CC7C0:
{
    r3 = (r24 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CC7CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC7D4;
    }
}

loc_800CC7D0:
{
    r9 = 0;
}

loc_800CC7D4:
{
}

loc_800CC7D8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CC7F0;
    }
}

loc_800CC7DC:
{
    r3 = (r24 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CC7E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC7F0;
    }
}

loc_800CC7EC:
{
    r8 = 0;
}

loc_800CC7F0:
{
}

loc_800CC7F4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CC808;
    }
}

loc_800CC7F8:
{
    r0 = (r10 + 1073741824);
}

loc_800CC800:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC808;
    }
}

loc_800CC804:
{
    r7 = 0;
}

loc_800CC808:
{
}

loc_800CC80C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CC824;
    }
}

loc_800CC810:
{
    r3 = (r24 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CC81C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC824;
    }
}

loc_800CC820:
{
    r6 = 0;
}

loc_800CC824:
{
}

loc_800CC828:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CC840;
    }
}

loc_800CC82C:
{
    r3 = (r24 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CC838:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC840;
    }
}

loc_800CC83C:
{
    r5 = 0;
}

loc_800CC840:
{
}

loc_800CC844:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CC85C;
    }
}

loc_800CC848:
{
    r3 = (r24 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CC854:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC85C;
    }
}

loc_800CC858:
{
    r4 = 0;
}

loc_800CC85C:
{
}

loc_800CC860:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CC884;
    }
}

loc_800CC864:
{
    r3 = 0x80590000u;
    r3 = (r3 + 21920);
    r4 = 43;
    r5 = 0x80590000u;
    r5 = (r5 + 21984);
    r6 = r24;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CC884u;
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

loc_800CC884:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r26 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800CC8A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC8C0;
    }
}

loc_800CC8AC:
{
    r3 = (r26 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CC8B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC8C0;
    }
}

loc_800CC8BC:
{
    r9 = 0;
}

loc_800CC8C0:
{
}

loc_800CC8C4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CC8DC;
    }
}

loc_800CC8C8:
{
    r3 = (r26 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CC8D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC8DC;
    }
}

loc_800CC8D8:
{
    r8 = 0;
}

loc_800CC8DC:
{
}

loc_800CC8E0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CC8F4;
    }
}

loc_800CC8E4:
{
    r0 = (r10 + 1073741824);
}

loc_800CC8EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC8F4;
    }
}

loc_800CC8F0:
{
    r7 = 0;
}

loc_800CC8F4:
{
}

loc_800CC8F8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CC910;
    }
}

loc_800CC8FC:
{
    r3 = (r26 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CC908:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC910;
    }
}

loc_800CC90C:
{
    r6 = 0;
}

loc_800CC910:
{
}

loc_800CC914:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CC92C;
    }
}

loc_800CC918:
{
    r3 = (r26 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CC924:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC92C;
    }
}

loc_800CC928:
{
    r5 = 0;
}

loc_800CC92C:
{
}

loc_800CC930:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CC948;
    }
}

loc_800CC934:
{
    r3 = (r26 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CC940:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CC948;
    }
}

loc_800CC944:
{
    r4 = 0;
}

loc_800CC948:
{
}

loc_800CC94C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CC970;
    }
}

loc_800CC950:
{
    r3 = 0x80590000u;
    r3 = (r3 + 21920);
    r4 = 44;
    r5 = 0x80590000u;
    r5 = (r5 + 22036);
    r6 = r26;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CC970u;
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

loc_800CC970:
{
}

loc_800CC974:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(1))) {
        goto loc_800CCCB4;
    }
}

loc_800CC978:
{
    f1.d = MemoryInline::FlatReadFloat32(r26);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_435C = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_435C[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_435C[1]);
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
        ctx->fpr[20] = f20;
        ctx->fpr[21] = f21;
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
        InvokeDirectCpu<0x800C9E30u>(ctx);
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
        f20 = ctx->fpr[20];
        f21 = ctx->fpr[21];
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
    }
    f26.d = MemoryInline::FlatReadFloat32((r2 + -30704));
    SetCRFloatResident(cr, 0, f1.d, f26.d);
}

loc_800CC988:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CC990;
    }
}

loc_800CC98C:
{
    f26.d = MemoryInline::FlatReadFloat32(r26);
}

loc_800CC990:
{
    r0 = (r31 & 33554432);
}

loc_800CC998:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CC9A4;
    }
}

loc_800CC99C:
{
    f25.d = f26.d;
    goto loc_800CC9BC;
}

loc_800CC9A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 16));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4EDB = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_4EDB[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4EDB[1]);
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
        ctx->fpr[20] = f20;
        ctx->fpr[21] = f21;
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
        InvokeDirectCpu<0x800C9E30u>(ctx);
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
        f20 = ctx->fpr[20];
        f21 = ctx->fpr[21];
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
    }
    f25.d = MemoryInline::FlatReadFloat32((r2 + -30704));
    SetCRFloatResident(cr, 0, f1.d, f25.d);
}

loc_800CC9B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CC9BC;
    }
}

loc_800CC9B8:
{
    f25.d = MemoryInline::FlatReadFloat32((r26 + 16));
}

loc_800CC9BC:
{
    f24.d = MemoryInline::FlatReadFloat32((r2 + -30700));
    f23.d = f24.d;
    r0 = (r31 & 262144);
}

loc_800CC9CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CC9D8;
    }
}

loc_800CC9D0:
{
    f27.d = MemoryInline::FlatReadFloat32((r26 + 8));
    goto loc_800CC9F0;
}

loc_800CC9D8:
{
    r3 = (r23 + 236);
    ctx->lr = 0x800CC9E0u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_5A9C = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_5A9C;
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30692));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30696));
    f27.d = PpcFmulsInline(f0.d, f1.d);
}

loc_800CC9F0:
{
    r30 = (r31 & 131072);
}

loc_800CC9F8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800CCA94;
    }
}

loc_800CC9FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30688));
    ctx->lr = 0x800CCA10u;
    if constexpr (KnownRegArgsCpuCall<0x80464590u>(&func_80464590)) {
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80464590_612A = func_80464590_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80464590_612A);
        r4 = static_cast<uint32_t>(regargs_result_80464590_612A >> 32);
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80464590u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30684));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800CCA18:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800CCA34;
    }
}

loc_800CCA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30680));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800CCA24:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800CCA34;
    }
}

loc_800CCA28:
{
    r3 = MemoryInline::FlatRead16((r23 + 50));
}

loc_800CCA30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800CCA64;
    }
}

loc_800CCA34:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = MemoryInline::FlatRead16((r23 + 50));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30664));
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r0 = 1127219200;
    stackword14 = r0;
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword14), static_cast<uint32_t>(stackword13));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    goto loc_800CCA94;
}

loc_800CCA64:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = (r3 + -1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30656));
    r0 = (r0 ^ -2147483648);
    stackword15 = r0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r0 = 1127219200;
    stackword16 = r0;
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword16), static_cast<uint32_t>(stackword15));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
}

loc_800CCA94:
{
    r29 = 0;
    r31 = (r31 & 16777216);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -30672));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -30676));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30700));
    f20.d = MemoryInline::FlatReadFloat64((r2 + -30656));
    r21 = 1127219200;
    f21.d = MemoryInline::FlatReadFloat32((r2 + -30668));
    goto loc_800CCCAC;
}

loc_800CCAB8:
{
    r3 = (r1 + 88);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 76);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r23 + 236);
    ctx->lr = 0x800CCAD0u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_729C = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_729C;
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
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f28.d));
}

loc_800CCADC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800CCAFC;
    }
}

loc_800CCAE0:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f1.d));
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    f29.d = f1.d;
    goto loc_800CCB08;
}

loc_800CCAFC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f1.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_800CCB08:
{
}

loc_800CCB0C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800CCB28;
    }
}

loc_800CCB10:
{
    r3 = (r23 + 236);
    ctx->lr = 0x800CCB18u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_7A23 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_7A23;
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
    f2.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f24.d = PpcFmulsInline(f0.d, f1.d);
}

loc_800CCB28:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f24.d));
    ctx->lr = 0x800CCB38u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009C7C4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 64);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30700));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f3.d = (-(f0.d));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = PpcFmulsInline(f0.d, f29.d);
    f0.d = PpcFmulsInline(f26.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = PpcFmulsInline(f0.d, f29.d);
    f0.d = PpcFmulsInline(f25.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    r3 = (r1 + 52);
    r4 = (r1 + 64);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r3 = (r1 + 40);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r23 + 120));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_800CCB90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CCBA4;
    }
}

loc_800CCB94:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f31.d);
    goto loc_800CCBD0;
}

loc_800CCBA4:
{
    f1.d = PpcFmulsInline(f29.d, f0.d);
    r3 = (r1 + 40);
    ctx->lr = 0x800CCBB0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009C754u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
}

loc_800CCBD0:
{
    r3 = r22;
    r4 = (r1 + 76);
    r5 = r23;
    r6 = (r1 + 88);
    r7 = (r1 + 40);
    r8 = (r1 + 52);
    r9 = (r1 + 64);
    ctx->lr = 0x800CCBF0u;
    if constexpr (KnownRegArgsCpuCall<0x800A9A18u>(&func_800A9A18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800A9A18_9116 = func_800A9A18_ra38_fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_800A9A18_9116);
        r4 = static_cast<uint32_t>(regargs_result_800A9A18_9116 >> 32);
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A9A18u>(ctx);
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = MemoryInline::FlatRead32((r1 + 88));
    r0 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = (r23 + 236);
    ctx->lr = 0x800CCC28u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_9C96 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_9C96;
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
    r0 = MemoryInline::FlatRead8((r23 + 103));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    stackword26 = r0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    stackword27 = r21;
    MemoryInline::FlatWriteRam32((r1 + 104), r21);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword27), static_cast<uint32_t>(stackword26));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    r3 = r22;
    r4 = (r27 & 65535);
    f1.d = f22.d;
    r5 = r23;
    ctx->lr = 0x800CCC64u;
    if constexpr (KnownRegArgsCpuCall<0x800AA014u>(&func_800AA014)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800AA014_A356 = func_800AA014_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800AA014_A356);
        r4 = static_cast<uint32_t>(regargs_result_800AA014_A356 >> 32);
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
        f31 = ctx->fpr[31];
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800AA014u>(ctx);
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = r3;
    r3 = r24;
    r4 = (r0 & 65535);
    r5 = (r1 + 28);
    r6 = (r1 + 16);
    r7 = r28;
    f1.d = f29.d;
    r8 = (r23 + 252);
    r9 = MemoryInline::FlatRead32((r23 + 248));
    r10 = MemoryInline::FlatRead16((r23 + 232));
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800CCC9Cu;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800CCCA0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800CCCA8;
    }
}

loc_800CCCA4:
{
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f23.d));
}

loc_800CCCA8:
{
    r29 = (r29 + 1);
}

loc_800CCCAC:
{
}

loc_800CCCB0:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r25))) {
        goto loc_800CCAB8;
    }
}

loc_800CCCB4:
{
    r0 = 344;
    addr_psqx_800CCCB8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCCB8_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 160), 0, 200u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 176u, (r1 + 336));
    r0 = 328;
    addr_psqx_800CCCC4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCCC4_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 160u, (r1 + 320));
    r0 = 312;
    addr_psqx_800CCCD0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCCD0_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 144u, (r1 + 304));
    r0 = 296;
    addr_psqx_800CCCDC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCCDC_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 128u, (r1 + 288));
    r0 = 280;
    addr_psqx_800CCCE8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCCE8_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 112u, (r1 + 272));
    r0 = 264;
    addr_psqx_800CCCF4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCCF4_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 256));
    r0 = 248;
    addr_psqx_800CCD00_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCD00_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 240));
    r0 = 232;
    addr_psqx_800CCD0C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCD0C_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 224));
    r0 = 216;
    addr_psqx_800CCD18_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCD18_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 208));
    r0 = 200;
    addr_psqx_800CCD24_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCD24_loc_0));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 192));
    r0 = 184;
    addr_psqx_800CCD30_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f21, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCD30_loc_0));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 176));
    r0 = 168;
    addr_psqx_800CCD3C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f20, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CCD3C_loc_0));
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::ReadResolved32(guest_range_3, 196u, (r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800CC614(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CC614_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFF0FFFF fpr_write=0xFFF0FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CC614 func_800CC614 preserves=true fpr_mask=0x00000000
