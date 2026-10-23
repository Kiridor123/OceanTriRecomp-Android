#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80474750_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfdx_80474788_loc_0 = 0;
    uint32_t addr_lfdx_804748BC_loc_0 = 0;
    uint32_t addr_lfdx_804748D8_loc_0 = 0;
    uint32_t addr_lfdx_804748E8_loc_0 = 0;
    uint32_t addr_lfdx_804748F4_loc_0 = 0;
    uint32_t addr_lfdx_80474910_loc_0 = 0;
    uint32_t addr_lfdx_80474938_loc_0 = 0;
    uint32_t addr_lfdx_80474948_loc_0 = 0;
    uint32_t addr_lfdx_80474960_loc_0 = 0;
    uint32_t addr_lfdx_80474AA8_loc_0 = 0;
    uint32_t addr_lfdx_80474AC4_loc_0 = 0;
    uint32_t addr_lfdx_80474AD4_loc_0 = 0;
    uint32_t addr_lfdx_80474AE0_loc_0 = 0;
    uint32_t addr_lfdx_80474AF8_loc_0 = 0;
    uint32_t addr_lfdx_80474B1C_loc_0 = 0;
    uint32_t addr_lfdx_80474B34_loc_0 = 0;
    uint32_t addr_lfdx_80474B4C_loc_0 = 0;
    uint32_t addr_lfdx_80474C1C_loc_0 = 0;
    uint32_t addr_lfdx_80474C24_loc_0 = 0;
    uint32_t addr_lfdx_80474C3C_loc_0 = 0;
    uint32_t addr_lfdx_80474C40_loc_0 = 0;
    uint32_t addr_lfdx_80474C58_loc_0 = 0;
    uint32_t addr_lfdx_80474D54_loc_0 = 0;
    uint32_t addr_lfdx_80474D8C_loc_0 = 0;
    uint32_t addr_lfdx_80474DB0_loc_0 = 0;
    uint32_t addr_lfdx_80474DBC_loc_0 = 0;
    uint32_t addr_lfdx_80474DC8_loc_0 = 0;
    uint32_t addr_lfdx_80474DD4_loc_0 = 0;
    uint32_t addr_lfdx_80474DE0_loc_0 = 0;
    uint32_t addr_lfdx_80474DEC_loc_0 = 0;
    uint32_t addr_stfdx_80474C2C_loc_0 = 0;
    uint32_t addr_stfdx_80474C38_loc_0 = 0;
    uint32_t addr_stfdx_80474C44_loc_0 = 0;
    uint32_t addr_stfdx_80474C48_loc_0 = 0;
    uint32_t addr_stfdx_80474C50_loc_0 = 0;
    uint32_t addr_stfdx_80474D7C_loc_0 = 0;
    uint32_t addr_stfdx_80474DAC_loc_0 = 0;
    uint32_t addr_stfdx_80474DB8_loc_0 = 0;
    uint32_t addr_stfdx_80474DC4_loc_0 = 0;
    uint32_t addr_stfdx_80474DD0_loc_0 = 0;
    uint32_t addr_stfdx_80474DDC_loc_0 = 0;
    uint32_t addr_stfdx_80474DE8_loc_0 = 0;
    uint32_t addr_stfdx_80474DF4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_10 = 0;
    uint32_t r19_rot_11 = 0;
    uint32_t r19_rot_12 = 0;
    uint32_t r19_rot_13 = 0;
    uint32_t r19_rot_14 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r19_rot_4 = 0;
    uint32_t r19_rot_5 = 0;
    uint32_t r19_rot_6 = 0;
    uint32_t r19_rot_7 = 0;
    uint32_t r19_rot_8 = 0;
    uint32_t r19_rot_9 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_10 = 0;
    uint32_t r20_rot_11 = 0;
    uint32_t r20_rot_12 = 0;
    uint32_t r20_rot_13 = 0;
    uint32_t r20_rot_14 = 0;
    uint32_t r20_rot_15 = 0;
    uint32_t r20_rot_16 = 0;
    uint32_t r20_rot_17 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r20_rot_4 = 0;
    uint32_t r20_rot_5 = 0;
    uint32_t r20_rot_6 = 0;
    uint32_t r20_rot_7 = 0;
    uint32_t r20_rot_8 = 0;
    uint32_t r20_rot_9 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_10 = 0;
    uint32_t r21_rot_11 = 0;
    uint32_t r21_rot_12 = 0;
    uint32_t r21_rot_13 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r21_rot_5 = 0;
    uint32_t r21_rot_6 = 0;
    uint32_t r21_rot_7 = 0;
    uint32_t r21_rot_8 = 0;
    uint32_t r21_rot_9 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_10 = 0;
    uint32_t r22_rot_11 = 0;
    uint32_t r22_rot_12 = 0;
    uint32_t r22_rot_13 = 0;
    uint32_t r22_rot_14 = 0;
    uint32_t r22_rot_15 = 0;
    uint32_t r22_rot_16 = 0;
    uint32_t r22_rot_17 = 0;
    uint32_t r22_rot_18 = 0;
    uint32_t r22_rot_19 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r22_rot_4 = 0;
    uint32_t r22_rot_5 = 0;
    uint32_t r22_rot_6 = 0;
    uint32_t r22_rot_7 = 0;
    uint32_t r22_rot_8 = 0;
    uint32_t r22_rot_9 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r24_rot_5 = 0;
    uint32_t r24_rot_6 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r25_rot_6 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
    uint32_t r27_rot_6 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
    uint32_t r28_rot_6 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r29_rot_5 = 0;
    uint32_t r29_rot_6 = 0;
    uint32_t r29_rot_7 = 0;
    uint32_t r29_rot_8 = 0;
    uint32_t r29_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
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
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80474750;

loc_80474750:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r0 = 2;
    r5 = (r1 + 16);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -2864), 0, 128u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -2864));
    r7 = 3;
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -2832));
    ctr = r0;
}

loc_8047477C:
{
    r7 = (r7 + 1);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -2864));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    addr_lfdx_80474788_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474788_loc_0);
    r6 = (r3 + r0);
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80474798:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804747A0;
    }
}

loc_8047479C:
{
    f3.d = f0.d;
}

loc_804747A0:
{
    f0.d = MemoryInline::FlatReadFloat64((r6 + 8));
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_804747AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804747B4;
    }
}

loc_804747B0:
{
    f3.d = f0.d;
}

loc_804747B4:
{
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_804747B8:
{
    r7 = (r7 + 2);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804747C8;
    }
}

loc_804747C0:
{
    r3 = 1;
    goto loc_80474EA8;
}

loc_804747C8:
{
    f0.d = (f1.d / f3.d);
    MemoryInline::FlatWriteFloat64(r5, f0.d);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8047477C;
    }
}

loc_804747D8:
{
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -2864));
    r11 = (r4 + 4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -2832));
    r10 = (r1 + 16);
    r6 = (r1 + 8);
    r26 = 1;
    r5 = 8;
    r9 = 3;
    r4 = 32;
    r7 = 0x80000000u;
}

loc_80474800:
{
    r29 = (r3 + r5);
    r28 = 3;
    r8 = (r29 + 24);
    r21 = 24;
    r27 = 1;
    goto loc_804749E0;
}

loc_80474818:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r27), static_cast<int32_t>(1));
}

loc_8047481C:
{
    f8.d = MemoryInline::FlatReadFloat64(r8);
    r25 = (r26 + 3);
    r24 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804749CC;
    }
}

loc_8047482C:
{
    r0 = (r27 + -1);
    r19 = (r27 + -8);
}

loc_80474838:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80474988;
    }
}

loc_8047483C:
{
    r12 = 0;
    r20 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80474858;
    }
}

loc_80474848:
{
    r0 = (r7 + -2);
}

loc_80474850:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(r0))) {
        goto loc_80474858;
    }
}

loc_80474854:
{
    r20 = 1;
}

loc_80474858:
{
}

loc_8047485C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80474894;
    }
}

loc_80474860:
{
    r22 = (r27 & -2147483648);
    r20 = 1;
    r0 = (r22 + -2147483648);
}

loc_80474870:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80474888;
    }
}

loc_80474874:
{
    r0 = (r27 + -1);
    r0 = (r0 & -2147483648);
}

loc_80474880:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(r0))) {
        goto loc_80474888;
    }
}

loc_80474884:
{
    r20 = 0;
}

loc_80474888:
{
}

loc_8047488C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80474894;
    }
}

loc_80474890:
{
    r12 = 1;
}

loc_80474894:
{
}

loc_80474898:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80474988;
    }
}

loc_8047489C:
{
    r0 = (r19 + 6);
    r12 = (r3 + r21);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 536870911);
    r22_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(3));
    r22 = (r22_rot_3 & -8);
    ctr = r0;
}

loc_804748B4:
{
    r12 = (r12 + 8);
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(1))) {
        goto loc_80474988;
    }
}

loc_804748BC:
{
    addr_lfdx_804748BC_loc_0 = (r3 + r22);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_804748BC_loc_0);
    r0 = (r25 + 3);
    guest_range_3 = MemoryInline::ResolveRangeHost(r12, 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, r12);
    r20_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r20 = (r20_rot_4 & -8);
    r19 = (r25 + 6);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r12 + 16));
    f7.d = (f3.d * f0.d);
    addr_lfdx_804748D8_loc_0 = (r3 + r20);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_804748D8_loc_0);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 8u, (r12 + 8));
    r19_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(3));
    r19 = (r19_rot_4 & -8);
    r0 = (r25 + 9);
    addr_lfdx_804748E8_loc_0 = (r3 + r19);
    f5.d = MemoryInline::FlatReadFloat64(addr_lfdx_804748E8_loc_0);
    f6.d = (f3.d * f0.d);
    r20_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r20 = (r20_rot_5 & -8);
    addr_lfdx_804748F4_loc_0 = (r3 + r20);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_804748F4_loc_0);
    r0 = (r25 + 12);
    f8.d = (f8.d - f7.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 24u, (r12 + 24));
    f7.d = (f5.d * f4.d);
    r19_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r19 = (r19_rot_5 & -8);
    r0 = (r25 + 15);
    addr_lfdx_80474910_loc_0 = (r3 + r19);
    f5.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474910_loc_0);
    f8.d = (f8.d - f6.d);
    r20_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r20 = (r20_rot_6 & -8);
    f6.d = (f3.d * f0.d);
    r0 = (r25 + 18);
    r19_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r19 = (r19_rot_6 & -8);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r12 + 32));
    f8.d = (f8.d - f7.d);
    r0 = (r25 + 21);
    f7.d = (f5.d * f4.d);
    addr_lfdx_80474938_loc_0 = (r3 + r20);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474938_loc_0);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 40u, (r12 + 40));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    f8.d = (f8.d - f6.d);
    addr_lfdx_80474948_loc_0 = (r3 + r19);
    f5.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474948_loc_0);
    f6.d = (f3.d * f0.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r12 + 48));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 56u, (r12 + 56));
    r25 = (r25 + 24);
    f8.d = (f8.d - f7.d);
    addr_lfdx_80474960_loc_0 = (r3 + r0);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474960_loc_0);
    f4.d = (f5.d * f4.d);
    r22 = (r22 + 192);
    r12 = (r12 + 64);
    r24 = (r24 + 8);
    f8.d = (f8.d - f6.d);
    f0.d = (f3.d * f0.d);
    f8.d = (f8.d - f4.d);
    f8.d = (f8.d - f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804748BC;
    }
}

loc_80474988:
{
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(3));
    r12 = (r12_rot_3 & -8);
    r20_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(3));
    r20 = (r20_rot_8 & -8);
    r19 = (r3 + r21);
    r0 = (r27 - r24);
    r19 = (r20 + r19);
    r12 = (r3 + r12);
    ctr = r0;
}

loc_804749A8:
{
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(r27))) {
        goto loc_804749CC;
    }
}

loc_804749AC:
{
    f3.d = MemoryInline::FlatReadFloat64(r12);
    r12 = (r12 + 24);
    f0.d = MemoryInline::FlatReadFloat64(r19);
    r19 = (r19 + 8);
    r24 = (r24 + 1);
    f0.d = (f3.d * f0.d);
    f8.d = (f8.d - f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804749AC;
    }
}

loc_804749CC:
{
    MemoryInline::FlatWriteFloat64(r8, f8.d);
    r8 = (r8 + 24);
    r28 = (r28 + 3);
    r21 = (r21 + 24);
    r27 = (r27 + 1);
}

loc_804749E0:
{
}

loc_804749E4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r26))) {
        goto loc_80474818;
    }
}

loc_804749E8:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r8 = (r8_rot_2 & -8);
    r31 = (r1 + 8);
    r0 = (r26 + -1);
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -2864));
    r27 = r26;
    r12 = (r29 + r8);
    r31 = (r31 + r5);
    r30 = (r26 & -2147483648);
    r0 = (r0 & -2147483648);
    goto loc_80474BF0;
}

loc_80474A10:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r26), static_cast<int32_t>(1));
}

loc_80474A14:
{
    f9.d = MemoryInline::FlatReadFloat64(r12);
    r25 = (r26 + 3);
    r24 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80474BB8;
    }
}

loc_80474A24:
{
    r19 = (r26 + -1);
    r20 = (r26 + -8);
}

loc_80474A30:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(8))) {
        goto loc_80474B74;
    }
}

loc_80474A34:
{
    r21 = 0;
    r22 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80474A50;
    }
}

loc_80474A40:
{
    r19 = (r7 + -2);
}

loc_80474A48:
{
    if ((static_cast<int32_t>(r26) > static_cast<int32_t>(r19))) {
        goto loc_80474A50;
    }
}

loc_80474A4C:
{
    r22 = 1;
}

loc_80474A50:
{
}

loc_80474A54:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80474A80;
    }
}

loc_80474A58:
{
    r19 = (r30 + -2147483648);
    r22 = 1;
}

loc_80474A64:
{
    if ((static_cast<uint32_t>(r19) != static_cast<uint32_t>(0))) {
        goto loc_80474A74;
    }
}

loc_80474A68:
{
}

loc_80474A6C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(r0))) {
        goto loc_80474A74;
    }
}

loc_80474A70:
{
    r22 = 0;
}

loc_80474A74:
{
}

loc_80474A78:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80474A80;
    }
}

loc_80474A7C:
{
    r21 = 1;
}

loc_80474A80:
{
}

loc_80474A84:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80474B74;
    }
}

loc_80474A88:
{
    r22 = (r20 + 6);
    r29 = (r3 + r8);
    r22_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(29));
    r22 = (r22_rot_7 & 536870911);
    r21_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(3));
    r21 = (r21_rot_3 & -8);
    ctr = r22;
}

loc_80474AA0:
{
    r29 = (r29 + 8);
    if ((static_cast<int32_t>(r20) <= static_cast<int32_t>(1))) {
        goto loc_80474B74;
    }
}

loc_80474AA8:
{
    addr_lfdx_80474AA8_loc_0 = (r3 + r21);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474AA8_loc_0);
    r19 = (r25 + 3);
    guest_range_4 = MemoryInline::ResolveRangeHost(r29, 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, r29);
    r22_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(3));
    r22 = (r22_rot_9 & -8);
    r20 = (r25 + 6);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r29 + 16));
    f7.d = (f3.d * f0.d);
    addr_lfdx_80474AC4_loc_0 = (r3 + r22);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474AC4_loc_0);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 8u, (r29 + 8));
    r20_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(3));
    r20 = (r20_rot_12 & -8);
    r19 = (r25 + 9);
    addr_lfdx_80474AD4_loc_0 = (r3 + r20);
    f5.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474AD4_loc_0);
    f6.d = (f3.d * f0.d);
    r22_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(3));
    r22 = (r22_rot_10 & -8);
    addr_lfdx_80474AE0_loc_0 = (r3 + r22);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474AE0_loc_0);
    r19 = (r25 + 12);
    f9.d = (f9.d - f7.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 24u, (r29 + 24));
    f7.d = (f5.d * f4.d);
    r20_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(3));
    r20 = (r20_rot_13 & -8);
    addr_lfdx_80474AF8_loc_0 = (r3 + r20);
    f5.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474AF8_loc_0);
    r19 = (r25 + 15);
    f9.d = (f9.d - f6.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r29 + 32));
    f6.d = (f3.d * f0.d);
    r19_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(3));
    r19 = (r19_rot_11 & -8);
    r20 = (r25 + 18);
    r22 = (r25 + 21);
    f9.d = (f9.d - f7.d);
    addr_lfdx_80474B1C_loc_0 = (r3 + r19);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474B1C_loc_0);
    f7.d = (f5.d * f4.d);
    r20_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(3));
    r20 = (r20_rot_14 & -8);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 40u, (r29 + 40));
    r22_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(3));
    r22 = (r22_rot_11 & -8);
    f9.d = (f9.d - f6.d);
    addr_lfdx_80474B34_loc_0 = (r3 + r20);
    f5.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474B34_loc_0);
    f6.d = (f3.d * f0.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r29 + 48));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 56u, (r29 + 56));
    r25 = (r25 + 24);
    f9.d = (f9.d - f7.d);
    addr_lfdx_80474B4C_loc_0 = (r3 + r22);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474B4C_loc_0);
    f4.d = (f5.d * f4.d);
    r21 = (r21 + 192);
    r29 = (r29 + 64);
    r24 = (r24 + 8);
    f9.d = (f9.d - f6.d);
    f0.d = (f3.d * f0.d);
    f9.d = (f9.d - f4.d);
    f9.d = (f9.d - f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80474AA8;
    }
}

loc_80474B74:
{
    r21_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(3));
    r21 = (r21_rot_5 & -8);
    r29_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(3));
    r29 = (r29_rot_3 & -8);
    r22 = (r3 + r8);
    r25 = (r26 - r24);
    r19 = (r29 + r22);
    r20 = (r3 + r21);
    ctr = r25;
}

loc_80474B94:
{
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(r26))) {
        goto loc_80474BB8;
    }
}

loc_80474B98:
{
    f3.d = MemoryInline::FlatReadFloat64(r20);
    r20 = (r20 + 24);
    f0.d = MemoryInline::FlatReadFloat64(r19);
    r19 = (r19 + 8);
    r24 = (r24 + 1);
    f0.d = (f3.d * f0.d);
    f9.d = (f9.d - f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80474B98;
    }
}

loc_80474BB8:
{
    MemoryInline::FlatWriteFloat64(r12, f9.d);
    f3.d = std::fabs(f9.d);
    f0.d = MemoryInline::FlatReadFloat64(r31);
    f0.d = (f0.d * f3.d);
    SetCRFloatResident(cr, 0, f0.d, f8.d);
}

loc_80474BCC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80474BDC;
    }
}

loc_80474BD4:
{
    f8.d = f0.d;
    r23 = r27;
}

loc_80474BDC:
{
    r12 = (r12 + 24);
    r28 = (r28 + 3);
    r8 = (r8 + 24);
    r31 = (r31 + 8);
    r27 = (r27 + 1);
}

loc_80474BF0:
{
}

loc_80474BF4:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(2))) {
        goto loc_80474A10;
    }
}

loc_80474BF8:
{
}

loc_80474BFC:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(r23))) {
        goto loc_80474C54;
    }
}

loc_80474C00:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r8 = (r9 + 1);
    r19 = (r0 - r23);
    r12 = (r19 + 1);
    r21_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r21 = (r21_rot_7 & -8);
    r22_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r22 = (r22_rot_14 & -8);
    r8 = (r19 + 2);
    addr_lfdx_80474C1C_loc_0 = (r3 + r22);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474C1C_loc_0);
    r0 = (r9 + 2);
    addr_lfdx_80474C24_loc_0 = (r3 + r21);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474C24_loc_0);
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r12 = (r12_rot_5 & -8);
    addr_stfdx_80474C2C_loc_0 = (r3 + r22);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474C2C_loc_0, f0.d);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r8 = (r8_rot_3 & -8);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r0 = (r0_rot_11 & -8);
    addr_stfdx_80474C38_loc_0 = (r3 + r21);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474C38_loc_0, f3.d);
    addr_lfdx_80474C3C_loc_0 = (r3 + r12);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474C3C_loc_0);
    addr_lfdx_80474C40_loc_0 = (r3 + r8);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474C40_loc_0);
    addr_stfdx_80474C44_loc_0 = (r3 + r12);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474C44_loc_0, f0.d);
    addr_stfdx_80474C48_loc_0 = (r3 + r8);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474C48_loc_0, f3.d);
    f0.d = MemoryInline::FlatReadFloat64(r10);
    addr_stfdx_80474C50_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474C50_loc_0, f0.d);
}

loc_80474C54:
{
    MemoryInline::FlatWrite32(r11, r23);
    addr_lfdx_80474C58_loc_0 = (r3 + r4);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474C58_loc_0);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80474C60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80474C6C;
    }
}

loc_80474C64:
{
    r3 = 1;
    goto loc_80474EA8;
}

loc_80474C6C:
{
}

loc_80474C70:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(2))) {
        goto loc_80474E2C;
    }
}

loc_80474C74:
{
    f3.d = (f1.d / f0.d);
    r8 = (r26 + 1);
    r12 = (r26 + r9);
}

loc_80474C84:
{
    r12 = (r12 + 3);
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(2))) {
        goto loc_80474E2C;
    }
}

loc_80474C8C:
{
    r24 = (2 - r8);
    r25 = (r24 + 1);
}

loc_80474C98:
{
    if ((static_cast<int32_t>(r25) <= static_cast<int32_t>(8))) {
        goto loc_80474DFC;
    }
}

loc_80474C9C:
{
}

loc_80474CA0:
{
    r19 = 0;
    r20 = 0;
    r22 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(3))) {
        goto loc_80474CB8;
    }
}

loc_80474CB4:
{
    r0 = 1;
}

loc_80474CB8:
{
}

loc_80474CBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80474CD4;
    }
}

loc_80474CC0:
{
    r21 = (r26 + 1);
    r0 = (r21 + -2147483648);
}

loc_80474CCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80474CD4;
    }
}

loc_80474CD0:
{
    r22 = 1;
}

loc_80474CD4:
{
}

loc_80474CD8:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80474D08;
    }
}

loc_80474CDC:
{
    r0 = (r26 + 1);
    r21 = 1;
    r0 = (0 - r0);
    r0 = (r0 & -2147483648);
}

loc_80474CEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80474CFC;
    }
}

loc_80474CF0:
{
    r0 = (r24 & -2147483648);
}

loc_80474CF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80474CFC;
    }
}

loc_80474CF8:
{
    r21 = 0;
}

loc_80474CFC:
{
}

loc_80474D00:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80474D08;
    }
}

loc_80474D04:
{
    r20 = 1;
}

loc_80474D08:
{
}

loc_80474D0C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80474D34;
    }
}

loc_80474D10:
{
    r0 = (r24 & -2147483648);
}

loc_80474D14:
{
    r20 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80474D28;
    }
}

loc_80474D1C:
{
    r0 = (r25 & -2147483648);
}

loc_80474D20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80474D28;
    }
}

loc_80474D24:
{
    r20 = 0;
}

loc_80474D28:
{
}

loc_80474D2C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80474D34;
    }
}

loc_80474D30:
{
    r19 = 1;
}

loc_80474D34:
{
}

loc_80474D38:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_80474DFC;
    }
}

loc_80474D3C:
{
    r0 = (2 - r8);
    r22_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r22 = (r22_rot_16 & -8);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 536870911);
    ctr = r0;
}

loc_80474D50:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(-6))) {
        goto loc_80474DFC;
    }
}

loc_80474D54:
{
    addr_lfdx_80474D54_loc_0 = (r3 + r22);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474D54_loc_0);
    r29 = (r12 + 3);
    r28 = (r12 + 6);
    r27 = (r12 + 9);
    f0.d = (f0.d * f3.d);
    r25 = (r12 + 12);
    r24 = (r12 + 15);
    r21 = (r12 + 18);
    r0 = (r12 + 21);
    r29_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r29 = (r29_rot_6 & -8);
    addr_stfdx_80474D7C_loc_0 = (r3 + r22);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474D7C_loc_0, f0.d);
    r28_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r28 = (r28_rot_3 & -8);
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(3));
    r27 = (r27_rot_3 & -8);
    r25_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(3));
    r25 = (r25_rot_3 & -8);
    addr_lfdx_80474D8C_loc_0 = (r3 + r29);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474D8C_loc_0);
    r24_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(3));
    r24 = (r24_rot_3 & -8);
    r21_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(3));
    r21 = (r21_rot_10 & -8);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_15 & -8);
    f0.d = (f0.d * f3.d);
    r12 = (r12 + 24);
    r22 = (r22 + 192);
    r8 = (r8 + 8);
    addr_stfdx_80474DAC_loc_0 = (r3 + r29);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474DAC_loc_0, f0.d);
    addr_lfdx_80474DB0_loc_0 = (r3 + r28);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474DB0_loc_0);
    f0.d = (f0.d * f3.d);
    addr_stfdx_80474DB8_loc_0 = (r3 + r28);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474DB8_loc_0, f0.d);
    addr_lfdx_80474DBC_loc_0 = (r3 + r27);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474DBC_loc_0);
    f0.d = (f0.d * f3.d);
    addr_stfdx_80474DC4_loc_0 = (r3 + r27);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474DC4_loc_0, f0.d);
    addr_lfdx_80474DC8_loc_0 = (r3 + r25);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474DC8_loc_0);
    f0.d = (f0.d * f3.d);
    addr_stfdx_80474DD0_loc_0 = (r3 + r25);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474DD0_loc_0, f0.d);
    addr_lfdx_80474DD4_loc_0 = (r3 + r24);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474DD4_loc_0);
    f0.d = (f0.d * f3.d);
    addr_stfdx_80474DDC_loc_0 = (r3 + r24);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474DDC_loc_0, f0.d);
    addr_lfdx_80474DE0_loc_0 = (r3 + r21);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474DE0_loc_0);
    f0.d = (f0.d * f3.d);
    addr_stfdx_80474DE8_loc_0 = (r3 + r21);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474DE8_loc_0, f0.d);
    addr_lfdx_80474DEC_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474DEC_loc_0);
    f0.d = (f0.d * f3.d);
    addr_stfdx_80474DF4_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474DF4_loc_0, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80474D54;
    }
}

loc_80474DFC:
{
    r12_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r12 = (r12_rot_7 & -8);
    r0 = (3 - r8);
    r12 = (r3 + r12);
    ctr = r0;
}

loc_80474E10:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(2))) {
        goto loc_80474E2C;
    }
}

loc_80474E14:
{
    f0.d = MemoryInline::FlatReadFloat64(r12);
    r8 = (r8 + 1);
    f0.d = (f0.d * f3.d);
    MemoryInline::FlatWriteFloat64(r12, f0.d);
    r12 = (r12 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80474E14;
    }
}

loc_80474E2C:
{
    r26 = (r26 + 1);
    r10 = (r10 + 8);
}

loc_80474E38:
{
    r11 = (r11 + 4);
    r4 = (r4 + 32);
    r5 = (r5 + 8);
    r9 = (r9 + 3);
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(2))) {
        goto loc_80474800;
    }
}

loc_80474E4C:
{
    f0.d = MemoryInline::FlatReadFloat64((r3 + 32));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 112u, (r2 + -2752));
    f0.d = std::fabs(f0.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -2864));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80474E60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80474E68;
    }
}

loc_80474E64:
{
    f2.d = f0.d;
}

loc_80474E68:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80474E6C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80474E74;
    }
}

loc_80474E70:
{
    f1.d = f0.d;
}

loc_80474E74:
{
    f0.d = MemoryInline::FlatReadFloat64((r3 + 64));
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80474E80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80474E88;
    }
}

loc_80474E84:
{
    f2.d = f0.d;
}

loc_80474E88:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80474E8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80474E94;
    }
}

loc_80474E90:
{
    f1.d = f0.d;
}

loc_80474E94:
{
    f1.d = (f2.d / f1.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 120u, (r2 + -2744));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80474EA0:
{
    r3 = cr;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_80474EA8:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80474750(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80474750_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80474750 func_80474750 preserves=true fpr_mask=0x00000000
