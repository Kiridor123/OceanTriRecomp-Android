#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A6ED4(CpuContext* ctx);
extern "C" uint64_t func_800A6ED4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800A8A6C(CpuContext* ctx);
extern "C" uint32_t func_800A8A6C_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_800C9E30(CpuContext* ctx);
extern "C" double func_800C9E30_ra0_2_0_2(CpuContext*, double);
extern "C" void func_800C9E34(CpuContext* ctx);
extern "C" uint64_t func_800C9E34_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80464618(CpuContext* ctx);
extern "C" uint64_t func_80464618_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800C9E30_statefree(PPC_FPR, PPC_FPR);
extern "C" uint64_t func_800C9E30_statefree_v0(PPC_FPR);

extern "C" uint64_t func_800CA264_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800CB8C0_loc_0 = 0;
    uint32_t addr_psqx_800CB8CC_loc_0 = 0;
    uint32_t addr_psqx_800CB8D8_loc_0 = 0;
    uint32_t addr_psqx_800CB8E4_loc_0 = 0;
    uint32_t addr_psqx_800CB8F0_loc_0 = 0;
    uint32_t addr_psqx_800CB8FC_loc_0 = 0;
    uint32_t addr_psqx_800CB908_loc_0 = 0;
    uint32_t addr_psqx_800CB914_loc_0 = 0;
    uint32_t addr_psqx_800CB920_loc_0 = 0;
    uint32_t addr_psqx_800CB92C_loc_0 = 0;
    uint32_t addr_psqx_800CB938_loc_0 = 0;
    uint32_t addr_psqx_800CB944_loc_0 = 0;
    uint32_t addr_psqx_800CB950_loc_0 = 0;
    uint32_t addr_psqx_800CB95C_loc_0 = 0;
    uint32_t addr_psqx_800CB968_loc_0 = 0;
    uint32_t addr_psqx_800CB974_loc_0 = 0;
    uint32_t addr_psqx_800CB980_loc_0 = 0;
    uint32_t addr_psqx_800CB98C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
    uint32_t r1_psq_tmp_12 = 0;
    uint32_t r1_psq_tmp_13 = 0;
    uint32_t r1_psq_tmp_14 = 0;
    uint32_t r1_psq_tmp_15 = 0;
    uint32_t r1_psq_tmp_16 = 0;
    uint32_t r1_psq_tmp_17 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f14 = ctx->fpr[14];
    PPC_FPR f15 = ctx->fpr[15];
    PPC_FPR f16 = ctx->fpr[16];
    PPC_FPR f17 = ctx->fpr[17];
    PPC_FPR f18 = ctx->fpr[18];
    PPC_FPR f19 = ctx->fpr[19];
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
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800CA264;

loc_800CA264:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -560), 0, 568u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -560), r1);
    r1 = (r1 + -560);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 564u, (r1 + 564), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 544u, (r1 + 544), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 552);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 528u, (r1 + 528), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 536);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 512u, (r1 + 512), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 520);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 496u, (r1 + 496), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 480u, (r1 + 480), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 464u, (r1 + 464), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 448u, (r1 + 448), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 432u, (r1 + 432), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 416u, (r1 + 416), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 400u, (r1 + 400), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 384u, (r1 + 384), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 368u, (r1 + 368), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 352u, (r1 + 352), f19.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_12 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_12, PPC_PsFromScalarInline(f19.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 336u, (r1 + 336), f18.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_13 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_13, PPC_PsFromScalarInline(f18.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 320u, (r1 + 320), f17.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_14 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_14, PPC_PsFromScalarInline(f17.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 304u, (r1 + 304), f16.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_15 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_15, PPC_PsFromScalarInline(f16.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 288u, (r1 + 288), f15.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_16 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_16, PPC_PsFromScalarInline(f15.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 272u, (r1 + 272), f14.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_17 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_17, PPC_PsFromScalarInline(f14.d));
    r11 = (r1 + 272);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r24 = r7;
    r19 = r8;
    r30 = r9;
    f23.d = f1.d;
    r31 = r10;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_4, 176u, (r1 + 176), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_4, 184u, (r1 + 184), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800CA360:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA378;
    }
}

loc_800CA364:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CA370:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA378;
    }
}

loc_800CA374:
{
    r10 = 0;
}

loc_800CA378:
{
}

loc_800CA37C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800CA394;
    }
}

loc_800CA380:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CA38C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA394;
    }
}

loc_800CA390:
{
    r9 = 0;
}

loc_800CA394:
{
}

loc_800CA398:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CA3AC;
    }
}

loc_800CA39C:
{
    r0 = (r11 + 1073741824);
}

loc_800CA3A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA3AC;
    }
}

loc_800CA3A8:
{
    r8 = 0;
}

loc_800CA3AC:
{
}

loc_800CA3B0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CA3C8;
    }
}

loc_800CA3B4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CA3C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA3C8;
    }
}

loc_800CA3C4:
{
    r7 = 0;
}

loc_800CA3C8:
{
}

loc_800CA3CC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CA3E4;
    }
}

loc_800CA3D0:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CA3DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA3E4;
    }
}

loc_800CA3E0:
{
    r6 = 0;
}

loc_800CA3E4:
{
}

loc_800CA3E8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CA400;
    }
}

loc_800CA3EC:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CA3F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA400;
    }
}

loc_800CA3FC:
{
    r5 = 0;
}

loc_800CA400:
{
}

loc_800CA404:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CA428;
    }
}

loc_800CA408:
{
    r3 = 0x80590000u;
    r3 = (r3 + 21544);
    r4 = 94;
    r5 = 0x80590000u;
    r5 = (r5 + 21556);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CA428u;
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

loc_800CA428:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r28 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800CA44C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA464;
    }
}

loc_800CA450:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CA45C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA464;
    }
}

loc_800CA460:
{
    r9 = 0;
}

loc_800CA464:
{
}

loc_800CA468:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CA480;
    }
}

loc_800CA46C:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CA478:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA480;
    }
}

loc_800CA47C:
{
    r8 = 0;
}

loc_800CA480:
{
}

loc_800CA484:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CA498;
    }
}

loc_800CA488:
{
    r0 = (r10 + 1073741824);
}

loc_800CA490:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA498;
    }
}

loc_800CA494:
{
    r7 = 0;
}

loc_800CA498:
{
}

loc_800CA49C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CA4B4;
    }
}

loc_800CA4A0:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CA4AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA4B4;
    }
}

loc_800CA4B0:
{
    r6 = 0;
}

loc_800CA4B4:
{
}

loc_800CA4B8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CA4D0;
    }
}

loc_800CA4BC:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CA4C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA4D0;
    }
}

loc_800CA4CC:
{
    r5 = 0;
}

loc_800CA4D0:
{
}

loc_800CA4D4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CA4EC;
    }
}

loc_800CA4D8:
{
    r3 = (r28 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CA4E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA4EC;
    }
}

loc_800CA4E8:
{
    r4 = 0;
}

loc_800CA4EC:
{
}

loc_800CA4F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CA514;
    }
}

loc_800CA4F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 21544);
    r4 = 95;
    r5 = 0x80590000u;
    r5 = (r5 + 21608);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CA514u;
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

loc_800CA514:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r19 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800CA538:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA550;
    }
}

loc_800CA53C:
{
    r3 = (r19 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CA548:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA550;
    }
}

loc_800CA54C:
{
    r9 = 0;
}

loc_800CA550:
{
}

loc_800CA554:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CA56C;
    }
}

loc_800CA558:
{
    r3 = (r19 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CA564:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA56C;
    }
}

loc_800CA568:
{
    r8 = 0;
}

loc_800CA56C:
{
}

loc_800CA570:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CA584;
    }
}

loc_800CA574:
{
    r0 = (r10 + 1073741824);
}

loc_800CA57C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA584;
    }
}

loc_800CA580:
{
    r7 = 0;
}

loc_800CA584:
{
}

loc_800CA588:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CA5A0;
    }
}

loc_800CA58C:
{
    r3 = (r19 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CA598:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA5A0;
    }
}

loc_800CA59C:
{
    r6 = 0;
}

loc_800CA5A0:
{
}

loc_800CA5A4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CA5BC;
    }
}

loc_800CA5A8:
{
    r3 = (r19 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CA5B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA5BC;
    }
}

loc_800CA5B8:
{
    r5 = 0;
}

loc_800CA5BC:
{
}

loc_800CA5C0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CA5D8;
    }
}

loc_800CA5C4:
{
    r3 = (r19 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CA5D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CA5D8;
    }
}

loc_800CA5D4:
{
    r4 = 0;
}

loc_800CA5D8:
{
}

loc_800CA5DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CA600;
    }
}

loc_800CA5E0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 21544);
    r4 = 96;
    r5 = 0x80590000u;
    r5 = (r5 + 21660);
    r6 = r19;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CA600u;
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

loc_800CA600:
{
}

loc_800CA604:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(1))) {
        goto loc_800CB8BC;
    }
}

loc_800CA608:
{
    f30.d = MemoryInline::FlatReadFloat32(r19);
    r0 = (r24 & 33554432);
}

loc_800CA614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CA624;
    }
}

loc_800CA618:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f30.d);
    f29.d = f30.d;
    goto loc_800CA630;
}

loc_800CA624:
{
    f0.d = MemoryInline::FlatReadFloat32((r19 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f0.d);
    f29.d = MemoryInline::FlatReadFloat32((r19 + 8));
}

loc_800CA630:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -30808), 0, 32u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r2 + -30784));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_800CA638:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA640;
    }
}

loc_800CA63C:
{
    f30.d = f0.d;
}

loc_800CA640:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r2 + -30784));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800CA64C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA654;
    }
}

loc_800CA650:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f1.d);
}

loc_800CA654:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r2 + -30784));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_800CA65C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA664;
    }
}

loc_800CA660:
{
    f29.d = f0.d;
}

loc_800CA664:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r2 + -30804));
    f1.d = MemoryInline::FlatReadFloat32((r19 + 12));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800CA670:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CA67C;
    }
}

loc_800CA674:
{
    f17.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r2 + -30784));
    goto loc_800CA684;
}

loc_800CA67C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -30800));
    f17.d = PpcFmulsInline(f0.d, f1.d);
}

loc_800CA684:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -30808));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f17.d));
    f27.d = MemoryInline::FlatReadFloat32((r27 + 120));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r2 + -30780));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f0.d));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_5B34 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_5B34);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -30812), 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r2 + -30776));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800CA6A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA6AC;
    }
}

loc_800CA6A8:
{
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f0.d));
}

loc_800CA6AC:
{
    r0 = (r24 & 131072);
}

loc_800CA6B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CB2D4;
    }
}

loc_800CA6B8:
{
    r0 = (r29 + 1);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r2 + -30792));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30812));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r4 + r29);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r22 = (r3 + 1);
    r3 = (r29 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r21 = (r3 + 1);
    r0 = (r29 & 1);
    r0 = (r0 ^ r4);
    r0 = (r0 - r4);
}

loc_800CA70C:
{
    r20 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800CA718;
    }
}

loc_800CA714:
{
    r20 = 2;
}

loc_800CA718:
{
    r19 = 1;
    r18 = 1;
    r23 = 0;
    r25 = (r24 & 16777216);
    r24 = (r29 * r29);
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r2 + -30792));
    f22.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -30808));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    f20.d = (-(f0.d));
    f19.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30804));
    f18.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -30784));
    f17.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r2 + -30772));
    goto loc_800CA97C;
}

loc_800CA74C:
{
}

loc_800CA750:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_800CA7D0;
    }
}

loc_800CA754:
{
}

loc_800CA758:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_800CA778;
    }
}

loc_800CA75C:
{
}

loc_800CA760:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(1))) {
        goto loc_800CA780;
    }
}

loc_800CA764:
{
}

loc_800CA768:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(2))) {
        goto loc_800CA788;
    }
}

loc_800CA76C:
{
}

loc_800CA770:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(3))) {
        goto loc_800CA790;
    }
}

loc_800CA774:
{
    goto loc_800CA794;
}

loc_800CA778:
{
    r21 = (r21 + -1);
    goto loc_800CA794;
}

loc_800CA780:
{
    r22 = (r22 + 1);
    goto loc_800CA794;
}

loc_800CA788:
{
    r21 = (r21 + 1);
    goto loc_800CA794;
}

loc_800CA790:
{
    r22 = (r22 + -1);
}

loc_800CA794:
{
    r18 = (r18 + -1);
}

loc_800CA79C:
{
    if ((static_cast<int32_t>(r18) > static_cast<int32_t>(0))) {
        goto loc_800CA7D0;
    }
}

loc_800CA7A0:
{
    r20 = (r20 + 1);
}

loc_800CA7A8:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(4))) {
        goto loc_800CA7B0;
    }
}

loc_800CA7AC:
{
    r20 = 0;
}

loc_800CA7B0:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r20 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
}

loc_800CA7C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800CA7CC;
    }
}

loc_800CA7C8:
{
    r19 = (r19 + 1);
}

loc_800CA7CC:
{
    r18 = r19;
}

loc_800CA7D0:
{
    r0 = (r22 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f24.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f21.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f22.d));
    r0 = (r21 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f24.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f25.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f22.d));
    f31.d = PpcFmulsInline(f21.d, f30.d);
    f16.d = PpcFmulsInline(f25.d, f29.d);
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_7913 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_7913);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f14.d = f1.d;
    f1.d = f21.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_83AF = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_83AF);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f14.d);
}

loc_800CA820:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA830;
    }
}

loc_800CA824:
{
    f1.d = f21.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_8EDC = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_8EDC);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    goto loc_800CA838;
}

loc_800CA830:
{
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_9994 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_9994);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
}

loc_800CA838:
{
    f15.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f1.d));
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_A47F = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_A47F);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f14.d = f1.d;
    f1.d = f21.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_AF1B = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_AF1B);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f14.d);
}

loc_800CA854:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CA868;
    }
}

loc_800CA858:
{
    f1.d = f21.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_BA48 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_BA48[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_BA48[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
    goto loc_800CA874;
}

loc_800CA868:
{
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_C564 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_C564[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_C564[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
}

loc_800CA874:
{
    r3 = (r1 + 164);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 152);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f20.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f16.d);
    SetCRFloatResident(cr, 0, f19.d, f28.d);
}

loc_800CA894:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CA8DC;
    }
}

loc_800CA898:
{
}

loc_800CA89C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800CA8BC;
    }
}

loc_800CA8A0:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CA8A8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_D332 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_D332;
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
    f0.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f15.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f0.d));
    goto loc_800CA8D0;
}

loc_800CA8BC:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CA8C4u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_D7CF = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_D7CF;
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
    f0.d = PpcFmulsInline(f15.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f0.d));
}

loc_800CA8D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f0.d);
}

loc_800CA8DC:
{
    SetCRFloatResident(cr, 0, f19.d, f27.d);
}

loc_800CA8E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CA904;
    }
}

loc_800CA8E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 164));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f18.d);
}

loc_800CA8F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA914;
    }
}

loc_800CA8F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 172));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f18.d);
}

loc_800CA900:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA914;
    }
}

loc_800CA904:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f19.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f17.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f19.d);
    goto loc_800CA954;
}

loc_800CA914:
{
    f1.d = PpcFmulsInline(f21.d, f27.d);
    ctx->lr = 0x800CA91Cu;
    if constexpr (KnownRegArgsCpuCall<0x80464618u>(&func_80464618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
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
        const auto regargs_result_80464618_E332 = func_80464618_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464618_E332);
        r4 = static_cast<uint32_t>(regargs_result_80464618_E332 >> 32);
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
        InvokeDirectCpu<0x80464618u>(ctx);
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
    }
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f14.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f0.d);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
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
    mkw_gqr0 = ctx->gqr[0];
    f0.d = (-(f1.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f14.d), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
    f14.d = PPC_PsToScalarInline(f14.d);
}

loc_800CA954:
{
    r3 = r26;
    r4 = (r1 + 164);
    r5 = (r1 + 152);
    r6 = r27;
    r7 = r28;
    r8 = (r30 & 65535);
    f1.d = f23.d;
    r9 = r31;
    ctx->lr = 0x800CA978u;
    if constexpr (KnownRegArgsCpuCall<0x800C9E34u>(&func_800C9E34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C9E34_FCAA = func_800C9E34_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800C9E34_FCAA);
        r4 = static_cast<uint32_t>(regargs_result_800C9E34_FCAA >> 32);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
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
        ctx->fpr[8] = f8;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C9E34u>(ctx);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r23 = (r23 + 1);
}

loc_800CA97C:
{
}

loc_800CA980:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r24))) {
        goto loc_800CA74C;
    }
}

loc_800CA984:
{
    r23 = 1;
    f17.d = MemoryInline::FlatReadFloat64((r2 + -30792));
    f18.d = MemoryInline::FlatReadFloat32((r2 + -30808));
    f0.d = (-(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 200), f0.d);
    f19.d = MemoryInline::FlatReadFloat32((r2 + -30804));
    f20.d = MemoryInline::FlatReadFloat32((r2 + -30784));
    f22.d = MemoryInline::FlatReadFloat32((r2 + -30772));
    f31.d = (-(f29.d));
    goto loc_800CB04C;
}

loc_800CA9AC:
{
    r0 = (r23 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f17.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f25.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    f24.d = PpcFmulsInline(f25.d, f0.d);
    r19 = 1;
    goto loc_800CAB60;
}

loc_800CA9D4:
{
    r0 = (r19 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f17.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    f16.d = PpcFmulsInline(f15.d, f30.d);
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_10D3A = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_10D3A);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f14.d = f1.d;
    f1.d = f15.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_117D8 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_117D8);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f14.d);
}

loc_800CAA08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAA18;
    }
}

loc_800CAA0C:
{
    f1.d = f15.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_12307 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_12307);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    goto loc_800CAA20;
}

loc_800CAA18:
{
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_12DC1 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_12DC1);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
}

loc_800CAA20:
{
    f14.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f1.d));
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_138AE = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_138AE);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
    f1.d = f15.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_1434C = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_1434C);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f21.d);
}

loc_800CAA3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAA50;
    }
}

loc_800CAA40:
{
    f1.d = f15.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_14E7B = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_14E7B[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_14E7B[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
    goto loc_800CAA5C;
}

loc_800CAA50:
{
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_1599A = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_1599A[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_1599A[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
}

loc_800CAA5C:
{
    r3 = (r1 + 140);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 128);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f16.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f31.d);
    SetCRFloatResident(cr, 0, f19.d, f28.d);
}

loc_800CAA7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAAC4;
    }
}

loc_800CAA80:
{
}

loc_800CAA84:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800CAAA4;
    }
}

loc_800CAA88:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CAA90u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_1676B = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_1676B;
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
    f0.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f14.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f0.d));
    goto loc_800CAAB8;
}

loc_800CAAA4:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CAAACu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_16C0A = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_16C0A;
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
    f0.d = PpcFmulsInline(f14.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f0.d));
}

loc_800CAAB8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f0.d);
}

loc_800CAAC4:
{
    SetCRFloatResident(cr, 0, f19.d, f27.d);
}

loc_800CAAC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAAEC;
    }
}

loc_800CAACC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 140));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f20.d);
}

loc_800CAAD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CAAFC;
    }
}

loc_800CAADC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 144));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f20.d);
}

loc_800CAAE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CAAFC;
    }
}

loc_800CAAEC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f19.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f19.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f22.d);
    goto loc_800CAB38;
}

loc_800CAAFC:
{
    f1.d = PpcFmulsInline(f21.d, f27.d);
    ctx->lr = 0x800CAB04u;
    if constexpr (KnownRegArgsCpuCall<0x80464618u>(&func_80464618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
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
        const auto regargs_result_80464618_1776F = func_80464618_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464618_1776F);
        r4 = static_cast<uint32_t>(regargs_result_80464618_1776F >> 32);
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
        InvokeDirectCpu<0x80464618u>(ctx);
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
    }
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f21.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 140));
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
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
    mkw_gqr0 = ctx->gqr[0];
    f0.d = (-(f1.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f21.d), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f0.d);
    f21.d = PPC_PsToScalarInline(f21.d);
}

loc_800CAB38:
{
    r3 = r26;
    r4 = (r1 + 140);
    r5 = (r1 + 128);
    r6 = r27;
    r7 = r28;
    r8 = (r30 & 65535);
    f1.d = f23.d;
    r9 = r31;
    ctx->lr = 0x800CAB5Cu;
    if constexpr (KnownRegArgsCpuCall<0x800C9E34u>(&func_800C9E34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C9E34_190B3 = func_800C9E34_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800C9E34_190B3);
        r4 = static_cast<uint32_t>(regargs_result_800C9E34_190B3 >> 32);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
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
        ctx->fpr[8] = f8;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C9E34u>(ctx);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = (r19 + 1);
}

loc_800CAB60:
{
}

loc_800CAB64:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(r29))) {
        goto loc_800CA9D4;
    }
}

loc_800CAB68:
{
    r19 = 1;
    goto loc_800CAD00;
}

loc_800CAB70:
{
    r0 = (r19 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f17.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    f15.d = PpcFmulsInline(f14.d, f29.d);
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_19DD0 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_19DD0);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f16.d = f1.d;
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_1A86E = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_1A86E);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f16.d);
}

loc_800CABA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CABB4;
    }
}

loc_800CABA8:
{
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_1B39D = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_1B39D);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    goto loc_800CABBC;
}

loc_800CABB4:
{
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_1BE57 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_1BE57);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
}

loc_800CABBC:
{
    f16.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f1.d));
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_1C944 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_1C944);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_1D3E2 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_1D3E2);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f21.d);
}

loc_800CABD8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CABEC;
    }
}

loc_800CABDC:
{
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_1DF11 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_1DF11[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_1DF11[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
    goto loc_800CABF8;
}

loc_800CABEC:
{
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_1EA30 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_1EA30[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_1EA30[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
}

loc_800CABF8:
{
    r3 = (r1 + 116);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 104);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f15.d);
    SetCRFloatResident(cr, 0, f19.d, f28.d);
}

loc_800CAC18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAC60;
    }
}

loc_800CAC1C:
{
}

loc_800CAC20:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800CAC40;
    }
}

loc_800CAC24:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CAC2Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_1F801 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_1F801;
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
    f0.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f16.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f0.d));
    goto loc_800CAC54;
}

loc_800CAC40:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CAC48u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_1FCA0 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_1FCA0;
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
    f0.d = PpcFmulsInline(f16.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f0.d));
}

loc_800CAC54:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
}

loc_800CAC60:
{
    SetCRFloatResident(cr, 0, f19.d, f27.d);
}

loc_800CAC64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAC88;
    }
}

loc_800CAC68:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 120));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f20.d);
}

loc_800CAC74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CAC98;
    }
}

loc_800CAC78:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f20.d);
}

loc_800CAC84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CAC98;
    }
}

loc_800CAC88:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f18.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f19.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f19.d);
    goto loc_800CACD8;
}

loc_800CAC98:
{
    f1.d = PpcFmulsInline(f21.d, f27.d);
    ctx->lr = 0x800CACA0u;
    if constexpr (KnownRegArgsCpuCall<0x80464618u>(&func_80464618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
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
        const auto regargs_result_80464618_20805 = func_80464618_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464618_20805);
        r4 = static_cast<uint32_t>(regargs_result_80464618_20805 >> 32);
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
        InvokeDirectCpu<0x80464618u>(ctx);
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
    }
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f21.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
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
    mkw_gqr0 = ctx->gqr[0];
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f21.d), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    f21.d = PPC_PsToScalarInline(f21.d);
}

loc_800CACD8:
{
    r3 = r26;
    r4 = (r1 + 116);
    r5 = (r1 + 104);
    r6 = r27;
    r7 = r28;
    r8 = (r30 & 65535);
    f1.d = f23.d;
    r9 = r31;
    ctx->lr = 0x800CACFCu;
    if constexpr (KnownRegArgsCpuCall<0x800C9E34u>(&func_800C9E34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C9E34_221A0 = func_800C9E34_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800C9E34_221A0);
        r4 = static_cast<uint32_t>(regargs_result_800C9E34_221A0 >> 32);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
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
        ctx->fpr[8] = f8;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C9E34u>(ctx);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = (r19 + 1);
}

loc_800CAD00:
{
}

loc_800CAD04:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(r29))) {
        goto loc_800CAB70;
    }
}

loc_800CAD08:
{
    r19 = r29;
    goto loc_800CAE98;
}

loc_800CAD10:
{
    r0 = (r19 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f17.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    f15.d = PpcFmulsInline(f14.d, f30.d);
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_22EBF = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_22EBF);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f16.d = f1.d;
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_2395D = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_2395D);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f16.d);
}

loc_800CAD44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAD54;
    }
}

loc_800CAD48:
{
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_2448C = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_2448C);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    goto loc_800CAD5C;
}

loc_800CAD54:
{
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_24F46 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_24F46);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
}

loc_800CAD5C:
{
    f16.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f1.d));
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_25A33 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_25A33);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_264D1 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_264D1);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f21.d);
}

loc_800CAD78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAD8C;
    }
}

loc_800CAD7C:
{
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_27000 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_27000[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_27000[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
    goto loc_800CAD98;
}

loc_800CAD8C:
{
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_27B1F = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_27B1F[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_27B1F[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
}

loc_800CAD98:
{
    r3 = (r1 + 92);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 80);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f15.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f29.d);
    SetCRFloatResident(cr, 0, f19.d, f28.d);
}

loc_800CADB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAE00;
    }
}

loc_800CADBC:
{
}

loc_800CADC0:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800CADE0;
    }
}

loc_800CADC4:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CADCCu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_288EC = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_288EC;
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
    f0.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f16.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f0.d));
    goto loc_800CADF4;
}

loc_800CADE0:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CADE8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_28D8B = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_28D8B;
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
    f0.d = PpcFmulsInline(f16.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f0.d));
}

loc_800CADF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
}

loc_800CAE00:
{
    SetCRFloatResident(cr, 0, f19.d, f27.d);
}

loc_800CAE04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAE28;
    }
}

loc_800CAE08:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 92));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f20.d);
}

loc_800CAE14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CAE38;
    }
}

loc_800CAE18:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 96));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f20.d);
}

loc_800CAE24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CAE38;
    }
}

loc_800CAE28:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f19.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f19.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f18.d);
    goto loc_800CAE70;
}

loc_800CAE38:
{
    f1.d = PpcFmulsInline(f21.d, f27.d);
    ctx->lr = 0x800CAE40u;
    if constexpr (KnownRegArgsCpuCall<0x80464618u>(&func_80464618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
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
        const auto regargs_result_80464618_298EB = func_80464618_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464618_298EB);
        r4 = static_cast<uint32_t>(regargs_result_80464618_298EB >> 32);
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
        InvokeDirectCpu<0x80464618u>(ctx);
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
    }
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f21.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 92));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
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
    mkw_gqr0 = ctx->gqr[0];
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f21.d), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    f21.d = PPC_PsToScalarInline(f21.d);
}

loc_800CAE70:
{
    r3 = r26;
    r4 = (r1 + 92);
    r5 = (r1 + 80);
    r6 = r27;
    r7 = r28;
    r8 = (r30 & 65535);
    f1.d = f23.d;
    r9 = r31;
    ctx->lr = 0x800CAE94u;
    if constexpr (KnownRegArgsCpuCall<0x800C9E34u>(&func_800C9E34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C9E34_2B211 = func_800C9E34_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800C9E34_2B211);
        r4 = static_cast<uint32_t>(regargs_result_800C9E34_2B211 >> 32);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
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
        ctx->fpr[8] = f8;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C9E34u>(ctx);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = (r19 + -1);
}

loc_800CAE98:
{
}

loc_800CAE9C:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(1))) {
        goto loc_800CAD10;
    }
}

loc_800CAEA0:
{
    r19 = r29;
    goto loc_800CB040;
}

loc_800CAEA8:
{
    r0 = (r19 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f17.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f18.d));
    f15.d = PpcFmulsInline(f14.d, f29.d);
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_2BF2F = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_2BF2F);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f16.d = f1.d;
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_2C9CD = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_2C9CD);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f16.d);
}

loc_800CAEDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAEEC;
    }
}

loc_800CAEE0:
{
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_2D4FC = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_2D4FC);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    goto loc_800CAEF4;
}

loc_800CAEEC:
{
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_2DFB6 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_2DFB6);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
}

loc_800CAEF4:
{
    f16.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f1.d));
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_2EAA3 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_2EAA3);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_2F541 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_2F541);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f21.d);
}

loc_800CAF10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CAF24;
    }
}

loc_800CAF14:
{
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_30070 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_30070);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
    goto loc_800CAF30;
}

loc_800CAF24:
{
    f1.d = f25.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_30B3D = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_30B3D);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f21.d = f1.d;
}

loc_800CAF30:
{
    r3 = (r1 + 68);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f15.d);
    SetCRFloatResident(cr, 0, f19.d, f28.d);
}

loc_800CAF54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAF9C;
    }
}

loc_800CAF58:
{
}

loc_800CAF5C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800CAF7C;
    }
}

loc_800CAF60:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CAF68u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_318ED = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_318ED;
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
    f0.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f16.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f0.d));
    goto loc_800CAF90;
}

loc_800CAF7C:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CAF84u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_31D8C = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_31D8C;
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
    f0.d = PpcFmulsInline(f16.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f0.d));
}

loc_800CAF90:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
}

loc_800CAF9C:
{
    SetCRFloatResident(cr, 0, f19.d, f27.d);
}

loc_800CAFA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAFC4;
    }
}

loc_800CAFA4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f20.d);
}

loc_800CAFB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CAFD4;
    }
}

loc_800CAFB4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 76));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f20.d);
}

loc_800CAFC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CAFD4;
    }
}

loc_800CAFC4:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f22.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f19.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f19.d);
    goto loc_800CB018;
}

loc_800CAFD4:
{
    f1.d = PpcFmulsInline(f21.d, f27.d);
    ctx->lr = 0x800CAFDCu;
    if constexpr (KnownRegArgsCpuCall<0x80464618u>(&func_80464618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
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
        const auto regargs_result_80464618_328EA = func_80464618_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464618_328EA);
        r4 = static_cast<uint32_t>(regargs_result_80464618_328EA >> 32);
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
        InvokeDirectCpu<0x80464618u>(ctx);
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
    }
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f21.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
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
    mkw_gqr0 = ctx->gqr[0];
    f0.d = (-(f1.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f21.d), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    f21.d = PPC_PsToScalarInline(f21.d);
}

loc_800CB018:
{
    r3 = r26;
    r4 = (r1 + 68);
    r5 = (r1 + 56);
    r6 = r27;
    r7 = r28;
    r8 = (r30 & 65535);
    f1.d = f23.d;
    r9 = r31;
    ctx->lr = 0x800CB03Cu;
    if constexpr (KnownRegArgsCpuCall<0x800C9E34u>(&func_800C9E34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C9E34_34293 = func_800C9E34_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800C9E34_34293);
        r4 = static_cast<uint32_t>(regargs_result_800C9E34_34293 >> 32);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
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
        ctx->fpr[8] = f8;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C9E34u>(ctx);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = (r19 + -1);
}

loc_800CB040:
{
}

loc_800CB044:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(1))) {
        goto loc_800CAEA8;
    }
}

loc_800CB048:
{
    r23 = (r23 + 1);
}

loc_800CB04C:
{
}

loc_800CB050:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r29))) {
        goto loc_800CA9AC;
    }
}

loc_800CB054:
{
    r20 = 1;
    r21 = 1;
    r22 = 2;
    r23 = (r29 + -1);
    r18 = r23;
    r19 = 0;
    f21.d = MemoryInline::FlatReadFloat64((r2 + -30792));
    f22.d = MemoryInline::FlatReadFloat32((r2 + -30808));
    f25.d = MemoryInline::FlatReadFloat32((r2 + -30804));
    f24.d = MemoryInline::FlatReadFloat32((r2 + -30784));
    goto loc_800CB2C8;
}

loc_800CB080:
{
}

loc_800CB084:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_800CB11C;
    }
}

loc_800CB088:
{
}

loc_800CB08C:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_800CB0AC;
    }
}

loc_800CB090:
{
}

loc_800CB094:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(1))) {
        goto loc_800CB0B4;
    }
}

loc_800CB098:
{
}

loc_800CB09C:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(2))) {
        goto loc_800CB0BC;
    }
}

loc_800CB0A0:
{
}

loc_800CB0A4:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(3))) {
        goto loc_800CB0C4;
    }
}

loc_800CB0A8:
{
    goto loc_800CB0C8;
}

loc_800CB0AC:
{
    r20 = (r20 + -1);
    goto loc_800CB0C8;
}

loc_800CB0B4:
{
    r21 = (r21 + 1);
    goto loc_800CB0C8;
}

loc_800CB0BC:
{
    r20 = (r20 + 1);
    goto loc_800CB0C8;
}

loc_800CB0C4:
{
    r21 = (r21 + -1);
}

loc_800CB0C8:
{
    r18 = (r18 + -1);
}

loc_800CB0D0:
{
    if ((static_cast<int32_t>(r18) > static_cast<int32_t>(0))) {
        goto loc_800CB11C;
    }
}

loc_800CB0D4:
{
}

loc_800CB0D8:
{
    r4 = 3;
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_800CB0E4;
    }
}

loc_800CB0E0:
{
    r4 = (r22 + -1);
}

loc_800CB0E4:
{
    r22 = r4;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r0 = (r4 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
}

loc_800CB0FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800CB118;
    }
}

loc_800CB100:
{
}

loc_800CB104:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_800CB114;
    }
}

loc_800CB108:
{
    r0 = (r29 + -1);
}

loc_800CB110:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(r0))) {
        goto loc_800CB118;
    }
}

loc_800CB114:
{
    r23 = (r23 + -1);
}

loc_800CB118:
{
    r18 = r23;
}

loc_800CB11C:
{
    r0 = (r20 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f21.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f17.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f22.d));
    r0 = (r21 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 184));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f21.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    f18.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f22.d));
    f19.d = PpcFmulsInline(f17.d, f30.d);
    f14.d = PpcFmulsInline(f18.d, f29.d);
    f1.d = f18.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_35B8D = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_35B8D);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f15.d = f1.d;
    f1.d = f17.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_3662B = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_3662B);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f15.d);
}

loc_800CB16C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CB17C;
    }
}

loc_800CB170:
{
    f1.d = f17.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_3715A = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_3715A);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    goto loc_800CB184;
}

loc_800CB17C:
{
    f1.d = f18.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_37C14 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_37C14);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
}

loc_800CB184:
{
    f15.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f1.d));
    f1.d = f18.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_38701 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_38701);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f16.d = f1.d;
    f1.d = f17.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_3919F = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_3919F);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f16.d);
}

loc_800CB1A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CB1B4;
    }
}

loc_800CB1A4:
{
    f1.d = f17.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_39CCE = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_39CCE);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f31.d = f1.d;
    goto loc_800CB1C0;
}

loc_800CB1B4:
{
    f1.d = f18.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_3A79B = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_3A79B);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f31.d = f1.d;
}

loc_800CB1C0:
{
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f19.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f14.d);
    SetCRFloatResident(cr, 0, f25.d, f28.d);
}

loc_800CB1E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CB22C;
    }
}

loc_800CB1E8:
{
}

loc_800CB1EC:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800CB20C;
    }
}

loc_800CB1F0:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB1F8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_3B54B = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_3B54B;
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
    f0.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PpcFmulsInline(f15.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f0.d));
    goto loc_800CB220;
}

loc_800CB20C:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB214u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_3B9EA = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_3B9EA;
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
    f0.d = PpcFmulsInline(f15.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f0.d));
}

loc_800CB220:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
}

loc_800CB22C:
{
    SetCRFloatResident(cr, 0, f25.d, f27.d);
}

loc_800CB230:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CB254;
    }
}

loc_800CB234:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f24.d);
}

loc_800CB240:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CB264;
    }
}

loc_800CB244:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    SetCRFloatResident(cr, 0, f1.d, f24.d);
}

loc_800CB250:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CB264;
    }
}

loc_800CB254:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f25.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f22.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f25.d);
    goto loc_800CB2A0;
}

loc_800CB264:
{
    f1.d = PpcFmulsInline(f31.d, f27.d);
    ctx->lr = 0x800CB26Cu;
    if constexpr (KnownRegArgsCpuCall<0x80464618u>(&func_80464618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
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
        const auto regargs_result_80464618_3C548 = func_80464618_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464618_3C548);
        r4 = static_cast<uint32_t>(regargs_result_80464618_3C548 >> 32);
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
        InvokeDirectCpu<0x80464618u>(ctx);
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
    }
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f14.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
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
    mkw_gqr0 = ctx->gqr[0];
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f14.d), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    f14.d = PPC_PsToScalarInline(f14.d);
}

loc_800CB2A0:
{
    r3 = r26;
    r4 = (r1 + 44);
    r5 = (r1 + 32);
    r6 = r27;
    r7 = r28;
    r8 = (r30 & 65535);
    f1.d = f23.d;
    r9 = r31;
    ctx->lr = 0x800CB2C4u;
    if constexpr (KnownRegArgsCpuCall<0x800C9E34u>(&func_800C9E34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C9E34_3DEA4 = func_800C9E34_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800C9E34_3DEA4);
        r4 = static_cast<uint32_t>(regargs_result_800C9E34_3DEA4 >> 32);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
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
        ctx->fpr[8] = f8;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C9E34u>(ctx);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = (r19 + 1);
}

loc_800CB2C8:
{
}

loc_800CB2CC:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r24))) {
        goto loc_800CB080;
    }
}

loc_800CB2D0:
{
    goto loc_800CB8BC;
}

loc_800CB2D4:
{
    r18 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            f31.d = PpcBitCastToFloatInline(resolved_pair.first);
            f26.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30812));
            f26.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -30808));
        }
    }
    r19 = 715849728;
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30804));
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r2 + -30772));
    goto loc_800CB8B4;
}

loc_800CB2F0:
{
    SetCRFloatResident(cr, 0, f25.d, f17.d);
}

loc_800CB2F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB32C;
    }
}

loc_800CB2F8:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB300u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_3EDB6 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_3EDB6;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    r3 = (r27 + 236);
    ctx->lr = 0x800CB310u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_3F1D6 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_3F1D6;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    r3 = (r27 + 236);
    ctx->lr = 0x800CB320u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_3F5F6 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_3F5F6;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f16.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    goto loc_800CB5C8;
}

loc_800CB32C:
{
    SetCRFloatResident(cr, 0, f26.d, f17.d);
}

loc_800CB330:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB478;
    }
}

loc_800CB334:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB33Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A6ED4u>(&func_800A6ED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800A6ED4_3FAB4 = func_800A6ED4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800A6ED4_3FAB4);
        r4 = static_cast<uint32_t>(regargs_result_800A6ED4_3FAB4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800A6ED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r19 + -21845);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 6);
    r0 = (r3 - r0);
}

loc_800CB358:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CB388;
    }
}

loc_800CB35C:
{
}

loc_800CB360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800CB3B0;
    }
}

loc_800CB364:
{
}

loc_800CB368:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800CB3D8;
    }
}

loc_800CB36C:
{
}

loc_800CB370:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800CB400;
    }
}

loc_800CB374:
{
}

loc_800CB378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800CB428;
    }
}

loc_800CB37C:
{
}

loc_800CB380:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800CB450;
    }
}

loc_800CB384:
{
    goto loc_800CB5C8;
}

loc_800CB388:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB390u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_4032E = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_4032E;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    r3 = (r27 + 236);
    ctx->lr = 0x800CB3A0u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_4074E = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_4074E;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f16.d = f26.d;
    goto loc_800CB5C8;
}

loc_800CB3B0:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB3B8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_40BB1 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_40BB1;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    r3 = (r27 + 236);
    ctx->lr = 0x800CB3C8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_40FD1 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_40FD1;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f16.d = MemoryInline::FlatReadFloat32((r2 + -30772));
    goto loc_800CB5C8;
}

loc_800CB3D8:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB3E0u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_4145B = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_4145B;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f15.d = f26.d;
    r3 = (r27 + 236);
    ctx->lr = 0x800CB3F4u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_4188F = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_4188F;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f16.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    goto loc_800CB5C8;
}

loc_800CB400:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB408u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_41CDE = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_41CDE;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f15.d = MemoryInline::FlatReadFloat32((r2 + -30772));
    r3 = (r27 + 236);
    ctx->lr = 0x800CB41Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_42139 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_42139;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f16.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    goto loc_800CB5C8;
}

loc_800CB428:
{
    f14.d = MemoryInline::FlatReadFloat32((r2 + -30808));
    r3 = (r27 + 236);
    ctx->lr = 0x800CB434u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_425C3 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_425C3;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    r3 = (r27 + 236);
    ctx->lr = 0x800CB444u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_429E3 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_429E3;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f16.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    goto loc_800CB5C8;
}

loc_800CB450:
{
    f14.d = MemoryInline::FlatReadFloat32((r2 + -30772));
    r3 = (r27 + 236);
    ctx->lr = 0x800CB45Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_42E6D = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_42E6D;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    r3 = (r27 + 236);
    ctx->lr = 0x800CB46Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_4328D = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_4328D;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f16.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    goto loc_800CB5C8;
}

loc_800CB478:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = PpcFmulsInline(f28.d, f1.d);
    f14.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = PpcFmulsInline(f17.d, f1.d);
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f15.d = PpcFmulsInline(f28.d, f0.d);
    f1.d = PpcFmulsInline(f30.d, f28.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f17.d, f0.d);
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f16.d = PpcFmulsInline(f17.d, f0.d);
    r3 = (r27 + 236);
    ctx->lr = 0x800CB4B4u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_43910 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_43910;
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
    f2.d = static_cast<double>(PpcForceSingleValueInline(f14.d + f15.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f16.d + f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f0.d, f14.d);
}

loc_800CB4C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CB518;
    }
}

loc_800CB4C8:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB4D0u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_43E1D = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_43E1D;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    r3 = (r27 + 236);
    ctx->lr = 0x800CB4E0u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_4423D = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_4423D;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f15.d = PpcFmulsInline(f28.d, f0.d);
    SetCRFloatResident(cr, 0, f15.d, f25.d);
}

loc_800CB4F0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB500;
    }
}

loc_800CB4F8:
{
    f15.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f15.d));
    goto loc_800CB504;
}

loc_800CB500:
{
    f15.d = static_cast<double>(PpcForceSingleValueInline(f24.d - f15.d));
}

loc_800CB504:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB50Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_44895 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_44895;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f16.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    goto loc_800CB5C8;
}

loc_800CB518:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800CB51C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CB574;
    }
}

loc_800CB520:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB528u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_44D87 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_44D87;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    r3 = (r27 + 236);
    ctx->lr = 0x800CB538u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_451A7 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_451A7;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f15.d = PpcFmulsInline(f17.d, f0.d);
    r3 = (r27 + 236);
    ctx->lr = 0x800CB54Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_455F0 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_455F0;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f16.d = PpcFmulsInline(f28.d, f0.d);
    SetCRFloatResident(cr, 0, f16.d, f25.d);
}

loc_800CB55C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB56C;
    }
}

loc_800CB564:
{
    f16.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f16.d));
    goto loc_800CB5C8;
}

loc_800CB56C:
{
    f16.d = static_cast<double>(PpcForceSingleValueInline(f24.d - f16.d));
    goto loc_800CB5C8;
}

loc_800CB574:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB57Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_45C60 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_45C60;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f14.d = PpcFmulsInline(f28.d, f0.d);
    SetCRFloatResident(cr, 0, f14.d, f25.d);
}

loc_800CB58C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB59C;
    }
}

loc_800CB594:
{
    f14.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f14.d));
    goto loc_800CB5A0;
}

loc_800CB59C:
{
    f14.d = static_cast<double>(PpcForceSingleValueInline(f24.d - f14.d));
}

loc_800CB5A0:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CB5A8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_462B8 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_462B8;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f15.d = PpcFmulsInline(f17.d, f0.d);
    r3 = (r27 + 236);
    ctx->lr = 0x800CB5BCu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_46701 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_46701;
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
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f16.d = PpcFmulsInline(f17.d, f0.d);
}

loc_800CB5C8:
{
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30804));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    SetCRFloatResident(cr, 0, f15.d, f25.d);
}

loc_800CB5E8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB620;
    }
}

loc_800CB5F0:
{
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_46E83 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_46E83[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_46E83[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f15.d, f1.d);
}

loc_800CB5FC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB620;
    }
}

loc_800CB604:
{
    f1.d = f16.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_47A90 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_47A90[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_47A90[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f15.d, f1.d);
}

loc_800CB610:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB620;
    }
}

loc_800CB618:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f26.d);
    goto loc_800CB6F4;
}

loc_800CB620:
{
    SetCRFloatResident(cr, 0, f15.d, f25.d);
}

loc_800CB624:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CB660;
    }
}

loc_800CB628:
{
    f1.d = f14.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_487AB = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_487AB);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f0.d = (-(f15.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800CB638:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB660;
    }
}

loc_800CB640:
{
    f1.d = f16.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4937D = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4937D);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f0.d = (-(f15.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800CB650:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB660;
    }
}

loc_800CB658:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f24.d);
    goto loc_800CB6F4;
}

loc_800CB660:
{
    SetCRFloatResident(cr, 0, f14.d, f25.d);
}

loc_800CB664:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB69C;
    }
}

loc_800CB66C:
{
    f1.d = f15.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4A0E9 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_4A0E9[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4A0E9[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f14.d, f1.d);
}

loc_800CB678:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB69C;
    }
}

loc_800CB680:
{
    f1.d = f16.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4ACF6 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_4ACF6[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4ACF6[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f14.d, f1.d);
}

loc_800CB68C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB69C;
    }
}

loc_800CB694:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f26.d);
    goto loc_800CB6F4;
}

loc_800CB69C:
{
    SetCRFloatResident(cr, 0, f14.d, f25.d);
}

loc_800CB6A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CB6DC;
    }
}

loc_800CB6A4:
{
    f1.d = f15.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4BA10 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4BA10);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f0.d = (-(f14.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800CB6B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB6DC;
    }
}

loc_800CB6BC:
{
    f1.d = f16.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4C5E2 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4C5E2);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f0.d = (-(f14.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800CB6CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB6DC;
    }
}

loc_800CB6D4:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f24.d);
    goto loc_800CB6F4;
}

loc_800CB6DC:
{
    SetCRFloatResident(cr, 0, f16.d, f25.d);
}

loc_800CB6E0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CB6F0;
    }
}

loc_800CB6E8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f26.d);
    goto loc_800CB6F4;
}

loc_800CB6F0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f24.d);
}

loc_800CB6F4:
{
    f0.d = PpcFmulsInline(f14.d, f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    f2.d = PpcFmulsInline(f15.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    f1.d = PpcFmulsInline(f16.d, f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    SetCRFloatResident(cr, 0, f25.d, f27.d);
}

loc_800CB714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CB88C;
    }
}

loc_800CB718:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    SetCRFloatResident(cr, 0, f25.d, f0.d);
}

loc_800CB720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CB79C;
    }
}

loc_800CB724:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4D6D1 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4D6D1);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f18.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4E192 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4E192);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f18.d);
}

loc_800CB738:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CB748;
    }
}

loc_800CB73C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4ECE4 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_4ECE4[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4ECE4[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    goto loc_800CB750;
}

loc_800CB748:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4F813 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_4F813[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4F813[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
}

loc_800CB750:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x800CB758u;
    if constexpr (KnownRegArgsCpuCall<0x80464618u>(&func_80464618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
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
        const auto regargs_result_80464618_5049B = func_80464618_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464618_5049B);
        r4 = static_cast<uint32_t>(regargs_result_80464618_5049B >> 32);
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
        InvokeDirectCpu<0x80464618u>(ctx);
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
    }
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f18.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
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
    mkw_gqr0 = ctx->gqr[0];
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f18.d), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f18.d = PPC_PsToScalarInline(f18.d);
    goto loc_800CB88C;
}

loc_800CB79C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f25.d, f0.d);
}

loc_800CB7A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CB81C;
    }
}

loc_800CB7A8:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_51DDF = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_51DDF);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f18.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_528A0 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_528A0);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f18.d);
}

loc_800CB7BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CB7CC;
    }
}

loc_800CB7C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_533F2 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_533F2[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_533F2[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    goto loc_800CB7D4;
}

loc_800CB7CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_53F21 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_53F21[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_53F21[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
}

loc_800CB7D4:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x800CB7DCu;
    if constexpr (KnownRegArgsCpuCall<0x80464618u>(&func_80464618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
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
        const auto regargs_result_80464618_54BA9 = func_80464618_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464618_54BA9);
        r4 = static_cast<uint32_t>(regargs_result_80464618_54BA9 >> 32);
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
        InvokeDirectCpu<0x80464618u>(ctx);
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
    }
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f18.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
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
    mkw_gqr0 = ctx->gqr[0];
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f18.d), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f18.d = PPC_PsToScalarInline(f18.d);
    goto loc_800CB88C;
}

loc_800CB81C:
{
    f1.d = f2.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_563F0 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_563F0);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    f18.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_56EB1 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_56EB1);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    SetCRFloatResident(cr, 0, f1.d, f18.d);
}

loc_800CB834:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CB844;
    }
}

loc_800CB838:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_57A03 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_57A03[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_57A03[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
    goto loc_800CB84C;
}

loc_800CB844:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_58532 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_58532[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_58532[1]);
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
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[16] = f16;
        ctx->fpr[17] = f17;
        ctx->fpr[18] = f18;
        ctx->fpr[19] = f19;
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f16 = ctx->fpr[16];
        f17 = ctx->fpr[17];
        f18 = ctx->fpr[18];
        f19 = ctx->fpr[19];
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
    }
}

loc_800CB84C:
{
    f1.d = PpcFmulsInline(f1.d, f27.d);
    ctx->lr = 0x800CB854u;
    if constexpr (KnownRegArgsCpuCall<0x80464618u>(&func_80464618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
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
        const auto regargs_result_80464618_591BA = func_80464618_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464618_591BA);
        r4 = static_cast<uint32_t>(regargs_result_80464618_591BA >> 32);
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
        InvokeDirectCpu<0x80464618u>(ctx);
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
    }
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f18.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
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
    mkw_gqr0 = ctx->gqr[0];
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f18.d), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f18.d = PPC_PsToScalarInline(f18.d);
}

loc_800CB88C:
{
    r3 = r26;
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    r6 = r27;
    r7 = r28;
    r8 = (r30 & 65535);
    f1.d = f23.d;
    r9 = r31;
    ctx->lr = 0x800CB8B0u;
    if constexpr (KnownRegArgsCpuCall<0x800C9E34u>(&func_800C9E34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C9E34_5AB3C = func_800C9E34_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800C9E34_5AB3C);
        r4 = static_cast<uint32_t>(regargs_result_800C9E34_5AB3C >> 32);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
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
        ctx->fpr[8] = f8;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C9E34u>(ctx);
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
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r18 = (r18 + 1);
}

loc_800CB8B4:
{
}

loc_800CB8B8:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r29))) {
        goto loc_800CB2F0;
    }
}

loc_800CB8BC:
{
    r0 = 552;
    addr_psqx_800CB8C0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB8C0_loc_0));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 272), 0, 296u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 272u, (r1 + 544));
    r0 = 536;
    addr_psqx_800CB8CC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB8CC_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 256u, (r1 + 528));
    r0 = 520;
    addr_psqx_800CB8D8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB8D8_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 240u, (r1 + 512));
    r0 = 504;
    addr_psqx_800CB8E4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB8E4_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 224u, (r1 + 496));
    r0 = 488;
    addr_psqx_800CB8F0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB8F0_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 208u, (r1 + 480));
    r0 = 472;
    addr_psqx_800CB8FC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB8FC_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 192u, (r1 + 464));
    r0 = 456;
    addr_psqx_800CB908_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB908_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 176u, (r1 + 448));
    r0 = 440;
    addr_psqx_800CB914_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB914_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 160u, (r1 + 432));
    r0 = 424;
    addr_psqx_800CB920_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB920_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 144u, (r1 + 416));
    r0 = 408;
    addr_psqx_800CB92C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB92C_loc_0));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 128u, (r1 + 400));
    r0 = 392;
    addr_psqx_800CB938_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f21, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB938_loc_0));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 112u, (r1 + 384));
    r0 = 376;
    addr_psqx_800CB944_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f20, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB944_loc_0));
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 96u, (r1 + 368));
    r0 = 360;
    addr_psqx_800CB950_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f19, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB950_loc_0));
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 80u, (r1 + 352));
    r0 = 344;
    addr_psqx_800CB95C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f18, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB95C_loc_0));
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 64u, (r1 + 336));
    r0 = 328;
    addr_psqx_800CB968_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f17, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB968_loc_0));
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 48u, (r1 + 320));
    r0 = 312;
    addr_psqx_800CB974_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f16, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB974_loc_0));
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 32u, (r1 + 304));
    r0 = 296;
    addr_psqx_800CB980_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f15, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB980_loc_0));
    f15.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 16u, (r1 + 288));
    r0 = 280;
    addr_psqx_800CB98C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f14, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CB98C_loc_0));
    f14.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 0u, (r1 + 272));
    r11 = (r1 + 272);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::ReadResolved32(guest_range_5, 292u, (r1 + 564));
    ctx->lr = r0;
    r1 = (r1 + 560);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800CA264(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CA264_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CA264 func_800CA264 preserves=true fpr_mask=0x00000000
