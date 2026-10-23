#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80051324(CpuContext* ctx);
extern "C" uint64_t func_80051324_ra38_a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8008335C(CpuContext* ctx);
extern "C" uint32_t func_8008335C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800E0C00(CpuContext* ctx);
extern "C" uint64_t func_800E0C00_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800FA484(CpuContext* ctx);
extern "C" uint32_t func_800FA484_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8013599C(CpuContext* ctx);
extern "C" uint64_t func_8013599C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80136160(CpuContext* ctx);
extern "C" uint64_t func_80136160_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80136184(CpuContext* ctx);
extern "C" uint64_t func_80136184_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801361A8(CpuContext* ctx);
extern "C" uint64_t func_801361A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802248E8(CpuContext* ctx);
extern "C" uint64_t func_802248E8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80290588(CpuContext* ctx);
extern "C" uint64_t func_80290588_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AD830(CpuContext* ctx);
extern "C" uint64_t func_802AD830_ra38_180_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802AD958(CpuContext* ctx);
extern "C" uint64_t func_802AD958_ra38_180_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" void func_802AC4E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_802ACDA4_loc_0 = 0;
    uint32_t addr_lfsx_802ACF04_loc_0 = 0;
    uint32_t addr_psqx_802AD71C_loc_0 = 0;
    uint32_t addr_psqx_802AD728_loc_0 = 0;
    uint32_t addr_psqx_802AD734_loc_0 = 0;
    uint32_t addr_psqx_802AD740_loc_0 = 0;
    uint32_t addr_psqx_802AD74C_loc_0 = 0;
    uint32_t addr_psqx_802AD758_loc_0 = 0;
    uint32_t addr_psqx_802AD764_loc_0 = 0;
    uint32_t addr_psqx_802AD770_loc_0 = 0;
    uint32_t addr_psqx_802AD77C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r16 = ctx->gpr[16];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
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

    goto loc_802AC4E8;

loc_802AC4E8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -1072), 0, 1080u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -1072), r1);
    r1 = (r1 + -1072);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 1076u, (r1 + 1076), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1056u, (r1 + 1056), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 1064);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1040u, (r1 + 1040), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 1048);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1024u, (r1 + 1024), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 1032);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1008u, (r1 + 1008), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 1016);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 992u, (r1 + 992), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 1000);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 976u, (r1 + 976), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 984);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 960u, (r1 + 960), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 968);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 944u, (r1 + 944), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 952);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 928u, (r1 + 928), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 936);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    r11 = (r1 + 928);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r18 = r3;
    r25 = r4;
    r16 = r5;
    r26 = r6;
    r3 = (r1 + 564);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 552);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 624);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 636);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 600);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 612);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 540);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 528);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 516);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 504);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 576);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 588);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 492);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 480);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 464);
    ctx->lr = 0x802AC5CCu;
    if constexpr (KnownRegArgsCpuCall<0x800FA484u>(&func_800FA484)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA484_28F9 = func_800FA484_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA484_28F9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800FA484u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 448);
    ctx->lr = 0x802AC5D4u;
    if constexpr (KnownRegArgsCpuCall<0x8008335Cu>(&func_8008335C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8008335C_2B42 = func_8008335C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8008335C_2B42;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8008335Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 420);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 696);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 648);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 744);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 792);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 8);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005D210u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r25 & 255);
}

loc_802AC610:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AC63C;
    }
}

loc_802AC614:
{
    r31 = r18;
    r30 = 0;
    r0 = (r16 * 144);
    r3 = (r18 + r0);
    r29 = (r3 + 1424);
    r3 = 0x805D0000u;
    r27 = (r3 + -3664);
    r3 = 0x805D0000u;
    r28 = (r3 + -4064);
    goto loc_802AC71C;
}

loc_802AC63C:
{
    r30 = r18;
    r31 = 0;
    r0 = (r16 * 144);
    r3 = (r18 + r0);
    r29 = (r3 + 1652);
    r3 = r18;
    ctx->lr = 0x802AC658u;
    if constexpr (KnownRegArgsCpuCall<0x802248E8u>(&func_802248E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802248E8_328E = func_802248E8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802248E8_328E);
        r4 = static_cast<uint32_t>(regargs_result_802248E8_328E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802248E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802AC660:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AC670;
    }
}

loc_802AC664:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 3), static_cast<uint8_t>(r0));
    goto loc_802AD718;
}

loc_802AC670:
{
    // inline leaf 0x803C4890 (5 guest instruction(s))
    r3 = 0x806D0000u;
    r0 = MemoryInline::FlatRead8((r3 + 20384));
    r0_subfic_ra_1 = r0;
    r0 = (1 - r0_subfic_ra_1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x803C4890
    r0 = (r3 & 255);
}

loc_802AC67C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AC68C;
    }
}

loc_802AC680:
{
    ctx->lr = 0x802AC684u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802AC688:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802AC698;
    }
}

loc_802AC68C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 3), static_cast<uint8_t>(r0));
    goto loc_802AD718;
}

loc_802AC698:
{
    r6 = 0;
    r4 = 0;
    r0 = 7;
    ctr = r0;
}

loc_802AC6A8:
{
    r5 = MemoryInline::FlatRead32((r18 + 316));
    r3 = (r5 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 56));
}

loc_802AC6B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AC6CC;
    }
}

loc_802AC6BC:
{
    r3 = (r5 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 2496));
}

loc_802AC6C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AC6D8;
    }
}

loc_802AC6CC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 3), static_cast<uint8_t>(r0));
    goto loc_802AD718;
}

loc_802AC6D8:
{
    r4 = (r4 + 356);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802AC6A8;
    }
}

loc_802AC6E4:
{
}

loc_802AC6E8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(5))) {
        goto loc_802AC6F8;
    }
}

loc_802AC6EC:
{
}

loc_802AC6F0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(4))) {
        goto loc_802AC70C;
    }
}

loc_802AC6F4:
{
    goto loc_802AC71C;
}

loc_802AC6F8:
{
    r3 = 0x805D0000u;
    r27 = (r3 + -3160);
    r3 = 0x805D0000u;
    r28 = (r3 + -3880);
    goto loc_802AC71C;
}

loc_802AC70C:
{
    r3 = 0x805D0000u;
    r27 = (r3 + -3016);
    r3 = 0x805D0000u;
    r28 = (r3 + -3808);
}

loc_802AC71C:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802AC724:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AD718;
    }
}

loc_802AC728:
{
    r3 = MemoryInline::FlatRead8((r29 + 3));
}

loc_802AC730:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802AC740;
    }
}

loc_802AC734:
{
}

loc_802AC738:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_802ACD38;
    }
}

loc_802AC73C:
{
    goto loc_802AD718;
}

loc_802AC740:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 3), static_cast<uint8_t>(r0));
    r0 = (r25 & 255);
}

loc_802AC750:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AC894;
    }
}

loc_802AC754:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r0 * 14);
    r4 = (r28 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 3));
    r5 = (r1 + 648);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_802AC778:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802AC7DC;
    }
}

loc_802AC77C:
{
    r3 = (r1 + 648);
    r4 = (r1 + 516);
    // inline leaf 0x80101470 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80101470
    r16 = 0;
    r17 = (r1 + 744);
    r18 = (r1 + 576);
    goto loc_802AC7CC;
}

loc_802AC798:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r0 * 14);
    r4 = (r28 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 3));
    r5 = r17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r17;
    r4 = r18;
    // inline leaf 0x80101470 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80101470
    r17 = (r17 + 48);
    r18 = (r18 + 12);
    r16 = (r16 + 1);
}

loc_802AC7CC:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802AC7D4:
{
    if ((static_cast<uint32_t>(r16) < static_cast<uint32_t>(r0))) {
        goto loc_802AC798;
    }
}

loc_802AC7D8:
{
    goto loc_802AC838;
}

loc_802AC7DC:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r5 = (r1 + 516);
    ctx->lr = 0x802AC7ECu;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013599C_4C95 = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_4C95);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_4C95 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r16 = 0;
    r17 = (r1 + 744);
    r18 = r29;
    r19 = (r1 + 576);
    goto loc_802AC82C;
}

loc_802AC800:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r18 + 16));
    r5 = r17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r17;
    r4 = r19;
    // inline leaf 0x80101470 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80101470
    r17 = (r17 + 48);
    r18 = (r18 + 4);
    r19 = (r19 + 12);
    r16 = (r16 + 1);
}

loc_802AC82C:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802AC834:
{
    if ((static_cast<uint32_t>(r16) < static_cast<uint32_t>(r0))) {
        goto loc_802AC800;
    }
}

loc_802AC838:
{
}

loc_802AC83C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802AC84C;
    }
}

loc_802AC840:
{
}

loc_802AC844:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AC858;
    }
}

loc_802AC848:
{
    goto loc_802AC884;
}

loc_802AC84C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13964));
    MemoryInline::FlatWriteFloat32((r29 + 136), f0.d);
    goto loc_802AC884;
}

loc_802AC858:
{
    r3 = (r1 + 408);
    r4 = (r1 + 576);
    r5 = (r1 + 588);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 408);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 552);
    ctx->lr = 0x802AC87Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32((r29 + 140), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 136), f1.d);
}

loc_802AC884:
{
    r3 = r31;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f23.d = f1.d;
    goto loc_802ACA8C;
}

loc_802AC894:
{
    r3 = MemoryInline::FlatRead32((r30 + 316));
    r3 = (r3 + 4);
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r0 * 14);
    r4 = (r28 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 3));
    r5 = (r1 + 648);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r30 + 316));
    r3 = (r3 + 4);
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r5 = (r1 + 516);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r18 = 0;
    r19 = r29;
    r20 = (r1 + 744);
    r21 = r20;
    r22 = 0;
    r23 = (r1 + 576);
    r24 = (r26 * 356);
    f27.d = MemoryInline::FlatReadFloat32((r2 + -13956));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -13952));
    f25.d = MemoryInline::FlatReadFloat32((r2 + -13960));
    goto loc_802ACA30;
}

loc_802AC8F4:
{
    r0 = MemoryInline::FlatRead32((r30 + 316));
    r3 = (r0 + r24);
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead32((r19 + 16));
    ctx->lr = 0x802AC90Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E0C00u>(&func_800E0C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E0C00_603E = func_800E0C00_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0C00_603E);
        r4 = static_cast<uint32_t>(regargs_result_800E0C00_603E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E0C00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 8);
    ctx->lr = 0x802AC914u;
    if constexpr (KnownRegArgsCpuCall<0x80136184u>(&func_80136184)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80136184_64C7 = func_80136184_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136184_64C7);
        r4 = static_cast<uint32_t>(regargs_result_80136184_64C7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136184u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    r3 = (r1 + 420);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 420));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 840), f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 432), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 424));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 848), f0.d);
    r0 = fctiwzword1;
    r0 = (r0 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 436), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 428));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 856), f0.d);
    r0 = fctiwzword2;
    r0 = (r0 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    r3 = (r1 + 432);
    r4 = r20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050914u>(ctx);
    r3 = (r1 + 8);
    ctx->lr = 0x802AC9A0u;
    if constexpr (KnownRegArgsCpuCall<0x801361A8u>(&func_801361A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_801361A8_700A = func_801361A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801361A8_700A);
        r4 = static_cast<uint32_t>(regargs_result_801361A8_700A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x801361A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    r3 = (r1 + 528);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r20;
    r4 = (r1 + 528);
    // inline leaf 0x800506D8 (37 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32(r3);
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, r4);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, r4);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, r4);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r4 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r4 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r4 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r4 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r4 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r4 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    // end of inlined leaf 0x800506D8
    r3 = (r1 + 8);
    ctx->lr = 0x802AC9C0u;
    if constexpr (KnownRegArgsCpuCall<0x80136160u>(&func_80136160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80136160_7DB3 = func_80136160_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136160_7DB3);
        r4 = static_cast<uint32_t>(regargs_result_80136160_7DB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    r3 = (r1 + 540);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r20;
    r4 = (r1 + 540);
    // inline leaf 0x800FBBF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x800FBBF4
}

loc_802AC9DC:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_802AC9F4;
    }
}

loc_802AC9E0:
{
    r3 = r20;
    r4 = (r1 + 648);
    r5 = r21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    goto loc_802ACA0C;
}

loc_802AC9F4:
{
    r3 = r20;
    r4 = (r1 + 744);
    r4 = (r22 + r4);
    r4 = (r4 + -48);
    r5 = r21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_802ACA0C:
{
    r3 = r20;
    r4 = r23;
    // inline leaf 0x80101470 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80101470
    r19 = (r19 + 4);
    r20 = (r20 + 48);
    r21 = (r21 + 48);
    r22 = (r22 + 48);
    r23 = (r23 + 12);
    r18 = (r18 + 1);
}

loc_802ACA30:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802ACA38:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(r0))) {
        goto loc_802AC8F4;
    }
}

loc_802ACA3C:
{
}

loc_802ACA40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802ACA50;
    }
}

loc_802ACA44:
{
}

loc_802ACA48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802ACA5C;
    }
}

loc_802ACA4C:
{
    goto loc_802ACA88;
}

loc_802ACA50:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13964));
    MemoryInline::FlatWriteFloat32((r29 + 136), f0.d);
    goto loc_802ACA88;
}

loc_802ACA5C:
{
    r3 = (r1 + 396);
    r4 = (r1 + 576);
    r5 = (r1 + 588);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 396);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 552);
    ctx->lr = 0x802ACA80u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32((r29 + 140), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 136), f1.d);
}

loc_802ACA88:
{
    f23.d = MemoryInline::FlatReadFloat32((r2 + -13948));
}

loc_802ACA8C:
{
    r3 = (r29 + 108);
    r4 = (r1 + 516);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r18 = 0;
    r17 = (r1 + 576);
    r19 = (r29 + 24);
    r20 = (r29 + 60);
    goto loc_802ACADC;
}

loc_802ACAAC:
{
    r3 = r19;
    r4 = r17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r20;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13968));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r17 = (r17 + 12);
    r19 = (r19 + 12);
    r20 = (r20 + 12);
    r18 = (r18 + 1);
}

loc_802ACADC:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802ACAE4:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(r0))) {
        goto loc_802ACAAC;
    }
}

loc_802ACAE8:
{
    r0 = (r18 + -1);
    r17 = (r0 * 12);
    r3 = (r1 + 564);
    r4 = (r29 + r17);
    r4 = (r4 + 84);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 564);
    r0 = (r18 + -1);
    r0 = (r0 * 48);
    r4 = (r1 + 744);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r3 = (r1 + 384);
    r4 = (r1 + 564);
    r6 = (r29 + r5);
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r0 = (r27 + r0);
    r5 = (r0 + r5);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f23.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 540);
    r4 = (r1 + 384);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 372);
    r4 = (r29 + r17);
    r4 = (r4 + 24);
    r5 = (r1 + 540);
    ctx->lr = 0x802ACB6Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_9848 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_9848);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_9848 >> 32);
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
    r0 = (r18 * 12);
    r3 = (r29 + r0);
    r3 = (r3 + 24);
    r4 = (r1 + 372);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r5 = MemoryInline::FlatRead8((r29 + 4));
}

loc_802ACB88:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802AD718;
    }
}

loc_802ACB8C:
{
    r0 = (r25 & 255);
}

loc_802ACB94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802ACBCC;
    }
}

loc_802ACB98:
{
    r3 = MemoryInline::FlatRead32((r30 + 316));
    r3 = (r3 + 4);
    r4 = 0x805D0000u;
    r4 = (r4 + -2836);
    r4_addr_5 = (r4 + r5);
    r4 = MemoryInline::FlatRead8(r4_addr_5);
    r5 = (r1 + 696);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r30 + 316));
    r3 = (r3 + 4);
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r5 = (r1 + 540);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    goto loc_802ACC04;
}

loc_802ACBCC:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r0 * 14);
    r4 = (r28 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 3));
    r5 = (r1 + 696);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r4 = 0x805D0000u;
    r4 = (r4 + -2836);
    r4_addr_6 = (r4 + r0);
    r4 = MemoryInline::FlatRead8(r4_addr_6);
    r5 = (r1 + 540);
    ctx->lr = 0x802ACC04u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013599C_A38F = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_A38F);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_A38F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802ACC04:
{
    r3 = (r1 + 492);
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r0 = (r0 * 24);
    r4 = 0x805D0000u;
    r17 = (r4 + -4488);
    r4 = (r17 + r0);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_A8BD = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_A8BD;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 564);
    r4 = (r1 + 696);
    r5 = (r1 + 492);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    r3 = (r1 + 448);
    r4 = (r1 + 564);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 480);
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r0 = (r0 * 24);
    r4 = (r17 + r0);
    r4 = (r4 + 12);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_AD2A = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_AD2A;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 480);
    r4 = (r1 + 696);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 540);
    r4 = (r1 + 480);
    ctx->lr = 0x802ACC6Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 540);
    r4 = (r1 + 448);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    MemoryInline::FlatWriteRamFloat32((r1 + 460), PPC_PsToScalarInline(f1.d));
    r16 = 0;
    r17 = 0;
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    goto loc_802ACD28;
}

loc_802ACC88:
{
    r3 = (r17 + r29);
    r18 = (r3 + 36);
    r3 = (r1 + 464);
    r4 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r3 = (r27 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = PpcFmulsInline(f23.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 476), f0.d);
    r3 = (r1 + 464);
    r4 = (r1 + 448);
    r5 = (r1 + 540);
    ctx->lr = 0x802ACCC4u;
    if constexpr (KnownRegArgsCpuCall<0x80290588u>(&func_80290588)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        const auto regargs_result_80290588_B7BF = func_80290588_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80290588_B7BF);
        r4 = static_cast<uint32_t>(regargs_result_80290588_B7BF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80290588u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
    }
    r3 = (r1 + 360);
    r4 = (r1 + 464);
    r5 = (r1 + 540);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 360);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 448);
    r4 = (r1 + 552);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_7 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_7));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = MemoryInline::FlatReadFloat32((r1 + 476));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_802ACCF4:
{
    if (((cr & 0x80000000u) == 0)) {
        f1.d = PPC_PsToScalarInline(f1.d);
        goto loc_802ACD20;
    }
}

loc_802ACCF8:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - PPC_PsToScalarInline(f1.d)));
    r3 = (r1 + 348);
    r4 = (r1 + 448);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 348);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r18;
    r4 = (r1 + 552);
    ctx->lr = 0x802ACD20u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
}

loc_802ACD20:
{
    r17 = (r17 + 12);
    r16 = (r16 + 1);
}

loc_802ACD28:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802ACD30:
{
    if ((static_cast<uint32_t>(r16) < static_cast<uint32_t>(r0))) {
        goto loc_802ACC88;
    }
}

loc_802ACD34:
{
    goto loc_802AD718;
}

loc_802ACD38:
{
    r0 = (r25 & 255);
}

loc_802ACD40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802ACE8C;
    }
}

loc_802ACD44:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r0 * 14);
    r4 = (r28 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 3));
    r5 = (r1 + 648);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 648);
    r4 = (r1 + 516);
    // inline leaf 0x80101470 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80101470
    r16 = 0;
    r17 = (r1 + 576);
    r18 = r29;
    r19 = 0;
    r20 = (r1 + 16);
    goto loc_802ACDC4;
}

loc_802ACD84:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r18 + 16));
    r5 = r17;
    ctx->lr = 0x802ACD94u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013599C_CAC0 = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_CAC0);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_CAC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r3 = (r0 * 36);
    r0 = (r19 + r27);
    f1.d = MemoryInline::FlatReadFloat32((r18 + 136));
    addr_lfsx_802ACDA4_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_802ACDA4_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r20, f0.d);
    r17 = (r17 + 12);
    r18 = (r18 + 4);
    r19 = (r19 + 4);
    r20 = (r20 + 4);
    r16 = (r16 + 1);
}

loc_802ACDC4:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802ACDCC:
{
    if ((static_cast<uint32_t>(r16) < static_cast<uint32_t>(r0))) {
        goto loc_802ACD84;
    }
}

loc_802ACDD0:
{
    r3 = (r1 + 696);
    r4 = (r1 + 648);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80053340u>(ctx);
    r3 = r31;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f31.d = f1.d;
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_802ACDF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_802ACE40;
    }
}

loc_802ACDF4:
{
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_802ACDFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802ACE20;
    }
}

loc_802ACE00:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r3 = (r27 + r0);
    f29.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f30.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f24.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f23.d = MemoryInline::FlatReadFloat32((r2 + -13968));
    goto loc_802ACF7C;
}

loc_802ACE20:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r3 = (r27 + r0);
    f29.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f30.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f24.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f23.d = MemoryInline::FlatReadFloat32((r2 + -13968));
    goto loc_802ACF7C;
}

loc_802ACE40:
{
    r0 = MemoryInline::FlatRead8((r31 + 482));
}

loc_802ACE48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802ACE6C;
    }
}

loc_802ACE4C:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r3 = (r27 + r0);
    f29.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f30.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f24.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f23.d = MemoryInline::FlatReadFloat32((r3 + 24));
    goto loc_802ACF7C;
}

loc_802ACE6C:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r3 = (r27 + r0);
    f29.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f30.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f24.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f23.d = MemoryInline::FlatReadFloat32((r3 + 28));
    goto loc_802ACF7C;
}

loc_802ACE8C:
{
    r3 = MemoryInline::FlatRead32((r30 + 316));
    r3 = (r3 + 4);
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r0 * 14);
    r4 = (r28 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 3));
    r5 = (r1 + 648);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r30 + 316));
    r3 = (r3 + 4);
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r5 = (r1 + 516);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r18 = 0;
    r19 = (r1 + 576);
    r20 = r29;
    r21 = 0;
    r22 = (r1 + 16);
    r23 = (r26 * 356);
    goto loc_802ACF24;
}

loc_802ACEDC:
{
    r0 = MemoryInline::FlatRead32((r30 + 316));
    r3 = (r0 + r23);
    r3 = (r3 + 4);
    r4 = MemoryInline::FlatRead32((r20 + 16));
    r5 = r19;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r3 = (r0 * 36);
    r0 = (r21 + r27);
    f1.d = MemoryInline::FlatReadFloat32((r20 + 136));
    addr_lfsx_802ACF04_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_802ACF04_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r22, f0.d);
    r19 = (r19 + 12);
    r20 = (r20 + 4);
    r21 = (r21 + 4);
    r22 = (r22 + 4);
    r18 = (r18 + 1);
}

loc_802ACF24:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802ACF2C:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(r0))) {
        goto loc_802ACEDC;
    }
}

loc_802ACF30:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -13948));
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r3 = (r27 + r0);
    f29.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_802ACF4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802ACF70;
    }
}

loc_802ACF50:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13944));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f30.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13960));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f24.d = PpcFmulsInline(f1.d, f0.d);
    f23.d = MemoryInline::FlatReadFloat32((r3 + 28));
    goto loc_802ACF7C;
}

loc_802ACF70:
{
    f30.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f24.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f23.d = MemoryInline::FlatReadFloat32((r3 + 24));
}

loc_802ACF7C:
{
    r3 = (r29 + 24);
    r4 = (r1 + 576);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_802ACF90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802ACFA0;
    }
}

loc_802ACF94:
{
}

loc_802ACF98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802AD1C4;
    }
}

loc_802ACF9C:
{
    goto loc_802AD2BC;
}

loc_802ACFA0:
{
    r3 = (r29 + 36);
    r4 = (r29 + 60);
    ctx->lr = 0x802ACFACu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 336);
    r4 = (r29 + 108);
    r5 = (r29 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 336);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 552);
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r4 = (r27 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r3 = (r29 + 60);
    r4 = (r1 + 552);
    ctx->lr = 0x802ACFECu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 564);
    r4 = (r29 + 84);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 564);
    r4 = (r1 + 648);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 324);
    r4 = (r1 + 564);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 540);
    r4 = (r1 + 324);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 312);
    r4 = (r29 + 24);
    r5 = (r1 + 540);
    ctx->lr = 0x802AD034u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_F009 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_F009);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_F009 >> 32);
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
    r3 = (r29 + 48);
    r4 = (r1 + 312);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r29 + 48);
    r4 = (r29 + 36);
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r5 = (r27 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    ctx->lr = 0x802AD060u;
    if constexpr (KnownRegArgsCpuCall<0x80051324u>(&func_80051324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80051324_F5D2 = func_80051324_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80051324_F5D2);
        r4 = static_cast<uint32_t>(regargs_result_80051324_F5D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80051324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 300);
    r4 = (r29 + 36);
    r5 = (r29 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 300);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 552);
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13940));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_802AD08C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802AD09C;
    }
}

loc_802AD090:
{
    r3 = (r1 + 552);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
}

loc_802AD09C:
{
    r3 = (r1 + 276);
    r4 = (r1 + 552);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 288);
    r4 = (r29 + 24);
    r5 = (r1 + 276);
    ctx->lr = 0x802AD0BCu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_101A4 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_101A4);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_101A4 >> 32);
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
    r3 = (r29 + 36);
    r4 = (r1 + 288);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 252);
    r4 = (r29 + 48);
    r5 = (r29 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 264);
    r4 = (r1 + 252);
    f1.d = f29.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r29 + 60);
    r4 = (r1 + 264);
    ctx->lr = 0x802AD0F4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 240);
    r4 = (r29 + 60);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13948));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r29 + 60);
    r4 = (r1 + 240);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 228);
    r4 = (r29 + 24);
    r5 = (r29 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 228);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 696);
    r4 = (r1 + 648);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80088428u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 552);
    r4 = (r1 + 696);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 560));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 556));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80464488u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13956));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13936));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13960));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 856), f0.d);
    r0 = fctiwzword3;
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r29 + 120), r0);
    r4 = MemoryInline::FlatRead32((r29 + 120));
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r4 + r0);
    r0 = (r3 + -32768);
    MemoryInline::FlatWrite32((r29 + 120), r0);
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r29 + 120), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 128), r0);
    r3 = (r29 + 108);
    r4 = (r1 + 516);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_802AD718;
}

loc_802AD1C4:
{
    r3 = (r29 + 24);
    r4 = (r1 + 516);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r29 + 36);
    r4 = (r29 + 60);
    ctx->lr = 0x802AD1DCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r29 + 24);
    r4 = (r29 + 36);
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r5 = (r27 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    ctx->lr = 0x802AD1FCu;
    if constexpr (KnownRegArgsCpuCall<0x80051324u>(&func_80051324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80051324_1154B = func_80051324_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80051324_1154B);
        r4 = static_cast<uint32_t>(regargs_result_80051324_1154B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80051324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 180);
    r4 = (r29 + 24);
    r5 = (r29 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 192);
    r4 = (r1 + 180);
    f1.d = f29.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 204);
    r4 = (r29 + 60);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13948));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 216);
    r4 = (r1 + 204);
    r5 = (r1 + 192);
    ctx->lr = 0x802AD240u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_11DEA = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_11DEA);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_11DEA >> 32);
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
    r3 = (r29 + 60);
    r4 = (r1 + 216);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 168);
    r4 = (r29 + 108);
    r5 = (r29 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 168);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 552);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13932));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r3 = (r1 + 552);
    ctx->lr = 0x802AD27Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13928));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802AD284:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802AD2A0;
    }
}

loc_802AD288:
{
    r3 = (r1 + 552);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 552);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13928));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
}

loc_802AD2A0:
{
    r3 = (r29 + 60);
    r4 = (r1 + 552);
    ctx->lr = 0x802AD2ACu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r29 + 108);
    r4 = (r29 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_802AD718;
}

loc_802AD2BC:
{
    r18 = 0;
    r26 = (r29 + 60);
    r24 = 0;
    r23 = (r29 + 84);
    r22 = (r1 + 624);
    r21 = (r1 + 16);
    r20 = (r29 + 24);
    r19 = (r1 + 600);
    r17 = 0x806C0000u;
    f25.d = MemoryInline::FlatReadFloat32((r2 + -13924));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -13940));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -13948));
    goto loc_802AD4B8;
}

loc_802AD2F0:
{
    r3 = (r24 + r29);
    r16 = (r3 + 36);
    r3 = r16;
    r4 = r26;
    ctx->lr = 0x802AD304u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 564);
    r4 = (r1 + 648);
    r5 = r23;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    r3 = (r1 + 156);
    r4 = (r1 + 564);
    f1.d = f24.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = r22;
    r4 = (r1 + 156);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 144);
    r4 = (r17 + -21480);
    f1.d = f23.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = r22;
    r4 = (r1 + 144);
    ctx->lr = 0x802AD34Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = r20;
    r4 = r16;
    f0.d = MemoryInline::FlatReadFloat32(r21);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    ctx->lr = 0x802AD364u;
    if constexpr (KnownRegArgsCpuCall<0x80051324u>(&func_80051324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80051324_13021 = func_80051324_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80051324_13021);
        r4 = static_cast<uint32_t>(regargs_result_80051324_13021 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80051324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 132);
    r4 = r20;
    r5 = r16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 132);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 552);
    ctx->lr = 0x802AD388u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f26.d = f1.d;
    SetCRFloatResident(cr, 0, f1.d, f27.d);
}

loc_802AD390:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802AD3A0;
    }
}

loc_802AD394:
{
    r3 = (r1 + 552);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
}

loc_802AD3A0:
{
    f0.d = MemoryInline::FlatReadFloat32(r21);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f0.d));
    f1.d = PpcFmulsInline(f29.d, f0.d);
    r3 = (r1 + 120);
    r4 = (r1 + 552);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = r22;
    r4 = (r1 + 120);
    ctx->lr = 0x802AD3C8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 96);
    r4 = r26;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f30.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 108);
    r4 = (r1 + 96);
    r5 = r22;
    ctx->lr = 0x802AD3E8u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_13C7E = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_13C7E);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_13C7E >> 32);
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
    r3 = r26;
    r4 = (r1 + 108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802AD3F8:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_802AD424;
    }
}

loc_802AD3FC:
{
    r0 = (r25 & 255);
}

loc_802AD404:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AD424;
    }
}

loc_802AD408:
{
    r3 = (r1 + 84);
    r4 = (r1 + 516);
    r5 = (r29 + 108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = r20;
    r4 = (r1 + 84);
    ctx->lr = 0x802AD424u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
}

loc_802AD424:
{
    r3 = (r1 + 72);
    r4 = r16;
    r5 = r20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 552);
    ctx->lr = 0x802AD448u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    SetCRFloatResident(cr, 0, f1.d, f27.d);
}

loc_802AD44C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802AD45C;
    }
}

loc_802AD450:
{
    r3 = (r1 + 552);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
}

loc_802AD45C:
{
    r3 = (r1 + 60);
    r4 = (r1 + 552);
    f0.d = MemoryInline::FlatReadFloat32(r21);
    f1.d = PpcFmulsInline(f31.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = r19;
    r4 = (r1 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 48);
    r4 = r20;
    r5 = r19;
    ctx->lr = 0x802AD48Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_148F6 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_148F6);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_148F6 >> 32);
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
    r3 = r16;
    r4 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r26 = (r26 + 12);
    r24 = (r24 + 12);
    r23 = (r23 + 12);
    r22 = (r22 + 12);
    r21 = (r21 + 4);
    r20 = (r20 + 12);
    r19 = (r19 + 12);
    r18 = (r18 + 1);
}

loc_802AD4B8:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802AD4C0:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(r0))) {
        goto loc_802AD2F0;
    }
}

loc_802AD4C4:
{
    r5 = MemoryInline::FlatRead8((r29 + 4));
}

loc_802AD4CC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802AD678;
    }
}

loc_802AD4D0:
{
    r0 = (r25 & 255);
}

loc_802AD4D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AD510;
    }
}

loc_802AD4DC:
{
    r3 = MemoryInline::FlatRead32((r30 + 316));
    r3 = (r3 + 4);
    r4 = 0x805D0000u;
    r4 = (r4 + -2836);
    r4_addr_1 = (r4 + r5);
    r4 = MemoryInline::FlatRead8(r4_addr_1);
    r5 = (r1 + 696);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r30 + 316));
    r3 = (r3 + 4);
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r5 = (r1 + 540);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    goto loc_802AD548;
}

loc_802AD510:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r0 * 14);
    r4 = (r28 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 3));
    r5 = (r1 + 696);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r4 = 0x805D0000u;
    r4 = (r4 + -2836);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead8(r4_addr_2);
    r5 = (r1 + 540);
    ctx->lr = 0x802AD548u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013599C_1559F = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_1559F);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_1559F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802AD548:
{
    r3 = (r1 + 492);
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r0 = (r0 * 24);
    r4 = 0x805D0000u;
    r18 = (r4 + -4488);
    r4 = (r18 + r0);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_15AD0 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_15AD0;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 564);
    r4 = (r1 + 696);
    r5 = (r1 + 492);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    r3 = (r1 + 448);
    r4 = (r1 + 564);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 480);
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r0 = (r0 * 24);
    r4 = (r18 + r0);
    r4 = (r4 + 12);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_15F3F = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_15F3F;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 480);
    r4 = (r1 + 696);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 540);
    r4 = (r1 + 480);
    ctx->lr = 0x802AD5B0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 540);
    r4 = (r1 + 448);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    MemoryInline::FlatWriteRamFloat32((r1 + 460), PPC_PsToScalarInline(f1.d));
    r18 = 0;
    r17 = 0;
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    goto loc_802AD66C;
}

loc_802AD5CC:
{
    r3 = (r17 + r29);
    r16 = (r3 + 36);
    r3 = (r1 + 464);
    r4 = r16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r3 = (r27 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 476), f0.d);
    r3 = (r1 + 464);
    r4 = (r1 + 448);
    r5 = (r1 + 540);
    ctx->lr = 0x802AD608u;
    if constexpr (KnownRegArgsCpuCall<0x80290588u>(&func_80290588)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        const auto regargs_result_80290588_169D6 = func_80290588_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80290588_169D6);
        r4 = static_cast<uint32_t>(regargs_result_80290588_169D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80290588u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
    }
    r3 = (r1 + 36);
    r4 = (r1 + 464);
    r5 = (r1 + 540);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 448);
    r4 = (r1 + 552);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = MemoryInline::FlatReadFloat32((r1 + 476));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_802AD638:
{
    if (((cr & 0x80000000u) == 0)) {
        f1.d = PPC_PsToScalarInline(f1.d);
        goto loc_802AD664;
    }
}

loc_802AD63C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - PPC_PsToScalarInline(f1.d)));
    r3 = (r1 + 24);
    r4 = (r1 + 448);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 552);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r16;
    r4 = (r1 + 552);
    ctx->lr = 0x802AD664u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
}

loc_802AD664:
{
    r17 = (r17 + 12);
    r18 = (r18 + 1);
}

loc_802AD66C:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802AD674:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(r0))) {
        goto loc_802AD5CC;
    } else {
        f2.d = PPC_PsToScalarInline(f2.d);
    }
}

loc_802AD678:
{
    r3 = (r29 + 108);
    r4 = (r1 + 516);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r16 = 0;
    r17 = (r29 + 128);
    r19 = (r29 + 120);
    r20 = r29;
    r18 = (r25 & 255);
    goto loc_802AD70C;
}

loc_802AD69C:
{
}

loc_802AD6A0:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_802AD6FC;
    }
}

loc_802AD6A4:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_802AD6AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802AD6CC;
    }
}

loc_802AD6B0:
{
    r3 = r29;
    r4 = (r1 + 648);
    r5 = r19;
    r6 = r17;
    r7 = r16;
    ctx->lr = 0x802AD6C8u;
    if constexpr (KnownRegArgsCpuCall<0x802AD830u>(&func_802AD830)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802AD830_17BC0 = func_802AD830_ra38_180_18_0(ctx, r3, r4, r5, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AD830_17BC0);
        r4 = static_cast<uint32_t>(regargs_result_802AD830_17BC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AD830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_802AD6FC;
}

loc_802AD6CC:
{
    r3 = r29;
    r4 = (r1 + 648);
    r5 = r17;
    r6 = r16;
    ctx->lr = 0x802AD6E0u;
    if constexpr (KnownRegArgsCpuCall<0x802AD958u>(&func_802AD958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_802AD958_183CD = func_802AD958_ra38_180_18_0(ctx, r3, r4, r5, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AD958_183CD);
        r4 = static_cast<uint32_t>(regargs_result_802AD958_183CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AD958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead32((r20 + 128));
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r0 * 36);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r20 + 128), r0);
}

loc_802AD6FC:
{
    r17 = (r17 + 4);
    r19 = (r19 + 4);
    r20 = (r20 + 4);
    r16 = (r16 + 1);
}

loc_802AD70C:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_802AD714:
{
    if ((static_cast<uint32_t>(r16) < static_cast<uint32_t>(r0))) {
        goto loc_802AD69C;
    }
}

loc_802AD718:
{
    r0 = 1064;
    addr_psqx_802AD71C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802AD71C_loc_0));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 928), 0, 152u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 1056));
    r0 = 1048;
    addr_psqx_802AD728_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802AD728_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 1040));
    r0 = 1032;
    addr_psqx_802AD734_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802AD734_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 1024));
    r0 = 1016;
    addr_psqx_802AD740_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802AD740_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 1008));
    r0 = 1000;
    addr_psqx_802AD74C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802AD74C_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 992));
    r0 = 984;
    addr_psqx_802AD758_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802AD758_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 976));
    r0 = 968;
    addr_psqx_802AD764_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802AD764_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 960));
    r0 = 952;
    addr_psqx_802AD770_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802AD770_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 944));
    r0 = 936;
    addr_psqx_802AD77C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802AD77C_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 928));
    r11 = (r1 + 928);
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
    r0 = MemoryInline::ReadResolved32(guest_range_4, 148u, (r1 + 1076));
    ctx->lr = r0;
    r1 = (r1 + 1072);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803F8F fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802AC4E8 func_802AC4E8 preserves=true fpr_mask=0x00000000
