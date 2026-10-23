#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804575D8(CpuContext* ctx);
extern "C" uint64_t func_804575D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);
extern "C" void func_8051CE24(CpuContext* ctx);
extern "C" uint64_t func_8051CE24_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8051E528(CpuContext* ctx);
extern "C" uint64_t func_8051E528_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8051F5E0(CpuContext* ctx);
extern "C" uint64_t func_8051F5E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8051FE44(CpuContext* ctx);
extern "C" uint64_t func_8051FE44_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8051F1B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r15_addic_src_0 = 0;
    uint32_t r15_addic_src_1 = 0;
    uint32_t r15_addic_src_2 = 0;
    uint32_t r15_addic_src_3 = 0;
    uint32_t r17_ca_0 = 0;
    uint32_t r17_ca_1 = 0;
    uint32_t r17_ca_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_10 = 0;
    uint32_t r3_ca_11 = 0;
    uint32_t r3_ca_12 = 0;
    uint32_t r3_ca_13 = 0;
    uint32_t r3_ca_14 = 0;
    uint32_t r3_ca_15 = 0;
    uint32_t r3_ca_16 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_ca_8 = 0;
    uint32_t r3_ca_9 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_10 = 0;
    uint32_t r3_not_11 = 0;
    uint32_t r3_not_12 = 0;
    uint32_t r3_not_13 = 0;
    uint32_t r3_not_14 = 0;
    uint32_t r3_not_15 = 0;
    uint32_t r3_not_16 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_not_6 = 0;
    uint32_t r3_not_7 = 0;
    uint32_t r3_not_8 = 0;
    uint32_t r3_not_9 = 0;
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
    uint32_t r4_subfc_sub_0 = 0;
    uint32_t r4_subfc_sub_1 = 0;
    uint32_t r4_subfc_sub_2 = 0;
    uint32_t r4_subfc_sub_3 = 0;
    uint32_t r4_subfc_sub_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r6_ca_5 = 0;
    uint32_t r6_ca_6 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_not_2 = 0;
    uint32_t r6_not_3 = 0;
    uint32_t r6_not_4 = 0;
    uint32_t r6_not_5 = 0;
    uint32_t r6_not_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r14_entry = r14;
    const uint32_t r15_entry = r15;
    const uint32_t r16_entry = r16;
    const uint32_t r17_entry = r17;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8051F1B8;

loc_8051F1B8:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
}

loc_8051F1D0:
{
    r14 = r3;
    r16 = 0;
    r17 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051F210;
    }
}

loc_8051F1E0:
{
    ctx->lr = 0x8051F1E4u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D5400_1CA2 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_1CA2);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_1CA2 >> 32);
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
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r6 = 0x80000000u;
    r5 = 274857984;
    r6 = MemoryInline::FlatRead32((r6 + 248));
    r7 = (r5 + 19923);
    r0 = 0;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r5 = (r5_rot_1 & 1073741823);
    r5 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r5)) >> 32));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(26));
    r5 = (r5_rot_2 & 67108863);
    r5 = (r14 * r5);
    r16 = (r5 + r4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r17_ca_1 = (xer >> 29) & 1u;
    r17 = (r0 + r3);
    r17 = (r17 + r17_ca_1);
}

loc_8051F210:
{
    r3 = 0x80770000u;
    r15 = 4;
    r20 = 0x80000000u;
    r21 = 274857984;
    r25 = (r3 + -28416);
    r22 = 0;
    r23 = 100;
    r24 = 0x80630000u;
    r19 = -1;
    r31 = 0x80630000u;
    r14 = 2;
}

loc_8051F23C:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead8((r13 + -13640));
    r26 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8051F24C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051F274;
    }
}

loc_8051F250:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051F258;
    }
}

loc_8051F254:
{
    goto loc_8051F264;
}

loc_8051F258:
{
}

loc_8051F25C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_8051F264;
    }
}

loc_8051F260:
{
    goto loc_8051F26C;
}

loc_8051F264:
{
    r18 = -39;
    goto loc_8051F4F4;
}

loc_8051F26C:
{
    r18 = -7;
    goto loc_8051F4F4;
}

loc_8051F274:
{
    r0 = MemoryInline::FlatRead32((r25 + 8));
}

loc_8051F27C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(-2))) {
        goto loc_8051F288;
    }
}

loc_8051F280:
{
    r18 = -10;
    goto loc_8051F4F4;
}

loc_8051F288:
{
    // inline leaf 0x804D3FF0 (3 guest instruction(s))
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x804D3FF0
}

loc_8051F290:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8051F29C;
    }
}

loc_8051F294:
{
    r18 = 0x80000000u;
    goto loc_8051F4F4;
}

loc_8051F29C:
{
    MemoryInline::FlatWriteRam32((r25 + 8), r19);
    r3 = r26;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r26 = (r22 * r23);
    r27 = (r21 + 19923);
    r18 = (r16 | r17);
    r29 = (r17 ^ -2147483648);
}

loc_8051F2B8:
{
    ctx->lr = 0x8051F2BCu;
    if constexpr (KnownRegArgsCpuCall<0x8051CE24u>(&func_8051CE24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8051CE24_30F5 = func_8051CE24_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8051CE24_30F5);
        r4 = static_cast<uint32_t>(regargs_result_8051CE24_30F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8051CE24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
}

loc_8051F2C0:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-8))) {
        goto loc_8051F2D0;
    }
}

loc_8051F2C8:
{
}

loc_8051F2CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8051F32C;
    }
}

loc_8051F2D0:
{
    r0 = MemoryInline::FlatRead32((r20 + 248));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_10 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r27) * static_cast<uint64_t>(r0)) >> 32));
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r3 = (r3_rot_10 & 67108863);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r23)) >> 32));
    r4 = (r3 * 100);
    r3 = (r0 + r26);
    ctx->lr = 0x8051F2F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x804D5320u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8051F2F4:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_8051F2B8;
    }
}

loc_8051F2F8:
{
    ctx->lr = 0x8051F2FCu;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D5400_4577 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_4577);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_4577 >> 32);
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
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 ^ -2147483648);
    r0 = (r16 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r16) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_10 = ~(r3);
    r3_ca_10 = (xer >> 29) & 1u;
    r3 = (r3_not_10 + r29);
    r3 = (r3 + r3_ca_10);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_10)) + static_cast<uint64_t>(static_cast<uint32_t>(r29)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_10)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_11 = ~(r29);
    r3_ca_11 = (xer >> 29) & 1u;
    r3 = (r3_not_11 + r29);
    r3 = (r3 + r3_ca_11);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051F2B8;
    }
}

loc_8051F314:
{
}

loc_8051F318:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(1))) {
        goto loc_8051F324;
    }
}

loc_8051F31C:
{
    r18 = -121;
    goto loc_8051F4BC;
}

loc_8051F324:
{
    r18 = 0x80000000u;
    goto loc_8051F4BC;
}

loc_8051F32C:
{
}

loc_8051F330:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8051F33C;
    }
}

loc_8051F334:
{
    r18 = 0x80000000u;
    goto loc_8051F4BC;
}

loc_8051F33C:
{
}

loc_8051F340:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8051F34C;
    }
}

loc_8051F344:
{
    r18 = -45;
    goto loc_8051F4BC;
}

loc_8051F34C:
{
    r26 = (r22 * r23);
    r27 = (r21 + 19923);
    r18 = (r16 | r17);
    r28 = (r17 ^ -2147483648);
}

loc_8051F35C:
{
    r3 = (r24 + 6968);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x804BC500u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8051F36C:
{
    MemoryInline::FlatWriteRam32((r25 + 12), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-6))) {
        goto loc_8051F3C0;
    }
}

loc_8051F374:
{
    r0 = MemoryInline::FlatRead32((r20 + 248));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r27) * static_cast<uint64_t>(r0)) >> 32));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r3 = (r3_rot_6 & 67108863);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r23)) >> 32));
    r4 = (r3 * 100);
    r3 = (r0 + r26);
    ctx->lr = 0x8051F394u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x804D5320u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8051F398:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_8051F35C;
    }
}

loc_8051F39C:
{
    ctx->lr = 0x8051F3A0u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D5400_582E = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_582E);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_582E >> 32);
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
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 ^ -2147483648);
    r0 = (r16 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r16) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_4 = ~(r3);
    r3_ca_4 = (xer >> 29) & 1u;
    r3 = (r3_not_4 + r28);
    r3 = (r3 + r3_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r28)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_5 = ~(r28);
    r3_ca_5 = (xer >> 29) & 1u;
    r3 = (r3_not_5 + r28);
    r3 = (r3 + r3_ca_5);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051F35C;
    }
}

loc_8051F3B8:
{
    r18 = 0x80000000u;
    goto loc_8051F4BC;
}

loc_8051F3C0:
{
}

loc_8051F3C4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8051F3D0;
    }
}

loc_8051F3C8:
{
    r18 = 0x80000000u;
    goto loc_8051F4BC;
}

loc_8051F3D0:
{
    r28 = (r22 * r23);
    r18 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r18);
    r27 = (r21 + 19923);
    r29 = (r16 | r17);
    r30 = (r17 ^ -2147483648);
}

loc_8051F3E8:
{
    r3 = (r1 + 8);
    ctx->lr = 0x8051F3F0u;
    if constexpr (KnownRegArgsCpuCall<0x8051E528u>(&func_8051E528)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8051E528_6364 = func_8051E528_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8051E528_6364);
        r4 = static_cast<uint32_t>(regargs_result_8051E528_6364 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8051E528u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
}

loc_8051F3F4:
{
    r26 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-29))) {
        goto loc_8051F444;
    }
}

loc_8051F3FC:
{
    r0 = MemoryInline::FlatRead32((r20 + 248));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_6 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r27) * static_cast<uint64_t>(r0)) >> 32));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r3 = (r3_rot_8 & 67108863);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r23)) >> 32));
    r4 = (r3 * 100);
    r3 = (r0 + r28);
    ctx->lr = 0x8051F41Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x804D5320u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8051F420:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8051F3E8;
    }
}

loc_8051F424:
{
    ctx->lr = 0x8051F428u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D5400_76F9 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_76F9);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_76F9 >> 32);
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
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 ^ -2147483648);
    r0 = (r16 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r16) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_not_7 = ~(r3);
    r3_ca_7 = (xer >> 29) & 1u;
    r3 = (r3_not_7 + r30);
    r3 = (r3 + r3_ca_7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_7)) + static_cast<uint64_t>(static_cast<uint32_t>(r30)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_7)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_not_8 = ~(r30);
    r3_ca_8 = (xer >> 29) & 1u;
    r3 = (r3_not_8 + r30);
    r3 = (r3 + r3_ca_8);
    r3 = (0 - r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051F3E8;
    }
}

loc_8051F440:
{
    r18 = 0x80000000u;
}

loc_8051F444:
{
}

loc_8051F448:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8051F498;
    }
}

loc_8051F44C:
{
    r0 = (r26 + 33);
    r4 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8051F458:
{
    r18 = -28;
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(33))) {
        goto loc_8051F498;
    }
}

loc_8051F460:
{
    r3 = (r31 + 6984);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8051F484u:
        goto loc_8051F484;
        break;
    case 0x8051F498u:
        goto loc_8051F498;
        break;
    case 0x8051F494u:
        goto loc_8051F494;
        break;
    case 0x8051F47Cu:
        goto loc_8051F47C;
        break;
    case 0x8051F48Cu:
        goto loc_8051F48C;
        break;
    case 0x8051F474u:
        goto loc_8051F474;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8051F474:
{
    r18 = 0;
    goto loc_8051F498;
}

loc_8051F47C:
{
    r18 = -48;
    goto loc_8051F498;
}

loc_8051F484:
{
    r18 = r4;
    goto loc_8051F498;
}

loc_8051F48C:
{
    r18 = 0x80000000u;
    goto loc_8051F498;
}

loc_8051F494:
{
    r18 = -26;
}

loc_8051F498:
{
}

loc_8051F49C:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_8051F4BC;
    }
}

loc_8051F4A0:
{
    r3 = MemoryInline::FlatRead32((r25 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x804BC810u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8051F4AC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8051F4B8;
    }
}

loc_8051F4B0:
{
    r18 = 0x80000000u;
    goto loc_8051F4BC;
}

loc_8051F4B8:
{
    MemoryInline::FlatWriteRam32((r25 + 12), r19);
}

loc_8051F4BC:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_12 & 1);
    // end of inlined leaf 0x804D12F0
}

loc_8051F4C4:
{
    r26 = r3;
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8051F4D8;
    }
}

loc_8051F4CC:
{
    MemoryInline::FlatWrite8((r13 + -13640), static_cast<uint8_t>(r14));
    MemoryInline::FlatWriteRam32((r25 + 8), r22);
    goto loc_8051F4F4;
}

loc_8051F4D8:
{
    r3 = (r18 + -2147483648);
    r0 = 1;
}

loc_8051F4E4:
{
    MemoryInline::FlatWrite8((r13 + -13640), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(0))) {
        goto loc_8051F4F4;
    }
}

loc_8051F4EC:
{
    r0 = -2;
    MemoryInline::FlatWriteRam32((r25 + 8), r0);
}

loc_8051F4F4:
{
    // inline leaf 0x804D3FF0 (3 guest instruction(s))
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x804D3FF0
}

loc_8051F4FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051F508;
    }
}

loc_8051F500:
{
    MemoryInline::FlatWrite32((r3 + 780), r18);
    goto loc_8051F50C;
}

loc_8051F508:
{
    MemoryInline::FlatWrite32((r13 + -13636), r18);
}

loc_8051F50C:
{
    r3 = r26;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl6_0x804D1330:
{
}

loc_inl6_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x804D1344;
    }
}

loc_inl6_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl6_0x804D1348;
}

loc_inl6_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl6_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_14 & 1);
}

loc_inl6_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_8051F518:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8051F59C;
    }
}

loc_8051F51C:
{
    r0 = (r16 | r17);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F534;
    }
}

loc_8051F524:
{
    ctx->lr = 0x8051F528u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D5400_9471 = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_9471);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_9471 >> 32);
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
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4_subfc_sub_2 = r4;
    r4 = (r16 - r4_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r16) >= static_cast<uint32_t>(r4_subfc_sub_2) ? 1u : 0u) << 29);
    r3_not_14 = ~(r3);
    r3_ca_14 = (xer >> 29) & 1u;
    r3 = (r3_not_14 + r17);
    r3 = (r3 + r3_ca_14);
    goto loc_8051F53C;
}

loc_8051F534:
{
    r4 = 0;
    r3 = r4;
}

loc_8051F53C:
{
    r0 = (r16 | r17);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051F568;
    }
}

loc_8051F544:
{
    r0 = (r22 ^ -2147483648);
    r6 = (r3 ^ -2147483648);
    r5 = (r22 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r22) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r6_not_2 = ~(r6);
    r6_ca_2 = (xer >> 29) & 1u;
    r6 = (r6_not_2 + r0);
    r6 = (r6 + r6_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_3 = ~(r0);
    r6_ca_3 = (xer >> 29) & 1u;
    r6 = (r6_not_3 + r0);
    r6 = (r6 + r6_ca_3);
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8051F568;
    }
}

loc_8051F560:
{
    r18 = -76;
    goto loc_8051F590;
}

loc_8051F568:
{
    r0 = MemoryInline::FlatRead32((r20 + 248));
    r6 = (r21 + 19923);
    r5 = 0;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_13 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_2 & 67108863);
    if constexpr (KnownRegArgsCpuCall<0x804575D8u>(&func_804575D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804575D8_A03D = func_804575D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804575D8_A03D);
        r4 = static_cast<uint32_t>(regargs_result_804575D8_A03D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804575D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r4;
    ctx->lr = 0x8051F58Cu;
    if constexpr (KnownRegArgsCpuCall<0x8051FE44u>(&func_8051FE44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8051FE44_A670 = func_8051FE44_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8051FE44_A670);
        r4 = static_cast<uint32_t>(regargs_result_8051FE44_A670 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
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
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
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
        InvokeDirectCpu<0x8051FE44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
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
    r18 = r3;
}

loc_8051F590:
{
}

loc_8051F594:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_8051F59C;
    }
}

loc_8051F598:
{
    ctx->lr = 0x8051F59Cu;
    if constexpr (KnownRegArgsCpuCall<0x8051F5E0u>(&func_8051F5E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8051F5E0_B3E3 = func_8051F5E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8051F5E0_B3E3);
        r4 = static_cast<uint32_t>(regargs_result_8051F5E0_B3E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x8051F5E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
}

loc_8051F59C:
{
    // inline leaf 0x804D3FF0 (3 guest instruction(s))
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x804D3FF0
}

loc_8051F5A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051F5B0;
    }
}

loc_8051F5A8:
{
    MemoryInline::FlatWrite32((r3 + 780), r18);
    goto loc_8051F5B4;
}

loc_8051F5B0:
{
    MemoryInline::FlatWrite32((r13 + -13636), r18);
}

loc_8051F5B4:
{
}

loc_8051F5B8:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(-112))) {
        goto loc_8051F5C4;
    }
}

loc_8051F5BC:
{
    r15_addic_src_2 = r15;
    r15 = (r15_addic_src_2 + -1);
}

loc_8051F5C0:
{
    if ((static_cast<int32_t>(r15) >= static_cast<int32_t>(0))) {
        goto loc_8051F23C;
    }
}

loc_8051F5C4:
{
    r11 = (r1 + 96);
    r3 = r18;
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->xer = xer;
    ctx->gpr[14] = r14_entry;
    ctx->gpr[15] = r15_entry;
    ctx->gpr[16] = r16_entry;
    ctx->gpr[17] = r17_entry;
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

extern "C" void func_8051F1B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051F1B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00003FFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051F1B8 func_8051F1B8 preserves=true fpr_mask=0x00000000
