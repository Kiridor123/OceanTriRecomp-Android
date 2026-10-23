#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804F2DB0(CpuContext* ctx);
extern "C" uint64_t func_804F2DB0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804FA160(CpuContext* ctx);
extern "C" void func_804FA160_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804EDF00_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_804EDF00;

loc_804EDF00:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -640), 0, 648u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -640), r1);
    r1 = (r1 + -640);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 644u, (r1 + 644), r0);
    r11 = (r1 + 640);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r5 = 0x80760000u;
}

loc_804EDF1C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r27 = r3;
    r5 = (r5 + -10352);
    r26 = r4;
    r5_addr_0 = (r5 + r0);
    r29 = MemoryInline::FlatRead32(r5_addr_0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_804EE7DC;
    }
}

loc_804EDF34:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r26));
    r0 = 0;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 134217727);
    MemoryInline::FlatWrite32((r29 + 2272), r4);
    MemoryInline::FlatWrite32((r29 + 2236), r0);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804EDF54:
{
    r31 = 42;
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_804EDF60;
    }
}

loc_804EDF5C:
{
    r31 = 20;
}

loc_804EDF60:
{
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r26));
    r0 = MemoryInline::FlatRead32((r29 + 2272));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r4 = (r4_rot_2 & 1);
    r5 = (0 - r4);
    r3 = 0x80630000u;
}

loc_804EDF78:
{
    r4 = 0x80630000u;
    r28 = (r5 & 5996);
}

loc_804EDF80:
{
    r3 = (r3 + -13980);
    r4 = (r4 + -13924);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EDF90;
    }
}

loc_804EDF8C:
{
    r4 = (r13 + -19560);
}

loc_804EDF90:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r0 = MemoryInline::FlatRead8((r29 + 2241));
    r3 = 1;
}

loc_804EDFA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_804EDFAC;
    }
}

loc_804EDFA8:
{
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r27));
}

loc_804EDFAC:
{
    r30 = 0x804F0000u;
    r5 = MemoryInline::FlatRead8((r29 + 2446));
    r27 = (r3 & 255);
    r3 = (r29 + 352);
    r6 = (r30 + -8688);
    r4 = 0;
    ctx->lr = 0x804EDFC8u;
    if constexpr (KnownRegArgsCpuCall<0x804F2DB0u>(&func_804F2DB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        const auto regargs_result_804F2DB0_1EA3 = func_804F2DB0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804F2DB0_1EA3);
        r4 = static_cast<uint32_t>(regargs_result_804F2DB0_1EA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x804F2DB0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 538), static_cast<uint16_t>(r0));
    r0 = 0;
    r12 = (r30 + -8688);
    MemoryInline::FlatWriteRam8((r1 + 516), static_cast<uint8_t>(r0));
    r30 = 26;
    r10 = MemoryInline::FlatRead32((r1 + 520));
    r11 = MemoryInline::FlatRead32((r1 + 516));
    r9 = MemoryInline::FlatRead32((r1 + 524));
    r8 = MemoryInline::FlatRead32((r1 + 528));
    r7 = MemoryInline::FlatRead32((r1 + 532));
    r6 = MemoryInline::FlatRead32((r1 + 536));
    r5 = MemoryInline::FlatRead32((r1 + 540));
    r4 = MemoryInline::FlatRead32((r1 + 544));
    r3 = MemoryInline::FlatRead32((r1 + 548));
    r0 = MemoryInline::FlatRead32((r1 + 552));
    MemoryInline::FlatWriteRam32((r1 + 512), r30);
    MemoryInline::FlatWriteRam32((r1 + 556), r12);
    MemoryInline::FlatWriteRam32((r1 + 560), r30);
    MemoryInline::FlatWriteRam32((r1 + 564), r11);
    MemoryInline::FlatWriteRam32((r1 + 568), r10);
    MemoryInline::FlatWriteRam32((r1 + 572), r9);
    MemoryInline::FlatWriteRam32((r1 + 576), r8);
    MemoryInline::FlatWriteRam32((r1 + 580), r7);
    MemoryInline::FlatWriteRam32((r1 + 584), r6);
    MemoryInline::FlatWriteRam32((r1 + 588), r5);
    MemoryInline::FlatWriteRam32((r1 + 592), r4);
    MemoryInline::FlatWriteRam32((r1 + 596), r3);
    MemoryInline::FlatWriteRam32((r1 + 600), r0);
    MemoryInline::FlatWriteRam32((r1 + 604), r12);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x804D12F0
    r30 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_804EE06C;
    }
}

loc_804EE060:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804EE06C:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl5_0x804D1330:
{
}

loc_inl5_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x804D1344;
    }
}

loc_inl5_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl5_0x804D1348;
}

loc_inl5_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl5_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
}

loc_inl5_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
}

loc_804EE07C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r26))) {
        goto loc_804EE08C;
    }
}

loc_804EE080:
{
    r3 = r30;
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
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_6 & 1);
}

loc_inl6_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804EE100;
}

loc_804EE08C:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 560);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl7_0x804D1330:
{
}

loc_inl7_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl7_0x804D1344;
    }
}

loc_inl7_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl7_0x804D1348;
}

loc_inl7_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl7_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_7 & 1);
}

loc_inl7_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804EE100:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 240);
    MemoryInline::FlatWriteRam8((r1 + 420), static_cast<uint8_t>(r0));
    r0 = 1;
    r27 = 17;
    MemoryInline::FlatWriteRam16((r1 + 442), static_cast<uint16_t>(r0));
    r12 = 0x804F0000u;
    r12 = (r12 + -8688);
    r11 = MemoryInline::FlatRead32((r1 + 420));
    r10 = MemoryInline::FlatRead32((r1 + 424));
    r9 = MemoryInline::FlatRead32((r1 + 428));
    r8 = MemoryInline::FlatRead32((r1 + 432));
    r7 = MemoryInline::FlatRead32((r1 + 436));
    r6 = MemoryInline::FlatRead32((r1 + 440));
    r5 = MemoryInline::FlatRead32((r1 + 444));
    r4 = MemoryInline::FlatRead32((r1 + 448));
    r3 = MemoryInline::FlatRead32((r1 + 452));
    r0 = MemoryInline::FlatRead32((r1 + 456));
    MemoryInline::FlatWriteRam32((r1 + 416), r27);
    MemoryInline::FlatWriteRam32((r1 + 460), r12);
    MemoryInline::FlatWriteRam32((r1 + 464), r27);
    MemoryInline::FlatWriteRam32((r1 + 468), r11);
    MemoryInline::FlatWriteRam32((r1 + 472), r10);
    MemoryInline::FlatWriteRam32((r1 + 476), r9);
    MemoryInline::FlatWriteRam32((r1 + 480), r8);
    MemoryInline::FlatWriteRam32((r1 + 484), r7);
    MemoryInline::FlatWriteRam32((r1 + 488), r6);
    MemoryInline::FlatWriteRam32((r1 + 492), r5);
    MemoryInline::FlatWriteRam32((r1 + 496), r4);
    MemoryInline::FlatWriteRam32((r1 + 500), r3);
    MemoryInline::FlatWriteRam32((r1 + 504), r0);
    MemoryInline::FlatWriteRam32((r1 + 508), r12);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x804D12F0
    r30 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_804EE1A8;
    }
}

loc_804EE19C:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804EE1A8:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl10_0x804D1330:
{
}

loc_inl10_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl10_0x804D1344;
    }
}

loc_inl10_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl10_0x804D1348;
}

loc_inl10_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl10_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_11 & 1);
}

loc_inl10_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
}

loc_804EE1B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r26))) {
        goto loc_804EE1C8;
    }
}

loc_804EE1BC:
{
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl11_0x804D1330:
{
}

loc_inl11_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl11_0x804D1344;
    }
}

loc_inl11_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl11_0x804D1348;
}

loc_inl11_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl11_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_12 & 1);
}

loc_inl11_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804EE23C;
}

loc_804EE1C8:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 464);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl12_0x804D1330:
{
}

loc_inl12_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl12_0x804D1344;
    }
}

loc_inl12_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl12_0x804D1348;
}

loc_inl12_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl12_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_13 & 1);
}

loc_inl12_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804EE23C:
{
    r6 = 0x804F0000u;
    r3 = 42;
    r6 = (r6 + -8688);
    r8 = 56;
    r7 = 23;
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 324);
    r4 = (r1 + 24);
    r5 = 4;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteRam32((r1 + 320), r7);
    MemoryInline::FlatWriteRam16((r1 + 346), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 364), r6);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 328);
    r4 = (r1 + 12);
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r27 = (r29 + 2356);
    MemoryInline::FlatWriteRam16((r1 + 352), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead32((r1 + 24));
    r11 = MemoryInline::FlatRead32((r1 + 320));
    r10 = MemoryInline::FlatRead32((r1 + 324));
    r9 = MemoryInline::FlatRead32((r1 + 328));
    r8 = MemoryInline::FlatRead32((r1 + 332));
    r7 = MemoryInline::FlatRead32((r1 + 336));
    r6 = MemoryInline::FlatRead32((r1 + 340));
    r5 = MemoryInline::FlatRead32((r1 + 344));
    r4 = MemoryInline::FlatRead32((r1 + 352));
    r3 = MemoryInline::FlatRead32((r1 + 360));
    r0 = MemoryInline::FlatRead32((r1 + 364));
    MemoryInline::FlatWriteRam32((r1 + 348), r27);
    MemoryInline::FlatWriteRam32((r1 + 356), r12);
    MemoryInline::FlatWriteRam32((r1 + 368), r11);
    MemoryInline::FlatWriteRam32((r1 + 372), r10);
    MemoryInline::FlatWriteRam32((r1 + 376), r9);
    MemoryInline::FlatWriteRam32((r1 + 380), r8);
    MemoryInline::FlatWriteRam32((r1 + 384), r7);
    MemoryInline::FlatWriteRam32((r1 + 388), r6);
    MemoryInline::FlatWriteRam32((r1 + 392), r5);
    MemoryInline::FlatWriteRam32((r1 + 396), r27);
    MemoryInline::FlatWriteRam32((r1 + 400), r4);
    MemoryInline::FlatWriteRam32((r1 + 404), r12);
    MemoryInline::FlatWriteRam32((r1 + 408), r3);
    MemoryInline::FlatWriteRam32((r1 + 412), r0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_15 & 1);
    // end of inlined leaf 0x804D12F0
    r30 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_16 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_804EE324;
    }
}

loc_804EE318:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804EE324:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl15_0x804D1330:
{
}

loc_inl15_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl15_0x804D1344;
    }
}

loc_inl15_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl15_0x804D1348;
}

loc_inl15_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl15_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_17 & 1);
}

loc_inl15_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
}

loc_804EE334:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r26))) {
        goto loc_804EE344;
    }
}

loc_804EE338:
{
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl16_0x804D1330:
{
}

loc_inl16_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl16_0x804D1344;
    }
}

loc_inl16_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl16_0x804D1348;
}

loc_inl16_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl16_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_18 & 1);
}

loc_inl16_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804EE3B8;
}

loc_804EE344:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 368);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl17_0x804D1330:
{
}

loc_inl17_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl17_0x804D1344;
    }
}

loc_inl17_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl17_0x804D1348;
}

loc_inl17_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl17_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_19 & 1);
}

loc_inl17_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804EE3B8:
{
    r6 = 0x804F0000u;
    r3 = 98;
    r6 = (r6 + -8688);
    r8 = 56;
    r7 = 23;
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 228);
    r4 = (r1 + 20);
    r5 = 4;
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteRam32((r1 + 224), r7);
    MemoryInline::FlatWriteRam16((r1 + 250), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 268), r6);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 232);
    r4 = (r1 + 10);
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r27 = (r29 + 2356);
    MemoryInline::FlatWriteRam16((r1 + 256), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead32((r1 + 20));
    r11 = MemoryInline::FlatRead32((r1 + 224));
    r10 = MemoryInline::FlatRead32((r1 + 228));
    r9 = MemoryInline::FlatRead32((r1 + 232));
    r8 = MemoryInline::FlatRead32((r1 + 236));
    r7 = MemoryInline::FlatRead32((r1 + 240));
    r6 = MemoryInline::FlatRead32((r1 + 244));
    r5 = MemoryInline::FlatRead32((r1 + 248));
    r4 = MemoryInline::FlatRead32((r1 + 256));
    r3 = MemoryInline::FlatRead32((r1 + 264));
    r0 = MemoryInline::FlatRead32((r1 + 268));
    MemoryInline::FlatWriteRam32((r1 + 252), r27);
    MemoryInline::FlatWriteRam32((r1 + 260), r12);
    MemoryInline::FlatWriteRam32((r1 + 272), r11);
    MemoryInline::FlatWriteRam32((r1 + 276), r10);
    MemoryInline::FlatWriteRam32((r1 + 280), r9);
    MemoryInline::FlatWriteRam32((r1 + 284), r8);
    MemoryInline::FlatWriteRam32((r1 + 288), r7);
    MemoryInline::FlatWriteRam32((r1 + 292), r6);
    MemoryInline::FlatWriteRam32((r1 + 296), r5);
    MemoryInline::FlatWriteRam32((r1 + 300), r27);
    MemoryInline::FlatWriteRam32((r1 + 304), r4);
    MemoryInline::FlatWriteRam32((r1 + 308), r12);
    MemoryInline::FlatWriteRam32((r1 + 312), r3);
    MemoryInline::FlatWriteRam32((r1 + 316), r0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_21 & 1);
    // end of inlined leaf 0x804D12F0
    r30 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_22 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_804EE4A0;
    }
}

loc_804EE494:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r26 + r0);
    r26 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804EE4A0:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl20_0x804D1330:
{
}

loc_inl20_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl20_0x804D1344;
    }
}

loc_inl20_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl20_0x804D1348;
}

loc_inl20_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl20_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_23 & 1);
}

loc_inl20_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
}

loc_804EE4B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r26))) {
        goto loc_804EE4C0;
    }
}

loc_804EE4B4:
{
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl21_0x804D1330:
{
}

loc_inl21_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl21_0x804D1344;
    }
}

loc_inl21_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl21_0x804D1348;
}

loc_inl21_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl21_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_24 & 1);
}

loc_inl21_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804EE534;
}

loc_804EE4C0:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 272);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl22_0x804D1330:
{
}

loc_inl22_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl22_0x804D1344;
    }
}

loc_inl22_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl22_0x804D1348;
}

loc_inl22_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl22_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_25 & 1);
}

loc_inl22_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804EE534:
{
    r6 = 0x804F0000u;
    r7 = 23;
    r6 = (r6 + -8896);
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r3 = (r1 + 132);
    r4 = (r1 + 16);
    r5 = 4;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam32((r1 + 128), r7);
    MemoryInline::FlatWriteRam16((r1 + 154), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 172), r6);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 136);
    r4 = (r1 + 8);
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r27 = (r29 + 2356);
    MemoryInline::FlatWriteRam16((r1 + 160), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead32((r1 + 16));
    r11 = MemoryInline::FlatRead32((r1 + 128));
    r10 = MemoryInline::FlatRead32((r1 + 132));
    r9 = MemoryInline::FlatRead32((r1 + 136));
    r8 = MemoryInline::FlatRead32((r1 + 140));
    r7 = MemoryInline::FlatRead32((r1 + 144));
    r6 = MemoryInline::FlatRead32((r1 + 148));
    r5 = MemoryInline::FlatRead32((r1 + 152));
    r4 = MemoryInline::FlatRead32((r1 + 160));
    r3 = MemoryInline::FlatRead32((r1 + 168));
    r0 = MemoryInline::FlatRead32((r1 + 172));
    MemoryInline::FlatWriteRam32((r1 + 156), r27);
    MemoryInline::FlatWriteRam32((r1 + 164), r12);
    MemoryInline::FlatWriteRam32((r1 + 176), r11);
    MemoryInline::FlatWriteRam32((r1 + 180), r10);
    MemoryInline::FlatWriteRam32((r1 + 184), r9);
    MemoryInline::FlatWriteRam32((r1 + 188), r8);
    MemoryInline::FlatWriteRam32((r1 + 192), r7);
    MemoryInline::FlatWriteRam32((r1 + 196), r6);
    MemoryInline::FlatWriteRam32((r1 + 200), r5);
    MemoryInline::FlatWriteRam32((r1 + 204), r27);
    MemoryInline::FlatWriteRam32((r1 + 208), r4);
    MemoryInline::FlatWriteRam32((r1 + 212), r12);
    MemoryInline::FlatWriteRam32((r1 + 216), r3);
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_27 & 1);
    // end of inlined leaf 0x804D12F0
    r26 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_28 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_804EE614;
    }
}

loc_804EE608:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804EE614:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl25_0x804D1330:
{
}

loc_inl25_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl25_0x804D1344;
    }
}

loc_inl25_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl25_0x804D1348;
}

loc_inl25_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl25_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_29 & 1);
}

loc_inl25_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
}

loc_804EE624:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r27))) {
        goto loc_804EE634;
    }
}

loc_804EE628:
{
    r3 = r26;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl26_0x804D1330:
{
}

loc_inl26_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl26_0x804D1344;
    }
}

loc_inl26_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl26_0x804D1348;
}

loc_inl26_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl26_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_30 & 1);
}

loc_inl26_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804EE6A8;
}

loc_804EE634:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 176);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl27_0x804D1330:
{
}

loc_inl27_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl27_0x804D1344;
    }
}

loc_inl27_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl27_0x804D1348;
}

loc_inl27_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl27_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_31 & 1);
}

loc_inl27_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804EE6A8:
{
    r11 = 0;
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r11));
    r0 = 1;
    r12 = 21;
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r10 = MemoryInline::FlatRead32((r1 + 36));
    r9 = MemoryInline::FlatRead32((r1 + 40));
    r8 = MemoryInline::FlatRead32((r1 + 44));
    r7 = MemoryInline::FlatRead32((r1 + 48));
    r6 = MemoryInline::FlatRead32((r1 + 52));
    r5 = MemoryInline::FlatRead32((r1 + 56));
    r4 = MemoryInline::FlatRead32((r1 + 60));
    r3 = MemoryInline::FlatRead32((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 32), r12);
    MemoryInline::FlatWriteRam32((r1 + 76), r11);
    MemoryInline::FlatWriteRam32((r1 + 72), r11);
    MemoryInline::FlatWriteRam32((r1 + 80), r12);
    MemoryInline::FlatWriteRam32((r1 + 84), r10);
    MemoryInline::FlatWriteRam32((r1 + 88), r9);
    MemoryInline::FlatWriteRam32((r1 + 92), r8);
    MemoryInline::FlatWriteRam32((r1 + 96), r7);
    MemoryInline::FlatWriteRam32((r1 + 100), r6);
    MemoryInline::FlatWriteRam32((r1 + 104), r5);
    MemoryInline::FlatWriteRam32((r1 + 108), r4);
    MemoryInline::FlatWriteRam32((r1 + 112), r3);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 120), r11);
    MemoryInline::FlatWriteRam32((r1 + 124), r11);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_33 & 1);
    // end of inlined leaf 0x804D12F0
    r26 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_34 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_804EE748;
    }
}

loc_804EE73C:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804EE748:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl30_0x804D1330:
{
}

loc_inl30_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl30_0x804D1344;
    }
}

loc_inl30_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl30_0x804D1348;
}

loc_inl30_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl30_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_35 & 1);
}

loc_inl30_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
}

loc_804EE758:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r27))) {
        goto loc_804EE768;
    }
}

loc_804EE75C:
{
    r3 = r26;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl31_0x804D1330:
{
}

loc_inl31_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl31_0x804D1344;
    }
}

loc_inl31_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl31_0x804D1348;
}

loc_inl31_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl31_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_36 & 1);
}

loc_inl31_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804EE7DC;
}

loc_804EE768:
{
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r4 = (r1 + 80);
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 353), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl32_0x804D1330:
{
}

loc_inl32_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl32_0x804D1344;
    }
}

loc_inl32_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl32_0x804D1348;
}

loc_inl32_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl32_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_37 & 1);
}

loc_inl32_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804EE7DC:
{
    r11 = (r1 + 640);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 644));
    ctx->lr = r0;
    r1 = (r1 + 640);
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EDF00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EDF00_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EDF00 func_804EDF00 preserves=true fpr_mask=0x00000000
