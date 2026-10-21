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
extern "C" void func_800CE608(CpuContext* ctx);
extern "C" uint64_t func_800CE608_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80464590(CpuContext* ctx);
extern "C" uint64_t func_80464590_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800C9E30_statefree(PPC_FPR, PPC_FPR);
extern "C" uint64_t func_800C9E30_statefree_v0(PPC_FPR);

extern "C" uint64_t func_800CDB90_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800CE51C_loc_0 = 0;
    uint32_t addr_psqx_800CE528_loc_0 = 0;
    uint32_t addr_psqx_800CE534_loc_0 = 0;
    uint32_t addr_psqx_800CE540_loc_0 = 0;
    uint32_t addr_psqx_800CE54C_loc_0 = 0;
    uint32_t addr_psqx_800CE558_loc_0 = 0;
    uint32_t addr_psqx_800CE564_loc_0 = 0;
    uint32_t addr_psqx_800CE570_loc_0 = 0;
    uint32_t addr_psqx_800CE57C_loc_0 = 0;
    uint32_t addr_psqx_800CE588_loc_0 = 0;
    uint32_t addr_psqx_800CE594_loc_0 = 0;
    uint32_t addr_psqx_800CE5A0_loc_0 = 0;
    uint32_t addr_psqx_800CE5AC_loc_0 = 0;
    uint32_t addr_psqx_800CE5B8_loc_0 = 0;
    uint32_t addr_psqx_800CE5C4_loc_0 = 0;
    uint32_t addr_psqx_800CE5D0_loc_0 = 0;
    uint32_t addr_psqx_800CE5DC_loc_0 = 0;
    uint32_t addr_psqx_800CE5E8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r17 = ctx->gpr[17];
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
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800CDB90u);
    goto loc_800CDB90;

loc_800CDB90:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -544), 0, 552u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -544), r1);
    r1 = (r1 + -544);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 548u, (r1 + 548), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 528u, (r1 + 528), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 536);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 512u, (r1 + 512), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 520);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 496u, (r1 + 496), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 480u, (r1 + 480), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 464u, (r1 + 464), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 448u, (r1 + 448), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 432u, (r1 + 432), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 416u, (r1 + 416), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 400u, (r1 + 400), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 384u, (r1 + 384), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 368u, (r1 + 368), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 352u, (r1 + 352), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 336u, (r1 + 336), f19.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_12 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_12, PPC_PsFromScalarInline(f19.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 320u, (r1 + 320), f18.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_13 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_13, PPC_PsFromScalarInline(f18.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 304u, (r1 + 304), f17.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_14 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_14, PPC_PsFromScalarInline(f17.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 288u, (r1 + 288), f16.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_15 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_15, PPC_PsFromScalarInline(f16.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 272u, (r1 + 272), f15.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_16 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_16, PPC_PsFromScalarInline(f15.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 256u, (r1 + 256), f14.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_17 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_17, PPC_PsFromScalarInline(f14.d));
    r11 = (r1 + 256);
    // inline leaf 0x80457460 (16 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    // end of inlined leaf 0x80457460
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r23 = r7;
    r18 = r8;
    r30 = r9;
    f29.d = f1.d;
    r31 = r10;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_3, 168u, (r1 + 168), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_3, 176u, (r1 + 176), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800CDC8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDCA4;
    }
}

loc_800CDC90:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CDC9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDCA4;
    }
}

loc_800CDCA0:
{
    r10 = 0;
}

loc_800CDCA4:
{
}

loc_800CDCA8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800CDCC0;
    }
}

loc_800CDCAC:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CDCB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDCC0;
    }
}

loc_800CDCBC:
{
    r9 = 0;
}

loc_800CDCC0:
{
}

loc_800CDCC4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CDCD8;
    }
}

loc_800CDCC8:
{
    r0 = (r11 + 1073741824);
}

loc_800CDCD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDCD8;
    }
}

loc_800CDCD4:
{
    r8 = 0;
}

loc_800CDCD8:
{
}

loc_800CDCDC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CDCF4;
    }
}

loc_800CDCE0:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CDCEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDCF4;
    }
}

loc_800CDCF0:
{
    r7 = 0;
}

loc_800CDCF4:
{
}

loc_800CDCF8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CDD10;
    }
}

loc_800CDCFC:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CDD08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDD10;
    }
}

loc_800CDD0C:
{
    r6 = 0;
}

loc_800CDD10:
{
}

loc_800CDD14:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CDD2C;
    }
}

loc_800CDD18:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CDD24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDD2C;
    }
}

loc_800CDD28:
{
    r5 = 0;
}

loc_800CDD2C:
{
}

loc_800CDD30:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CDD54;
    }
}

loc_800CDD34:
{
    r3 = 0x80590000u;
    r3 = (r3 + 22552);
    r4 = 42;
    r5 = 0x80590000u;
    r5 = (r5 + 22568);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CDD54u;
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

loc_800CDD54:
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

loc_800CDD78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDD90;
    }
}

loc_800CDD7C:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CDD88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDD90;
    }
}

loc_800CDD8C:
{
    r9 = 0;
}

loc_800CDD90:
{
}

loc_800CDD94:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CDDAC;
    }
}

loc_800CDD98:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CDDA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDDAC;
    }
}

loc_800CDDA8:
{
    r8 = 0;
}

loc_800CDDAC:
{
}

loc_800CDDB0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CDDC4;
    }
}

loc_800CDDB4:
{
    r0 = (r10 + 1073741824);
}

loc_800CDDBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDDC4;
    }
}

loc_800CDDC0:
{
    r7 = 0;
}

loc_800CDDC4:
{
}

loc_800CDDC8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CDDE0;
    }
}

loc_800CDDCC:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CDDD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDDE0;
    }
}

loc_800CDDDC:
{
    r6 = 0;
}

loc_800CDDE0:
{
}

loc_800CDDE4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CDDFC;
    }
}

loc_800CDDE8:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CDDF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDDFC;
    }
}

loc_800CDDF8:
{
    r5 = 0;
}

loc_800CDDFC:
{
}

loc_800CDE00:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CDE18;
    }
}

loc_800CDE04:
{
    r3 = (r28 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CDE10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDE18;
    }
}

loc_800CDE14:
{
    r4 = 0;
}

loc_800CDE18:
{
}

loc_800CDE1C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CDE40;
    }
}

loc_800CDE20:
{
    r3 = 0x80590000u;
    r3 = (r3 + 22552);
    r4 = 43;
    r5 = 0x80590000u;
    r5 = (r5 + 22620);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CDE40u;
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

loc_800CDE40:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r18 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800CDE64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDE7C;
    }
}

loc_800CDE68:
{
    r3 = (r18 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CDE74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDE7C;
    }
}

loc_800CDE78:
{
    r9 = 0;
}

loc_800CDE7C:
{
}

loc_800CDE80:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CDE98;
    }
}

loc_800CDE84:
{
    r3 = (r18 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CDE90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDE98;
    }
}

loc_800CDE94:
{
    r8 = 0;
}

loc_800CDE98:
{
}

loc_800CDE9C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CDEB0;
    }
}

loc_800CDEA0:
{
    r0 = (r10 + 1073741824);
}

loc_800CDEA8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDEB0;
    }
}

loc_800CDEAC:
{
    r7 = 0;
}

loc_800CDEB0:
{
}

loc_800CDEB4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CDECC;
    }
}

loc_800CDEB8:
{
    r3 = (r18 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CDEC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDECC;
    }
}

loc_800CDEC8:
{
    r6 = 0;
}

loc_800CDECC:
{
}

loc_800CDED0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CDEE8;
    }
}

loc_800CDED4:
{
    r3 = (r18 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CDEE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDEE8;
    }
}

loc_800CDEE4:
{
    r5 = 0;
}

loc_800CDEE8:
{
}

loc_800CDEEC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CDF04;
    }
}

loc_800CDEF0:
{
    r3 = (r18 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CDEFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CDF04;
    }
}

loc_800CDF00:
{
    r4 = 0;
}

loc_800CDF04:
{
}

loc_800CDF08:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CDF2C;
    }
}

loc_800CDF0C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 22552);
    r4 = 44;
    r5 = 0x80590000u;
    r5 = (r5 + 22672);
    r6 = r18;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CDF2Cu;
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

loc_800CDF2C:
{
}

loc_800CDF30:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(1))) {
        goto loc_800CE518;
    }
}

loc_800CDF34:
{
    f1.d = MemoryInline::FlatReadFloat32((r18 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30584));
    f17.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = MemoryInline::FlatReadFloat32(r18);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4EA7 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_4EA7[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4EA7[1]);
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
        ctr = ctx->ctr;
    }
    f19.d = MemoryInline::FlatReadFloat32((r2 + -30580));
    SetCRFloatResident(cr, 0, f1.d, f19.d);
}

loc_800CDF50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CDF58;
    }
}

loc_800CDF54:
{
    f19.d = MemoryInline::FlatReadFloat32(r18);
}

loc_800CDF58:
{
    r0 = (r23 & 33554432);
}

loc_800CDF60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CDF70;
    }
}

loc_800CDF64:
{
    f16.d = f19.d;
    f31.d = f19.d;
    goto loc_800CDFA0;
}

loc_800CDF70:
{
    f1.d = MemoryInline::FlatReadFloat32((r18 + 16));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_5BBD = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_5BBD);
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
        ctr = ctx->ctr;
    }
    f16.d = MemoryInline::FlatReadFloat32((r2 + -30580));
    SetCRFloatResident(cr, 0, f1.d, f16.d);
}

loc_800CDF80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CDF88;
    }
}

loc_800CDF84:
{
    f16.d = MemoryInline::FlatReadFloat32((r18 + 16));
}

loc_800CDF88:
{
    f1.d = MemoryInline::FlatReadFloat32((r18 + 20));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_6797 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_6797[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_6797[1]);
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
        ctr = ctx->ctr;
    }
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30580));
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_800CDF98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CDFA0;
    }
}

loc_800CDF9C:
{
    f31.d = MemoryInline::FlatReadFloat32((r18 + 20));
}

loc_800CDFA0:
{
    f30.d = MemoryInline::FlatReadFloat32((r18 + 8));
    r0 = (r23 & 262144);
}

loc_800CDFAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800CDFCC;
    }
}

loc_800CDFB0:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CDFB8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_7465 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_7465;
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30572));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30576));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
}

loc_800CDFCC:
{
    r0 = (r23 & 131072);
}

loc_800CDFD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CE310;
    }
}

loc_800CDFD8:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r22 = (r3 + 1);
    r21 = 0;
    r20 = 1;
    r19 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r18 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r18 + 8));
    f15.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r18 = 0;
    f1.d = f15.d;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30568));
    ctx->lr = 0x800CE008u;
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
        const auto regargs_result_80464590_7C05 = func_80464590_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80464590_7C05);
        r4 = static_cast<uint32_t>(regargs_result_80464590_7C05 >> 32);
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
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -30572), 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30564));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800CE010:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800CE020;
    }
}

loc_800CE014:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -30560));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800CE01C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800CE024;
    }
}

loc_800CE020:
{
    r18 = 1;
}

loc_800CE024:
{
    r17 = 0;
    r25 = 0;
    r24 = (r23 & 16777216);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r29 * r0);
    r23 = (r3 + 2);
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r2 + -30536));
    r0 = (r22 + -1);
    r29 = (r0 ^ -2147483648);
    f21.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30572));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            f22.d = PpcBitCastToFloatInline(resolved_pair.first);
            f23.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f22.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -30556));
            f23.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -30552));
        }
    }
    f24.d = static_cast<double>(PpcForceSingleValueInline(f23.d - f17.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            f28.d = PpcBitCastToFloatInline(resolved_pair.first);
            f27.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -30548));
            f27.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -30544));
        }
    }
    f26.d = (-(f16.d));
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r2 + -30540));
    goto loc_800CE304;
}

loc_800CE06C:
{
    r0 = (r21 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    MemoryInline::FlatWriteRam32((r1 + 180), r29);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f16.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f0.d));
}

loc_800CE098:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(1))) {
        goto loc_800CE0A4;
    }
}

loc_800CE09C:
{
    f14.d = f30.d;
    goto loc_800CE10C;
}

loc_800CE0A4:
{
}

loc_800CE0A8:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_800CE0DC;
    }
}

loc_800CE0AC:
{
    r0 = (r19 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    r0 = (r20 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f15.d, f0.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    goto loc_800CE10C;
}

loc_800CE0DC:
{
    r0 = (r19 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    r0 = (r20 + -1);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f15.d, f0.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
}

loc_800CE10C:
{
    r19 = (r19 + 1);
}

loc_800CE114:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(r20))) {
        goto loc_800CE158;
    }
}

loc_800CE118:
{
    r19 = 0;
    r25 = (r25 + 2);
    r21 = (r21 + 1);
}

loc_800CE128:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(r22))) {
        goto loc_800CE144;
    }
}

loc_800CE12C:
{
}

loc_800CE130:
{
    r0 = (r20 + 3);
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(1))) {
        goto loc_800CE13C;
    }
}

loc_800CE138:
{
    r0 = (r20 + 4);
}

loc_800CE13C:
{
    r20 = r0;
    goto loc_800CE158;
}

loc_800CE144:
{
}

loc_800CE148:
{
    r0 = 1;
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(4))) {
        goto loc_800CE154;
    }
}

loc_800CE150:
{
    r0 = (r20 + -4);
}

loc_800CE154:
{
    r20 = r0;
}

loc_800CE158:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CE160u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_9740 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_9740;
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
}

loc_800CE164:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_800CE174;
    }
}

loc_800CE168:
{
    f0.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f23.d - f0.d));
}

loc_800CE174:
{
    f0.d = PpcFmulsInline(f1.d, f24.d);
    f18.d = static_cast<double>(PpcForceSingleValueInline(f17.d + f0.d));
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
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f28.d);
    r3 = (r1 + 120);
    r4 = (r1 + 128);
    f1.d = f14.d;
    ctx->lr = 0x800CE1B0u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = PpcFmulsInline(f0.d, f27.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    r3 = (r1 + 160);
    f1.d = f16.d;
    ctx->lr = 0x800CE1C8u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f0.d = PpcFmulsInline(f19.d, f18.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    f1.d = PpcFmulsInline(f26.d, f18.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
    f1.d = PpcFmulsInline(f31.d, f18.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f0.d);
    r3 = (r1 + 132);
    r4 = (r1 + 156);
    ctx->lr = 0x800CE210u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009C4E8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    f1.d = f16.d;
    ctx->lr = 0x800CE218u;
    if constexpr (KnownRegArgsCpuCall<0x800CE608u>(&func_800CE608)) {
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
        const auto regargs_result_800CE608_B081 = func_800CE608_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CE608_B081);
        r4 = static_cast<uint32_t>(regargs_result_800CE608_B081 >> 32);
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
        InvokeDirectCpu<0x800CE608u>(ctx);
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
    SetCRFloatResident(cr, 0, f1.d, f28.d);
}

loc_800CE21C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CE238;
    }
}

loc_800CE220:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f0.d);
}

loc_800CE238:
{
    r3 = r26;
    r4 = (r1 + 144);
    r5 = r27;
    r6 = (r1 + 156);
    r7 = (r1 + 132);
    r8 = r7;
    r9 = (r1 + 120);
    ctx->lr = 0x800CE258u;
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
        ctx->fpr[8] = f8;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800A9A18_BFD8 = func_800A9A18_ra38_fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_800A9A18_BFD8);
        r4 = static_cast<uint32_t>(regargs_result_800A9A18_BFD8 >> 32);
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
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r1 + 144));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = MemoryInline::FlatRead32((r1 + 152));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r3 = MemoryInline::FlatRead32((r1 + 156));
    r0 = MemoryInline::FlatRead32((r1 + 160));
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r0 = MemoryInline::FlatRead32((r1 + 164));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r3 = (r27 + 236);
    ctx->lr = 0x800CE290u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_CC54 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_CC54;
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
    r0 = MemoryInline::FlatRead8((r27 + 103));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f20.d));
    f0.d = PpcFmulsInline(f25.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f0.d));
    r3 = r26;
    r4 = (r30 & 65535);
    f1.d = f29.d;
    r5 = r27;
    ctx->lr = 0x800CE2C8u;
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
        const auto regargs_result_800AA014_D27D = func_800AA014_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800AA014_D27D);
        r4 = static_cast<uint32_t>(regargs_result_800AA014_D27D >> 32);
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
    r3 = r28;
    r4 = (r0 & 65535);
    r5 = (r1 + 60);
    r6 = (r1 + 48);
    r7 = r31;
    f1.d = f14.d;
    r8 = (r27 + 252);
    r9 = MemoryInline::FlatRead32((r27 + 248));
    r10 = MemoryInline::FlatRead16((r27 + 232));
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800CE300u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r17 = (r17 + 1);
}

loc_800CE304:
{
}

loc_800CE308:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(r23))) {
        goto loc_800CE06C;
    }
}

loc_800CE30C:
{
    goto loc_800CE518;
}

loc_800CE310:
{
    r17 = 0;
    r25 = (r23 & 16777216);
    f25.d = MemoryInline::FlatReadFloat32((r2 + -30584));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -30552));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -30572));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -30556));
    f20.d = MemoryInline::FlatReadFloat32((r2 + -30548));
    f17.d = MemoryInline::FlatReadFloat64((r2 + -30536));
    f15.d = MemoryInline::FlatReadFloat32((r2 + -30540));
    goto loc_800CE510;
}

loc_800CE338:
{
    r3 = (r1 + 108);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 96);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r27 + 236);
    ctx->lr = 0x800CE350u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_E307 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_E307;
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
    f0.d = MemoryInline::FlatReadFloat32((r18 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f25.d));
}

loc_800CE35C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800CE37C;
    }
}

loc_800CE360:
{
    f0.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f18.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_800CE388;
}

loc_800CE37C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f18.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_800CE388:
{
    r3 = (r27 + 236);
    ctx->lr = 0x800CE390u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_E9DF = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_E9DF;
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
    f2.d = MemoryInline::FlatReadFloat32((r18 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r18 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    r3 = (r27 + 236);
    ctx->lr = 0x800CE3ACu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_EE8E = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_EE8E;
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
    f0.d = PpcFmulsInline(f27.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
    r3 = (r1 + 20);
    r4 = (r1 + 16);
    ctx->lr = 0x800CE3C0u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    f1.d = f14.d;
    ctx->lr = 0x800CE3D0u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = (-(f2.d));
    f0.d = PpcFmulsInline(f19.d, f18.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = (-(f0.d));
    f0.d = PpcFmulsInline(f16.d, f18.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    f0.d = PpcFmulsInline(f31.d, f18.d);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    r3 = (r1 + 84);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 84);
    r4 = (r1 + 108);
    ctx->lr = 0x800CE428u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009C4E8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 72);
    r4 = (r1 + 108);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f20.d);
    r3 = (r1 + 72);
    r4 = r3;
    ctx->lr = 0x800CE444u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009C4E8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r26;
    r4 = (r1 + 96);
    r5 = r27;
    r6 = (r1 + 108);
    r7 = (r1 + 84);
    r8 = r7;
    r9 = (r1 + 72);
    ctx->lr = 0x800CE464u;
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
        ctx->fpr[8] = f8;
        ctx->fpr[14] = f14;
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800A9A18_10A9C = func_800A9A18_ra38_fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_800A9A18_10A9C);
        r4 = static_cast<uint32_t>(regargs_result_800A9A18_10A9C >> 32);
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
        f8 = ctx->fpr[8];
        f14 = ctx->fpr[14];
        f15 = ctx->fpr[15];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r1 + 96));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = MemoryInline::FlatRead32((r1 + 108));
    r0 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r0 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r3 = (r27 + 236);
    ctx->lr = 0x800CE49Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_1171A = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_1171A;
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
    r0 = MemoryInline::FlatRead8((r27 + 103));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f17.d));
    f0.d = PpcFmulsInline(f15.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f0.d));
    r3 = r26;
    r4 = (r30 & 65535);
    f1.d = f29.d;
    r5 = r27;
    ctx->lr = 0x800CE4D4u;
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
        const auto regargs_result_800AA014_11D45 = func_800AA014_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800AA014_11D45);
        r4 = static_cast<uint32_t>(regargs_result_800AA014_11D45 >> 32);
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
    r3 = r28;
    r4 = (r0 & 65535);
    r5 = (r1 + 36);
    r6 = (r1 + 24);
    r7 = r31;
    f1.d = f14.d;
    r8 = (r27 + 252);
    r9 = MemoryInline::FlatRead32((r27 + 248));
    r10 = MemoryInline::FlatRead16((r27 + 232));
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800CE50Cu;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r17 = (r17 + 1);
}

loc_800CE510:
{
}

loc_800CE514:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(r29))) {
        goto loc_800CE338;
    }
}

loc_800CE518:
{
    r0 = 536;
    addr_psqx_800CE51C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE51C_loc_0));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 256), 0, 296u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 272u, (r1 + 528));
    r0 = 520;
    addr_psqx_800CE528_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE528_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 256u, (r1 + 512));
    r0 = 504;
    addr_psqx_800CE534_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE534_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 240u, (r1 + 496));
    r0 = 488;
    addr_psqx_800CE540_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE540_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 224u, (r1 + 480));
    r0 = 472;
    addr_psqx_800CE54C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE54C_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 208u, (r1 + 464));
    r0 = 456;
    addr_psqx_800CE558_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE558_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 192u, (r1 + 448));
    r0 = 440;
    addr_psqx_800CE564_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE564_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 176u, (r1 + 432));
    r0 = 424;
    addr_psqx_800CE570_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE570_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 160u, (r1 + 416));
    r0 = 408;
    addr_psqx_800CE57C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE57C_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 400));
    r0 = 392;
    addr_psqx_800CE588_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE588_loc_0));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 384));
    r0 = 376;
    addr_psqx_800CE594_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f21, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE594_loc_0));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 368));
    r0 = 360;
    addr_psqx_800CE5A0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f20, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE5A0_loc_0));
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 352));
    r0 = 344;
    addr_psqx_800CE5AC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f19, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE5AC_loc_0));
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 336));
    r0 = 328;
    addr_psqx_800CE5B8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f18, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE5B8_loc_0));
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 320));
    r0 = 312;
    addr_psqx_800CE5C4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f17, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE5C4_loc_0));
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 304));
    r0 = 296;
    addr_psqx_800CE5D0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f16, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE5D0_loc_0));
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 288));
    r0 = 280;
    addr_psqx_800CE5DC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f15, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE5DC_loc_0));
    f15.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 272));
    r0 = 264;
    addr_psqx_800CE5E8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f14, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CE5E8_loc_0));
    f14.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 256));
    r11 = (r1 + 256);
    // inline leaf 0x804574AC (16 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    // end of inlined leaf 0x804574AC
    r0 = MemoryInline::ReadResolved32(guest_range_4, 292u, (r1 + 548));
    ctx->lr = r0;
    r1 = (r1 + 544);
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800CDB90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CDB90_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CDB90 func_800CDB90 preserves=true fpr_mask=0x00000000
