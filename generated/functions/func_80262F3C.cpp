#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802617D4(CpuContext* ctx);
extern "C" uint64_t func_802617D4_ra38_1ee_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80262AC8(CpuContext* ctx);
extern "C" uint64_t func_80262AC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8026A3A0(CpuContext* ctx);
extern "C" uint64_t func_8026A3A0_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8026A40C(CpuContext* ctx);
extern "C" uint32_t func_8026A40C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8026F96C(CpuContext* ctx);
extern "C" uint64_t func_8026F96C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027621C(CpuContext* ctx);
extern "C" uint64_t func_8027621C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802794F4(CpuContext* ctx);
extern "C" uint64_t func_802794F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027BCAC(CpuContext* ctx);
extern "C" uint32_t func_8027BCAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027D9CC(CpuContext* ctx);
extern "C" uint64_t func_8027D9CC_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8027DEEC(CpuContext* ctx);
extern "C" uint64_t func_8027DEEC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027DF9C(CpuContext* ctx);
extern "C" uint64_t func_8027DF9C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80331204(CpuContext* ctx);
extern "C" uint32_t func_80331204_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80262F3C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80264258_loc_0 = 0;
    uint32_t addr_psqx_80264264_loc_0 = 0;
    uint32_t addr_psqx_80264270_loc_0 = 0;
    uint32_t addr_psqx_8026427C_loc_0 = 0;
    uint32_t addr_psqx_80264288_loc_0 = 0;
    uint32_t addr_psqx_80264294_loc_0 = 0;
    uint32_t addr_psqx_802642A0_loc_0 = 0;
    uint32_t addr_psqx_802642AC_loc_0 = 0;
    uint32_t addr_psqx_802642B8_loc_0 = 0;
    uint32_t cr0_0 = 0;
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
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r0_subfc_sub_4 = 0;
    uint32_t r0_subfc_sub_5 = 0;
    uint32_t r0_subfc_sub_6 = 0;
    uint32_t r0_subfc_sub_7 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_adde_right_5 = 0;
    uint32_t r3_adde_right_6 = 0;
    uint32_t r3_adde_right_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
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
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80262F3Cu);
    goto loc_80262F3C;

loc_80262F3C:
{
    r18 = 1;
    r3 = r15;
    // inline leaf 0x8027A5B8 (10 guest instruction(s))
}

loc_inl0_0x8027A5B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_inl0_0x8027A5C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8027A5D8;
    }
}

loc_inl0_0x8027A5C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1510));
}

loc_inl0_0x8027A5CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8027A5D8;
    }
}

loc_inl0_0x8027A5D0:
{
    r3 = 0;
    goto loc_inl0_cont_8027A5B8;
}

loc_inl0_0x8027A5D8:
{
    r3 = 1;
}

loc_inl0_cont_8027A5B8:
{
    // end of inlined leaf 0x8027A5B8
}

loc_80262F4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802636B4;
    }
}

loc_80262F50:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802636B4:
{
    r0 = MemoryInline::FlatRead8((r22 + 802));
}

loc_802636BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_802636C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r21, 0, 6u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, r21);
    r0 = (r3 & 128);
}

loc_802636CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80263F24;
    }
}

loc_802636D0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r21 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(251));
}

loc_802636D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80263D7C;
    }
}

loc_802636DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80263710;
    }
}

loc_802636E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(246));
}

loc_802636E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802637A8;
    }
}

loc_802636E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80263700;
    }
}

loc_802636EC:
{
}

loc_802636F0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_80263F1C;
    }
}

loc_802636F4:
{
}

loc_802636F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80263BE4;
    }
}

loc_802636FC:
{
    goto loc_80263F1C;
}

loc_80263700:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(248));
}

loc_80263704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80263E24;
    }
}

loc_80263708:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80263DD0;
    }
}

loc_8026370C:
{
    goto loc_80263E30;
}

loc_80263710:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(254));
}

loc_80263714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80263888;
    }
}

loc_80263718:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80263728;
    }
}

loc_8026371C:
{
}

loc_80263720:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(253))) {
        goto loc_80263A84;
    }
}

loc_80263724:
{
    goto loc_80263D28;
}

loc_80263728:
{
}

loc_8026372C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(256))) {
        goto loc_80263F1C;
    }
}

loc_80263730:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r0 = (r26 + -1);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r3 = r15;
    r4 = (r1 + 8);
    r5 = (r1 + 16);
    r6 = (r1 + 14);
    r7 = (r1 + 32);
    r8 = MemoryInline::FlatRead16((r15 + 772));
    r9 = (r1 + 12);
    ctx->lr = 0x80263760u;
    if constexpr (KnownRegArgsCpuCall<0x802617D4u>(&func_802617D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802617D4_2D10 = func_802617D4_ra38_1ee_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802617D4_2D10);
        r4 = static_cast<uint32_t>(regargs_result_802617D4_2D10 >> 32);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->gpr[9] = r9;
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802617D4u>(ctx);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80263764:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263770;
    }
}

loc_80263768:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263770:
{
    r0 = MemoryInline::FlatRead16((r15 + 772));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3 = (r15 + r0);
    r19 = MemoryInline::FlatRead16((r3 + 632));
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_80263788:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80263798;
    }
}

loc_8026378C:
{
    r0 = MemoryInline::FlatRead16((r1 + 14));
    r0 = (r0 | 32);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
}

loc_80263798:
{
    r0 = MemoryInline::FlatRead8((r15 + 777));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r15 + 777), static_cast<uint8_t>(r0));
    goto loc_80263F3C;
}

loc_802637A8:
{
    r3 = r15;
    r4 = (r1 + 52);
    r5 = (r1 + 24);
    r6 = (r1 + 28);
    ctx->lr = 0x802637BCu;
    if constexpr (KnownRegArgsCpuCall<0x8027D9CCu>(&func_8027D9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027D9CC_3C08 = func_8027D9CC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8027D9CC_3C08);
        r4 = static_cast<uint32_t>(regargs_result_8027D9CC_3C08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027D9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_802637C0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_802637E8;
    }
}

loc_802637C4:
{
}

loc_802637C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_802637E8;
    }
}

loc_802637CC:
{
}

loc_802637D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_802637E8;
    }
}

loc_802637D4:
{
}

loc_802637D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_802637F0;
    }
}

loc_802637DC:
{
}

loc_802637E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_80263840;
    }
}

loc_802637E4:
{
    goto loc_80263880;
}

loc_802637E8:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802637F0:
{
    // inline leaf 0x8027DCC8 (5 guest instruction(s))
    r3 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r3 + -9184));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_6 & 134217727);
    // end of inlined leaf 0x8027DCC8
}

loc_802637F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80263838;
    }
}

loc_802637FC:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = MemoryInline::FlatRead8((r15 + 9));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80263808:
{
    r0 = 167;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80263814;
    }
}

loc_80263810:
{
    r0 = 178;
}

loc_80263814:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = (r15 + 60);
    r4 = (r1 + 52);
    ctx->lr = 0x8026382Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80050AF4_4B38 = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_4B38);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_4B38 >> 32);
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
        ctx->gpr[9] = r9;
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
        InvokeDirectCpu<0x80050AF4u>(ctx);
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
    r0 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    goto loc_80263F3C;
}

loc_80263838:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263840:
{
    // inline leaf 0x8027DCDC (6 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -9184);
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    // end of inlined leaf 0x8027DCDC
}

loc_80263848:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80263878;
    }
}

loc_8026384C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = 168;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = (r15 + 60);
    r4 = (r1 + 52);
    ctx->lr = 0x8026386Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80050AF4_5801 = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_5801);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_5801 >> 32);
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
        ctx->gpr[9] = r9;
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
        InvokeDirectCpu<0x80050AF4u>(ctx);
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
    r0 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    goto loc_80263F3C;
}

loc_80263878:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263880:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263888:
{
    r3 = MemoryInline::FlatRead8((r15 + 8));
    r4 = MemoryInline::FlatRead8((r15 + 22));
    r5 = (r15 + 60);
    r6 = (r1 + 10);
    r7 = (r1 + 52);
    r8 = (r1 + 40);
    r9 = (r15 + 1140);
    ctx->lr = 0x802638A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x803BAA14u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_802638B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80263A7C;
    }
}

loc_802638B4:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    MemoryInline::FlatWrite16((r15 + 1144), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802638C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802638FC;
    }
}

loc_802638C8:
{
}

loc_802638CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_802638FC;
    }
}

loc_802638D0:
{
}

loc_802638D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80263944;
    }
}

loc_802638D8:
{
}

loc_802638DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80263970;
    }
}

loc_802638E0:
{
}

loc_802638E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_802639B8;
    }
}

loc_802638E8:
{
}

loc_802638EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802639E4;
    }
}

loc_802638F0:
{
}

loc_802638F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80263A24;
    }
}

loc_802638F8:
{
    goto loc_80263A64;
}

loc_802638FC:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = MemoryInline::FlatRead8((r15 + 9));
}

loc_80263908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80263918;
    }
}

loc_8026390C:
{
}

loc_80263910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80263924;
    }
}

loc_80263914:
{
    goto loc_80263930;
}

loc_80263918:
{
    r0 = 45;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263938;
}

loc_80263924:
{
    r0 = 98;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263938;
}

loc_80263930:
{
    r0 = 44;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
}

loc_80263938:
{
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_80263944:
{
    r0 = MemoryInline::FlatRead8((r15 + 9));
}

loc_8026394C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80263968;
    }
}

loc_80263950:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = 127;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_80263968:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263970:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = MemoryInline::FlatRead8((r15 + 9));
}

loc_8026397C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026398C;
    }
}

loc_80263980:
{
}

loc_80263984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80263998;
    }
}

loc_80263988:
{
    goto loc_802639A4;
}

loc_8026398C:
{
    r0 = 52;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_802639AC;
}

loc_80263998:
{
    r0 = 97;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_802639AC;
}

loc_802639A4:
{
    r0 = 51;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
}

loc_802639AC:
{
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_802639B8:
{
    r3 = r15;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_802639C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802639D0;
    }
}

loc_802639C8:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_802639D0:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r28));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_802639E4:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_802639F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80263A04;
    }
}

loc_802639F4:
{
    r3 = r15;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_80263A00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80263A0C;
    }
}

loc_80263A04:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263A0C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = 87;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_80263A24:
{
    r3 = r15;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_80263A30:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80263A44;
    }
}

loc_80263A34:
{
    r3 = 0;
    ctx->lr = 0x80263A3Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027BCAC_7EFD = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_7EFD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80263A40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80263A4C;
    }
}

loc_80263A44:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263A4C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r0 = 88;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263A6C;
}

loc_80263A64:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263A6C:
{
    r0 = MemoryInline::FlatRead8((r15 + 777));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r15 + 777), static_cast<uint8_t>(r0));
    goto loc_80263F3C;
}

loc_80263A7C:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263A84:
{
    r3 = MemoryInline::FlatRead8((r15 + 8));
    r4 = MemoryInline::FlatRead8((r15 + 22));
    r5 = (r15 + 60);
    r6 = (r1 + 10);
    r7 = (r1 + 52);
    r8 = (r1 + 40);
    r9 = (r15 + 1140);
    ctx->lr = 0x80263AA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x803BAA14u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_80263AAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80263BDC;
    }
}

loc_80263AB0:
{
    r16 = (r26 + -1);
    r0 = MemoryInline::FlatRead16((r1 + 10));
    MemoryInline::FlatWrite16((r15 + 1144), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80263AC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80263ADC;
    }
}

loc_80263AC8:
{
}

loc_80263ACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80263B0C;
    }
}

loc_80263AD0:
{
}

loc_80263AD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80263B3C;
    }
}

loc_80263AD8:
{
    goto loc_80263B68;
}

loc_80263ADC:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027DF9Cu>(&func_8027DF9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027DF9C_8DFB = func_8027DF9C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DF9C_8DFB);
        r4 = static_cast<uint32_t>(regargs_result_8027DF9C_8DFB >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8027DF9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r16 = r3;
    r0 = (r3 & 65535);
}

loc_80263AF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80263B68;
    }
}

loc_80263AF8:
{
    r3 = r15;
    r4 = 0;
    ctx->lr = 0x80263B04u;
    if constexpr (KnownRegArgsCpuCall<0x8027DEECu>(&func_8027DEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027DEEC_92DD = func_8027DEEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DEEC_92DD);
        r4 = static_cast<uint32_t>(regargs_result_8027DEEC_92DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027DEECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r16 = r3;
    goto loc_80263B68;
}

loc_80263B0C:
{
    r3 = r15;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8027DF9Cu>(&func_8027DF9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027DF9C_9755 = func_8027DF9C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DF9C_9755);
        r4 = static_cast<uint32_t>(regargs_result_8027DF9C_9755 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8027DF9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r16 = r3;
    r0 = (r3 & 65535);
}

loc_80263B24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80263B68;
    }
}

loc_80263B28:
{
    r3 = r15;
    r4 = 1;
    ctx->lr = 0x80263B34u;
    if constexpr (KnownRegArgsCpuCall<0x8027DEECu>(&func_8027DEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027DEEC_9C37 = func_8027DEEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DEEC_9C37);
        r4 = static_cast<uint32_t>(regargs_result_8027DEEC_9C37 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027DEECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r16 = r3;
    goto loc_80263B68;
}

loc_80263B3C:
{
    r3 = r15;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8027DF9Cu>(&func_8027DF9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027DF9C_A0AF = func_8027DF9C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DF9C_A0AF);
        r4 = static_cast<uint32_t>(regargs_result_8027DF9C_A0AF >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8027DF9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r16 = r3;
    r0 = (r3 & 65535);
}

loc_80263B54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80263B68;
    }
}

loc_80263B58:
{
    r3 = r15;
    r4 = 2;
    ctx->lr = 0x80263B64u;
    if constexpr (KnownRegArgsCpuCall<0x8027DEECu>(&func_8027DEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027DEEC_A591 = func_8027DEEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027DEEC_A591);
        r4 = static_cast<uint32_t>(regargs_result_8027DEEC_A591 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027DEECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r16 = r3;
}

loc_80263B68:
{
    r8 = (r16 & 65535);
}

loc_80263B70:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(65535))) {
        goto loc_80263BD4;
    }
}

loc_80263B74:
{
    r0 = (r8 & 128);
}

loc_80263B7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80263BD4;
    }
}

loc_80263B80:
{
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = r15;
    r4 = (r1 + 8);
    r5 = (r1 + 16);
    r6 = (r1 + 14);
    r7 = (r1 + 32);
    r9 = (r1 + 12);
    ctx->lr = 0x80263BA4u;
    if constexpr (KnownRegArgsCpuCall<0x802617D4u>(&func_802617D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802617D4_AD29 = func_802617D4_ra38_1ee_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802617D4_AD29);
        r4 = static_cast<uint32_t>(regargs_result_802617D4_AD29 >> 32);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->gpr[9] = r9;
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802617D4u>(ctx);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80263BA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263BB4;
    }
}

loc_80263BAC:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263BB4:
{
    r0 = (r16 & 65535);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3 = (r15 + r0);
    r19 = MemoryInline::FlatRead16((r3 + 632));
    r0 = MemoryInline::FlatRead8((r15 + 777));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r15 + 777), static_cast<uint8_t>(r0));
    goto loc_80263F3C;
}

loc_80263BD4:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263BDC:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263BE4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805C0000u;
    r3 = (r3 + 24920);
    r3_addr_1 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead8((r15 + 2));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r0 = (r0 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead16(r5);
}

loc_80263C10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80263C30;
    }
}

loc_80263C14:
{
    r0 = MemoryInline::FlatRead16((r5 + 2));
}

loc_80263C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80263C28;
    }
}

loc_80263C20:
{
}

loc_80263C24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_80263C30;
    }
}

loc_80263C28:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263C30:
{
    r0 = MemoryInline::FlatRead16(r5);
    r4 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r5 + 2));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r5 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 2));
}

loc_80263C54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80263C64;
    }
}

loc_80263C58:
{
}

loc_80263C5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80263CC0;
    }
}

loc_80263C60:
{
    goto loc_80263F3C;
}

loc_80263C64:
{
}

loc_80263C68:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_80263F3C;
    }
}

loc_80263C6C:
{
}

loc_80263C70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(20))) {
        goto loc_80263C80;
    }
}

loc_80263C74:
{
}

loc_80263C78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(37))) {
        goto loc_80263CA0;
    }
}

loc_80263C7C:
{
    goto loc_80263F3C;
}

loc_80263C80:
{
    r3 = r15;
    r4 = 15;
    // inline leaf 0x8027CA68 (17 guest instruction(s))
}

loc_inl7_0x8027CA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl7_0x8027CA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl7_0x8027CA7C;
    }
}

loc_inl7_0x8027CA74:
{
    r3 = 0;
    goto loc_inl7_cont_8027CA68;
}

loc_inl7_0x8027CA7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl7_0x8027CA84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl7_0x8027CA90;
    }
}

loc_inl7_0x8027CA88:
{
    r3 = 1;
    goto loc_inl7_cont_8027CA68;
}

loc_inl7_0x8027CA90:
{
    r5 = MemoryInline::FlatRead16((r3 + 900));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0_subfc_sub_3 = r0;
    r0 = (r5 - r0_subfc_sub_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_3) ? 1u : 0u) << 29);
    r3_adde_right_3 = r3;
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_3);
    r3 = (r3 + r3_ca_3);
}

loc_inl7_cont_8027CA68:
{
    // end of inlined leaf 0x8027CA68
}

loc_80263C90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263F3C;
    }
}

loc_80263C94:
{
    r0 = 21;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263CA0:
{
    r3 = r15;
    r4 = 15;
    // inline leaf 0x8027CA68 (17 guest instruction(s))
}

loc_inl8_0x8027CA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl8_0x8027CA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl8_0x8027CA7C;
    }
}

loc_inl8_0x8027CA74:
{
    r3 = 0;
    goto loc_inl8_cont_8027CA68;
}

loc_inl8_0x8027CA7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl8_0x8027CA84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl8_0x8027CA90;
    }
}

loc_inl8_0x8027CA88:
{
    r3 = 1;
    goto loc_inl8_cont_8027CA68;
}

loc_inl8_0x8027CA90:
{
    r5 = MemoryInline::FlatRead16((r3 + 900));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0_subfc_sub_1 = r0;
    r0 = (r5 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
}

loc_inl8_cont_8027CA68:
{
    // end of inlined leaf 0x8027CA68
}

loc_80263CB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263F3C;
    }
}

loc_80263CB4:
{
    r0 = 38;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263CC0:
{
}

loc_80263CC4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_80263F3C;
    }
}

loc_80263CC8:
{
}

loc_80263CCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(15))) {
        goto loc_80263CEC;
    }
}

loc_80263CD0:
{
}

loc_80263CD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(80))) {
        goto loc_80263CEC;
    }
}

loc_80263CD8:
{
}

loc_80263CDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(60))) {
        goto loc_80263D08;
    }
}

loc_80263CE0:
{
}

loc_80263CE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(81))) {
        goto loc_80263D08;
    }
}

loc_80263CE8:
{
    goto loc_80263F3C;
}

loc_80263CEC:
{
    r3 = r15;
    ctx->lr = 0x80263CF4u;
    if constexpr (KnownRegArgsCpuCall<0x80331204u>(&func_80331204)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80331204_D353 = func_80331204_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80331204_D353;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80331204u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80263CFC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80263F3C;
    }
}

loc_80263D00:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r28));
    goto loc_80263F3C;
}

loc_80263D08:
{
    r3 = r15;
    ctx->lr = 0x80263D10u;
    if constexpr (KnownRegArgsCpuCall<0x80331204u>(&func_80331204)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80331204_D71C = func_80331204_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80331204_D71C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80331204u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80263D18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80263F3C;
    }
}

loc_80263D1C:
{
    r0 = 71;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263D28:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r29));
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r15 + 620));
    ctx->lr = 0x80263D38u;
    if constexpr (KnownRegArgsCpuCall<0x802794F4u>(&func_802794F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802794F4_DB80 = func_802794F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802794F4_DB80);
        r4 = static_cast<uint32_t>(regargs_result_802794F4_DB80 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802794F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r15 + 9));
}

loc_80263D40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80263D5C;
    }
}

loc_80263D44:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    goto loc_80263D6C;
}

loc_80263D5C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r30_addr_1 = (r30 + r0);
    r0 = MemoryInline::FlatRead16(r30_addr_1);
}

loc_80263D6C:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263D7C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r29));
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r15 + 620));
    ctx->lr = 0x80263D8Cu;
    if constexpr (KnownRegArgsCpuCall<0x802794F4u>(&func_802794F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802794F4_E4D4 = func_802794F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802794F4_E4D4);
        r4 = static_cast<uint32_t>(regargs_result_802794F4_E4D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802794F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r15 + 9));
}

loc_80263D94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80263DB0;
    }
}

loc_80263D98:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & -2);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_19 & -2);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    goto loc_80263DC0;
}

loc_80263DB0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_21 & -2);
    r31_addr_1 = (r31 + r0);
    r0 = MemoryInline::FlatRead16(r31_addr_1);
}

loc_80263DC0:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263DD0:
{
    r0 = MemoryInline::FlatRead8((r15 + 1480));
}

loc_80263DD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80263E1C;
    }
}

loc_80263DDC:
{
    r0 = 11;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r21 + 2));
}

loc_80263DEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(250))) {
        goto loc_80263E00;
    }
}

loc_80263DF0:
{
    r3 = r15;
    r4 = 0;
    // inline leaf 0x80274640 (18 guest instruction(s))
}

loc_inl9_0x80274640:
{
    r3 = MemoryInline::FlatRead8((r3 + 1480));
}

loc_inl9_0x80274648:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x80274654;
    }
}

loc_inl9_0x8027464C:
{
    r3 = 0;
    goto loc_inl9_cont_80274640;
}

loc_inl9_0x80274654:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl9_0x8027465C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x80274674;
    }
}

loc_inl9_0x80274660:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + 26608);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_2);
    goto loc_inl9_cont_80274640;
}

loc_inl9_0x80274674:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + 26636);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_3);
}

loc_inl9_cont_80274640:
{
    // end of inlined leaf 0x80274640
    goto loc_80263E0C;
}

loc_80263E00:
{
    r3 = r15;
    r4 = 1;
    // inline leaf 0x80274640 (18 guest instruction(s))
}

loc_inl10_0x80274640:
{
    r3 = MemoryInline::FlatRead8((r3 + 1480));
}

loc_inl10_0x80274648:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl10_0x80274654;
    }
}

loc_inl10_0x8027464C:
{
    r3 = 0;
    goto loc_inl10_cont_80274640;
}

loc_inl10_0x80274654:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl10_0x8027465C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl10_0x80274674;
    }
}

loc_inl10_0x80274660:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + 26608);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_5);
    goto loc_inl10_cont_80274640;
}

loc_inl10_0x80274674:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + 26636);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_6);
}

loc_inl10_cont_80274640:
{
    // end of inlined leaf 0x80274640
}

loc_80263E0C:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r3));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263E1C:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_80263F3C;
}

loc_80263E24:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15520));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    goto loc_80263E38;
}

loc_80263E30:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15512));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
}

loc_80263E38:
{
}

loc_80263E3C:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_80263E48;
    }
}

loc_80263E40:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_80263F3C;
}

loc_80263E48:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r14));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r24 + 250));
    r0 = (r3 + -5);
}

loc_80263E60:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80263EA4;
    }
}

loc_80263E64:
{
}

loc_80263E68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_80263E80;
    }
}

loc_80263E6C:
{
}

loc_80263E70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(7))) {
        goto loc_80263EC8;
    }
}

loc_80263E74:
{
}

loc_80263E78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_80263EFC;
    }
}

loc_80263E7C:
{
    goto loc_80263F3C;
}

loc_80263E80:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80263E88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80263E98;
    }
}

loc_80263E8C:
{
    r0 = 2;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263E98:
{
    r0 = 6;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263EA4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80263EAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80263EBC;
    }
}

loc_80263EB0:
{
    r0 = 3;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263EBC:
{
    r0 = 7;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263EC8:
{
    r0 = MemoryInline::FlatRead8((r15 + 1413));
}

loc_80263ED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80263EF4;
    }
}

loc_80263ED4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80263EDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80263EE8;
    }
}

loc_80263EE0:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r29));
    goto loc_80263F3C;
}

loc_80263EE8:
{
    r0 = 8;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263EF4:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_80263F3C;
}

loc_80263EFC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_80263F04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80263F14;
    }
}

loc_80263F08:
{
    r0 = 5;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    goto loc_80263F3C;
}

loc_80263F14:
{
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r14));
    goto loc_80263F3C;
}

loc_80263F1C:
{
    MemoryInline::FlatWrite8((r22 + 802), static_cast<uint8_t>(r25));
    goto loc_8026423C;
}

loc_80263F24:
{
    r0 = (r3 & 127);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r21 + 2));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r21 + 4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
}

loc_80263F3C:
{
    SetCRFloatResident(cr, 0, f24.d, f31.d);
}

loc_80263F40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80263F98;
    }
}

loc_80263F44:
{
}

loc_80263F48:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80263F6C;
    }
}

loc_80263F4C:
{
    r0 = MemoryInline::FlatRead8((r22 + 802));
}

loc_80263F54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263F58:
{
    r3 = r15;
    ctx->lr = 0x80263F60u;
    if constexpr (KnownRegArgsCpuCall<0x8026A3A0u>(&func_8026A3A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8026A3A0_10CD2 = func_8026A3A0_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A3A0_10CD2);
        r4 = static_cast<uint32_t>(regargs_result_8026A3A0_10CD2 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->gpr[9] = r9;
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
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A3A0u>(ctx);
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80263F64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263FC0;
    }
}

loc_80263F68:
{
    goto loc_8026423C;
}

loc_80263F6C:
{
    r0 = MemoryInline::FlatRead8((r22 + 802));
}

loc_80263F74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263F78:
{
    r3 = r15;
    r4 = 6;
    f1.d = f25.d;
    f2.d = f24.d;
    ctx->lr = 0x80263F8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026A378u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80263F90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263FC0;
    }
}

loc_80263F94:
{
    goto loc_8026423C;
}

loc_80263F98:
{
    r0 = MemoryInline::FlatRead8((r22 + 802));
}

loc_80263FA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263FA4:
{
    r3 = r15;
    r4 = 7;
    f1.d = f25.d;
    f2.d = f24.d;
    ctx->lr = 0x80263FB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026A378u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80263FBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8026423C;
    }
}

loc_80263FC0:
{
}

loc_80263FC4:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_80264234;
    }
}

loc_80263FC8:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80263FD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80263FF8;
    }
}

loc_80263FD4:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_80263FDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80263FF8;
    }
}

loc_80263FE0:
{
    r3 = r15;
    r4 = 0;
    r5 = 10;
    r6 = 0;
    ctx->lr = 0x80263FF4u;
    if constexpr (KnownRegArgsCpuCall<0x8027621Cu>(&func_8027621C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8027621C_124C0 = func_8027621C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8027621C_124C0);
        r4 = static_cast<uint32_t>(regargs_result_8027621C_124C0 >> 32);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->gpr[9] = r9;
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027621Cu>(ctx);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80264234;
}

loc_80263FF8:
{
}

loc_80263FFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80264118;
    }
}

loc_80264000:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_80264008:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(39))) {
        goto loc_80264118;
    }
}

loc_8026400C:
{
    r3 = 0x805C0000u;
    r3 = (r3 + 25040);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80264080u:
        goto loc_80264080;
        break;
    case 0x80264024u:
        goto loc_80264024;
        break;
    case 0x80264118u:
        goto loc_80264118;
        break;
    case 0x802640A4u:
        goto loc_802640A4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
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
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80264024:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_1381D = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_1381D);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_1381D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80264038:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80264118;
    }
}

loc_8026403C:
{
    r3 = r15;
    ctx->lr = 0x80264044u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026A40C_13C7B = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_13C7B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead32((r15 + 88));
    r3 = MemoryInline::FlatRead32((r15 + 168));
    r0 = (r3 + 65536);
    r0 = (r0 - r4);
    r3 = (r0 & 65535);
    r0 = (r3 + -24576);
}

loc_80264060:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16384))) {
        goto loc_80264118;
    }
}

loc_80264064:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80264118;
}

loc_80264080:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_141A9 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_141A9);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_141A9 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80264094:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80264118;
    }
}

loc_80264098:
{
    r3 = r15;
    ctx->lr = 0x802640A0u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026A40C_14607 = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_14607;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    goto loc_80264118;
}

loc_802640A4:
{
    r3 = r15;
    // inline leaf 0x80277144 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80277144
}

loc_802640B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80264118;
    }
}

loc_802640B4:
{
    r0 = MemoryInline::FlatRead8((r15 + 24));
}

loc_802640BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80264118;
    }
}

loc_802640C0:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_14AAB = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_14AAB);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_14AAB >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802640D4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80264118;
    }
}

loc_802640D8:
{
    r3 = r15;
    ctx->lr = 0x802640E0u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026A40C_14F09 = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_14F09;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead32((r15 + 88));
    r3 = MemoryInline::FlatRead32((r15 + 168));
    r0 = (r3 + 65536);
    r0 = (r0 - r4);
    r3 = (r0 & 65535);
    r0 = (r3 + -24576);
}

loc_802640FC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16384))) {
        goto loc_80264118;
    }
}

loc_80264100:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 23;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
}

loc_80264118:
{
    r0 = (r19 & 65535);
}

loc_80264120:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80264134;
    }
}

loc_80264124:
{
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite32((r15 + 168), r0);
    MemoryInline::FlatWrite16((r15 + 774), static_cast<uint16_t>(r19));
    goto loc_80264158;
}

loc_80264134:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8026413C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80264158;
    }
}

loc_80264140:
{
    r3 = MemoryInline::FlatRead16((r1 + 16));
    r0 = (r3 + -167);
}

loc_8026414C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80264158;
    }
}

loc_80264150:
{
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite32((r15 + 168), r0);
}

loc_80264158:
{
    r0 = MemoryInline::FlatRead16((r21 + 6));
    r0 = (r0 & 16384);
}

loc_80264164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026418C;
    }
}

loc_80264168:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_15856 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_15856);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_15856 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026417C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802641D4;
    }
}

loc_80264180:
{
    r3 = r15;
    ctx->lr = 0x80264188u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026A40C_15CB4 = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_15CB4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    goto loc_802641D4;
}

loc_8026418C:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80264194:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802641D4;
    }
}

loc_80264198:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_802641A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802641B4;
    }
}

loc_802641A4:
{
}

loc_802641A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802641B4;
    }
}

loc_802641AC:
{
}

loc_802641B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_802641D4;
    }
}

loc_802641B4:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_16220 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_16220);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_16220 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802641C8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802641D4;
    }
}

loc_802641CC:
{
    r3 = r15;
    ctx->lr = 0x802641D4u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026A40C_1667E = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_1667E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_802641D4:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
}

loc_802641DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802641EC;
    }
}

loc_802641E0:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_802641E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(20))) {
        goto loc_80264200;
    }
}

loc_802641EC:
{
}

loc_802641F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80264208;
    }
}

loc_802641F4:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_802641FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(158))) {
        goto loc_80264208;
    }
}

loc_80264200:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r15 + 1623), static_cast<uint8_t>(r0));
}

loc_80264208:
{
    r0 = MemoryInline::FlatRead16((r1 + 14));
    r0 = (r0 & 32);
}

loc_80264214:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80264220;
    }
}

loc_80264218:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWrite16((r15 + 182), static_cast<uint16_t>(r0));
}

loc_80264220:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r1 + 8));
    r5 = MemoryInline::FlatRead16((r1 + 16));
    r6 = MemoryInline::FlatRead16((r1 + 14));
    ctx->lr = 0x80264234u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80275754u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80264234:
{
    r3 = 1;
    goto loc_80264254;
}

loc_8026423C:
{
    r17 = (r17 + 1);
    r21 = (r21 + 22);
    r0 = MemoryInline::FlatRead8(r21);
}

loc_8026424C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80262AC8;
    }
}

loc_80264250:
{
    r3 = 0;
}

loc_80264254:
{
    r0 = 296;
    addr_psqx_80264258_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264258_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 160), 0, 152u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 128u, (r1 + 288));
    r0 = 280;
    addr_psqx_80264264_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264264_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 112u, (r1 + 272));
    r0 = 264;
    addr_psqx_80264270_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264270_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 96u, (r1 + 256));
    r0 = 248;
    addr_psqx_8026427C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8026427C_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 80u, (r1 + 240));
    r0 = 232;
    addr_psqx_80264288_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264288_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 64u, (r1 + 224));
    r0 = 216;
    addr_psqx_80264294_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264294_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 48u, (r1 + 208));
    r0 = 200;
    addr_psqx_802642A0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802642A0_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 32u, (r1 + 192));
    r0 = 184;
    addr_psqx_802642AC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802642AC_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r1 + 176));
    r0 = 168;
    addr_psqx_802642B8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802642B8_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 0u, (r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::ReadResolved32(guest_range_2, 148u, (r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80262AC8:
{
    if constexpr (KnownRegArgsCpuCall<0x80262AC8u>(&func_80262AC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
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
        ctx->xer = xer;
        const auto regargs_result_80262AC8_19392 = func_80262AC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80262AC8_19392);
        r4 = static_cast<uint32_t>(regargs_result_80262AC8_19392 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
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
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80262AC8u>(ctx);
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
        r11 = ctx->gpr[11];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80262F3C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80262F3C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80262F3C func_80262F3C preserves=false fpr_mask=0xFF800000
