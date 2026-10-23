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
extern "C" uint64_t func_800C9E30_statefree_v0(PPC_FPR);

extern "C" uint64_t func_800C95A4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800C9D50_loc_0 = 0;
    uint32_t addr_psqx_800C9D5C_loc_0 = 0;
    uint32_t addr_psqx_800C9D68_loc_0 = 0;
    uint32_t addr_psqx_800C9D74_loc_0 = 0;
    uint32_t addr_psqx_800C9D80_loc_0 = 0;
    uint32_t addr_psqx_800C9D8C_loc_0 = 0;
    uint32_t addr_psqx_800C9D98_loc_0 = 0;
    uint32_t addr_psqx_800C9DA4_loc_0 = 0;
    uint32_t addr_psqx_800C9DB0_loc_0 = 0;
    uint32_t addr_psqx_800C9DBC_loc_0 = 0;
    uint32_t addr_psqx_800C9DC8_loc_0 = 0;
    uint32_t addr_psqx_800C9DD4_loc_0 = 0;
    uint32_t addr_psqx_800C9DE0_loc_0 = 0;
    uint32_t addr_psqx_800C9DEC_loc_0 = 0;
    uint32_t addr_psqx_800C9DF8_loc_0 = 0;
    uint32_t addr_psqx_800C9E04_loc_0 = 0;
    uint32_t addr_psqx_800C9E10_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
    uint32_t r1_psq_tmp_12 = 0;
    uint32_t r1_psq_tmp_13 = 0;
    uint32_t r1_psq_tmp_14 = 0;
    uint32_t r1_psq_tmp_15 = 0;
    uint32_t r1_psq_tmp_16 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
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
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800C95A4;

loc_800C95A4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -448), 0, 456u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -448), r1);
    r1 = (r1 + -448);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 452u, (r1 + 452), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 432u, (r1 + 432), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 416u, (r1 + 416), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 400u, (r1 + 400), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 384u, (r1 + 384), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 368u, (r1 + 368), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 352u, (r1 + 352), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 336u, (r1 + 336), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 320u, (r1 + 320), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 304u, (r1 + 304), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 288u, (r1 + 288), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 272u, (r1 + 272), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 256u, (r1 + 256), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 240u, (r1 + 240), f19.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_12 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_12, PPC_PsFromScalarInline(f19.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 224u, (r1 + 224), f18.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_13 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_13, PPC_PsFromScalarInline(f18.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 208u, (r1 + 208), f17.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_14 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_14, PPC_PsFromScalarInline(f17.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 192u, (r1 + 192), f16.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_15 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_15, PPC_PsFromScalarInline(f16.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 176u, (r1 + 176), f15.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_16 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_16, PPC_PsFromScalarInline(f15.d));
    r11 = (r1 + 176);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r22 = r3;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r29 = r7;
    r26 = r8;
    r27 = r9;
    f16.d = f1.d;
    r28 = r10;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_3, 112u, (r1 + 112), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_3, 120u, (r1 + 120), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C9698:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C96B0;
    }
}

loc_800C969C:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C96A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C96B0;
    }
}

loc_800C96AC:
{
    r10 = 0;
}

loc_800C96B0:
{
}

loc_800C96B4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C96CC;
    }
}

loc_800C96B8:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C96C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C96CC;
    }
}

loc_800C96C8:
{
    r9 = 0;
}

loc_800C96CC:
{
}

loc_800C96D0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C96E4;
    }
}

loc_800C96D4:
{
    r0 = (r11 + 1073741824);
}

loc_800C96DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C96E4;
    }
}

loc_800C96E0:
{
    r8 = 0;
}

loc_800C96E4:
{
}

loc_800C96E8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C9700;
    }
}

loc_800C96EC:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C96F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C9700;
    }
}

loc_800C96FC:
{
    r7 = 0;
}

loc_800C9700:
{
}

loc_800C9704:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C971C;
    }
}

loc_800C9708:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C9714:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C971C;
    }
}

loc_800C9718:
{
    r6 = 0;
}

loc_800C971C:
{
}

loc_800C9720:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C9738;
    }
}

loc_800C9724:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C9730:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C9738;
    }
}

loc_800C9734:
{
    r5 = 0;
}

loc_800C9738:
{
}

loc_800C973C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C9760;
    }
}

loc_800C9740:
{
    r3 = 0x80590000u;
    r3 = (r3 + 21352);
    r4 = 42;
    r5 = 0x80590000u;
    r5 = (r5 + 21368);
    r6 = r23;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C9760u;
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

loc_800C9760:
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

loc_800C9784:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C979C;
    }
}

loc_800C9788:
{
    r3 = (r24 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C9794:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C979C;
    }
}

loc_800C9798:
{
    r9 = 0;
}

loc_800C979C:
{
}

loc_800C97A0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C97B8;
    }
}

loc_800C97A4:
{
    r3 = (r24 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C97B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C97B8;
    }
}

loc_800C97B4:
{
    r8 = 0;
}

loc_800C97B8:
{
}

loc_800C97BC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C97D0;
    }
}

loc_800C97C0:
{
    r0 = (r10 + 1073741824);
}

loc_800C97C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C97D0;
    }
}

loc_800C97CC:
{
    r7 = 0;
}

loc_800C97D0:
{
}

loc_800C97D4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C97EC;
    }
}

loc_800C97D8:
{
    r3 = (r24 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C97E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C97EC;
    }
}

loc_800C97E8:
{
    r6 = 0;
}

loc_800C97EC:
{
}

loc_800C97F0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C9808;
    }
}

loc_800C97F4:
{
    r3 = (r24 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C9800:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C9808;
    }
}

loc_800C9804:
{
    r5 = 0;
}

loc_800C9808:
{
}

loc_800C980C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C9824;
    }
}

loc_800C9810:
{
    r3 = (r24 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C981C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C9824;
    }
}

loc_800C9820:
{
    r4 = 0;
}

loc_800C9824:
{
}

loc_800C9828:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C984C;
    }
}

loc_800C982C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 21352);
    r4 = 43;
    r5 = 0x80590000u;
    r5 = (r5 + 21420);
    r6 = r24;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C984Cu;
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

loc_800C984C:
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

loc_800C9870:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C9888;
    }
}

loc_800C9874:
{
    r3 = (r26 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C9880:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C9888;
    }
}

loc_800C9884:
{
    r9 = 0;
}

loc_800C9888:
{
}

loc_800C988C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C98A4;
    }
}

loc_800C9890:
{
    r3 = (r26 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C989C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C98A4;
    }
}

loc_800C98A0:
{
    r8 = 0;
}

loc_800C98A4:
{
}

loc_800C98A8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C98BC;
    }
}

loc_800C98AC:
{
    r0 = (r10 + 1073741824);
}

loc_800C98B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C98BC;
    }
}

loc_800C98B8:
{
    r7 = 0;
}

loc_800C98BC:
{
}

loc_800C98C0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C98D8;
    }
}

loc_800C98C4:
{
    r3 = (r26 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C98D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C98D8;
    }
}

loc_800C98D4:
{
    r6 = 0;
}

loc_800C98D8:
{
}

loc_800C98DC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C98F4;
    }
}

loc_800C98E0:
{
    r3 = (r26 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C98EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C98F4;
    }
}

loc_800C98F0:
{
    r5 = 0;
}

loc_800C98F4:
{
}

loc_800C98F8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C9910;
    }
}

loc_800C98FC:
{
    r3 = (r26 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C9908:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C9910;
    }
}

loc_800C990C:
{
    r4 = 0;
}

loc_800C9910:
{
}

loc_800C9914:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C9938;
    }
}

loc_800C9918:
{
    r3 = 0x80590000u;
    r3 = (r3 + 21352);
    r4 = 44;
    r5 = 0x80590000u;
    r5 = (r5 + 21472);
    r6 = r26;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C9938u;
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

loc_800C9938:
{
}

loc_800C993C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(1))) {
        goto loc_800C9D4C;
    }
}

loc_800C9940:
{
    f1.d = MemoryInline::FlatReadFloat32(r26);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_4DC1 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_4DC1);
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
    f22.d = MemoryInline::FlatReadFloat32((r2 + -30872));
    SetCRFloatResident(cr, 0, f1.d, f22.d);
}

loc_800C9950:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800C9958;
    }
}

loc_800C9954:
{
    f22.d = MemoryInline::FlatReadFloat32(r26);
}

loc_800C9958:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 16));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_5991 = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_5991[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_5991[1]);
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
    f23.d = MemoryInline::FlatReadFloat32((r2 + -30872));
    SetCRFloatResident(cr, 0, f1.d, f23.d);
}

loc_800C9968:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800C9970;
    }
}

loc_800C996C:
{
    f23.d = MemoryInline::FlatReadFloat32((r26 + 16));
}

loc_800C9970:
{
    r0 = (r29 & 33554432);
}

loc_800C9978:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C9984;
    }
}

loc_800C997C:
{
    f21.d = f22.d;
    goto loc_800C999C;
}

loc_800C9984:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 20));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_66AB = func_800C9E30_statefree(f0, f1);
        f0.raw = static_cast<uint64_t>(state_free_result_800C9E30_66AB[0]);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_66AB[1]);
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
    f21.d = MemoryInline::FlatReadFloat32((r2 + -30872));
    SetCRFloatResident(cr, 0, f1.d, f21.d);
}

loc_800C9994:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800C999C;
    }
}

loc_800C9998:
{
    f21.d = MemoryInline::FlatReadFloat32((r26 + 20));
}

loc_800C999C:
{
    f20.d = MemoryInline::FlatReadFloat32((r2 + -30868));
    f19.d = f20.d;
    r0 = (r29 & 262144);
}

loc_800C99AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C99B8;
    }
}

loc_800C99B0:
{
    f24.d = MemoryInline::FlatReadFloat32((r26 + 8));
    goto loc_800C99D0;
}

loc_800C99B8:
{
    r3 = (r23 + 236);
    ctx->lr = 0x800C99C0u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_7407 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_7407;
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30860));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30864));
    f24.d = PpcFmulsInline(f0.d, f1.d);
}

loc_800C99D0:
{
    r30 = (r29 & 131072);
}

loc_800C99D8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800C9A64;
    }
}

loc_800C99DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30856));
    ctx->lr = 0x800C99F0u;
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
        const auto regargs_result_80464590_7AD2 = func_80464590_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80464590_7AD2);
        r4 = static_cast<uint32_t>(regargs_result_80464590_7AD2 >> 32);
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30852));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800C99F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800C9A14;
    }
}

loc_800C99FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30848));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800C9A04:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800C9A14;
    }
}

loc_800C9A08:
{
    r3 = MemoryInline::FlatRead16((r23 + 50));
}

loc_800C9A10:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800C9A3C;
    }
}

loc_800C9A14:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = MemoryInline::FlatRead16((r23 + 50));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30832));
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f19.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    goto loc_800C9A64;
}

loc_800C9A3C:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = (r3 + -1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30824));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f19.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
}

loc_800C9A64:
{
}

loc_800C9A68:
{
    r31 = r25;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800C9A74;
    }
}

loc_800C9A70:
{
    r31 = (r25 * r25);
}

loc_800C9A74:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -30868), 0, 52u, true, false);
    f18.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30868));
    r29 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            f26.d = PpcBitCastToFloatInline(resolved_pair.second);
            f27.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f26.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30860));
            f27.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -30864));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            f25.d = PpcBitCastToFloatInline(resolved_pair.first);
            f28.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f25.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -30844));
            f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -30840));
        }
    }
    f29.d = f18.d;
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r2 + -30824));
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r2 + -30836));
    f15.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -30856));
    goto loc_800C9D44;
}

loc_800C9AA0:
{
    r3 = (r1 + 96);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 84);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    f17.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_800C9AC4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800C9AF0;
    }
}

loc_800C9AC8:
{
    r3 = (r23 + 236);
    ctx->lr = 0x800C9AD0u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_9223 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_9223;
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
    f20.d = PpcFmulsInline(f0.d, f1.d);
    r3 = (r23 + 236);
    ctx->lr = 0x800C9AE8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_96AC = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_96AC;
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
    f0.d = PpcFmulsInline(f26.d, f1.d);
    f18.d = PpcFmulsInline(f27.d, f0.d);
}

loc_800C9AF0:
{
    r3 = (r1 + 20);
    r4 = (r1 + 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f20.d));
    ctx->lr = 0x800C9B00u;
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
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    f1.d = f18.d;
    ctx->lr = 0x800C9B10u;
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
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f17.d, f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PpcFmulsInline(f22.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f17.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f23.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f0.d = (-(f17.d));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    r3 = (r1 + 72);
    r4 = (r1 + 96);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r3 = (r1 + 72);
    r4 = r3;
    ctx->lr = 0x800C9B78u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 60);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30868));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 104));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 60);
    r4 = r3;
    ctx->lr = 0x800C9B98u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 48);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    SetCRFloatResident(cr, 0, f29.d, f17.d);
}

loc_800C9BA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C9BE0;
    }
}

loc_800C9BA8:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f22.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f23.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = (-(f21.d));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    goto loc_800C9C28;
}

loc_800C9BE0:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f17.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f22.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f17.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f23.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = (-(f17.d));
    f1.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
}

loc_800C9C28:
{
    r3 = (r1 + 48);
    r4 = r3;
    ctx->lr = 0x800C9C34u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r22;
    r4 = (r1 + 84);
    r5 = r23;
    r6 = (r1 + 96);
    r7 = (r1 + 48);
    r8 = (r1 + 72);
    r9 = (r1 + 60);
    ctx->lr = 0x800C9C54u;
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
        ctx->fpr[15] = f15;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800A9A18_C115 = func_800A9A18_ra38_fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_800A9A18_C115);
        r4 = static_cast<uint32_t>(regargs_result_800A9A18_C115 >> 32);
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
        f15 = ctx->fpr[15];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r1 + 84));
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = MemoryInline::FlatRead32((r1 + 96));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r0 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r3 = (r23 + 236);
    ctx->lr = 0x800C9C8Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_CD4C = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_CD4C;
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
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f17.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
    r3 = r22;
    r4 = (r27 & 65535);
    f1.d = f16.d;
    r5 = r23;
    ctx->lr = 0x800C9CC4u;
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
        const auto regargs_result_800AA014_D3A6 = func_800AA014_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800AA014_D3A6);
        r4 = static_cast<uint32_t>(regargs_result_800AA014_D3A6 >> 32);
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
    r5 = (r1 + 36);
    r6 = (r1 + 24);
    r7 = r28;
    f1.d = f17.d;
    r8 = (r23 + 252);
    r9 = MemoryInline::FlatRead32((r23 + 248));
    r10 = MemoryInline::FlatRead16((r23 + 232));
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800C9CFCu;
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

loc_800C9D00:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800C9D40;
    }
}

loc_800C9D04:
{
    r3 = (r29 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r25));
    r0 = (r0 * r25);
    r0 = (r3 - r0);
}

loc_800C9D18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C9D28;
    }
}

loc_800C9D1C:
{
    f20.d = static_cast<double>(PpcForceSingleValueInline(f20.d + f19.d));
    f18.d = MemoryInline::FlatReadFloat32((r2 + -30868));
    goto loc_800C9D40;
}

loc_800C9D28:
{
    r0 = (r25 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f15.d / f0.d));
    f18.d = static_cast<double>(PpcForceSingleValueInline(f18.d + f0.d));
}

loc_800C9D40:
{
    r29 = (r29 + 1);
}

loc_800C9D44:
{
}

loc_800C9D48:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r31))) {
        goto loc_800C9AA0;
    }
}

loc_800C9D4C:
{
    r0 = 440;
    addr_psqx_800C9D50_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9D50_loc_0));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 176), 0, 280u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 256u, (r1 + 432));
    r0 = 424;
    addr_psqx_800C9D5C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9D5C_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 240u, (r1 + 416));
    r0 = 408;
    addr_psqx_800C9D68_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9D68_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 224u, (r1 + 400));
    r0 = 392;
    addr_psqx_800C9D74_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9D74_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 208u, (r1 + 384));
    r0 = 376;
    addr_psqx_800C9D80_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9D80_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 192u, (r1 + 368));
    r0 = 360;
    addr_psqx_800C9D8C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9D8C_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 176u, (r1 + 352));
    r0 = 344;
    addr_psqx_800C9D98_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9D98_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 160u, (r1 + 336));
    r0 = 328;
    addr_psqx_800C9DA4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9DA4_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 320));
    r0 = 312;
    addr_psqx_800C9DB0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9DB0_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 304));
    r0 = 296;
    addr_psqx_800C9DBC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9DBC_loc_0));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 288));
    r0 = 280;
    addr_psqx_800C9DC8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f21, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9DC8_loc_0));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 272));
    r0 = 264;
    addr_psqx_800C9DD4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f20, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9DD4_loc_0));
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 256));
    r0 = 248;
    addr_psqx_800C9DE0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f19, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9DE0_loc_0));
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 240));
    r0 = 232;
    addr_psqx_800C9DEC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f18, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9DEC_loc_0));
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 224));
    r0 = 216;
    addr_psqx_800C9DF8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f17, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9DF8_loc_0));
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 208));
    r0 = 200;
    addr_psqx_800C9E04_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f16, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9E04_loc_0));
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 192));
    r0 = 184;
    addr_psqx_800C9E10_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f15, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C9E10_loc_0));
    f15.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 176));
    r11 = (r1 + 176);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::ReadResolved32(guest_range_4, 276u, (r1 + 452));
    ctx->lr = r0;
    r1 = (r1 + 448);
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

extern "C" void func_800C95A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800C95A4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C95A4 func_800C95A4 preserves=true fpr_mask=0x00000000
