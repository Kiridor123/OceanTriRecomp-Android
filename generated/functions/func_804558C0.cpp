#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005C868(CpuContext* ctx);
extern "C" uint64_t func_8005C868_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80454F60(CpuContext* ctx);
extern "C" uint64_t func_80454F60_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80454F78(CpuContext* ctx);
extern "C" uint64_t func_80454F78_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80454F84(CpuContext* ctx);
extern "C" uint64_t func_80454F84_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804558C0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lhax_804559D8_loc_0 = 0;
    uint32_t addr_lhax_80455A50_loc_0 = 0;
    uint32_t addr_lhax_80455A9C_loc_0 = 0;
    uint32_t addr_lhax_80455ACC_loc_0 = 0;
    uint32_t addr_lhax_80455B4C_loc_0 = 0;
    uint32_t addr_lhax_80455BBC_loc_0 = 0;
    uint32_t addr_lhax_80455C50_loc_0 = 0;
    uint32_t addr_psqx_80455C9C_loc_0 = 0;
    uint32_t addr_psqx_80455CA8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r21_rot_5 = 0;
    uint32_t r21_rot_6 = 0;
    uint32_t r21_rot_7 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r18_entry = r18;
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x804558C0u);
    goto loc_804558C0;

loc_804558C0:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 96);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r18 = r3;
    r19 = r4;
    r20 = r5;
    r3 = (r1 + 8);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    r0 = MemoryInline::FlatRead8((r18 + 781));
}

loc_80455900:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80455C98;
    }
}

loc_80455904:
{
    MemoryInline::FlatWrite32((r18 + 760), r18);
    r23 = 0;
    r28 = 7;
    r3 = 0x80610000u;
    r29 = (r3 + -3840);
    r3 = 0x80610000u;
    r30 = (r3 + -3824);
    r27 = 6;
    r25 = 5;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -4352));
    r26 = 1127219200;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -4356));
    r24 = 0x80610000u;
    r31 = 0;
}

loc_8045593C:
{
    r3 = MemoryInline::FlatRead32((r18 + 760));
    r0 = MemoryInline::FlatRead8((r3 + 11));
}

loc_80455948:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80455958;
    }
}

loc_8045594C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80455954:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80455C98;
    }
}

loc_80455958:
{
    r21 = MemoryInline::FlatRead32((r3 + 4));
    r22 = 0;
}

loc_80455960:
{
    r3 = MemoryInline::FlatRead32((r18 + 760));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 2);
}

loc_80455970:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045597C;
    }
}

loc_80455974:
{
    r0 = MemoryInline::FlatRead8((r3 + 9));
    MemoryInline::FlatWrite8((r18 + 785), static_cast<uint8_t>(r0));
}

loc_8045597C:
{
    r0 = (r21 & 1);
}

loc_80455984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80455BD4;
    }
}

loc_80455988:
{
    r21_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(31));
    r21 = (r21_rot_3 & 2147483647);
    r0 = (r22 + 1);
}

loc_80455994:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_80455BE0;
    }
}

loc_80455998:
{
    r3 = (r24 + -3792);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80455BE0u:
        goto loc_80455BE0;
        break;
    case 0x804559ACu:
        goto loc_804559AC;
        break;
    case 0x80455B7Cu:
        goto loc_80455B7C;
        break;
    case 0x80455B8Cu:
        goto loc_80455B8C;
        break;
    case 0x80455A7Cu:
        goto loc_80455A7C;
        break;
    case 0x80455ABCu:
        goto loc_80455ABC;
        break;
    case 0x80455B14u:
        goto loc_80455B14;
        break;
    case 0x80455B24u:
        goto loc_80455B24;
        break;
    case 0x80455B78u:
        goto loc_80455B78;
        break;
    case 0x80455BA0u:
        goto loc_80455BA0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804559AC:
{
    r0 = MemoryInline::FlatRead8((r18 + 783));
}

loc_804559B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_804559CC;
    }
}

loc_804559B8:
{
}

loc_804559BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80455A20;
    }
}

loc_804559C0:
{
}

loc_804559C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80455A2C;
    }
}

loc_804559C8:
{
    goto loc_80455BE0;
}

loc_804559CC:
{
    r3 = MemoryInline::FlatRead16((r18 + 786));
    r0 = MemoryInline::FlatRead8((r18 + 785));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    addr_lhax_804559D8_loc_0 = (r30 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_804559D8_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 * r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 ^ -2147483648);
    stackword16 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword17 = r26;
    MemoryInline::FlatWriteRam32((r1 + 16), r26);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword17), static_cast<uint32_t>(stackword16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r18 + 772), static_cast<uint16_t>(r0));
    goto loc_80455BE0;
}

loc_80455A20:
{
    r0 = MemoryInline::FlatRead16((r18 + 768));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r18 + 772), static_cast<uint16_t>(r0));
    goto loc_80455BE0;
}

loc_80455A2C:
{
    // inline leaf 0x8003FC60 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r13 + -18064));
    // end of inlined leaf 0x8003FC60
    r0 = (r3 & 255);
}

loc_80455A38:
{
    r4 = 540;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80455A44;
    }
}

loc_80455A40:
{
    r4 = 722;
}

loc_80455A44:
{
    r3 = MemoryInline::FlatRead16((r18 + 786));
    r0 = MemoryInline::FlatRead8((r18 + 785));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    addr_lhax_80455A50_loc_0 = (r30 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_80455A50_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 * r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = MemoryInline::FlatRead16((r18 + 768));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r4);
    r0 = (r0 - r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r18 + 772), static_cast<uint16_t>(r0));
    goto loc_80455BE0;
}

loc_80455A7C:
{
    r0 = MemoryInline::FlatRead16((r18 + 768));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r18 + 772), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
}

loc_80455A8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80455AAC;
    }
}

loc_80455A90:
{
    r3 = MemoryInline::FlatRead16((r18 + 774));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead8((r18 + 785));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    addr_lhax_80455A9C_loc_0 = (r30 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_80455A9C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r18 + 774), static_cast<uint16_t>(r0));
    goto loc_80455BE0;
}

loc_80455AAC:
{
    r0 = MemoryInline::FlatRead16((r18 + 774));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r20);
    MemoryInline::FlatWrite16((r18 + 774), static_cast<uint16_t>(r0));
    goto loc_80455BE0;
}

loc_80455ABC:
{
    MemoryInline::FlatWrite8((r18 + 783), static_cast<uint8_t>(r25));
    r3 = MemoryInline::FlatRead16((r18 + 786));
    r0 = MemoryInline::FlatRead8((r18 + 785));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    addr_lhax_80455ACC_loc_0 = (r30 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_80455ACC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 * r0);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 ^ -2147483648);
    stackword18 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    stackword19 = r26;
    MemoryInline::FlatWriteRam32((r1 + 24), r26);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword19), static_cast<uint32_t>(stackword18));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r18 + 772), static_cast<uint16_t>(r0));
    goto loc_80455BE0;
}

loc_80455B14:
{
    MemoryInline::FlatWrite8((r18 + 783), static_cast<uint8_t>(r27));
    r0 = MemoryInline::FlatRead16((r18 + 768));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r18 + 772), static_cast<uint16_t>(r0));
    goto loc_80455BE0;
}

loc_80455B24:
{
    MemoryInline::FlatWrite8((r18 + 783), static_cast<uint8_t>(r28));
    // inline leaf 0x8003FC60 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r13 + -18064));
    // end of inlined leaf 0x8003FC60
    r0 = (r3 & 255);
}

loc_80455B34:
{
    r4 = 540;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80455B40;
    }
}

loc_80455B3C:
{
    r4 = 722;
}

loc_80455B40:
{
    r3 = MemoryInline::FlatRead16((r18 + 786));
    r0 = MemoryInline::FlatRead8((r18 + 785));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    addr_lhax_80455B4C_loc_0 = (r30 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_80455B4C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 * r0);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = MemoryInline::FlatRead16((r18 + 768));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r4);
    r0 = (r0 - r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r18 + 772), static_cast<uint16_t>(r0));
    goto loc_80455BE0;
}

loc_80455B78:
{
    goto loc_80455C98;
}

loc_80455B7C:
{
    r3 = MemoryInline::FlatRead32((r18 + 760));
    r0 = MemoryInline::FlatRead8((r3 + 9));
    MemoryInline::FlatWrite8((r18 + 785), static_cast<uint8_t>(r0));
    goto loc_80455BE0;
}

loc_80455B8C:
{
    r3 = MemoryInline::FlatRead32((r18 + 760));
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r29_addr_3 = (r29 + r0);
    r3 = MemoryInline::FlatRead8(r29_addr_3);
    if constexpr (KnownRegArgsCpuCall<0x80454F60u>(&func_80454F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80454F60_44F4 = func_80454F60_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80454F60_44F4);
        r4 = static_cast<uint32_t>(regargs_result_80454F60_44F4 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80454F60u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_80455BE0;
}

loc_80455BA0:
{
    r0 = MemoryInline::FlatRead16((r18 + 768));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r18 + 772), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r18 + 774));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead32((r18 + 760));
    r3 = MemoryInline::FlatRead8((r3 + 10));
    r0 = MemoryInline::FlatRead8((r18 + 785));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    addr_lhax_80455BBC_loc_0 = (r30 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_80455BBC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 * r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite16((r18 + 774), static_cast<uint16_t>(r0));
    goto loc_80455BE0;
}

loc_80455BD4:
{
    r21_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(31));
    r21 = (r21_rot_4 & 2147483647);
}

loc_80455BDC:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80455BEC;
    }
}

loc_80455BE0:
{
    r22 = (r22 + 1);
}

loc_80455BE8:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(16))) {
        goto loc_80455960;
    }
}

loc_80455BEC:
{
    r3 = MemoryInline::FlatRead32((r18 + 760));
    r0 = MemoryInline::FlatRead8((r3 + 11));
}

loc_80455BF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80455C80;
    }
}

loc_80455BFC:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80455C04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80455C80;
    }
}

loc_80455C08:
{
    r3 = (r18 + 600);
    r4 = 0;
    r5 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead32((r18 + 760));
    r3 = (r18 + 600);
    r4 = MemoryInline::FlatRead32(r5);
    r5 = MemoryInline::FlatRead8((r5 + 11));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r18 + 760));
    r0 = MemoryInline::FlatRead8((r3 + 11));
    r3 = (r18 + r0);
    MemoryInline::FlatWrite8((r3 + 600), static_cast<uint8_t>(r31));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r19)));
}

loc_80455C44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80455C60;
    }
}

loc_80455C48:
{
    r0 = MemoryInline::FlatRead8((r18 + 785));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    addr_lhax_80455C50_loc_0 = (r30 + r0);
    r3 = MemoryInline::FlatRead16(addr_lhax_80455C50_loc_0);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = r3;
    if constexpr (KnownRegArgsCpuCall<0x8005C868u>(&func_8005C868)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8005C868_5320 = func_8005C868_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C868_5320);
        r4 = static_cast<uint32_t>(regargs_result_8005C868_5320 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005C868u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80455C64;
}

loc_80455C60:
{
    if constexpr (KnownRegArgsCpuCall<0x80454F78u>(&func_80454F78)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80454F78_55B6 = func_80454F78_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80454F78_55B6);
        r4 = static_cast<uint32_t>(regargs_result_80454F78_55B6 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80454F78u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80455C64:
{
    r3 = MemoryInline::FlatRead16((r18 + 772));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r18 + 774));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = 0;
    r6 = (r18 + 600);
    ctx->lr = 0x80455C78u;
    if constexpr (KnownRegArgsCpuCall<0x80454F84u>(&func_80454F84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80454F84_59ED = func_80454F84_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80454F84_59ED);
        r4 = static_cast<uint32_t>(regargs_result_80454F84_59ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80454F84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    // inline leaf 0x8005B7A4 (9 guest instruction(s))
}

loc_inl4_0x8005B7A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl4_0x8005B7AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x8005B7B8;
    }
}

loc_inl4_0x8005B7B0:
{
    r3 = 0;
    goto loc_inl4_cont_8005B7A4;
}

loc_inl4_0x8005B7B8:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 20584));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl4_cont_8005B7A4:
{
    // end of inlined leaf 0x8005B7A4
    MemoryInline::FlatWrite16((r18 + 772), static_cast<uint16_t>(r3));
}

loc_80455C80:
{
    r3 = MemoryInline::FlatRead32((r18 + 760));
    r0 = (r3 + 12);
    MemoryInline::FlatWrite32((r18 + 760), r0);
    r23 = (r23 + 1);
}

loc_80455C94:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(30))) {
        goto loc_8045593C;
    }
}

loc_80455C98:
{
    r0 = 120;
    addr_psqx_80455C9C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80455C9C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r0 = 104;
    addr_psqx_80455CA8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80455CA8_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r11 = (r1 + 96);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    ctx->gpr[18] = r18_entry;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804558C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804558C0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804558C0 func_804558C0 preserves=true fpr_mask=0x00000000
