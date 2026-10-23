#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E0B38(CpuContext* ctx);
extern "C" uint64_t func_802E0B38_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80396CC0(CpuContext* ctx);
extern "C" uint32_t func_80396CC0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80398A48(CpuContext* ctx);
extern "C" uint64_t func_80398A48_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8039ABCC(CpuContext* ctx);
extern "C" uint64_t func_8039ABCC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8039AC7C(CpuContext* ctx);
extern "C" uint64_t func_8039AC7C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8039AD2C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r30_rot_0 = 0;
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8039AD2C;

loc_8039AD2C:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r17 = r3;
    r16 = r4;
    r18 = r5;
    r27 = 0;
    r26 = 0;
    r20 = 0;
    r19 = 0;
    r3 = (r1 + 20);
    r4 = 4619;
    r5 = MemoryInline::FlatRead8((r17 + 12326));
    r5 = (r5 & 65535);
    r6 = (r1 + 16);
    ctx->lr = 0x8039AD74u;
    if constexpr (KnownRegArgsCpuCall<0x802E0B38u>(&func_802E0B38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->cr = cr;
        const auto regargs_result_802E0B38_FAA = func_802E0B38_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0B38_FAA);
        r4 = static_cast<uint32_t>(regargs_result_802E0B38_FAA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E0B38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        cr = ctx->cr;
    }
    r21 = MemoryInline::FlatRead8((r17 + 12332));
    r0 = (r16 & 255);
}

loc_8039AD80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8039ADB4;
    }
}

loc_8039AD84:
{
}

loc_8039AD88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8039ADC4;
    }
}

loc_8039AD8C:
{
    r3 = r17;
    ctx->lr = 0x8039AD94u;
    if constexpr (KnownRegArgsCpuCall<0x80396CC0u>(&func_80396CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80396CC0_185B = func_80396CC0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80396CC0_185B;
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
        InvokeDirectCpu<0x80396CC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_8039AD98:
{
    r3 = 0x805F0000u;
    r29 = (r3 + 7556);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8039ADAC;
    }
}

loc_8039ADA4:
{
    r3 = 0x805F0000u;
    r29 = (r3 + 7568);
}

loc_8039ADAC:
{
    r27 = (r17 + 12400);
    goto loc_8039AE10;
}

loc_8039ADB4:
{
    r3 = 0x805F0000u;
    r29 = (r3 + 7568);
    r27 = (r17 + 12592);
    goto loc_8039AE10;
}

loc_8039ADC4:
{
    r3 = 0x805F0000u;
    r29 = (r3 + 7580);
    r0 = MemoryInline::FlatRead8((r17 + 2));
}

loc_8039ADD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039ADE4;
    }
}

loc_8039ADD8:
{
}

loc_8039ADDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8039ADEC;
    }
}

loc_8039ADE0:
{
    goto loc_8039ADF8;
}

loc_8039ADE4:
{
    r19 = 1;
    goto loc_8039ADFC;
}

loc_8039ADEC:
{
    r19 = 2;
    r20 = 1;
    goto loc_8039ADFC;
}

loc_8039ADF8:
{
    r19 = 3;
}

loc_8039ADFC:
{
    r0 = MemoryInline::FlatRead8((r17 + 12337));
}

loc_8039AE04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039AE0C;
    }
}

loc_8039AE08:
{
    r26 = (r17 + 12784);
}

loc_8039AE0C:
{
    r21 = (r21 + -1);
}

loc_8039AE10:
{
    r4 = MemoryInline::FlatRead16((r17 + 12342));
    r3 = 65536;
    r0 = (r3 + -1);
    r0 = (r0 & 65535);
    r3 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r3 | r0);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r30 = (r30_rot_0 & 1);
    r28 = 0;
    r25 = 0;
    r31 = 1;
    r16 = (r21 & 255);
    goto loc_8039AFFC;
}

loc_8039AE44:
{
    r0 = (r25 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r29_addr_2 = (r29 + r0);
    r3 = MemoryInline::FlatRead16(r29_addr_2);
    r4 = (r1 + 12);
    ctx->lr = 0x8039AE58u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_233F = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_233F);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_233F >> 32);
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
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r1 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    r24 = 0;
}

loc_8039AE84:
{
    r4 = MemoryInline::FlatRead16((r1 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r24 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & -32);
    r0 = (r0 - r3);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r22 = 0;
    r21 = 0;
    r23 = 0;
}

loc_8039AEB0:
{
    if ((static_cast<uint32_t>(r18) != static_cast<uint32_t>(1))) {
        goto loc_8039AED4;
    }
}

loc_8039AEB4:
{
    r0 = MemoryInline::FlatRead8((r17 + 12328));
}

loc_8039AEBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8039AED4;
    }
}

loc_8039AEC0:
{
    r3 = MemoryInline::FlatRead8((r17 + 12329));
    r0 = (r25 & 255);
}

loc_8039AECC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8039AED4;
    }
}

loc_8039AED0:
{
    r23 = 1;
}

loc_8039AED4:
{
}

loc_8039AED8:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_8039AF00;
    }
}

loc_8039AEDC:
{
    r3 = MemoryInline::FlatRead8((r17 + 12330));
    r0 = (r24 & 255);
}

loc_8039AEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8039AF00;
    }
}

loc_8039AEEC:
{
    r3 = MemoryInline::FlatRead8((r17 + 12331));
    r0 = (r25 & 255);
}

loc_8039AEF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8039AF00;
    }
}

loc_8039AEFC:
{
    r21 = 1;
}

loc_8039AF00:
{
    r0 = MemoryInline::FlatRead8((r17 + 12337));
}

loc_8039AF08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8039AF44;
    }
}

loc_8039AF0C:
{
}

loc_8039AF10:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(1))) {
        goto loc_8039AF20;
    }
}

loc_8039AF14:
{
}

loc_8039AF18:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(2))) {
        goto loc_8039AF34;
    }
}

loc_8039AF1C:
{
    goto loc_8039AF44;
}

loc_8039AF20:
{
    r3 = r17;
    r4 = (r28 & 65535);
    ctx->lr = 0x8039AF2Cu;
    if constexpr (KnownRegArgsCpuCall<0x80398A48u>(&func_80398A48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80398A48_3331 = func_80398A48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80398A48_3331);
        r4 = static_cast<uint32_t>(regargs_result_80398A48_3331 >> 32);
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
        InvokeDirectCpu<0x80398A48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r27 = r3;
    goto loc_8039AF44;
}

loc_8039AF34:
{
    r3 = r17;
    r4 = (r28 & 65535);
    ctx->lr = 0x8039AF40u;
    if constexpr (KnownRegArgsCpuCall<0x80398A48u>(&func_80398A48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80398A48_3717 = func_80398A48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80398A48_3717);
        r4 = static_cast<uint32_t>(regargs_result_80398A48_3717 >> 32);
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
        InvokeDirectCpu<0x80398A48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r27 = r3;
}

loc_8039AF44:
{
}

loc_8039AF48:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8039AF8C;
    }
}

loc_8039AF4C:
{
    r3 = r17;
    r4 = (r1 + 8);
}

loc_8039AF58:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_8039AF6C;
    }
}

loc_8039AF5C:
{
    r0 = (r28 & 65535);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5 = (r27 + r0);
    goto loc_8039AF70;
}

loc_8039AF6C:
{
    r5 = r27;
}

loc_8039AF70:
{
    r5 = MemoryInline::FlatRead16(r5);
    r6 = r23;
    r7 = 0;
    r8 = r21;
    r9 = r20;
    ctx->lr = 0x8039AF88u;
    if constexpr (KnownRegArgsCpuCall<0x8039ABCCu>(&func_8039ABCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8039ABCC_3DE8 = func_8039ABCC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8039ABCC_3DE8);
        r4 = static_cast<uint32_t>(regargs_result_8039ABCC_3DE8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8039ABCCu>(ctx);
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
    goto loc_8039AFE8;
}

loc_8039AF8C:
{
}

loc_8039AF90:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8039AFE8;
    }
}

loc_8039AF94:
{
    r3 = (r28 & 65535);
    r0 = (r3 & 15);
    r4 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r0 = (static_cast<int32_t>(r3) >> 4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = (r17 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 12344));
    r0 = (r4 & r0);
}

loc_8039AFB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039AFC0;
    }
}

loc_8039AFBC:
{
    r22 = 1;
}

loc_8039AFC0:
{
    r3 = r17;
    r4 = (r1 + 8);
    r0 = (r28 & 65535);
    r0 = (r0 * 12);
    r5 = (r26 + r0);
    r6 = r23;
    r7 = r22;
    r8 = r21;
    r9 = r20;
    ctx->lr = 0x8039AFE8u;
    if constexpr (KnownRegArgsCpuCall<0x8039AC7Cu>(&func_8039AC7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8039AC7C_4A07 = func_8039AC7C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8039AC7C_4A07);
        r4 = static_cast<uint32_t>(regargs_result_8039AC7C_4A07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8039AC7Cu>(ctx);
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
}

loc_8039AFE8:
{
    r28 = (r28 + 1);
    r24 = (r24 + 1);
}

loc_8039AFF4:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(8))) {
        goto loc_8039AE84;
    }
}

loc_8039AFF8:
{
    r25 = (r25 + 1);
}

loc_8039AFFC:
{
    r0 = (r25 & 255);
}

loc_8039B004:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r16))) {
        goto loc_8039AE44;
    }
}

loc_8039B008:
{
    r11 = (r1 + 128);
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8039AD2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8039AD2C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8039AD2C func_8039AD2C preserves=true fpr_mask=0x00000000
