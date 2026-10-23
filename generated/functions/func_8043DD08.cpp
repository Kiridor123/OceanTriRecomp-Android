#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AD4E0(CpuContext* ctx);
extern "C" uint64_t func_803AD4E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803BE91C(CpuContext* ctx);
extern "C" uint64_t func_803BE91C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_803BEC54(CpuContext* ctx);
extern "C" uint64_t func_803BEC54_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8043DB60(CpuContext* ctx);
extern "C" uint64_t func_8043DB60_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8043DBFC(CpuContext* ctx);
extern "C" uint64_t func_8043DBFC_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80451350(CpuContext* ctx);
extern "C" uint64_t func_80451350_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80454B10(CpuContext* ctx);
extern "C" uint32_t func_80454B10_ra148_1e_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8043DD08_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8043DD08;

loc_8043DD08:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r26 = r3;
    r5 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r5));
    r4 = 0x80660000u;
    r4 = (r4 + -19148);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 12), 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r4 + 12), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r4 + 16), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 13), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r4 + 18), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 14), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r4 + 20), r5);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r4 + 22), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r4 + 24), r5);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r4 + 26), r5);
    }
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r4 + 28), static_cast<uint16_t>(r5));
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0 = MemoryInline::FlatRead8((r4 + 2222));
}

loc_8043DD74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8043DD8C;
    }
}

loc_8043DD78:
{
    r3 = 0;
    // inline leaf 0x8043D1D0 (5 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x806E0000u;
    r3 = (r3 + -31568);
    MemoryInline::FlatWriteRam16((r3 + 78), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8043D1D0
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 80), static_cast<uint8_t>(r0));
    goto loc_8043DD90;
}

loc_8043DD8C:
{
    MemoryInline::FlatWrite8((r3 + 80), static_cast<uint8_t>(r5));
}

loc_8043DD90:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2319));
}

loc_8043DDA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8043E11C;
    }
}

loc_8043DDA4:
{
    r0 = MemoryInline::FlatRead8((r3 + 2223));
}

loc_8043DDAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8043DDC0;
    }
}

loc_8043DDB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 4), static_cast<uint8_t>(r0));
    r27 = 1;
    goto loc_8043DDCC;
}

loc_8043DDC0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 4), static_cast<uint8_t>(r0));
    r27 = 2;
}

loc_8043DDCC:
{
    r0 = 7;
    MemoryInline::FlatWrite16((r26 + 8), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 10), static_cast<uint16_t>(r0));
    r28 = 0;
    r29 = (r26 + 20);
    r31 = r29;
    r3 = 0x80660000u;
    r30 = (r3 + -21920);
    r23 = 1;
    r24 = r30;
    r25 = 2;
    goto loc_8043DF4C;
}

loc_8043DE00:
{
    r3 = r26;
    r4 = r31;
    r5 = (r28 & 255);
    ctx->lr = 0x8043DE10u;
    if constexpr (KnownRegArgsCpuCall<0x8043DB60u>(&func_8043DB60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8043DB60_1C3E = func_8043DB60_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043DB60_1C3E);
        r4 = static_cast<uint32_t>(regargs_result_8043DB60_1C3E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8043DB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r28;
    // inline leaf 0x8004D1B0 (12 guest instruction(s))
}

loc_inl2_0x8004D1B0:
{
}

loc_inl2_0x8004D1B4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl2_0x8004D1C0;
    }
}

loc_inl2_0x8004D1B8:
{
    r3 = 0;
    goto loc_inl2_cont_8004D1B0;
}

loc_inl2_0x8004D1C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_inl2_0x8004D1C4:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r3 = 0x80670000u;
    r0 = (r3 + -13664);
    r3 = (r0 + r4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8004D1D8:
{
    r3 = 0;
    goto loc_inl2_cont_8004D1B0;
}

loc_inl2_return:
{
}

loc_inl2_cont_8004D1B0:
{
    // end of inlined leaf 0x8004D1B0
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r3 = (r28 & 255);
    r4 = 7;
    ctx->lr = 0x8043DE28u;
    if constexpr (KnownRegArgsCpuCall<0x803BEC54u>(&func_803BEC54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BEC54_2649 = func_803BEC54_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BEC54_2649);
        r4 = static_cast<uint32_t>(regargs_result_803BEC54_2649 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BEC54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r31 + 13), static_cast<uint8_t>(r3));
    r4 = MemoryInline::FlatRead16((r26 + 8));
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = MemoryInline::FlatRead16((r3 + 188));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r26 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 4));
}

loc_8043DE48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8043DE58;
    }
}

loc_8043DE4C:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r5 = (r3 + 108);
    goto loc_8043DE60;
}

loc_8043DE58:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r5 = (r3 + 148);
}

loc_8043DE60:
{
    r4 = 0;
    ctr = r25;
}

loc_8043DE68:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_8043DE70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043DE88;
    }
}

loc_8043DE74:
{
    r3 = MemoryInline::FlatRead16((r26 + 10));
    r0 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r4));
    r0 = (r0 & 65535);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r26 + 10), static_cast<uint16_t>(r0));
}

loc_8043DE88:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8043DE94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043DEAC;
    }
}

loc_8043DE98:
{
    r3 = MemoryInline::FlatRead16((r26 + 10));
    r0 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r4));
    r0 = (r0 & 65535);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r26 + 10), static_cast<uint16_t>(r0));
}

loc_8043DEAC:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 8));
}

loc_8043DEB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043DED0;
    }
}

loc_8043DEBC:
{
    r3 = MemoryInline::FlatRead16((r26 + 10));
    r0 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r4));
    r0 = (r0 & 65535);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r26 + 10), static_cast<uint16_t>(r0));
}

loc_8043DED0:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8043DEDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043DEF4;
    }
}

loc_8043DEE0:
{
    r3 = MemoryInline::FlatRead16((r26 + 10));
    r0 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r4));
    r0 = (r0 & 65535);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r26 + 10), static_cast<uint16_t>(r0));
}

loc_8043DEF4:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_8043DF00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043DF18;
    }
}

loc_8043DF04:
{
    r3 = MemoryInline::FlatRead16((r26 + 10));
    r0 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r4));
    r0 = (r0 & 65535);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r26 + 10), static_cast<uint16_t>(r0));
}

loc_8043DF18:
{
    r5 = (r5 + 20);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8043DE68;
    }
}

loc_8043DF24:
{
    r0 = MemoryInline::FlatRead8((r30 + 2204));
}

loc_8043DF2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8043DF40;
    }
}

loc_8043DF30:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 2128), static_cast<uint8_t>(r23));
}

loc_8043DF40:
{
    r31 = (r31 + 24);
    r30 = (r30 + 1);
    r28 = (r28 + 1);
}

loc_8043DF4C:
{
}

loc_8043DF50:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r27))) {
        goto loc_8043DE00;
    }
}

loc_8043DF54:
{
    r3 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8043DF5C:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8043E088;
    }
}

loc_8043DF60:
{
    r5 = (r27 + -8);
}

loc_8043DF68:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(8))) {
        goto loc_8043E050;
    }
}

loc_8043DF6C:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8043DF88;
    }
}

loc_8043DF74:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_8043DF80:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(r0))) {
        goto loc_8043DF88;
    }
}

loc_8043DF84:
{
    r6 = 1;
}

loc_8043DF88:
{
}

loc_8043DF8C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8043E050;
    }
}

loc_8043DF90:
{
    r0 = (r5 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8043DFA0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8043E050;
    }
}

loc_8043DFA4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 20), 0, 172u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r29 + 20));
    r4 = MemoryInline::FlatRead16((r5 + 188));
    guest_range_4 = MemoryInline::ResolveRangeHost((r26 + 8), 0, 2u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_4, 0u, (r26 + 8));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r5 + 188), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r29 + 44));
    r4 = MemoryInline::FlatRead16((r5 + 188));
    r0 = MemoryInline::ReadResolved16(guest_range_4, 0u, (r26 + 8));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r5 + 188), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r29 + 68));
    r4 = MemoryInline::FlatRead16((r5 + 188));
    r0 = MemoryInline::ReadResolved16(guest_range_4, 0u, (r26 + 8));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r5 + 188), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r29 + 92));
    r4 = MemoryInline::FlatRead16((r5 + 188));
    r0 = MemoryInline::ReadResolved16(guest_range_4, 0u, (r26 + 8));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r5 + 188), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r29 + 116));
    r4 = MemoryInline::FlatRead16((r5 + 188));
    r0 = MemoryInline::ReadResolved16(guest_range_4, 0u, (r26 + 8));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r5 + 188), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_2, 120u, (r29 + 140));
    r4 = MemoryInline::FlatRead16((r5 + 188));
    r0 = MemoryInline::ReadResolved16(guest_range_4, 0u, (r26 + 8));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r5 + 188), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_2, 144u, (r29 + 164));
    r4 = MemoryInline::FlatRead16((r5 + 188));
    r0 = MemoryInline::ReadResolved16(guest_range_4, 0u, (r26 + 8));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r5 + 188), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved32(guest_range_2, 168u, (r29 + 188));
    r4 = MemoryInline::FlatRead16((r5 + 188));
    r0 = MemoryInline::ReadResolved16(guest_range_4, 0u, (r26 + 8));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r5 + 188), static_cast<uint16_t>(r0));
    r29 = (r29 + 192);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8043DFA4;
    }
}

loc_8043E050:
{
    r0 = (r3 * 24);
    r4 = (r26 + r0);
    r5 = (r4 + 20);
    r0 = (r27 - r3);
    ctr = r0;
}

loc_8043E068:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r27))) {
        goto loc_8043E088;
    }
}

loc_8043E06C:
{
    r4 = MemoryInline::FlatRead32((r5 + 20));
    r3 = MemoryInline::FlatRead16((r4 + 188));
    r0 = MemoryInline::FlatRead16((r26 + 8));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r4 + 188), static_cast<uint16_t>(r0));
    r5 = (r5 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8043E06C;
    }
}

loc_8043E088:
{
    r0 = MemoryInline::FlatRead16((r26 + 78));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8043E090:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8043E0A0;
    }
}

loc_8043E094:
{
}

loc_8043E098:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8043E0D4;
    }
}

loc_8043E09C:
{
    goto loc_8043E104;
}

loc_8043E0A0:
{
    r3 = r26;
    r4 = 1;
    ctx->lr = 0x8043E0ACu;
    if constexpr (KnownRegArgsCpuCall<0x8043DBFCu>(&func_8043DBFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8043DBFC_4BEA = func_8043DBFC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043DBFC_4BEA);
        r4 = static_cast<uint32_t>(regargs_result_8043DBFC_4BEA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8043DBFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead32((r26 + 12));
    r0 = MemoryInline::FlatRead8((r26 + 26));
    r3 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r0));
    r0 = (r3 * r0);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r26 + 24), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r26 + 25), static_cast<uint8_t>(r0));
    goto loc_8043E110;
}

loc_8043E0D4:
{
    r3 = r26;
    r4 = 1;
    ctx->lr = 0x8043E0E0u;
    if constexpr (KnownRegArgsCpuCall<0x8043DBFCu>(&func_8043DBFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8043DBFC_5445 = func_8043DBFC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043DBFC_5445);
        r4 = static_cast<uint32_t>(regargs_result_8043DBFC_5445 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8043DBFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r26 + 12));
    r4 = (r0 * 944);
    r3 = 0x80600000u;
    r0 = (r3 + 20696);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r26 + 16), r0);
    r0 = 200;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_8043E110;
}

loc_8043E104:
{
    r3 = r26;
    r4 = 0;
    ctx->lr = 0x8043E110u;
    if constexpr (KnownRegArgsCpuCall<0x8043DBFCu>(&func_8043DBFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8043DBFC_5C26 = func_8043DBFC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043DBFC_5C26);
        r4 = static_cast<uint32_t>(regargs_result_8043DBFC_5C26 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8043DBFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8043E110:
{
    r3 = 0;
    ctx->lr = 0x8043E118u;
    if constexpr (KnownRegArgsCpuCall<0x803BE91Cu>(&func_803BE91C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803BE91C_6282 = func_803BE91C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803BE91C_6282);
        r4 = static_cast<uint32_t>(regargs_result_803BE91C_6282 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BE91Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8043E184;
}

loc_8043E11C:
{
    r3 = 0;
    ctx->lr = 0x8043E124u;
    if constexpr (KnownRegArgsCpuCall<0x803AD4E0u>(&func_803AD4E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803AD4E0_6794 = func_803AD4E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803AD4E0_6794);
        r4 = static_cast<uint32_t>(regargs_result_803AD4E0_6794 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
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
        InvokeDirectCpu<0x803AD4E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
    r3 = MemoryInline::FlatRead32((r3 + 60));
    if constexpr (KnownRegArgsCpuCall<0x80454B10u>(&func_80454B10)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80454B10_717C = func_80454B10_ra148_1e_10_0(ctx, r3, r6, r8, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80454B10_717C;
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80454B10u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = 2;
    MemoryInline::FlatWrite8((r26 + 4), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x80451350u>(&func_80451350)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80451350_76B6 = func_80451350_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80451350_76B6);
        r4 = static_cast<uint32_t>(regargs_result_80451350_76B6 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80451350u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r0));
    r24 = 0;
    r23 = (r26 + 20);
    goto loc_8043E164;
}

loc_8043E14C:
{
    r3 = r26;
    r4 = r23;
    r5 = (r24 & 255);
    ctx->lr = 0x8043E15Cu;
    if constexpr (KnownRegArgsCpuCall<0x8043DB60u>(&func_8043DB60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8043DB60_7ADF = func_8043DB60_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043DB60_7ADF);
        r4 = static_cast<uint32_t>(regargs_result_8043DB60_7ADF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8043DB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r23 = (r23 + 24);
    r24 = (r24 + 1);
}

loc_8043E164:
{
    r0 = MemoryInline::FlatRead8((r26 + 5));
}

loc_8043E16C:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r0))) {
        goto loc_8043E14C;
    }
}

loc_8043E170:
{
    r3 = r26;
    r4 = 1;
    ctx->lr = 0x8043E17Cu;
    if constexpr (KnownRegArgsCpuCall<0x8043DBFCu>(&func_8043DBFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8043DBFC_828A = func_8043DBFC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043DBFC_828A);
        r4 = static_cast<uint32_t>(regargs_result_8043DBFC_828A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8043DBFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 200;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
}

loc_8043E184:
{
    r0 = MemoryInline::FlatRead16((r26 + 78));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8043E18C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8043E198;
    }
}

loc_8043E190:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r26 + 12), r0);
}

loc_8043E198:
{
    r25 = 0x806E0000u;
    r3 = (r25 + -32080);
    r4 = 0;
    r5 = 256;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r25 + -32080);
    r3 = (r3 + 256);
    r4 = 0;
    r5 = 256;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043DD08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043DD08_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x007FFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8043DD08 func_8043DD08 preserves=true fpr_mask=0x00000000
