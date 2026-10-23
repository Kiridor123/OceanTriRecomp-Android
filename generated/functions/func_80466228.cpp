#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046463C(CpuContext* ctx);
extern "C" uint64_t func_8046463C_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80468060(CpuContext* ctx);
extern "C" uint64_t func_80468060_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_80466228_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfdx_804663B4_loc_0 = 0;
    uint32_t addr_lfdx_804663CC_loc_0 = 0;
    uint32_t addr_lfdx_804663F0_loc_0 = 0;
    uint32_t addr_lfdx_804663FC_loc_0 = 0;
    uint32_t addr_lfdx_80466438_loc_0 = 0;
    uint32_t addr_lfdx_80466448_loc_0 = 0;
    uint32_t addr_lfdx_80466458_loc_0 = 0;
    uint32_t addr_lfdx_8046646C_loc_0 = 0;
    uint32_t addr_lfdx_804664BC_loc_0 = 0;
    uint32_t addr_lfdx_8046654C_loc_0 = 0;
    uint32_t addr_lfdx_80466C50_loc_0 = 0;
    uint32_t addr_lfdx_80466C68_loc_0 = 0;
    uint32_t addr_lfdx_80466C80_loc_0 = 0;
    uint32_t addr_lfdx_80466C98_loc_0 = 0;
    uint32_t addr_lfdx_80466CC8_loc_0 = 0;
    uint32_t addr_lfdx_80466CD8_loc_0 = 0;
    uint32_t addr_lfdx_80466CF0_loc_0 = 0;
    uint32_t addr_lfdx_80466D00_loc_0 = 0;
    uint32_t addr_lfdx_80466D50_loc_0 = 0;
    uint32_t addr_stfdx_804670E0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword10 = 0;
    uint32_t fctiwzword11 = 0;
    uint32_t fctiwzword12 = 0;
    uint32_t fctiwzword13 = 0;
    uint32_t fctiwzword14 = 0;
    uint32_t fctiwzword15 = 0;
    uint32_t fctiwzword16 = 0;
    uint32_t fctiwzword17 = 0;
    uint32_t fctiwzword18 = 0;
    uint32_t fctiwzword19 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword20 = 0;
    uint32_t fctiwzword21 = 0;
    uint32_t fctiwzword22 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
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
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_46 = 0;
    uint32_t r0_rot_47 = 0;
    uint32_t r0_rot_48 = 0;
    uint32_t r0_rot_49 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_50 = 0;
    uint32_t r0_rot_51 = 0;
    uint32_t r0_rot_52 = 0;
    uint32_t r0_rot_53 = 0;
    uint32_t r0_rot_54 = 0;
    uint32_t r0_rot_55 = 0;
    uint32_t r0_rot_56 = 0;
    uint32_t r0_rot_57 = 0;
    uint32_t r0_rot_58 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r14_rot_0 = 0;
    uint32_t r14_rot_1 = 0;
    uint32_t r14_rot_2 = 0;
    uint32_t r14_rot_3 = 0;
    uint32_t r14_rot_4 = 0;
    uint32_t r14_rot_5 = 0;
    uint32_t r14_rot_6 = 0;
    uint32_t r15_rot_0 = 0;
    uint32_t r15_rot_1 = 0;
    uint32_t r15_rot_2 = 0;
    uint32_t r15_rot_3 = 0;
    uint32_t r15_rot_4 = 0;
    uint32_t r15_rot_5 = 0;
    uint32_t r15_rot_6 = 0;
    uint32_t r15_rot_7 = 0;
    uint32_t r15_rot_8 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r18_rot_1 = 0;
    uint32_t r18_rot_2 = 0;
    uint32_t r18_rot_3 = 0;
    uint32_t r18_rot_4 = 0;
    uint32_t r18_rot_5 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r20_rot_4 = 0;
    uint32_t r20_rot_5 = 0;
    uint32_t r20_rot_6 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_10 = 0;
    uint32_t r29_addr_11 = 0;
    uint32_t r29_addr_12 = 0;
    uint32_t r29_addr_13 = 0;
    uint32_t r29_addr_14 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r29_addr_7 = 0;
    uint32_t r29_addr_8 = 0;
    uint32_t r29_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
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
    uint32_t r3_rot_35 = 0;
    uint32_t r3_rot_36 = 0;
    uint32_t r3_rot_37 = 0;
    uint32_t r3_rot_38 = 0;
    uint32_t r3_rot_39 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_40 = 0;
    uint32_t r3_rot_41 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_14 = 0;
    uint32_t r4_rot_15 = 0;
    uint32_t r4_rot_16 = 0;
    uint32_t r4_rot_17 = 0;
    uint32_t r4_rot_18 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword23 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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
    PPC_FPR f9 = ctx->fpr[9];
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

    goto loc_80466228;

loc_80466228:
{
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + -880), 0, 888u, false, true);
    MemoryInline::WriteResolved32(guest_range_9, 0u, (r1 + -880), r1);
    r1 = (r1 + -880);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_9, 884u, (r1 + 884), r0);
    r11 = (r1 + 880);
    // inline leaf 0x804573E0 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 0u, (r11 + -72), f23.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 8u, (r11 + -64), f24.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 16u, (r11 + -56), f25.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 24u, (r11 + -48), f26.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r11 + -40), f27.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r11 + -32), f28.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r11 + -24), f29.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 56u, (r11 + -16), f30.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r11 + -8), f31.d);
    // end of inlined leaf 0x804573E0
    r9 = 715849728;
    r12 = 1127219200;
    r0 = (r5 + -3);
    r10 = 0x80570000u;
    r9 = (r9 + -21845);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r11 = (r11_rot_0 & -4);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r10 = (r10 + 15136);
    r17 = r4;
    r10_addr_0 = (r10 + r11);
    r21 = MemoryInline::FlatRead32(r10_addr_0);
    stackword20 = r12;
    MemoryInline::WriteResolved32(guest_range_9, 576u, (r1 + 576), r12);
    r16 = r3;
    r0 = (static_cast<int32_t>(r0) >> 2);
    MemoryInline::WriteResolved32(guest_range_9, 584u, (r1 + 584), r12);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r22 = (r6 + -1);
    r10 = (r0 + r4);
    MemoryInline::WriteResolved32(guest_range_9, 8u, (r1 + 8), r7);
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(0))) {
        goto loc_80466290;
    }
}

loc_8046628C:
{
    r10 = 0;
}

loc_80466290:
{
    r0 = (r10 + 1);
    r9 = (r22 + r21);
    r6 = (r0 * 24);
    r7 = (r10 - r22);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -3240), 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -3184));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r19 = (r5 - r6);
    r0 = (r9 + 1);
    r4 = (r8 + r4);
    r5 = (r1 + 416);
    ctr = r0;
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(0))) {
        goto loc_804662F8;
    }
}

loc_804662C0:
{
}

loc_804662C4:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_804662D0;
    }
}

loc_804662C8:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -3240));
    goto loc_804662E4;
}

loc_804662D0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 ^ -2147483648);
    stackword23 = r0;
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword20), static_cast<uint32_t>(stackword23));
    f0.d = (f0.d - f1.d);
}

loc_804662E4:
{
    MemoryInline::FlatWriteFloat64(r5, f0.d);
    r5 = (r5 + 8);
    r4 = (r4 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804662C0;
    }
}

loc_804662F8:
{
    r0 = (r22 + 1);
    r5 = (r1 + 96);
    r25 = (r22 & -2147483648);
    r12 = (r1 + 416);
    r24 = (r0 & -2147483648);
    r9 = 0;
    r4 = 0x80000000u;
    goto loc_804664DC;
}

loc_80466318:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_8046631C:
{
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -3240));
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804664D0;
    }
}

loc_80466328:
{
    r0 = (r22 + 1);
    r14 = (r22 + -8);
}

loc_80466334:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8046648C;
    }
}

loc_80466338:
{
    r6 = 0;
    r11 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80466354;
    }
}

loc_80466344:
{
    r0 = (r4 + -2);
}

loc_8046634C:
{
    if ((static_cast<int32_t>(r22) > static_cast<int32_t>(r0))) {
        goto loc_80466354;
    }
}

loc_80466350:
{
    r11 = 1;
}

loc_80466354:
{
}

loc_80466358:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80466380;
    }
}

loc_8046635C:
{
}

loc_80466360:
{
    r0 = 1;
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80466374;
    }
}

loc_80466368:
{
}

loc_8046636C:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80466374;
    }
}

loc_80466370:
{
    r0 = 0;
}

loc_80466374:
{
}

loc_80466378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80466380;
    }
}

loc_8046637C:
{
    r6 = 1;
}

loc_80466380:
{
}

loc_80466384:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8046648C;
    }
}

loc_80466388:
{
    r11 = (r14 + 8);
    r6 = r16;
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r11 = (r11_rot_2 & 536870911);
    r0 = (r22 + r9);
    ctr = r11;
}

loc_804663A0:
{
    if ((static_cast<int32_t>(r14) < static_cast<int32_t>(0))) {
        goto loc_8046648C;
    }
}

loc_804663A4:
{
    r11 = (r0 - r7);
    r14 = (r7 + 1);
    r15_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r15 = (r15_rot_3 & -8);
    guest_range_10 = MemoryInline::ResolveRangeHost(r6, 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 0u, r6);
    addr_lfdx_804663B4_loc_0 = (r12 + r15);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804663B4_loc_0);
    r14 = (r0 - r14);
    r15_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(3));
    r15 = (r15_rot_4 & -8);
    r11 = (r7 + 2);
    f2.d = (f1.d * f0.d);
    r14 = (r0 - r11);
    addr_lfdx_804663CC_loc_0 = (r12 + r15);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804663CC_loc_0);
    r15_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(3));
    r15 = (r15_rot_5 & -8);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 8u, (r6 + 8));
    r11 = (r7 + 3);
    f3.d = (f1.d * f0.d);
    r14 = (r0 - r11);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 16u, (r6 + 16));
    r14_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(3));
    r14 = (r14_rot_3 & -8);
    f6.d = (f6.d + f2.d);
    addr_lfdx_804663F0_loc_0 = (r12 + r15);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804663F0_loc_0);
    f2.d = (f1.d * f0.d);
    r11 = (r7 + 4);
    addr_lfdx_804663FC_loc_0 = (r12 + r14);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804663FC_loc_0);
    r11 = (r0 - r11);
    f6.d = (f6.d + f3.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 24u, (r6 + 24));
    r18_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r18 = (r18_rot_3 & -8);
    f1.d = (f1.d * f0.d);
    r11 = (r7 + 5);
    r14 = (r7 + 6);
    f6.d = (f6.d + f2.d);
    r11 = (r0 - r11);
    r15_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r15 = (r15_rot_6 & -8);
    r11 = (r7 + 7);
    f6.d = (f6.d + f1.d);
    r14 = (r0 - r14);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 32u, (r6 + 32));
    addr_lfdx_80466438_loc_0 = (r12 + r18);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466438_loc_0);
    r11 = (r0 - r11);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 40u, (r6 + 40));
    f5.d = (f2.d * f0.d);
    addr_lfdx_80466448_loc_0 = (r12 + r15);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466448_loc_0);
    r14_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(3));
    r14 = (r14_rot_4 & -8);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 48u, (r6 + 48));
    f4.d = (f1.d * f0.d);
    addr_lfdx_80466458_loc_0 = (r12 + r14);
    f2.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466458_loc_0);
    f6.d = (f6.d + f5.d);
    r11_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r11 = (r11_rot_4 & -8);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 56u, (r6 + 56));
    f2.d = (f3.d * f2.d);
    addr_lfdx_8046646C_loc_0 = (r12 + r11);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_8046646C_loc_0);
    r7 = (r7 + 8);
    f6.d = (f6.d + f4.d);
    r6 = (r6 + 64);
    f0.d = (f1.d * f0.d);
    f6.d = (f6.d + f2.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804663A4;
    }
}

loc_8046648C:
{
    r0 = (r22 + 1);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & -8);
    r0 = (r0 - r7);
    r11 = (r22 + r9);
    r6 = (r3 + r6);
    ctr = r0;
}

loc_804664A8:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r22))) {
        goto loc_804664D0;
    }
}

loc_804664AC:
{
    r0 = (r11 - r7);
    f1.d = MemoryInline::FlatReadFloat64(r6);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r6 = (r6 + 8);
    addr_lfdx_804664BC_loc_0 = (r12 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804664BC_loc_0);
    r7 = (r7 + 1);
    f0.d = (f1.d * f0.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804664AC;
    }
}

loc_804664D0:
{
    MemoryInline::FlatWriteFloat64(r5, f6.d);
    r5 = (r5 + 8);
    r9 = (r9 + 1);
}

loc_804664DC:
{
}

loc_804664E0:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(r21))) {
        goto loc_80466318;
    }
}

loc_804664E4:
{
    r28 = (24 - r19);
    r5 = (0 - r21);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r0 = (23 - r19);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & -8);
    r26 = (r1 + 416);
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 8u, (r2 + -3232));
    r23 = r21;
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -3184));
    r14 = (r5 & -2147483648);
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r2 + -3224));
    r27 = (r8 + r4);
    MemoryInline::FlatWriteRam32((r1 + 720), r0);
    r26 = (r26 + r3);
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -3208));
    r29 = (r1 + 16);
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -3216));
    r15 = (r1 + 416);
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -3200));
    r30 = 16777216;
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -3192));
    r31 = 0x80000000u;
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -3240));
}

loc_80466540:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3 = (r1 + 96);
}

loc_8046654C:
{
    addr_lfdx_8046654C_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_8046654C_loc_0);
    r4 = r23;
    r5 = 0;
    r6 = 0;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(0))) {
        goto loc_80466858;
    }
}

loc_80466560:
{
}

loc_80466564:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(8))) {
        goto loc_804667E8;
    }
}

loc_80466568:
{
}

loc_8046656C:
{
    r0 = 0;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(-1))) {
        goto loc_80466578;
    }
}

loc_80466574:
{
    r0 = 1;
}

loc_80466578:
{
}

loc_8046657C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804667E8;
    }
}

loc_80466580:
{
    r0 = (r23 + -1);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r7 = (r7_rot_2 & -8);
    r3 = (r1 + 96);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    r3 = (r3 + r7);
    ctr = r0;
}

loc_8046659C:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(8))) {
        goto loc_804667E8;
    }
}

loc_804665A0:
{
    f0.d = (f24.d * f1.d);
    r0 = (r5 + 1);
    r9 = (r5 + 2);
    r8 = (r5 + 3);
    r7 = (r5 + 4);
    guest_range_11 = MemoryInline::ResolveRangeHost((r3 + -64), 0, 64u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 56u, (r3 + -8));
    f0.d = PPC_Fctiwz(f0.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 48u, (r3 + -16));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 40u, (r3 + -24));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 592), f0.d);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r9 = (r9_rot_3 & -4);
    r10 = fctiwzword0;
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & -4);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 32u, (r3 + -32));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_4 & -4);
    r10 = (r10 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r10);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f5.d = (f5.d - f25.d);
    f6.d = (f5.d + f4.d);
    f5.d = (f26.d * f5.d);
    f4.d = (f24.d * f6.d);
    f5.d = (f1.d - f5.d);
    f1.d = PPC_Fctiwz(f4.d);
    f4.d = PPC_Fctiwz(f5.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 608), f1.d);
    r10 = fctiwzword1;
    fctiwzword2 = PPC_FprLowWordInline(f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 600), f4.d);
    r10 = (r10 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r10);
    r10 = fctiwzword2;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 576));
    r29_addr_3 = (r29 + r6);
    MemoryInline::FlatWrite32(r29_addr_3, r10);
    f1.d = (f1.d - f25.d);
    f4.d = (f1.d + f3.d);
    f3.d = (f26.d * f1.d);
    f1.d = (f24.d * f4.d);
    f3.d = (f6.d - f3.d);
    f1.d = PPC_Fctiwz(f1.d);
    f3.d = PPC_Fctiwz(f3.d);
    fctiwzword3 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 624), f1.d);
    r10 = fctiwzword3;
    fctiwzword4 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 616), f3.d);
    r10 = (r10 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r10);
    r10 = fctiwzword4;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 584));
    r29_addr_4 = (r29 + r0);
    MemoryInline::FlatWrite32(r29_addr_4, r10);
    f1.d = (f1.d - f25.d);
    f3.d = (f1.d + f2.d);
    f2.d = (f26.d * f1.d);
    f1.d = (f24.d * f3.d);
    f2.d = (f4.d - f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword5 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 640), f1.d);
    r0 = fctiwzword5;
    fctiwzword6 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 632), f2.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    r0 = fctiwzword6;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 576));
    r29_addr_5 = (r29 + r9);
    MemoryInline::FlatWrite32(r29_addr_5, r0);
    f1.d = (f1.d - f25.d);
    f2.d = (f1.d + f0.d);
    f1.d = (f26.d * f1.d);
    f0.d = (f24.d * f2.d);
    f1.d = (f3.d - f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 656), f0.d);
    r0 = fctiwzword7;
    fctiwzword8 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 648), f1.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r0);
    r0 = fctiwzword8;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 584));
    r29_addr_6 = (r29 + r8);
    MemoryInline::FlatWrite32(r29_addr_6, r0);
    f1.d = (f0.d - f25.d);
    f0.d = (f26.d * f1.d);
    f0.d = (f2.d - f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword9 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 664), f0.d);
    r0 = fctiwzword9;
    r29_addr_7 = (r29 + r7);
    MemoryInline::FlatWrite32(r29_addr_7, r0);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 24u, (r3 + -40));
    r8 = (r5 + 5);
    r0 = (r5 + 7);
    r7 = (r5 + 6);
    f5.d = (f1.d + f0.d);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r9 = (r9_rot_4 & -4);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r8 = (r8_rot_4 & -4);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 16u, (r3 + -48));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 8u, (r3 + -56));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    f3.d = (f24.d * f5.d);
    r3_addr_3 = (r3 + -64);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 0u, r3_addr_3);
    r3 = r3_addr_3;
    r5 = (r5 + 8);
    r6 = (r6 + 32);
    r4 = (r4 + -8);
    f3.d = PPC_Fctiwz(f3.d);
    fctiwzword10 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 672), f3.d);
    r7 = fctiwzword10;
    r7 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r7);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 576));
    f3.d = (f3.d - f25.d);
    f4.d = (f3.d + f2.d);
    f3.d = (f26.d * f3.d);
    f2.d = (f24.d * f4.d);
    f3.d = (f5.d - f3.d);
    f2.d = PPC_Fctiwz(f2.d);
    f3.d = PPC_Fctiwz(f3.d);
    fctiwzword11 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 688), f2.d);
    r7 = fctiwzword11;
    fctiwzword12 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 680), f3.d);
    r7 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r7);
    r7 = fctiwzword12;
    f2.d = MemoryInline::FlatReadFloat64((r1 + 584));
    r29_addr_8 = (r29 + r9);
    MemoryInline::FlatWrite32(r29_addr_8, r7);
    f2.d = (f2.d - f25.d);
    f3.d = (f2.d + f1.d);
    f2.d = (f26.d * f2.d);
    f1.d = (f24.d * f3.d);
    f2.d = (f4.d - f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword13 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 704), f1.d);
    r7 = fctiwzword13;
    fctiwzword14 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 696), f2.d);
    r7 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r7);
    r7 = fctiwzword14;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 576));
    r29_addr_9 = (r29 + r8);
    MemoryInline::FlatWrite32(r29_addr_9, r7);
    f1.d = (f1.d - f25.d);
    f2.d = (f26.d * f1.d);
    f1.d = (f1.d + f0.d);
    f0.d = (f3.d - f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword15 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 712), f0.d);
    r7 = fctiwzword15;
    r29_addr_10 = (r29 + r0);
    MemoryInline::FlatWrite32(r29_addr_10, r7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804665A0;
    }
}

loc_804667E8:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r5 = (r1 + 16);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & -8);
    r6 = (r1 + 96);
    r5 = (r5 + r3);
    r6 = (r6 + r0);
    ctr = r4;
}

loc_80466808:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80466858;
    }
}

loc_8046680C:
{
    f2.d = (f24.d * f1.d);
    r6_addr_3 = (r6 + -8);
    f0.d = MemoryInline::FlatReadFloat64(r6_addr_3);
    r6 = r6_addr_3;
    r4 = (r4 + -1);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword16 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 712), f2.d);
    r0 = fctiwzword16;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f3.d = (f2.d - f25.d);
    f2.d = (f26.d * f3.d);
    f2.d = (f1.d - f2.d);
    f1.d = (f3.d + f0.d);
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword17 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 704), f0.d);
    r0 = fctiwzword17;
    MemoryInline::FlatWrite32(r5, r0);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8046680C;
    }
}

loc_80466858:
{
    r3 = r19;
    ctx->lr = 0x80466860u;
    if constexpr (KnownRegArgsCpuCall<0x8046463Cu>(&func_8046463C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8046463C_81D7 = func_8046463C_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8046463C_81D7);
        r4 = static_cast<uint32_t>(regargs_result_8046463C_81D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046463Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f23.d = f1.d;
    f1.d = (f27.d * f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80468060u>(&func_80468060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468060_8794 = func_80468060_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80468060_8794);
        r4 = static_cast<uint32_t>(regargs_result_80468060_8794 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468060u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = (f28.d * f1.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_80466874:
{
    r18 = 0;
    f23.d = (f23.d - f0.d);
    f0.d = PPC_Fctiwz(f23.d);
    fctiwzword18 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 712), f0.d);
    r20 = fctiwzword18;
    r0 = (r20 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 576));
    f0.d = (f0.d - f25.d);
    f23.d = (f23.d - f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804668CC;
    }
}

loc_804668A0:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r4 = (r29 + r0);
    r3 = MemoryInline::FlatRead32((r4 + -4));
    r5 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r28));
    r3 = (r3 - r0);
    r0 = MemoryInline::FlatRead32((r1 + 720));
    MemoryInline::FlatWrite32((r4 + -4), r3);
    r20 = (r20 + r5);
    r18 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    goto loc_804668F4;
}

loc_804668CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804668E4;
    }
}

loc_804668D0:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -4));
    r18 = (static_cast<int32_t>(r0) >> 23);
    goto loc_804668F4;
}

loc_804668E4:
{
    SetCRFloatResident(cr, 0, f23.d, f29.d);
}

loc_804668E8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804668F4;
    }
}

loc_804668F0:
{
    r18 = 2;
}

loc_804668F4:
{
}

loc_804668F8:
{
    if ((static_cast<int32_t>(r18) <= static_cast<int32_t>(0))) {
        goto loc_804669B0;
    }
}

loc_804668FC:
{
    r5 = (r1 + 16);
    r4 = (r30 + -1);
    r0 = 0;
    ctr = r23;
}

loc_80466910:
{
    r20 = (r20 + 1);
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(0))) {
        goto loc_8046694C;
    }
}

loc_80466918:
{
}

loc_8046691C:
{
    r3 = MemoryInline::FlatRead32(r5);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046693C;
    }
}

loc_80466924:
{
}

loc_80466928:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80466944;
    }
}

loc_8046692C:
{
    r0 = (r30 - r3);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = 1;
    goto loc_80466944;
}

loc_8046693C:
{
    r3 = (r4 - r3);
    MemoryInline::FlatWrite32(r5, r3);
}

loc_80466944:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80466918;
    }
}

loc_8046694C:
{
}

loc_80466950:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(1))) {
        goto loc_80466960;
    }
}

loc_80466954:
{
}

loc_80466958:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(2))) {
        goto loc_80466978;
    }
}

loc_8046695C:
{
    goto loc_8046698C;
}

loc_80466960:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r3 = (r3_rot_5 & -4);
    r4 = (r29 + r3);
    r3 = MemoryInline::FlatRead32((r4 + -4));
    r3 = (r3 & 8388607);
    MemoryInline::FlatWrite32((r4 + -4), r3);
    goto loc_8046698C;
}

loc_80466978:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r4 = (r29 + r3);
    r3 = MemoryInline::FlatRead32((r4 + -4));
    r3 = (r3 & 4194303);
    MemoryInline::FlatWrite32((r4 + -4), r3);
}

loc_8046698C:
{
}

loc_80466990:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(2))) {
        goto loc_804669B0;
    }
}

loc_80466994:
{
}

loc_80466998:
{
    f23.d = (f30.d - f23.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804669B0;
    }
}

loc_804669A0:
{
    f1.d = f30.d;
    r3 = r19;
    ctx->lr = 0x804669ACu;
    if constexpr (KnownRegArgsCpuCall<0x8046463Cu>(&func_8046463C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8046463C_9DF0 = func_8046463C_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8046463C_9DF0);
        r4 = static_cast<uint32_t>(regargs_result_8046463C_9DF0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046463Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f23.d = (f23.d - f1.d);
}

loc_804669B0:
{
    SetCRFloatResident(cr, 0, f31.d, f23.d);
}

loc_804669B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80466D88;
    }
}

loc_804669B8:
{
    r10 = (r23 + -1);
    r9 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r10), static_cast<int32_t>(r21));
}

loc_804669C4:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80466B48;
    }
}

loc_804669C8:
{
    r7 = (r10 - r21);
    r0 = (r21 + 8);
    r8 = (r7 + 1);
}

loc_804669D8:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(8))) {
        goto loc_80466B14;
    }
}

loc_804669DC:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r12 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80466A04;
    }
}

loc_804669F4:
{
    r11 = (r31 + 1);
}

loc_804669FC:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r11))) {
        goto loc_80466A04;
    }
}

loc_80466A00:
{
    r12 = 1;
}

loc_80466A04:
{
}

loc_80466A08:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80466A20;
    }
}

loc_80466A0C:
{
    r12 = (r23 + -1);
    r11 = (r31 + 1);
}

loc_80466A18:
{
    if ((static_cast<int32_t>(r12) < static_cast<int32_t>(r11))) {
        goto loc_80466A20;
    }
}

loc_80466A1C:
{
    r6 = 1;
}

loc_80466A20:
{
}

loc_80466A24:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80466A38;
    }
}

loc_80466A28:
{
    r6 = (r21 + -2147483648);
}

loc_80466A30:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(0))) {
        goto loc_80466A38;
    }
}

loc_80466A34:
{
    r5 = 1;
}

loc_80466A38:
{
}

loc_80466A3C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80466A70;
    }
}

loc_80466A40:
{
    r5 = (r23 + -1);
    r6 = 1;
    r11 = (r5 & -2147483648);
}

loc_80466A50:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(r14))) {
        goto loc_80466A64;
    }
}

loc_80466A54:
{
    r5 = (r7 & -2147483648);
}

loc_80466A5C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(r5))) {
        goto loc_80466A64;
    }
}

loc_80466A60:
{
    r6 = 0;
}

loc_80466A64:
{
}

loc_80466A68:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80466A70;
    }
}

loc_80466A6C:
{
    r4 = 1;
}

loc_80466A70:
{
}

loc_80466A74:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80466A9C;
    }
}

loc_80466A78:
{
    r4 = (r7 & -2147483648);
}

loc_80466A7C:
{
    r5 = 1;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80466A90;
    }
}

loc_80466A84:
{
    r4 = (r8 & -2147483648);
}

loc_80466A88:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80466A90;
    }
}

loc_80466A8C:
{
    r5 = 0;
}

loc_80466A90:
{
}

loc_80466A94:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80466A9C;
    }
}

loc_80466A98:
{
    r3 = 1;
}

loc_80466A9C:
{
}

loc_80466AA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80466B14;
    }
}

loc_80466AA4:
{
    r4 = (r10 + 8);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    r4 = (r4 - r0);
    r3 = (r1 + 16);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r4 = (r4_rot_4 & 536870911);
    r3 = (r3 + r5);
    ctr = r4;
}

loc_80466AC4:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r0))) {
        goto loc_80466B14;
    }
}

loc_80466AC8:
{
    guest_range_12 = MemoryInline::ResolveRangeHost((r3 + -28), 0, 32u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_12, 28u, r3);
    r10 = (r10 + -8);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 24u, (r3 + -4));
    r9 = (r9 | r4);
    r4 = MemoryInline::ReadResolved32(guest_range_12, 20u, (r3 + -8));
    r9 = (r9 | r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 16u, (r3 + -12));
    r9 = (r9 | r4);
    r4 = MemoryInline::ReadResolved32(guest_range_12, 12u, (r3 + -16));
    r9 = (r9 | r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 8u, (r3 + -20));
    r9 = (r9 | r4);
    r4 = MemoryInline::ReadResolved32(guest_range_12, 4u, (r3 + -24));
    r9 = (r9 | r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 0u, (r3 + -28));
    r9 = (r9 | r4);
    r3 = (r3 + -32);
    r9 = (r9 | r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80466AC8;
    }
}

loc_80466B14:
{
    r0 = (r10 + 1);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & -4);
    r4 = (r1 + 16);
    r0 = (r0 - r21);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_80466B30:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r21))) {
        goto loc_80466B48;
    }
}

loc_80466B34:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + -4);
    r10 = (r10 + -1);
    r9 = (r9 | r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80466B34;
    }
}

loc_80466B48:
{
}

loc_80466B4C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80466D88;
    }
}

loc_80466B50:
{
    r18 = 1;
    goto loc_80466B5C;
}

loc_80466B58:
{
    r18 = (r18 + 1);
}

loc_80466B5C:
{
    r0 = (r21 - r18);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r29_addr_14 = (r29 + r0);
    r0 = MemoryInline::FlatRead32(r29_addr_14);
}

loc_80466B6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80466B58;
    }
}

loc_80466B70:
{
    r12 = (r23 + 1);
    r7 = (r1 + 96);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r3 = (r3_rot_10 & -8);
    r8 = (r23 + r18);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r5 = (r27 + r0);
    r6 = (r26 + r3);
    r7 = (r7 + r3);
    goto loc_80466D78;
}

loc_80466B94:
{
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_80466B9C:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3240));
    r11 = 0;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f1.d = (f1.d - f25.d);
    MemoryInline::FlatWriteFloat64(r6, f1.d);
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80466D64;
    }
}

loc_80466BBC:
{
    r0 = (r22 + 1);
    r3 = (r22 + -8);
}

loc_80466BC8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80466D20;
    }
}

loc_80466BCC:
{
    r4 = 0;
    r9 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80466BE8;
    }
}

loc_80466BD8:
{
    r0 = (r31 + -2);
}

loc_80466BE0:
{
    if ((static_cast<int32_t>(r22) > static_cast<int32_t>(r0))) {
        goto loc_80466BE8;
    }
}

loc_80466BE4:
{
    r9 = 1;
}

loc_80466BE8:
{
}

loc_80466BEC:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80466C14;
    }
}

loc_80466BF0:
{
}

loc_80466BF4:
{
    r0 = 1;
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80466C08;
    }
}

loc_80466BFC:
{
}

loc_80466C00:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80466C08;
    }
}

loc_80466C04:
{
    r0 = 0;
}

loc_80466C08:
{
}

loc_80466C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80466C14;
    }
}

loc_80466C10:
{
    r4 = 1;
}

loc_80466C14:
{
}

loc_80466C18:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80466D20;
    }
}

loc_80466C1C:
{
    r0 = (r3 + 8);
    r9 = r16;
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_21 & 536870911);
    r10 = (r22 + r12);
    ctr = r0;
}

loc_80466C34:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80466D20;
    }
}

loc_80466C38:
{
    r0 = (r10 - r11);
    r4 = (r11 + 1);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_23 & -8);
    r3 = (r11 + 2);
    guest_range_13 = MemoryInline::ResolveRangeHost(r9, 0, 64u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 0u, r9);
    r3 = (r10 - r3);
    addr_lfdx_80466C50_loc_0 = (r15 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466C50_loc_0);
    r4 = (r10 - r4);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_24 & -8);
    r20 = (r11 + 7);
    f3.d = (f2.d * f1.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 8u, (r9 + 8));
    addr_lfdx_80466C68_loc_0 = (r15 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466C68_loc_0);
    r4 = (r11 + 3);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_13 & -8);
    r20 = (r10 - r20);
    f4.d = (f2.d * f1.d);
    r0 = (r10 - r4);
    addr_lfdx_80466C80_loc_0 = (r15 + r3);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466C80_loc_0);
    r4 = (r11 + 4);
    f0.d = (f0.d + f3.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 16u, (r9 + 16));
    f3.d = (f2.d * f1.d);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_25 & -8);
    addr_lfdx_80466C98_loc_0 = (r15 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466C98_loc_0);
    r4 = (r10 - r4);
    f0.d = (f0.d + f4.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 24u, (r9 + 24));
    r3 = (r11 + 5);
    r0 = (r11 + 6);
    f0.d = (f0.d + f3.d);
    r3 = (r10 - r3);
    f2.d = (f2.d * f1.d);
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_9 & -8);
    r0 = (r10 - r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 32u, (r9 + 32));
    addr_lfdx_80466CC8_loc_0 = (r15 + r4);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466CC8_loc_0);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_14 & -8);
    f6.d = (f3.d * f1.d);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_26 & -8);
    addr_lfdx_80466CD8_loc_0 = (r15 + r3);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466CD8_loc_0);
    r20_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(3));
    r20 = (r20_rot_4 & -8);
    f0.d = (f0.d + f2.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 40u, (r9 + 40));
    f5.d = (f2.d * f1.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 48u, (r9 + 48));
    addr_lfdx_80466CF0_loc_0 = (r15 + r0);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466CF0_loc_0);
    r11 = (r11 + 8);
    f0.d = (f0.d + f6.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 56u, (r9 + 56));
    addr_lfdx_80466D00_loc_0 = (r15 + r20);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466D00_loc_0);
    f3.d = (f4.d * f3.d);
    r9 = (r9 + 64);
    f0.d = (f0.d + f5.d);
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f3.d);
    f0.d = (f0.d + f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80466C38;
    }
}

loc_80466D20:
{
    r4 = (r22 + 1);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r3 = (r3_rot_16 & -8);
    r4 = (r4 - r11);
    r0 = (r22 + r12);
    r3 = (r16 + r3);
    ctr = r4;
}

loc_80466D3C:
{
    if ((static_cast<int32_t>(r11) > static_cast<int32_t>(r22))) {
        goto loc_80466D64;
    }
}

loc_80466D40:
{
    r4 = (r0 - r11);
    f2.d = MemoryInline::FlatReadFloat64(r3);
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_12 & -8);
    r3 = (r3 + 8);
    addr_lfdx_80466D50_loc_0 = (r15 + r4);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80466D50_loc_0);
    r11 = (r11 + 1);
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80466D40;
    }
}

loc_80466D64:
{
    MemoryInline::FlatWriteFloat64(r7, f0.d);
    r5 = (r5 + 4);
    r6 = (r6 + 8);
    r7 = (r7 + 8);
    r12 = (r12 + 1);
}

loc_80466D78:
{
}

loc_80466D7C:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(r8))) {
        goto loc_80466B94;
    }
}

loc_80466D80:
{
    r23 = (r23 + r18);
    goto loc_80466540;
}

loc_80466D88:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3240));
    SetCRFloatResident(cr, 0, f0.d, f23.d);
}

loc_80466D90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80466DC8;
    }
}

loc_80466D94:
{
    r23 = (r23 + -1);
    r3 = (r1 + 16);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r19 = (r19 + -24);
    r3 = (r3 + r0);
    goto loc_80466DB8;
}

loc_80466DAC:
{
    r3 = (r3 + -4);
    r23 = (r23 + -1);
    r19 = (r19 + -24);
}

loc_80466DB8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80466DC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80466DAC;
    }
}

loc_80466DC4:
{
    goto loc_80466E64;
}

loc_80466DC8:
{
    f1.d = f23.d;
    r3 = (0 - r19);
    ctx->lr = 0x80466DD4u;
    if constexpr (KnownRegArgsCpuCall<0x8046463Cu>(&func_8046463C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8046463C_DB0D = func_8046463C_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8046463C_DB0D);
        r4 = static_cast<uint32_t>(regargs_result_8046463C_DB0D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046463Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f3.d = MemoryInline::FlatReadFloat64((r2 + -3224));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_80466DDC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80466E4C;
    }
}

loc_80466DE4:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3232));
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r5 = (r5_rot_6 & -4);
    r23 = (r23 + 1);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -3184));
    f0.d = (f0.d * f1.d);
    r4 = (r1 + 16);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r19 = (r19 + 24);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword19 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 712), f0.d);
    r3 = fctiwzword19;
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 576));
    f0.d = (f0.d - f2.d);
    f2.d = (f3.d * f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    f1.d = (f1.d - f2.d);
    fctiwzword20 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 696), f0.d);
    r3 = fctiwzword20;
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword21 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 704), f0.d);
    r6 = fctiwzword21;
    r4_addr_1 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_1, r6);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_2, r3);
    goto loc_80466E64;
}

loc_80466E4C:
{
    f0.d = PPC_Fctiwz(f1.d);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r3 = (r1 + 16);
    fctiwzword22 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 712), f0.d);
    r4 = fctiwzword22;
    r3_addr_6 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_6, r4);
}

loc_80466E64:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -3192));
    r3 = r19;
    ctx->lr = 0x80466E70u;
    if constexpr (KnownRegArgsCpuCall<0x8046463Cu>(&func_8046463C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8046463C_E927 = func_8046463C_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8046463C_E927);
        r4 = static_cast<uint32_t>(regargs_result_8046463C_E927 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046463Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80466E74:
{
    r3 = r23;
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(0))) {
        goto loc_80467070;
    }
}

loc_80466E7C:
{
    r0 = (r23 + 1);
}

loc_80466E84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80467014;
    }
}

loc_80466E88:
{
}

loc_80466E8C:
{
    r4 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(-1))) {
        goto loc_80466E9C;
    }
}

loc_80466E98:
{
    r0 = 1;
}

loc_80466E9C:
{
}

loc_80466EA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80466ECC;
    }
}

loc_80466EA4:
{
    r0 = (r23 & -2147483648);
}

loc_80466EA8:
{
    r5 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80466EC0;
    }
}

loc_80466EB0:
{
    r0 = (r23 + 1);
    r0 = (r0 & -2147483648);
}

loc_80466EB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80466EC0;
    }
}

loc_80466EBC:
{
    r5 = 0;
}

loc_80466EC0:
{
}

loc_80466EC4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80466ECC;
    }
}

loc_80466EC8:
{
    r4 = 1;
}

loc_80466ECC:
{
}

loc_80466ED0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80467014;
    }
}

loc_80466ED4:
{
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r5 = (r5_rot_8 & -4);
    r6 = (r1 + 16);
    r4_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r4 = (r4_rot_15 & -8);
    r7 = (r1 + 96);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(29));
    r0 = (r0_rot_33 & 536870911);
    r6 = (r6 + r5);
    r7 = (r7 + r4);
    f9.d = MemoryInline::FlatReadFloat64((r2 + -3184));
    f8.d = MemoryInline::FlatReadFloat64((r2 + -3232));
    ctr = r0;
}

loc_80466F00:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(8))) {
        goto loc_80467014;
    }
}

loc_80466F04:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + -28), 0, 32u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 28u, r6);
    r3 = (r3 + -8);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r6 + -4));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r4);
    r4 = (r0 ^ -2147483648);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r6 + -8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 584));
    MemoryInline::FlatWriteRam32((r1 + 580), r4);
    r4 = (r0 ^ -2147483648);
    f0.d = (f0.d - f9.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r6 + -12));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 576));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r4);
    f5.d = (f1.d * f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f1.d = (f1.d * f8.d);
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r6 + -16));
    f3.d = (f2.d - f9.d);
    f4.d = (f0.d - f9.d);
    r0 = (r0 ^ -2147483648);
    f7.d = (f1.d * f3.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 576));
    MemoryInline::FlatWriteRam32((r1 + 588), r0);
    f1.d = (f1.d * f8.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r6 + -20));
    guest_range_3 = MemoryInline::ResolveRangeHost((r7 + -56), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 56u, r7, f5.d);
    f3.d = (f2.d - f9.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f6.d = (f1.d * f4.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    f1.d = (f1.d * f8.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r6 + -24));
    f4.d = (f0.d - f9.d);
    r4 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -28));
    f5.d = (f1.d * f3.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 576));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 48u, (r7 + -8), f7.d);
    r0 = (r0 ^ -2147483648);
    f1.d = (f1.d * f8.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f3.d = (f2.d - f9.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 40u, (r7 + -16), f6.d);
    f4.d = (f1.d * f4.d);
    r6 = (r6 + -32);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 32u, (r7 + -24), f5.d);
    f1.d = (f1.d * f8.d);
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    f2.d = (f0.d - f9.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 576));
    f3.d = (f1.d * f3.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 24u, (r7 + -32), f4.d);
    f1.d = (f1.d * f8.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 16u, (r7 + -40), f3.d);
    f0.d = (f0.d - f9.d);
    f2.d = (f1.d * f2.d);
    f1.d = (f1.d * f8.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 8u, (r7 + -48), f2.d);
    f0.d = (f1.d * f0.d);
    f1.d = (f1.d * f8.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 0u, (r7 + -56), f0.d);
    r7 = (r7 + -64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80466F04;
    }
}

loc_80467014:
{
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_10 & -4);
    r6 = (r1 + 16);
    r4_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r4 = (r4_rot_17 & -8);
    r7 = (r1 + 96);
    r0 = (r3 + 1);
    r6 = (r6 + r5);
    r7 = (r7 + r4);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -3184));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3232));
    ctr = r0;
}

loc_80467040:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80467070;
    }
}

loc_80467044:
{
    r0 = MemoryInline::FlatRead32(r6);
    r6 = (r6 + -4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f2.d = (f2.d - f3.d);
    f2.d = (f1.d * f2.d);
    f1.d = (f1.d * f0.d);
    MemoryInline::FlatWriteFloat64(r7, f2.d);
    r7 = (r7 + -8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80467044;
    }
}

loc_80467070:
{
    r0 = (r23 + 1);
    r8 = r23;
    r4 = (r1 + 256);
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_19 & -8);
    r5 = 0x80570000u;
    ctr = r0;
}

loc_8046708C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(0))) {
        goto loc_804670EC;
    }
}

loc_80467090:
{
    r6 = (r1 + 96);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -3240));
    r6 = (r6 + r3);
    r7 = (r5 + 15152);
    r0 = (r23 - r8);
    r9 = 0;
    goto loc_804670C8;
}

loc_804670AC:
{
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r7 = (r7 + 8);
    f0.d = MemoryInline::FlatReadFloat64(r6);
    r6 = (r6 + 8);
    r9 = (r9 + 1);
    f0.d = (f1.d * f0.d);
    f2.d = (f2.d + f0.d);
}

loc_804670C8:
{
}

loc_804670CC:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r21))) {
        goto loc_804670D8;
    }
}

loc_804670D0:
{
}

loc_804670D4:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(r0))) {
        goto loc_804670AC;
    }
}

loc_804670D8:
{
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_37 & -8);
    r3 = (r3 + -8);
    addr_stfdx_804670E0_loc_0 = (r4 + r0);
    MemoryInline::FlatWriteFloat64(addr_stfdx_804670E0_loc_0, f2.d);
    r8 = (r8 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80467090;
    }
}

loc_804670EC:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r3 + -1);
}

loc_804670F8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80467220;
    }
}

loc_804670FC:
{
    r0 = (r3 | r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80467110;
    }
}

loc_80467104:
{
}

loc_80467108:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80467498;
    }
}

loc_8046710C:
{
    goto loc_804678C0;
}

loc_80467110:
{
}

loc_80467114:
{
    f6.d = MemoryInline::FlatReadFloat64((r2 + -3240));
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(0))) {
        goto loc_80467208;
    }
}

loc_8046711C:
{
    r0 = (r23 + 1);
}

loc_80467124:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_804671DC;
    }
}

loc_80467128:
{
}

loc_8046712C:
{
    r3 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(-1))) {
        goto loc_8046713C;
    }
}

loc_80467138:
{
    r0 = 1;
}

loc_8046713C:
{
}

loc_80467140:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046716C;
    }
}

loc_80467144:
{
    r0 = (r23 & -2147483648);
}

loc_80467148:
{
    r4 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80467160;
    }
}

loc_80467150:
{
    r0 = (r23 + 1);
    r0 = (r0 & -2147483648);
}

loc_80467158:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80467160;
    }
}

loc_8046715C:
{
    r4 = 0;
}

loc_80467160:
{
}

loc_80467164:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8046716C;
    }
}

loc_80467168:
{
    r3 = 1;
}

loc_8046716C:
{
}

loc_80467170:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804671DC;
    }
}

loc_80467174:
{
    r3_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_31 & -8);
    r4 = (r1 + 256);
    r0_rot_49 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(29));
    r0 = (r0_rot_49 & 536870911);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8046718C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(8))) {
        goto loc_804671DC;
    }
}

loc_80467190:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + -56), 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 56u, r4);
    r23 = (r23 + -8);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r4 + -8));
    f6.d = (f6.d + f1.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 40u, (r4 + -16));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r4 + -24));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 24u, (r4 + -32));
    f6.d = (f6.d + f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r4 + -40));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 8u, (r4 + -48));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r4 + -56));
    r4 = (r4 + -64);
    f6.d = (f6.d + f5.d);
    f6.d = (f6.d + f4.d);
    f6.d = (f6.d + f3.d);
    f6.d = (f6.d + f2.d);
    f6.d = (f6.d + f1.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80467190;
    }
}

loc_804671DC:
{
    r3_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_33 & -8);
    r4 = (r1 + 256);
    r0 = (r23 + 1);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_804671F4:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(0))) {
        goto loc_80467208;
    }
}

loc_804671F8:
{
    f0.d = MemoryInline::FlatReadFloat64(r4);
    r4 = (r4 + -8);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804671F8;
    }
}

loc_80467208:
{
}

loc_8046720C:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_80467214;
    }
}

loc_80467210:
{
    goto loc_80467218;
}

loc_80467214:
{
    f6.d = (-(f6.d));
}

loc_80467218:
{
    MemoryInline::FlatWriteFloat64(r17, f6.d);
    goto loc_804678C0;
}

loc_80467220:
{
}

loc_80467224:
{
    f6.d = MemoryInline::FlatReadFloat64((r2 + -3240));
    r5 = r23;
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(0))) {
        goto loc_8046731C;
    }
}

loc_80467230:
{
    r0 = (r23 + 1);
}

loc_80467238:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_804672F0;
    }
}

loc_8046723C:
{
}

loc_80467240:
{
    r3 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(-1))) {
        goto loc_80467250;
    }
}

loc_8046724C:
{
    r0 = 1;
}

loc_80467250:
{
}

loc_80467254:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80467280;
    }
}

loc_80467258:
{
    r0 = (r23 & -2147483648);
}

loc_8046725C:
{
    r4 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80467274;
    }
}

loc_80467264:
{
    r0 = (r23 + 1);
    r0 = (r0 & -2147483648);
}

loc_8046726C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80467274;
    }
}

loc_80467270:
{
    r4 = 0;
}

loc_80467274:
{
}

loc_80467278:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80467280;
    }
}

loc_8046727C:
{
    r3 = 1;
}

loc_80467280:
{
}

loc_80467284:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804672F0;
    }
}

loc_80467288:
{
    r3_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_35 & -8);
    r4 = (r1 + 256);
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(29));
    r0 = (r0_rot_52 & 536870911);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_804672A0:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(8))) {
        goto loc_804672F0;
    }
}

loc_804672A4:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r4 + -56), 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 56u, r4);
    r5 = (r5 + -8);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 48u, (r4 + -8));
    f6.d = (f6.d + f1.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 40u, (r4 + -16));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 32u, (r4 + -24));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 24u, (r4 + -32));
    f6.d = (f6.d + f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 16u, (r4 + -40));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 8u, (r4 + -48));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 0u, (r4 + -56));
    r4 = (r4 + -64);
    f6.d = (f6.d + f5.d);
    f6.d = (f6.d + f4.d);
    f6.d = (f6.d + f3.d);
    f6.d = (f6.d + f2.d);
    f6.d = (f6.d + f1.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804672A4;
    }
}

loc_804672F0:
{
    r3_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r3 = (r3_rot_37 & -8);
    r4 = (r1 + 256);
    r0 = (r5 + 1);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_80467308:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8046731C;
    }
}

loc_8046730C:
{
    f0.d = MemoryInline::FlatReadFloat64(r4);
    r4 = (r4 + -8);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8046730C;
    }
}

loc_8046731C:
{
}

loc_80467320:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8046732C;
    }
}

loc_80467324:
{
    f1.d = f6.d;
    goto loc_80467330;
}

loc_8046732C:
{
    f1.d = (-(f6.d));
}

loc_80467330:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 256));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r23), static_cast<int32_t>(1));
}

loc_80467338:
{
    MemoryInline::FlatWriteFloat64(r17, f1.d);
    r8 = 1;
    f6.d = (f0.d - f6.d);
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80467480;
    }
}

loc_80467348:
{
}

loc_8046734C:
{
    r4 = (r23 + -8);
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(8))) {
        goto loc_80467450;
    }
}

loc_80467354:
{
    r5 = 0;
    r6 = 0;
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80467378;
    }
}

loc_80467364:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_80467370:
{
    if ((static_cast<int32_t>(r23) > static_cast<int32_t>(r0))) {
        goto loc_80467378;
    }
}

loc_80467374:
{
    r7 = 1;
}

loc_80467378:
{
}

loc_8046737C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804673B4;
    }
}

loc_80467380:
{
    r7 = (r23 & -2147483648);
    r3 = 1;
    r0 = (r7 + -2147483648);
}

loc_80467390:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804673A8;
    }
}

loc_80467394:
{
    r0 = (r23 + -1);
    r0 = (r0 & -2147483648);
}

loc_804673A0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_804673A8;
    }
}

loc_804673A4:
{
    r3 = 0;
}

loc_804673A8:
{
}

loc_804673AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804673B4;
    }
}

loc_804673B0:
{
    r6 = 1;
}

loc_804673B4:
{
}

loc_804673B8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804673E4;
    }
}

loc_804673BC:
{
    r0 = (r23 + -1);
    r3 = 1;
    r0 = (r0 & -2147483648);
}

loc_804673C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804673D8;
    }
}

loc_804673CC:
{
    r0 = (r23 & -2147483648);
}

loc_804673D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804673D8;
    }
}

loc_804673D4:
{
    r3 = 0;
}

loc_804673D8:
{
}

loc_804673DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804673E4;
    }
}

loc_804673E0:
{
    r5 = 1;
}

loc_804673E4:
{
}

loc_804673E8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80467450;
    }
}

loc_804673EC:
{
    r0 = (r4 + 7);
    r3 = (r1 + 264);
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_55 & 536870911);
    ctr = r0;
}

loc_80467400:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(1))) {
        goto loc_80467450;
    }
}

loc_80467404:
{
    guest_range_6 = MemoryInline::ResolveRangeHost(r3, 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 0u, r3);
    r8 = (r8 + 8);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 8u, (r3 + 8));
    f6.d = (f6.d + f1.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 16u, (r3 + 16));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 24u, (r3 + 24));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 32u, (r3 + 32));
    f6.d = (f6.d + f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 40u, (r3 + 40));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 48u, (r3 + 48));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 56u, (r3 + 56));
    r3 = (r3 + 64);
    f6.d = (f6.d + f5.d);
    f6.d = (f6.d + f4.d);
    f6.d = (f6.d + f3.d);
    f6.d = (f6.d + f2.d);
    f6.d = (f6.d + f1.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80467404;
    }
}

loc_80467450:
{
    r0 = (r23 + 1);
    r3_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r3 = (r3_rot_39 & -8);
    r4 = (r1 + 256);
    r0 = (r0 - r8);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8046746C:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(r23))) {
        goto loc_80467480;
    }
}

loc_80467470:
{
    f0.d = MemoryInline::FlatReadFloat64(r4);
    r4 = (r4 + 8);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80467470;
    }
}

loc_80467480:
{
}

loc_80467484:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8046748C;
    }
}

loc_80467488:
{
    goto loc_80467490;
}

loc_8046748C:
{
    f6.d = (-(f6.d));
}

loc_80467490:
{
    MemoryInline::FlatWriteFloat64((r17 + 8), f6.d);
    goto loc_804678C0;
}

loc_80467498:
{
}

loc_8046749C:
{
    r5 = r23;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(0))) {
        goto loc_804675CC;
    }
}

loc_804674A4:
{
}

loc_804674A8:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(8))) {
        goto loc_80467594;
    }
}

loc_804674AC:
{
}

loc_804674B0:
{
    r0 = 0;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(-1))) {
        goto loc_804674BC;
    }
}

loc_804674B8:
{
    r0 = 1;
}

loc_804674BC:
{
}

loc_804674C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80467594;
    }
}

loc_804674C4:
{
    r0 = (r23 + -1);
    r3_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_20 & -8);
    r4 = (r1 + 256);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_39 & 536870911);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_804674E0:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(8))) {
        goto loc_80467594;
    }
}

loc_804674E4:
{
    f0.d = MemoryInline::FlatReadFloat64((r4 + -8));
    r5 = (r5 + -8);
    f1.d = MemoryInline::FlatReadFloat64(r4);
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -16));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -8), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -24));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -16), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -32));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -24), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -40));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -32), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -48));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -40), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -56));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -48), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -64));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -56), f0.d);
    r4 = (r4 + -64);
    MemoryInline::FlatWriteFloat64(r4, f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804674E4;
    }
}

loc_80467594:
{
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_41 & -8);
    r3 = (r1 + 256);
    r3 = (r3 + r0);
    ctr = r5;
}

loc_804675A8:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_804675CC;
    }
}

loc_804675AC:
{
    f0.d = MemoryInline::FlatReadFloat64((r3 + -8));
    f1.d = MemoryInline::FlatReadFloat64(r3);
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    r3 = (r3 + -8);
    MemoryInline::FlatWriteFloat64(r3, f2.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804675AC;
    }
}

loc_804675CC:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r23), static_cast<int32_t>(1));
}

loc_804675D0:
{
    r6 = r23;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80467744;
    }
}

loc_804675D8:
{
    r0 = (r23 + -1);
}

loc_804675E0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80467708;
    }
}

loc_804675E4:
{
    r3 = 0;
    r0 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804675F4;
    }
}

loc_804675F0:
{
    r0 = 1;
}

loc_804675F4:
{
}

loc_804675F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80467630;
    }
}

loc_804675FC:
{
    r5 = (r23 & -2147483648);
    r4 = 1;
    r0 = (r5 + -2147483648);
}

loc_8046760C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80467624;
    }
}

loc_80467610:
{
    r0 = (r23 + -1);
    r0 = (r0 & -2147483648);
}

loc_8046761C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_80467624;
    }
}

loc_80467620:
{
    r4 = 0;
}

loc_80467624:
{
}

loc_80467628:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80467630;
    }
}

loc_8046762C:
{
    r3 = 1;
}

loc_80467630:
{
}

loc_80467634:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80467708;
    }
}

loc_80467638:
{
    r0 = (r23 + -2);
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_23 & -8);
    r4 = (r1 + 256);
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_43 & 536870911);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_80467654:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(9))) {
        goto loc_80467708;
    }
}

loc_80467658:
{
    f0.d = MemoryInline::FlatReadFloat64((r4 + -8));
    r6 = (r6 + -8);
    f1.d = MemoryInline::FlatReadFloat64(r4);
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -16));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -8), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -24));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -16), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -32));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -24), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -40));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -32), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -48));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -40), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -56));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -48), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -64));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -56), f0.d);
    r4 = (r4 + -64);
    MemoryInline::FlatWriteFloat64(r4, f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80467658;
    }
}

loc_80467708:
{
    r3_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r3 = (r3_rot_25 & -8);
    r4 = (r1 + 256);
    r0 = (r6 + -1);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_80467720:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(1))) {
        goto loc_80467744;
    }
}

loc_80467724:
{
    f0.d = MemoryInline::FlatReadFloat64((r4 + -8));
    f1.d = MemoryInline::FlatReadFloat64(r4);
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64(r4, f0.d);
    r4 = (r4 + -8);
    MemoryInline::FlatWriteFloat64(r4, f2.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80467724;
    }
}

loc_80467744:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r23), static_cast<int32_t>(2));
}

loc_80467748:
{
    f6.d = MemoryInline::FlatReadFloat64((r2 + -3240));
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80467880;
    }
}

loc_80467750:
{
    r0 = (r23 + -1);
}

loc_80467758:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80467854;
    }
}

loc_8046775C:
{
    r3 = 0;
    r4 = 0;
    r0 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80467770;
    }
}

loc_8046776C:
{
    r0 = 1;
}

loc_80467770:
{
}

loc_80467774:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804677AC;
    }
}

loc_80467778:
{
    r6 = (r23 & -2147483648);
    r5 = 1;
    r0 = (r6 + -2147483648);
}

loc_80467788:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804677A0;
    }
}

loc_8046778C:
{
    r0 = (r23 + -2);
    r0 = (r0 & -2147483648);
}

loc_80467798:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_804677A0;
    }
}

loc_8046779C:
{
    r5 = 0;
}

loc_804677A0:
{
}

loc_804677A4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804677AC;
    }
}

loc_804677A8:
{
    r4 = 1;
}

loc_804677AC:
{
}

loc_804677B0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804677E0;
    }
}

loc_804677B4:
{
    r0 = (r23 + -2);
    r4 = 1;
    r0 = (r0 & -2147483648);
}

loc_804677C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804677D4;
    }
}

loc_804677C4:
{
    r0 = (r23 + -1);
    r0 = (r0 & -2147483648);
}

loc_804677CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804677D4;
    }
}

loc_804677D0:
{
    r4 = 0;
}

loc_804677D4:
{
}

loc_804677D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804677E0;
    }
}

loc_804677DC:
{
    r3 = 1;
}

loc_804677E0:
{
}

loc_804677E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80467854;
    }
}

loc_804677E8:
{
    r0 = (r23 + -2);
    r3_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_27 & -8);
    r4 = (r1 + 256);
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_46 & 536870911);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_80467804:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(10))) {
        goto loc_80467854;
    }
}

loc_80467808:
{
    guest_range_7 = MemoryInline::ResolveRangeHost((r4 + -56), 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 56u, r4);
    r23 = (r23 + -8);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 48u, (r4 + -8));
    f6.d = (f6.d + f1.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 40u, (r4 + -16));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 32u, (r4 + -24));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 24u, (r4 + -32));
    f6.d = (f6.d + f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 16u, (r4 + -40));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 8u, (r4 + -48));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 0u, (r4 + -56));
    r4 = (r4 + -64);
    f6.d = (f6.d + f5.d);
    f6.d = (f6.d + f4.d);
    f6.d = (f6.d + f3.d);
    f6.d = (f6.d + f2.d);
    f6.d = (f6.d + f1.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80467808;
    }
}

loc_80467854:
{
    r3_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_29 & -8);
    r4 = (r1 + 256);
    r0 = (r23 + -1);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8046786C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(2))) {
        goto loc_80467880;
    }
}

loc_80467870:
{
    f0.d = MemoryInline::FlatReadFloat64(r4);
    r4 = (r4 + -8);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80467870;
    }
}

loc_80467880:
{
}

loc_80467884:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_804678A0;
    }
}

loc_80467888:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 256));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 264));
    MemoryInline::FlatWriteFloat64(r17, f1.d);
    MemoryInline::FlatWriteFloat64((r17 + 8), f0.d);
    MemoryInline::FlatWriteFloat64((r17 + 16), f6.d);
    goto loc_804678C0;
}

loc_804678A0:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 256));
    f0.d = (-(f6.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 264));
    f2.d = (-(f2.d));
    MemoryInline::FlatWriteFloat64((r17 + 16), f0.d);
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat64(r17, f2.d);
    MemoryInline::FlatWriteFloat64((r17 + 8), f0.d);
}

loc_804678C0:
{
    r11 = (r1 + 880);
    r3 = (r20 & 7);
    // inline leaf 0x8045742C (10 guest instruction(s))
    guest_range_8 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 0u, (r11 + -72));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 8u, (r11 + -64));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 16u, (r11 + -56));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 24u, (r11 + -48));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 32u, (r11 + -40));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 40u, (r11 + -32));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 48u, (r11 + -24));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 56u, (r11 + -16));
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 64u, (r11 + -8));
    // end of inlined leaf 0x8045742C
    guest_range_14 = MemoryInline::ResolveRangeHost((r1 + 736), 0, 152u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_14, 148u, (r1 + 884));
    ctx->lr = r0;
    r1 = (r1 + 880);
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

extern "C" void func_80466228(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80466228_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80466228 func_80466228 preserves=true fpr_mask=0x00000000
