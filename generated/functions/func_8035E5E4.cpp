#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80127EDC(CpuContext* ctx);
extern "C" uint64_t func_80127EDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80295988(CpuContext* ctx);
extern "C" uint64_t func_80295988_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_803BDF70(CpuContext* ctx);
extern "C" uint64_t func_803BDF70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803BE058(CpuContext* ctx);
extern "C" uint32_t func_803BE058_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803BE0F0(CpuContext* ctx);
extern "C" uint32_t func_803BE0F0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8035E5E4_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_8035E860_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8035E5E4u);
    goto loc_8035E5E4;

loc_8035E5E4:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 112);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r22 = r3;
    r23 = r4;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r26 = 255;
    r3 = MemoryInline::FlatRead8((r22 + 481));
    r4 = (r1 + 48);
    r5 = 16;
    if constexpr (KnownRegArgsCpuCall<0x803BDF70u>(&func_803BDF70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_803BDF70_E0F = func_803BDF70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803BDF70_E0F);
        r4 = static_cast<uint32_t>(regargs_result_803BDF70_E0F >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x803BDF70u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
    }
    r29 = (r3 & 255);
}

loc_8035E634:
{
    if ((static_cast<uint32_t>(r29) <= static_cast<uint32_t>(16))) {
        goto loc_8035E640;
    }
}

loc_8035E638:
{
    r3 = 255;
    goto loc_8035E85C;
}

loc_8035E640:
{
    r27 = 0;
    r28 = (r1 + 48);
    r31 = 65536;
    r30 = (r23 & 255);
    goto loc_8035E850;
}

loc_8035E654:
{
    r3 = MemoryInline::FlatRead8(r28);
    r4 = MemoryInline::FlatRead8((r22 + 481));
    if constexpr (KnownRegArgsCpuCall<0x803BE0F0u>(&func_803BE0F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BE0F0_141E = func_803BE0F0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803BE0F0_141E;
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
        InvokeDirectCpu<0x803BE0F0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r25 = (r3 & 255);
}

loc_8035E668:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8035E76C;
    }
}

loc_8035E66C:
{
}

loc_8035E670:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(5))) {
        goto loc_8035E684;
    }
}

loc_8035E674:
{
}

loc_8035E678:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(1))) {
        goto loc_8035E684;
    }
}

loc_8035E67C:
{
}

loc_8035E680:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(15))) {
        goto loc_8035E848;
    }
}

loc_8035E684:
{
    r3 = MemoryInline::FlatRead8(r28);
    r4 = MemoryInline::FlatRead8((r22 + 481));
    if constexpr (KnownRegArgsCpuCall<0x803BE058u>(&func_803BE058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BE058_194B = func_803BE058_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803BE058_194B;
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
        InvokeDirectCpu<0x803BE058u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r23 = r3;
}

loc_8035E698:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8035E848;
    }
}

loc_8035E69C:
{
    r3 = r22;
    if constexpr (KnownRegArgsCpuCall<0x80127EDCu>(&func_80127EDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80127EDC_1CBF = func_80127EDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80127EDC_1CBF);
        r4 = static_cast<uint32_t>(regargs_result_80127EDC_1CBF >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80127EDCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = r3;
    r3 = (r22 + 392);
    r4 = r23;
    r5 = (r1 + 32);
    r6 = 1;
    r7 = (r31 + -1);
    r8 = MemoryInline::FlatRead8((r22 + 481));
    r9 = (r0 & 65535);
    r10 = 0;
    ctx->lr = 0x8035E6CCu;
    if constexpr (KnownRegArgsCpuCall<0x80295988u>(&func_80295988)) {
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
        const auto regargs_result_80295988_221B = func_80295988_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80295988_221B);
        r4 = static_cast<uint32_t>(regargs_result_80295988_221B >> 32);
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
        InvokeDirectCpu<0x80295988u>(ctx);
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
}

loc_8035E6D0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8035E710;
    }
}

loc_8035E6D4:
{
    r3 = (r1 + 8);
    r4 = (r1 + 32);
    r5 = r23;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 20);
    ctx->lr = 0x8035E6F8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    r3 = MemoryInline::FlatRead8(r28);
    // inline leaf 0x803BDF30 (16 guest instruction(s))
}

loc_inl3_0x803BDF30:
{
    r4 = MemoryInline::FlatRead32((r13 + -16840));
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_inl3_0x803BDF3C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_inl3_0x803BDF48;
    }
}

loc_inl3_0x803BDF40:
{
    r3 = 0;
    goto loc_inl3_cont_803BDF30;
}

loc_inl3_0x803BDF48:
{
    r4 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 * 548);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_inl3_0x803BDF5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl3_0x803BDF68;
    }
}

loc_inl3_0x803BDF60:
{
    r3 = r4;
    goto loc_inl3_cont_803BDF30;
}

loc_inl3_0x803BDF68:
{
    r3 = 0;
}

loc_inl3_cont_803BDF30:
{
    // end of inlined leaf 0x803BDF30
    f0.d = MemoryInline::FlatReadFloat32((r3 + 496));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8035E70C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8035E848;
    }
}

loc_8035E710:
{
}

loc_8035E714:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(255))) {
        goto loc_8035E720;
    }
}

loc_8035E718:
{
    r26 = MemoryInline::FlatRead8(r28);
    goto loc_8035E75C;
}

loc_8035E720:
{
}

loc_8035E724:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(5))) {
        goto loc_8035E734;
    }
}

loc_8035E728:
{
}

loc_8035E72C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(1))) {
        goto loc_8035E740;
    }
}

loc_8035E730:
{
    goto loc_8035E75C;
}

loc_8035E734:
{
    r26 = MemoryInline::FlatRead8(r28);
    r24 = r25;
    goto loc_8035E75C;
}

loc_8035E740:
{
    r0 = (r24 & 255);
}

loc_8035E748:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_8035E75C;
    }
}

loc_8035E74C:
{
}

loc_8035E750:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8035E75C;
    }
}

loc_8035E754:
{
    r26 = MemoryInline::FlatRead8(r28);
    r24 = r25;
}

loc_8035E75C:
{
}

loc_8035E760:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(5))) {
        goto loc_8035E848;
    }
}

loc_8035E764:
{
    r3 = r26;
    goto loc_8035E85C;
}

loc_8035E76C:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl5_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_inl5_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x802B06E4:
{
    r3 = r0;
    goto loc_inl5_cont_802B06CC;
}

loc_inl5_return:
{
}

loc_inl5_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_8035E780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8035E7A0;
    }
}

loc_8035E784:
{
}

loc_8035E788:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8035E7B8;
    }
}

loc_8035E78C:
{
}

loc_8035E790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8035E7D4;
    }
}

loc_8035E794:
{
}

loc_8035E798:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8035E7F4;
    }
}

loc_8035E79C:
{
    goto loc_8035E808;
}

loc_8035E7A0:
{
    r4 = MemoryInline::FlatRead8((r22 + 481));
    r0 = (r4 + -1);
}

loc_8035E7AC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8035E810;
    }
}

loc_8035E7B0:
{
    r3 = 255;
    goto loc_8035E85C;
}

loc_8035E7B8:
{
    r4 = MemoryInline::FlatRead8((r22 + 481));
}

loc_8035E7C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_8035E810;
    }
}

loc_8035E7C4:
{
}

loc_8035E7C8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(9))) {
        goto loc_8035E810;
    }
}

loc_8035E7CC:
{
    r3 = 255;
    goto loc_8035E85C;
}

loc_8035E7D4:
{
    r4 = MemoryInline::FlatRead8((r22 + 481));
    r0 = (r4 + -5);
}

loc_8035E7E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8035E810;
    }
}

loc_8035E7E4:
{
}

loc_8035E7E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(9))) {
        goto loc_8035E810;
    }
}

loc_8035E7EC:
{
    r3 = 255;
    goto loc_8035E85C;
}

loc_8035E7F4:
{
    r4 = MemoryInline::FlatRead8((r22 + 481));
}

loc_8035E7FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8035E810;
    }
}

loc_8035E800:
{
    r3 = 255;
    goto loc_8035E85C;
}

loc_8035E808:
{
    r3 = 255;
    goto loc_8035E85C;
}

loc_8035E810:
{
}

loc_8035E814:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(4))) {
        goto loc_8035E828;
    }
}

loc_8035E818:
{
}

loc_8035E81C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8035E828;
    }
}

loc_8035E820:
{
}

loc_8035E824:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(14))) {
        goto loc_8035E848;
    }
}

loc_8035E828:
{
    r3 = MemoryInline::FlatRead8(r28);
    r4 = (r4 & 255);
    if constexpr (KnownRegArgsCpuCall<0x803BE058u>(&func_803BE058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BE058_4096 = func_803BE058_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803BE058_4096;
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
        InvokeDirectCpu<0x803BE058u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8035E838:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8035E848;
    }
}

loc_8035E83C:
{
    r3 = (r1 + 48);
    r3_addr_1 = (r3 + r27);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    goto loc_8035E85C;
}

loc_8035E848:
{
    r28 = (r28 + 1);
    r27 = (r27 + 1);
}

loc_8035E850:
{
}

loc_8035E854:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r29))) {
        goto loc_8035E654;
    }
}

loc_8035E858:
{
    r3 = r26;
}

loc_8035E85C:
{
    r0 = 120;
    addr_psqx_8035E860_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8035E860_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035E5E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035E5E4_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x800007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8035E5E4 func_8035E5E4 preserves=true fpr_mask=0x00000000
