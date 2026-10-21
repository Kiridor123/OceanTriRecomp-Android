#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011EF88(CpuContext* ctx);
extern "C" uint64_t func_8011EF88_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8011F020(CpuContext* ctx);
extern "C" uint64_t func_8011F020_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8011F1D0(CpuContext* ctx);
extern "C" uint64_t func_8011F1D0_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8011F2A4(CpuContext* ctx);
extern "C" uint64_t func_8011F2A4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8012D0D8(CpuContext* ctx);
extern "C" uint32_t func_8012D0D8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80275524(CpuContext* ctx);
extern "C" uint64_t func_80275524_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027CAAC(CpuContext* ctx);
extern "C" uint64_t func_8027CAAC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8029A1A4(CpuContext* ctx);
extern "C" uint32_t func_8029A1A4_ra8_6_8_0(CpuContext*, uint32_t, double, double);
extern "C" void func_8029A804(CpuContext* ctx);
extern "C" uint64_t func_8029A804_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8029A88C(CpuContext* ctx);
extern "C" uint64_t func_8029A88C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8029AA90(CpuContext* ctx);
extern "C" uint64_t func_8029AA90_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8029AD1C(CpuContext* ctx);
extern "C" uint64_t func_8029AD1C_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8029AE5C(CpuContext* ctx);
extern "C" uint64_t func_8029AE5C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8029AF20(CpuContext* ctx);
extern "C" uint64_t func_8029AF20_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8029B82C(CpuContext* ctx);
extern "C" uint32_t func_8029B82C_ra38_6_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8029E3C0(CpuContext* ctx);
extern "C" uint64_t func_8029E3C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8029B97C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_8029BB98_loc_0 = 0;
    uint32_t addr_lfsx_8029BB9C_loc_0 = 0;
    uint32_t addr_lfsx_8029BBEC_loc_0 = 0;
    uint32_t addr_lfsx_8029BC1C_loc_0 = 0;
    uint32_t addr_lfsx_8029BCE0_loc_0 = 0;
    uint32_t addr_lfsx_8029BD14_loc_0 = 0;
    uint32_t addr_lhax_8029BD94_loc_0 = 0;
    uint32_t addr_psqx_8029C89C_loc_0 = 0;
    uint32_t addr_psqx_8029C8A8_loc_0 = 0;
    uint32_t addr_psqx_8029C8B4_loc_0 = 0;
    uint32_t addr_psqx_8029C8C0_loc_0 = 0;
    uint32_t addr_psqx_8029C8CC_loc_0 = 0;
    uint32_t addr_psqx_8029C8D8_loc_0 = 0;
    uint32_t addr_psqx_8029C8E4_loc_0 = 0;
    uint32_t addr_psqx_8029C8F0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword10 = 0;
    uint32_t fctiwzword11 = 0;
    uint32_t fctiwzword12 = 0;
    uint32_t fctiwzword13 = 0;
    uint32_t fctiwzword14 = 0;
    uint32_t fctiwzword15 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_addze_src_4 = 0;
    uint32_t r0_addze_src_5 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
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
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_21 = 0;
    uint32_t r3_rot_22 = 0;
    uint32_t r3_rot_23 = 0;
    uint32_t r3_rot_24 = 0;
    uint32_t r3_rot_25 = 0;
    uint32_t r3_rot_26 = 0;
    uint32_t r3_rot_27 = 0;
    uint32_t r3_rot_28 = 0;
    uint32_t r3_rot_29 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_30 = 0;
    uint32_t r3_rot_31 = 0;
    uint32_t r3_rot_32 = 0;
    uint32_t r3_rot_33 = 0;
    uint32_t r3_rot_34 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
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
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8029B97Cu);
    goto loc_8029B97C;

loc_8029B97C:
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
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r26 = r6;
    r19 = r7;
    r20 = r8;
    r21 = r9;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 24), r0);
    r3 = (r3 + 2752);
    r4 = (r29 + 2792);
    r5 = MemoryInline::FlatRead16((r30 + 12));
    // inline leaf 0x8029F238 (12 guest instruction(s))
}

loc_inl1_0x8029F238:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_0, static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_inl1_0x8029F258:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(20))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8029F25C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_inl1_cont_8029F238;
}

loc_inl1_return:
{
}

loc_inl1_cont_8029F238:
{
    // end of inlined leaf 0x8029F238
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 2099), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 44), r29);
    MemoryInline::FlatWrite8((r30 + 48), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 40), r31);
    r3 = r30;
    ctx->lr = 0x8029BA28u;
    if constexpr (KnownRegArgsCpuCall<0x8029AF20u>(&func_8029AF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029AF20_2FA4 = func_8029AF20_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8029AF20_2FA4);
        r4 = static_cast<uint32_t>(regargs_result_8029AF20_2FA4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AF20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -14076));
    f29.d = f30.d;
    f28.d = f30.d;
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r4 = (r0 & 255);
    // inline leaf 0x80127D14 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 2152));
    // end of inlined leaf 0x80127D14
    r24 = r3;
    r22 = MemoryInline::FlatRead16((r30 + 70));
    r27 = 0;
    r3 = r30;
    r4 = 1024;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8029F5C8
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r25 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_8029BA78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(25))) {
        goto loc_8029BA94;
    }
}

loc_8029BA7C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8029BA84:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_8029BA94;
    }
}

loc_8029BA88:
{
    r0 = MemoryInline::FlatRead8((r30 + 91));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r30 + 91), static_cast<uint8_t>(r0));
}

loc_8029BA94:
{
    r3 = r30;
    r4 = 32;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029BAA4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029BE08;
    }
}

loc_8029BAA8:
{
    r0 = MemoryInline::FlatRead8((r30 + 50));
}

loc_8029BAB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029BE08;
    }
}

loc_8029BAB4:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_8029BABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029BACC;
    }
}

loc_8029BAC0:
{
}

loc_8029BAC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029BAD4;
    }
}

loc_8029BAC8:
{
    goto loc_8029BAF0;
}

loc_8029BACC:
{
    r23 = MemoryInline::FlatRead32((r30 + 16));
    goto loc_8029BAF4;
}

loc_8029BAD4:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_8029BADC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029BAE8;
    }
}

loc_8029BAE0:
{
    r23 = MemoryInline::FlatRead32((r30 + 20));
    goto loc_8029BAF4;
}

loc_8029BAE8:
{
    r23 = 0;
    goto loc_8029BAF4;
}

loc_8029BAF0:
{
    r23 = 0;
}

loc_8029BAF4:
{
}

loc_8029BAF8:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8029C898;
    }
}

loc_8029BAFC:
{
    r22 = (r22 & 65527);
}

loc_8029BB00:
{
    r0 = MemoryInline::FlatRead16((r30 + 70));
    r0 = (r0 & 1);
}

loc_8029BB0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029BB14;
    }
}

loc_8029BB10:
{
    r27 = 1;
}

loc_8029BB14:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8029A1A4u>(&func_8029A1A4)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029A1A4_40E7 = func_8029A1A4_ra8_6_8_0(ctx, r3, f1.d, f2.d);
        r3 = regargs_result_8029A1A4_40E7;
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029A1A4u>(ctx);
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8029BB24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029BB44;
    }
}

loc_8029BB28:
{
}

loc_8029BB2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029BB4C;
    }
}

loc_8029BB30:
{
}

loc_8029BB34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029BB54;
    }
}

loc_8029BB38:
{
}

loc_8029BB3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029BB70;
    }
}

loc_8029BB40:
{
    goto loc_8029BB74;
}

loc_8029BB44:
{
    r28 = 2;
    goto loc_8029BB74;
}

loc_8029BB4C:
{
    r28 = 0;
    goto loc_8029BB74;
}

loc_8029BB54:
{
    r0 = MemoryInline::FlatRead16((r26 + 6));
}

loc_8029BB5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029BB68;
    }
}

loc_8029BB60:
{
    r28 = 4;
    goto loc_8029BB74;
}

loc_8029BB68:
{
    r28 = 3;
    goto loc_8029BB74;
}

loc_8029BB70:
{
    r28 = 2;
}

loc_8029BB74:
{
    r0 = MemoryInline::FlatRead8((r23 + 1387));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r3 = 0x805D0000u;
    r4 = (r3 + -6864);
    r0 = (r0 * 6);
    r0 = (r28 + r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + -7056);
    addr_lfsx_8029BB98_loc_0 = (r4 + r5);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8029BB98_loc_0);
    addr_lfsx_8029BB9C_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8029BB9C_loc_0);
    f30.d = PpcFmulsInline(f1.d, f0.d);
    r3 = r29;
    r4 = r24;
    r5 = (r1 + 8);
    r0 = MemoryInline::FlatRead8((r23 + 1384));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -14040));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead8((r23 + 1385));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    ctx->lr = 0x8029BBD8u;
    if constexpr (KnownRegArgsCpuCall<0x8029B82Cu>(&func_8029B82C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029B82C_4D74 = func_8029B82C_ra38_6_8_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = regargs_result_8029B82C_4D74;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029B82Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f30.d = PpcFmulsInline(f30.d, f1.d);
    r0 = MemoryInline::FlatRead8((r23 + 1387));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + -6836);
    addr_lfsx_8029BBEC_loc_0 = (r3 + r0);
    f29.d = MemoryInline::FlatReadFloat32(addr_lfsx_8029BBEC_loc_0);
    r3 = r30;
    r4 = 4096;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029BC00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029BC0C;
    }
}

loc_8029BC04:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14032));
    f29.d = PpcFmulsInline(f29.d, f0.d);
}

loc_8029BC0C:
{
    r0 = MemoryInline::FlatRead8((r23 + 1387));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + -6808);
    addr_lfsx_8029BC1C_loc_0 = (r3 + r0);
    f28.d = MemoryInline::FlatReadFloat32(addr_lfsx_8029BC1C_loc_0);
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8029BC28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029BC30;
    }
}

loc_8029BC2C:
{
    r27 = 0;
}

loc_8029BC30:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14076));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8029BC38:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029BC4C;
    }
}

loc_8029BC40:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    goto loc_8029BC8C;
}

loc_8029BC4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14028));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8029BC54:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029BC68;
    }
}

loc_8029BC5C:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    goto loc_8029BC8C;
}

loc_8029BC68:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14032));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8029BC70:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029BC84;
    }
}

loc_8029BC78:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    goto loc_8029BC8C;
}

loc_8029BC84:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
}

loc_8029BC8C:
{
    r4 = MemoryInline::FlatRead8((r30 + 89));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8029BC98:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8029BCAC;
    }
}

loc_8029BC9C:
{
    r0 = MemoryInline::FlatRead8((r30 + 67));
    r0 = (r0 & 128);
}

loc_8029BCA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029BD30;
    }
}

loc_8029BCAC:
{
    r3 = r23;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8029BCB8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8029BCEC;
    }
}

loc_8029BCBC:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14056));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r30 + 14));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = 0x805D0000u;
    r4 = (r4 + -6888);
    addr_lfsx_8029BCE0_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8029BCE0_loc_0);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_8029BD1C;
}

loc_8029BCEC:
{
    r0 = MemoryInline::FlatRead16((r30 + 64));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14056));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r30 + 14));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4 = 0x805D0000u;
    r4 = (r4 + -6888);
    addr_lfsx_8029BD14_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8029BD14_loc_0);
    f0.d = PpcFmulsInline(f1.d, f0.d);
}

loc_8029BD1C:
{
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r4 = fctiwzword0;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x8029BD30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8027C918u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8029BD30:
{
    r3 = r30;
    r4 = 8192;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029BD40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029BD5C;
    }
}

loc_8029BD44:
{
    r3 = r30;
    r4 = 8192;
    // inline leaf 0x8029F5B8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F5B8
    r3 = r23;
    r4 = 40;
    ctx->lr = 0x8029BD5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027CAACu>(&func_8027CAAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027CAAC_6E39 = func_8027CAAC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027CAAC_6E39);
        r4 = static_cast<uint32_t>(regargs_result_8027CAAC_6E39 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8027CAACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8029BD5C:
{
    r3 = r30;
    r4 = 4096;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x8029F5C8
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
    r26 = 0;
    r4 = MemoryInline::FlatRead8((r30 + 14));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r0 = (r3 + r0);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r3 = 0x805D0000u;
    r3 = (r3 + -6776);
    addr_lhax_8029BD94_loc_0 = (r3 + r0);
    r18 = MemoryInline::FlatRead16(addr_lhax_8029BD94_loc_0);
    r18 = (r18 << 16);
    r18 = (static_cast<int32_t>(r18) >> 16);
}

loc_8029BD9C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8029BDE0;
    }
}

loc_8029BDA0:
{
    r3 = r23;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80272B14_76C4 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_76C4);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_76C4 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8029BDB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029BDE0;
    }
}

loc_8029BDB4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_8029BDBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029BDE0;
    }
}

loc_8029BDC0:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & 1);
    r0 = (r0 + r18);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r18 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8029BDD4:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8029BDDC;
    }
}

loc_8029BDD8:
{
    r18 = -1;
}

loc_8029BDDC:
{
    r26 = 1;
}

loc_8029BDE0:
{
    r3 = r23;
    r4 = r18;
    r5 = r26;
    ctx->lr = 0x8029BDF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802786D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r23;
    r4 = r29;
    r5 = r30;
    r6 = r19;
    ctx->lr = 0x8029BE04u;
    if constexpr (KnownRegArgsCpuCall<0x8029A804u>(&func_8029A804)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029A804_814F = func_8029A804_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8029A804_814F);
        r4 = static_cast<uint32_t>(regargs_result_8029A804_814F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029A804u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029BF9C;
}

loc_8029BE08:
{
    r3 = r30;
    r4 = 32;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029BE18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029BECC;
    }
}

loc_8029BE1C:
{
    r0 = MemoryInline::FlatRead8((r30 + 50));
}

loc_8029BE24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8029BECC;
    }
}

loc_8029BE28:
{
    r3 = r29;
    r4 = r24;
    r5 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14064));
    f2.d = f1.d;
    ctx->lr = 0x8029BE40u;
    if constexpr (KnownRegArgsCpuCall<0x8029B82Cu>(&func_8029B82C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029B82C_8A00 = func_8029B82C_ra38_6_8_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = regargs_result_8029B82C_8A00;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029B82Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f30.d = PpcFmulsInline(f30.d, f1.d);
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8029BE4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029BE60;
    }
}

loc_8029BE50:
{
    r27 = 0;
    r22 = (r22 & 65534);
    r22 = (r22 | 2);
    goto loc_8029BE6C;
}

loc_8029BE60:
{
    r27 = 1;
    r22 = (r22 & 65533);
}

loc_8029BE68:
{
    r22 = (r22 | 1);
}

loc_8029BE6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14076));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8029BE74:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029BE88;
    }
}

loc_8029BE7C:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    goto loc_8029BF38;
}

loc_8029BE88:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14028));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8029BE90:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029BEA4;
    }
}

loc_8029BE98:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    goto loc_8029BF38;
}

loc_8029BEA4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14032));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8029BEAC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029BEC0;
    }
}

loc_8029BEB4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    goto loc_8029BF38;
}

loc_8029BEC0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    goto loc_8029BF38;
}

loc_8029BECC:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029BEDC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029BF28;
    }
}

loc_8029BEE0:
{
    r0 = MemoryInline::FlatRead8((r24 + 2));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14040));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = r29;
    // inline leaf 0x80133770 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2378));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x80133770
}

loc_8029BF00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029BF1C;
    }
}

loc_8029BF04:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14048));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f24.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14084));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_8029BF14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029BF1C;
    }
}

loc_8029BF18:
{
    f24.d = f0.d;
}

loc_8029BF1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14064));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f24.d / f0.d));
    goto loc_8029BF2C;
}

loc_8029BF28:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -14076));
}

loc_8029BF2C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r0));
    r22 = (r22 & 65534);
}

loc_8029BF38:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_8029BF40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8029BF64;
    }
}

loc_8029BF44:
{
    r3 = r29;
    ctx->lr = 0x8029BF4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012D0D8u>(&func_8012D0D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8012D0D8_9FD2 = func_8012D0D8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012D0D8_9FD2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->xer = xer;
        InvokeDirectCpu<0x8012D0D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8029BF50:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029BF9C;
    }
}

loc_8029BF54:
{
    r3 = r30;
    r4 = r19;
    ctx->lr = 0x8029BF60u;
    if constexpr (KnownRegArgsCpuCall<0x8029AA90u>(&func_8029AA90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029AA90_A330 = func_8029AA90_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8029AA90_A330);
        r4 = static_cast<uint32_t>(regargs_result_8029AA90_A330 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AA90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8029BF9C;
}

loc_8029BF64:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_8029BF6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029BF88;
    }
}

loc_8029BF70:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r4 = r29;
    r5 = r30;
    r6 = r19;
    ctx->lr = 0x8029BF84u;
    if constexpr (KnownRegArgsCpuCall<0x8029A88Cu>(&func_8029A88C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029A88C_A96F = func_8029A88C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8029A88C_A96F);
        r4 = static_cast<uint32_t>(regargs_result_8029A88C_A96F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029A88Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8029BF9C;
}

loc_8029BF88:
{
    r3 = 0;
    r4 = r29;
    r5 = r30;
    r6 = r19;
    ctx->lr = 0x8029BF9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8029A88Cu>(&func_8029A88C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029A88C_AEF8 = func_8029A88C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8029A88C_AEF8);
        r4 = static_cast<uint32_t>(regargs_result_8029A88C_AEF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029A88Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_8029BF9C:
{
    r3 = r30;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029BFA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029BFF0;
    }
}

loc_8029BFAC:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 16);
}

loc_8029BFB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029BFF0;
    }
}

loc_8029BFBC:
{
    r0 = MemoryInline::FlatRead8((r30 + 74));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -14040));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead8((r24 + 3));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14064));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8029BFF4;
}

loc_8029BFF0:
{
    f27.d = MemoryInline::FlatReadFloat32((r2 + -14084));
}

loc_8029BFF4:
{
    r3 = r30;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029C000:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029C048;
    }
}

loc_8029C004:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 32);
}

loc_8029C010:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C048;
    }
}

loc_8029C014:
{
    r0 = MemoryInline::FlatRead8((r30 + 74));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -14040));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead8((r24 + 4));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14064));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8029C04C;
}

loc_8029C048:
{
    f26.d = MemoryInline::FlatReadFloat32((r2 + -14084));
}

loc_8029C04C:
{
    r3 = r30;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029C058:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029C0A0;
    }
}

loc_8029C05C:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 512);
}

loc_8029C068:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C0A0;
    }
}

loc_8029C06C:
{
    r0 = MemoryInline::FlatRead8((r30 + 74));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -14040));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead8((r24 + 5));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14064));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8029C0A4;
}

loc_8029C0A0:
{
    f25.d = MemoryInline::FlatReadFloat32((r2 + -14084));
}

loc_8029C0A4:
{
    r3 = r30;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_14 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029C0B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029C0F8;
    }
}

loc_8029C0B4:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 64);
}

loc_8029C0C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C0F8;
    }
}

loc_8029C0C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 74));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -14040));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead8((r24 + 6));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14064));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8029C0FC;
}

loc_8029C0F8:
{
    f24.d = MemoryInline::FlatReadFloat32((r2 + -14084));
}

loc_8029C0FC:
{
    r3 = r30;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_15 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029C108:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029C150;
    }
}

loc_8029C10C:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 128);
}

loc_8029C118:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C150;
    }
}

loc_8029C11C:
{
    r0 = MemoryInline::FlatRead8((r30 + 74));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -14040));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead8((r24 + 7));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14064));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8029C154;
}

loc_8029C150:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14084));
}

loc_8029C154:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f25.d = PpcFmulsInline(f29.d, f0.d);
    r3 = r30;
    ctx->lr = 0x8029C170u;
    if constexpr (KnownRegArgsCpuCall<0x8029AE5Cu>(&func_8029AE5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029AE5C_D191 = func_8029AE5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029AE5C_D191);
        r4 = static_cast<uint32_t>(regargs_result_8029AE5C_D191 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AE5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x80130168 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 552));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_16 & 1);
    // end of inlined leaf 0x80130168
}

loc_8029C17C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029C1A0;
    }
}

loc_8029C180:
{
    r3 = r30;
    r4 = r19;
    r5 = r20;
    r6 = r21;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 528));
    r7 = r24;
    ctx->lr = 0x8029C19Cu;
    if constexpr (KnownRegArgsCpuCall<0x8029E3C0u>(&func_8029E3C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029E3C0_D811 = func_8029E3C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029E3C0_D811);
        r4 = static_cast<uint32_t>(regargs_result_8029E3C0_D811 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029E3C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8029C1BC;
}

loc_8029C1A0:
{
    r3 = r30;
    r4 = r19;
    r5 = r20;
    r6 = r21;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14072));
    r7 = r24;
    ctx->lr = 0x8029C1BCu;
    if constexpr (KnownRegArgsCpuCall<0x8029E3C0u>(&func_8029E3C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029E3C0_E1F1 = func_8029E3C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029E3C0_E1F1);
        r4 = static_cast<uint32_t>(regargs_result_8029E3C0_E1F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029E3C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8029C1BC:
{
    r0 = MemoryInline::FlatRead16((r30 + 70));
    r0 = (r0 & 256);
}

loc_8029C1C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C1D4;
    }
}

loc_8029C1CC:
{
    r3 = r29;
    // inline leaf 0x80133678 (9 guest instruction(s))
}

loc_inl18_0x80133678:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_inl18_0x80133680:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(40))) {
        goto loc_inl18_return;
    }
}

loc_inl18_0x80133684:
{
    r0 = 18000;
    MemoryInline::FlatWrite16((r3 + 2064), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2798));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 2798), static_cast<uint8_t>(r0));
    goto loc_inl18_cont_80133678;
}

loc_inl18_return:
{
}

loc_inl18_cont_80133678:
{
    // end of inlined leaf 0x80133678
}

loc_8029C1D4:
{
    r0 = MemoryInline::FlatRead8((r30 + 66));
}

loc_8029C1DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(31))) {
        goto loc_8029C210;
    }
}

loc_8029C1E0:
{
    r0 = MemoryInline::FlatRead16((r30 + 64));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14056));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14024));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r28 = fctiwzword1;
    goto loc_8029C264;
}

loc_8029C210:
{
    r0 = MemoryInline::FlatRead16((r30 + 64));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14056));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f25.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14084));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8029C23C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8029C254;
    }
}

loc_8029C240:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14076));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8029C248:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029C254;
    }
}

loc_8029C24C:
{
    r28 = 1;
    goto loc_8029C264;
}

loc_8029C254:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f25.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r28 = fctiwzword2;
}

loc_8029C264:
{
    r0 = MemoryInline::FlatRead8((r30 + 78));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14056));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r26 = fctiwzword3;
    r0 = MemoryInline::FlatRead8((r30 + 50));
}

loc_8029C298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029C2B0;
    }
}

loc_8029C29C:
{
}

loc_8029C2A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029C304;
    }
}

loc_8029C2A4:
{
}

loc_8029C2A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8029C3A8;
    }
}

loc_8029C2AC:
{
    goto loc_8029C3C0;
}

loc_8029C2B0:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_8029C2B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029C2C4;
    }
}

loc_8029C2BC:
{
    r19 = MemoryInline::FlatRead32((r30 + 16));
    goto loc_8029C2D4;
}

loc_8029C2C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_8029C2CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029C3C0;
    }
}

loc_8029C2D0:
{
    r19 = MemoryInline::FlatRead32((r30 + 20));
}

loc_8029C2D4:
{
}

loc_8029C2D8:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_8029C3C0;
    }
}

loc_8029C2DC:
{
    r3 = r19;
    r4 = 0;
    ctx->lr = 0x8029C2E8u;
    if constexpr (KnownRegArgsCpuCall<0x80275524u>(&func_80275524)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80275524_FC86 = func_80275524_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275524_FC86);
        r4 = static_cast<uint32_t>(regargs_result_80275524_FC86 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80275524u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r29;
    r4 = 0;
    r5 = MemoryInline::FlatRead8((r19 + 8));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = r25;
    ctx->lr = 0x8029C300u;
    if constexpr (KnownRegArgsCpuCall<0x8011F2A4u>(&func_8011F2A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F2A4_10132 = func_8011F2A4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F2A4_10132);
        r4 = static_cast<uint32_t>(regargs_result_8011F2A4_10132 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F2A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_8029C3C0;
}

loc_8029C304:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_8029C30C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8029C32C;
    }
}

loc_8029C310:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r28 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8029C320:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(1))) {
        goto loc_8029C338;
    }
}

loc_8029C324:
{
    r28 = 1;
    goto loc_8029C338;
}

loc_8029C32C:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r0_addze_src_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_2 + r0_ca_2);
    r28 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8029C338:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14032));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r0 = (r26 & 255);
}

loc_8029C348:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C360;
    }
}

loc_8029C34C:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_15 & 1073741823);
    r26 = (r0 & 255);
}

loc_8029C358:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8029C360;
    }
}

loc_8029C35C:
{
    r26 = 1;
}

loc_8029C360:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_8029C368:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029C374;
    }
}

loc_8029C36C:
{
    r5 = MemoryInline::FlatRead32((r30 + 16));
    goto loc_8029C384;
}

loc_8029C374:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_8029C37C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029C3C0;
    }
}

loc_8029C380:
{
    r5 = MemoryInline::FlatRead32((r30 + 20));
}

loc_8029C384:
{
}

loc_8029C388:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8029C3C0;
    }
}

loc_8029C38C:
{
    r3 = r29;
    r4 = 1;
    r5 = MemoryInline::FlatRead8((r5 + 2));
    r6 = r28;
    r7 = r25;
    ctx->lr = 0x8029C3A4u;
    if constexpr (KnownRegArgsCpuCall<0x8011F2A4u>(&func_8011F2A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F2A4_11361 = func_8011F2A4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F2A4_11361);
        r4 = static_cast<uint32_t>(regargs_result_8011F2A4_11361 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F2A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_8029C3C0;
}

loc_8029C3A8:
{
    r3 = r29;
    r4 = 2;
    r5 = 0;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = r25;
    ctx->lr = 0x8029C3C0u;
    if constexpr (KnownRegArgsCpuCall<0x8011F2A4u>(&func_8011F2A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F2A4_119CB = func_8011F2A4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F2A4_119CB);
        r4 = static_cast<uint32_t>(regargs_result_8011F2A4_119CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F2A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_8029C3C0:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r6 = r25;
    ctx->lr = 0x8029C3D8u;
    if constexpr (KnownRegArgsCpuCall<0x8011EF88u>(&func_8011EF88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011EF88_12013 = func_8011EF88_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011EF88_12013);
        r4 = static_cast<uint32_t>(regargs_result_8011EF88_12013 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011EF88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r30 + 66));
}

loc_8029C3E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_8029C3F0;
    }
}

loc_8029C3E4:
{
    r3 = r29;
    r4 = 1;
    // inline leaf 0x8011F294 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 2062));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 2062), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8011F294
}

loc_8029C3F0:
{
    r0 = MemoryInline::FlatRead16((r29 + 2088));
    r3 = (r0 & 255);
    // inline leaf 0x8029B958 (9 guest instruction(s))
}

loc_inl20_0x8029B958:
{
    r0 = (r3 & 255);
}

loc_inl20_0x8029B960:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(36))) {
        goto loc_inl20_0x8029B96C;
    }
}

loc_inl20_0x8029B964:
{
    r3 = 0;
    goto loc_inl20_cont_8029B958;
}

loc_inl20_0x8029B96C:
{
    r3 = 0x805D0000u;
    r3 = (r3 + -7096);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_inl20_cont_8029B958:
{
    // end of inlined leaf 0x8029B958
    r19 = (r3 & 255);
    r3 = MemoryInline::FlatRead8((r30 + 66));
    // inline leaf 0x8029B958 (9 guest instruction(s))
}

loc_inl21_0x8029B958:
{
    r0 = (r3 & 255);
}

loc_inl21_0x8029B960:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(36))) {
        goto loc_inl21_0x8029B96C;
    }
}

loc_inl21_0x8029B964:
{
    r3 = 0;
    goto loc_inl21_cont_8029B958;
}

loc_inl21_0x8029B96C:
{
    r3 = 0x805D0000u;
    r3 = (r3 + -7096);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_3);
}

loc_inl21_cont_8029B958:
{
    // end of inlined leaf 0x8029B958
    r0 = (r3 & 255);
}

loc_8029C410:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r19))) {
        goto loc_8029C44C;
    }
}

loc_8029C414:
{
    r0 = MemoryInline::FlatRead8((r30 + 66));
    MemoryInline::FlatWrite16((r29 + 2088), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 66));
    MemoryInline::FlatWrite16((r29 + 2090), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 69));
    MemoryInline::FlatWrite8((r29 + 2096), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = r20;
    r5 = r21;
    ctx->lr = 0x8029C43Cu;
    if constexpr (KnownRegArgsCpuCall<0x8029AD1Cu>(&func_8029AD1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8029AD1C_12E59 = func_8029AD1C_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029AD1C_12E59);
        r4 = static_cast<uint32_t>(regargs_result_8029AD1C_12E59 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AD1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
    }
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r29 + 2070), static_cast<uint16_t>(r0));
}

loc_8029C44C:
{
    r0 = (r22 & 65535);
    r0 = (r0 & 2);
}

loc_8029C458:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C488;
    }
}

loc_8029C45C:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 1;
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r6 = fctiwzword4;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r7 = 0;
    r8 = r25;
    ctx->lr = 0x8029C488u;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_13957 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_13957);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_13957 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C488:
{
    r0 = (r22 & 65535);
    r0 = (r0 & 1);
}

loc_8029C494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C4CC;
    }
}

loc_8029C498:
{
}

loc_8029C49C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8029C4CC;
    }
}

loc_8029C4A0:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 0;
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r6 = fctiwzword5;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r7 = 0;
    r8 = r25;
    ctx->lr = 0x8029C4CCu;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_14226 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_14226);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_14226 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C4CC:
{
    r0 = (r22 & 65535);
    r0 = (r0 & 4);
}

loc_8029C4D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029C4FC;
    }
}

loc_8029C4DC:
{
    r3 = r30;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_17 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029C4E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029C534;
    }
}

loc_8029C4EC:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 16);
}

loc_8029C4F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C534;
    }
}

loc_8029C4FC:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 3;
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r6 = fctiwzword6;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    f0.d = PPC_Fctiwz(f25.d);
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r7 = fctiwzword7;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r8 = r25;
    ctx->lr = 0x8029C534u;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_14DCF = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_14DCF);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_14DCF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C534:
{
    r0 = (r22 & 65535);
    r0 = (r0 & 16);
}

loc_8029C540:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029C564;
    }
}

loc_8029C544:
{
    r3 = r30;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_20 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029C550:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029C59C;
    }
}

loc_8029C554:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 32);
}

loc_8029C560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C59C;
    }
}

loc_8029C564:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 4;
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r6 = fctiwzword8;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    f0.d = PPC_Fctiwz(f25.d);
    fctiwzword9 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r7 = fctiwzword9;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r8 = r25;
    ctx->lr = 0x8029C59Cu;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_15979 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_15979);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_15979 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C59C:
{
    r0 = (r22 & 65535);
    r0 = (r0 & 64);
}

loc_8029C5A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029C5CC;
    }
}

loc_8029C5AC:
{
    r3 = r30;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_23 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029C5B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029C604;
    }
}

loc_8029C5BC:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 64);
}

loc_8029C5C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C604;
    }
}

loc_8029C5CC:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 5;
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword10 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r6 = fctiwzword10;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    f0.d = PPC_Fctiwz(f25.d);
    fctiwzword11 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r7 = fctiwzword11;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r8 = r25;
    ctx->lr = 0x8029C604u;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_16527 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_16527);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_16527 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C604:
{
    r0 = (r22 & 65535);
    r0 = (r0 & 32);
}

loc_8029C610:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029C634;
    }
}

loc_8029C614:
{
    r3 = r30;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_26 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029C620:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029C66C;
    }
}

loc_8029C624:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 128);
}

loc_8029C630:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C66C;
    }
}

loc_8029C634:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 6;
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword12 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r6 = fctiwzword12;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    f0.d = PPC_Fctiwz(f25.d);
    fctiwzword13 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r7 = fctiwzword13;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r8 = r25;
    ctx->lr = 0x8029C66Cu;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_170D6 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_170D6);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_170D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C66C:
{
    r0 = (r22 & 65535);
    r0 = (r0 & 128);
}

loc_8029C678:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029C69C;
    }
}

loc_8029C67C:
{
    r3 = r30;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_29 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029C688:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029C6D4;
    }
}

loc_8029C68C:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 512);
}

loc_8029C698:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C6D4;
    }
}

loc_8029C69C:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 7;
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword14 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r6 = fctiwzword14;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    f0.d = PPC_Fctiwz(f25.d);
    fctiwzword15 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r7 = fctiwzword15;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r8 = r25;
    ctx->lr = 0x8029C6D4u;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_17C86 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_17C86);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_17C86 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C6D4:
{
    r28 = MemoryInline::FlatRead8((r30 + 74));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_8029C6E0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8029C710;
    }
}

loc_8029C6E4:
{
    r3 = r30;
    r4 = 4096;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_32 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029C6F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029C714;
    }
}

loc_8029C6F8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r28 = (static_cast<int32_t>(r0) >> 1);
}

loc_8029C704:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8029C714;
    }
}

loc_8029C708:
{
    r28 = 1;
    goto loc_8029C714;
}

loc_8029C710:
{
    r28 = 0;
}

loc_8029C714:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 1);
}

loc_8029C720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C744;
    }
}

loc_8029C724:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 9;
    r6 = 0;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r8 = r25;
    ctx->lr = 0x8029C744u;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_18861 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_18861);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_18861 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C744:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 2);
}

loc_8029C750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C774;
    }
}

loc_8029C754:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 10;
    r6 = 0;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r8 = r25;
    ctx->lr = 0x8029C774u;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_19026 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_19026);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_19026 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C774:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 4);
}

loc_8029C780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C7A4;
    }
}

loc_8029C784:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 11;
    r6 = 0;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r8 = r25;
    ctx->lr = 0x8029C7A4u;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_197EB = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_197EB);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_197EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C7A4:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 8);
}

loc_8029C7B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C7D4;
    }
}

loc_8029C7B4:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 12;
    r6 = 0;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r8 = r25;
    ctx->lr = 0x8029C7D4u;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_19FB0 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_19FB0);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_19FB0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C7D4:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 1024);
}

loc_8029C7E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C804;
    }
}

loc_8029C7E4:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 13;
    r6 = 0;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r8 = r25;
    ctx->lr = 0x8029C804u;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_1A778 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_1A778);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_1A778 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C804:
{
    r0 = MemoryInline::FlatRead16((r30 + 72));
    r0 = (r0 & 2048);
}

loc_8029C810:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029C834;
    }
}

loc_8029C814:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 14;
    r6 = 0;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r8 = r25;
    ctx->lr = 0x8029C834u;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_1AF40 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_1AF40);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_1AF40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8029C834:
{
    r0 = MemoryInline::FlatRead8((r30 + 66));
}

loc_8029C83C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_8029C87C;
    }
}

loc_8029C840:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r5 = 8;
    r6 = 0;
    r7 = MemoryInline::FlatRead16((r30 + 64));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r8 = r25;
    ctx->lr = 0x8029C860u;
    if constexpr (KnownRegArgsCpuCall<0x8011F020u>(&func_8011F020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F020_1B726 = func_8011F020_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F020_1B726);
        r4 = static_cast<uint32_t>(regargs_result_8011F020_1B726 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_8029C868:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029C87C;
    }
}

loc_8029C86C:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r4 = MemoryInline::FlatRead8((r4 + 8));
    // inline leaf 0x8011F1B0 (8 guest instruction(s))
    r6 = MemoryInline::FlatRead8((r3 + 2048));
    r5 = 1;
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r6 | r0);
    MemoryInline::FlatWrite8((r3 + 2048), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8011F1B0
}

loc_8029C87C:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r0 & 255);
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r5 = (r0 & 255);
    r6 = (r26 & 255);
    ctx->lr = 0x8029C898u;
    if constexpr (KnownRegArgsCpuCall<0x8011F1D0u>(&func_8011F1D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8011F1D0_1C02C = func_8011F1D0_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8011F1D0_1C02C);
        r4 = static_cast<uint32_t>(regargs_result_8011F1D0_1C02C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8011F1D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
}

loc_8029C898:
{
    r0 = 232;
    addr_psqx_8029C89C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029C89C_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 112), 0, 136u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 112u, (r1 + 224));
    r0 = 216;
    addr_psqx_8029C8A8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029C8A8_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 208));
    r0 = 200;
    addr_psqx_8029C8B4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029C8B4_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 192));
    r0 = 184;
    addr_psqx_8029C8C0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029C8C0_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 176));
    r0 = 168;
    addr_psqx_8029C8CC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029C8CC_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 160));
    r0 = 152;
    addr_psqx_8029C8D8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029C8D8_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 144));
    r0 = 136;
    addr_psqx_8029C8E4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029C8E4_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 128));
    r0 = 120;
    addr_psqx_8029C8F0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029C8F0_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::ReadResolved32(guest_range_3, 132u, (r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029B97C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029B97C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF003FFF fpr_write=0xFF003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8029B97C func_8029B97C preserves=true fpr_mask=0x00000000
