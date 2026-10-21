#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BDE00(CpuContext* ctx);
extern "C" uint32_t func_804BDE00_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804BE170(CpuContext* ctx);
extern "C" uint32_t func_804BE170_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804BE5A0(CpuContext* ctx);
extern "C" uint64_t func_804BE5A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804BF730(CpuContext* ctx);
extern "C" uint64_t func_804BF730_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804BFF10(CpuContext* ctx);
extern "C" uint64_t func_804BFF10_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EDCA0(CpuContext* ctx);
extern "C" uint64_t func_804EDCA0_ra0_0_18_0(CpuContext*);
extern "C" void func_804F1A30(CpuContext* ctx);
extern "C" uint64_t func_804F1A30_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804C07F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r20_addic_src_0 = 0;
    uint32_t r20_addic_src_1 = 0;
    uint32_t r20_addic_src_2 = 0;
    uint32_t r20_addic_src_3 = 0;
    uint32_t r20_addic_src_4 = 0;
    uint32_t r25_addic_src_0 = 0;
    uint32_t r25_addic_src_1 = 0;
    uint32_t r25_addic_src_2 = 0;
    uint32_t r25_addic_src_3 = 0;
    uint32_t r25_addic_src_4 = 0;
    uint32_t r25_addic_src_5 = 0;
    uint32_t r25_addic_src_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r4_addic_src_0 = 0;
    uint32_t r4_addic_src_1 = 0;
    uint32_t r4_addic_src_2 = 0;
    uint32_t r4_addic_src_3 = 0;
    uint32_t r4_addic_src_4 = 0;
    uint32_t r4_addic_src_5 = 0;
    uint32_t r4_addic_src_6 = 0;
    uint32_t r4_addic_src_7 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r5_addic_src_3 = 0;
    uint32_t r5_addic_src_4 = 0;
    uint32_t r5_addic_src_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804C07F0u);
    goto loc_804C07F0;

loc_804C07F0:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    r11 = (r1 + 240);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r0 = MemoryInline::FlatRead8((r13 + -15276));
    r8 = 0x80750000u;
    r9 = (r3 * 1400);
    r25 = r3;
}

loc_804C0818:
{
    r8 = (r8 + -26112);
    r29 = r4;
    r24 = r5;
    r30 = r6;
    r31 = r7;
    r26 = (r8 + r9);
    r23 = 0;
    r22 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C0844;
    }
}

loc_804C083C:
{
    r23 = -5;
    goto loc_804C0E84;
}

loc_804C0844:
{
    ctx->lr = 0x804C0848u;
    if constexpr (KnownRegArgsCpuCall<0x804EDCA0u>(&func_804EDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804EDCA0_1365 = func_804EDCA0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804EDCA0_1365);
        r4 = static_cast<uint32_t>(regargs_result_804EDCA0_1365 >> 32);
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
        InvokeDirectCpu<0x804EDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804C084C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_804C0858;
    }
}

loc_804C0850:
{
    r23 = -3;
    goto loc_804C0E84;
}

loc_804C0858:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead8((r26 + 1279));
    r21 = r3;
}

loc_804C0868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C0878;
    }
}

loc_804C086C:
{
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
    r23 = -4;
    goto loc_804C0E84;
}

loc_804C0878:
{
    r20 = 1;
    MemoryInline::FlatWrite8((r26 + 1279), static_cast<uint8_t>(r20));
    r3 = r25;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF040u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804C0890:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_804C0914;
    }
}

loc_804C0894:
{
    r3 = r26;
    if constexpr (KnownRegArgsCpuCall<0x804BDE00u>(&func_804BDE00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        const auto regargs_result_804BDE00_1E8D = func_804BDE00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804BDE00_1E8D;
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BDE00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r26 + 1292));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804C08A4:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_804C08FC;
    }
}

loc_804C08A8:
{
    r0 = MemoryInline::FlatRead8((r26 + 1370));
}

loc_804C08B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C08FC;
    }
}

loc_804C08B4:
{
    r0 = MemoryInline::FlatRead8((r26 + 1371));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804C08BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804C08FC;
    }
}

loc_804C08C0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_804C08E8;
    }
}

loc_804C08C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804C08E8;
    }
}

loc_804C08C8:
{
    MemoryInline::FlatWrite8((r26 + 1371), static_cast<uint8_t>(r20));
    r3 = r25;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r26 + 1292));
    ctr = r12;
    ctx->lr = 0x804C08E0u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1370), static_cast<uint8_t>(r0));
}

loc_804C08E8:
{
    r3 = r25;
    ctx->lr = 0x804C08F0u;
    if constexpr (KnownRegArgsCpuCall<0x804F1A30u>(&func_804F1A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804F1A30_2DF9 = func_804F1A30_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804F1A30_2DF9);
        r4 = static_cast<uint32_t>(regargs_result_804F1A30_2DF9 >> 32);
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
        InvokeDirectCpu<0x804F1A30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r26 + 1367), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1368), static_cast<uint8_t>(r0));
}

loc_804C08FC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1279), static_cast<uint8_t>(r0));
    r3 = r21;
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
    r23 = -2;
    goto loc_804C0E84;
}

loc_804C0914:
{
    r3 = r21;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl4_0x804D1330:
{
}

loc_inl4_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x804D1344;
    }
}

loc_inl4_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl4_0x804D1348;
}

loc_inl4_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl4_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = MemoryInline::FlatRead8((r26 + 1364));
}

loc_804C0924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C0938;
    }
}

loc_804C0928:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r26 + 93), static_cast<uint8_t>(r0));
    r3 = r26;
    if constexpr (KnownRegArgsCpuCall<0x804BDE00u>(&func_804BDE00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        const auto regargs_result_804BDE00_3988 = func_804BDE00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804BDE00_3988;
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BDE00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    }
}

loc_804C0938:
{
    r0 = 22;
    r5 = (r1 + 4);
    r4 = (r29 + -4);
    ctr = r0;
}

loc_804C0948:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804C0948;
    }
}

loc_804C095C:
{
    r0 = MemoryInline::FlatRead8((r26 + 315));
}

loc_804C0964:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804C0E7C;
    }
}

loc_804C0968:
{
}

loc_804C096C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_804C0E7C;
    }
}

loc_804C0970:
{
}

loc_804C0974:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_804C0E7C;
    }
}

loc_804C0978:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x804D12F0
    r6 = MemoryInline::FlatRead8((r26 + 315));
}

loc_804C0984:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r24))) {
        goto loc_804C098C;
    }
}

loc_804C0988:
{
    r6 = r24;
}

loc_804C098C:
{
    r4 = MemoryInline::FlatRead8((r26 + 314));
    r5 = r6;
    r0 = 0;
    r7 = 0;
    r4_addic_src_1 = r4;
    r4 = (r4_addic_src_1 + -1);
}

loc_804C09A0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_804C09B0;
    }
}

loc_804C09A4:
{
    r8 = MemoryInline::FlatRead32((r26 + 1216));
    r4 = (r4 + r8);
    r4 = (r4 + 16);
}

loc_804C09B0:
{
}

loc_804C09B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(16))) {
        goto loc_804C09CC;
    }
}

loc_804C09B8:
{
    r8 = (r4 + -16);
    r9 = MemoryInline::FlatRead32((r26 + 1212));
    r8 = (r8 * 56);
    r12 = (r9 + r8);
    goto loc_804C09D8;
}

loc_804C09CC:
{
    r8 = (r4 * 56);
    r8 = (r26 + r8);
    r12 = (r8 + 316);
}

loc_804C09D8:
{
    r11 = -7;
    r10 = -4;
}

loc_804C09E0:
{
}

loc_804C09E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C0A10;
    }
}

loc_804C09E8:
{
    r8 = MemoryInline::FlatRead8((r12 + 41));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_804C0A00;
    }
}

loc_804C09F4:
{
    MemoryInline::FlatWrite8((r12 + 41), static_cast<uint8_t>(r11));
    r0 = 0;
    goto loc_804C0A24;
}

loc_804C0A00:
{
}

loc_804C0A04:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(-2))) {
        goto loc_804C0A24;
    }
}

loc_804C0A08:
{
    r0 = 0;
    goto loc_804C0A24;
}

loc_804C0A10:
{
    r8 = MemoryInline::FlatRead8((r12 + 41));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
}

loc_804C0A1C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(-7))) {
        goto loc_804C0A24;
    }
}

loc_804C0A20:
{
    r0 = 1;
}

loc_804C0A24:
{
    r9 = MemoryInline::FlatRead8((r26 + 92));
    r8 = MemoryInline::FlatRead8((r12 + 40));
}

loc_804C0A30:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(r8))) {
        goto loc_804C0A38;
    }
}

loc_804C0A34:
{
    r7 = 1;
}

loc_804C0A38:
{
}

loc_804C0A3C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804C0A44;
    }
}

loc_804C0A40:
{
    MemoryInline::FlatWrite8((r12 + 41), static_cast<uint8_t>(r10));
}

loc_804C0A44:
{
    r4_addic_src_3 = r4;
    r4 = (r4_addic_src_3 + -1);
}

loc_804C0A48:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_804C0A58;
    }
}

loc_804C0A4C:
{
    r8 = MemoryInline::FlatRead32((r26 + 1216));
    r4 = (r4 + r8);
    r4 = (r4 + 16);
}

loc_804C0A58:
{
}

loc_804C0A5C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(16))) {
        goto loc_804C0A74;
    }
}

loc_804C0A60:
{
    r8 = (r4 + -16);
    r9 = MemoryInline::FlatRead32((r26 + 1212));
    r8 = (r8 * 56);
    r12 = (r9 + r8);
    goto loc_804C0A80;
}

loc_804C0A74:
{
    r8 = (r4 * 56);
    r8 = (r26 + r8);
    r12 = (r8 + 316);
}

loc_804C0A80:
{
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
}

loc_804C0A84:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_804C09E0;
    }
}

loc_804C0A88:
{
}

loc_804C0A8C:
{
    r22 = 1;
    MemoryInline::FlatWrite8((r26 + 315), static_cast<uint8_t>(r22));
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(1))) {
        goto loc_804C0A9C;
    }
}

loc_804C0A98:
{
    r22 = (r6 + -1);
}

loc_804C0A9C:
{
    r0 = MemoryInline::FlatRead8((r26 + 314));
    r6 = (r22 * 176);
    r4 = r22;
    r5 = (r0 - r22);
    r5_addic_src_3 = r5;
    r5 = (r5_addic_src_3 + -1);
}

loc_804C0AB0:
{
    r6 = (r29 + r6);
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_804C0AC8;
    }
}

loc_804C0AB8:
{
    r0 = MemoryInline::FlatRead32((r26 + 1216));
    r5 = (r5 + r0);
    r5 = (r5 + 16);
    // nop
}

loc_804C0AC8:
{
}

loc_804C0ACC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(16))) {
        goto loc_804C0AE4;
    }
}

loc_804C0AD0:
{
    r0 = (r5 + -16);
    r7 = MemoryInline::FlatRead32((r26 + 1212));
    r0 = (r0 * 56);
    r8 = (r7 + r0);
    goto loc_804C0AF0;
}

loc_804C0AE4:
{
    r0 = (r5 * 56);
    r7 = (r26 + r0);
    r8 = (r7 + 316);
}

loc_804C0AF0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r8, 0, 56u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r8 + 4));
    r5 = (r5 + 1);
    r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r8);
    guest_range_3 = MemoryInline::ResolveRangeHost((r6 + -176), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r6 + -176), r7);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r6 + -172), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r8 + 12));
            r7 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r8 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r6 + -168), r7);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r6 + -164), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r8 + 20));
            r7 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r8 + 16));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r6 + -160), r7);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r6 + -156), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r8 + 28));
            r7 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r8 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r6 + -152), r7);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r6 + -148), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r8 + 36));
            r7 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r8 + 32));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r6 + -144), r7);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r6 + -140), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r8 + 44));
            r7 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r8 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r6 + -136), r7);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r6 + -132), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r8 + 52));
            r7 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r8 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r6 + -128), r7);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r6 + -124), r0);
    }
    r6 = (r6 + -176);
    r7 = MemoryInline::FlatRead32((r26 + 1216));
    r0 = (r7 + 16);
}

loc_804C0B74:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_804C0B7C;
    }
}

loc_804C0B78:
{
    r5 = 0;
}

loc_804C0B7C:
{
    r4_addic_src_5 = r4;
    r4 = (r4_addic_src_5 + -1);
}

loc_804C0B80:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(0))) {
        goto loc_804C0AC8;
    }
}

loc_804C0B84:
{
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
    r3 = (r22 * 176);
    r0 = MemoryInline::FlatRead8((r26 + 1375));
    r25 = r22;
}

loc_804C0B98:
{
    r27 = (r29 + r3);
    r24 = r27;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804C0D10;
    }
}

loc_804C0BA4:
{
    r27 = 1;
    r28 = 65536;
    r20 = 0;
    r21 = 22;
}

loc_804C0BB4:
{
    r3 = MemoryInline::FlatRead8((r24 + -136));
    r24 = (r24 + -176);
    r0 = MemoryInline::FlatRead8((r26 + 92));
}

loc_804C0BC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_804C0BD0;
    }
}

loc_804C0BC8:
{
    MemoryInline::FlatWrite8((r26 + 92), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r26 + 1365), static_cast<uint8_t>(r27));
}

loc_804C0BD0:
{
    r0 = MemoryInline::FlatRead8((r24 + 41));
    r8 = (r28 + -1);
    MemoryInline::FlatWrite8((r26 + 93), static_cast<uint8_t>(r0));
    r7 = r8;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r6 = r8;
    r3 = MemoryInline::FlatRead8((r24 + 54));
    MemoryInline::FlatWrite8((r26 + 95), static_cast<uint8_t>(r3));
    r4 = MemoryInline::FlatRead8((r26 + 92));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C0C0C;
    }
}

loc_804C0BF8:
{
}

loc_804C0BFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-7))) {
        goto loc_804C0C54;
    }
}

loc_804C0C00:
{
}

loc_804C0C04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_804C0C5C;
    }
}

loc_804C0C08:
{
    goto loc_804C0C64;
}

loc_804C0C0C:
{
}

loc_804C0C10:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_804C0C20;
    }
}

loc_804C0C14:
{
    r7 = MemoryInline::FlatRead16(r24);
    r8 = 0;
    goto loc_804C0C48;
}

loc_804C0C20:
{
}

loc_804C0C24:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_804C0C34;
    }
}

loc_804C0C28:
{
    r0 = (r4 + -16);
}

loc_804C0C30:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_804C0C40;
    }
}

loc_804C0C34:
{
    r8 = MemoryInline::FlatRead16((r24 + 42));
    r7 = 0;
    goto loc_804C0C48;
}

loc_804C0C40:
{
    r8 = 0;
    r7 = 0;
}

loc_804C0C48:
{
    r0 = MemoryInline::FlatRead16(r24);
    r6 = (r0 & 40735);
}

loc_804C0C50:
{
    goto loc_804C0C64;
}

loc_804C0C54:
{
    r8 = 0;
    r7 = 0;
}

loc_804C0C5C:
{
    r0 = MemoryInline::FlatRead16(r24);
    r6 = (r0 & 40735);
}

loc_804C0C64:
{
}

loc_804C0C68:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(65535))) {
        goto loc_804C0C74;
    }
}

loc_804C0C6C:
{
    r0 = MemoryInline::FlatRead32(r26);
    r6 = (r0 & 40735);
}

loc_804C0C74:
{
}

loc_804C0C78:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(65535))) {
        goto loc_804C0C80;
    }
}

loc_804C0C7C:
{
    r7 = MemoryInline::FlatRead32(r26);
}

loc_804C0C80:
{
}

loc_804C0C84:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(65535))) {
        goto loc_804C0C8C;
    }
}

loc_804C0C88:
{
    r8 = MemoryInline::FlatRead32((r26 + 96));
}

loc_804C0C8C:
{
    r3 = r26;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x804BE170u>(&func_804BE170)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804BE170_79C8 = func_804BE170_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804BE170_79C8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BE170u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r24 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C0CB0;
    }
}

loc_804C0CA4:
{
}

loc_804C0CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-7))) {
        goto loc_804C0CBC;
    }
}

loc_804C0CAC:
{
    goto loc_804C0CD8;
}

loc_804C0CB0:
{
    r3 = r26;
    r4 = r24;
    ctx->lr = 0x804C0CBCu;
    if constexpr (KnownRegArgsCpuCall<0x804BFF10u>(&func_804BFF10)) {
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
        ctx->ctr = ctr;
        const auto regargs_result_804BFF10_80BC = func_804BFF10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BFF10_80BC);
        r4 = static_cast<uint32_t>(regargs_result_804BFF10_80BC >> 32);
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x804BFF10u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804C0CBC:
{
    r3 = r26;
    r4 = r24;
    ctx->lr = 0x804C0CC8u;
    if constexpr (KnownRegArgsCpuCall<0x804BE5A0u>(&func_804BE5A0)) {
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
        const auto regargs_result_804BE5A0_8A5A = func_804BE5A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BE5A0_8A5A);
        r4 = static_cast<uint32_t>(regargs_result_804BE5A0_8A5A >> 32);
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BE5A0u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r26;
    r4 = r24;
    ctx->lr = 0x804C0CD4u;
    if constexpr (KnownRegArgsCpuCall<0x804BF730u>(&func_804BF730)) {
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
        const auto regargs_result_804BF730_939D = func_804BF730_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BF730_939D);
        r4 = static_cast<uint32_t>(regargs_result_804BF730_939D >> 32);
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BF730u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_804C0CE4;
}

loc_804C0CD8:
{
}

loc_804C0CDC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804C0CE4;
    }
}

loc_804C0CE0:
{
    MemoryInline::FlatWrite8((r26 + 94), static_cast<uint8_t>(r20));
}

loc_804C0CE4:
{
    r5 = (r24 + -4);
    r4 = (r26 + -4);
    ctr = r21;
}

loc_804C0CF0:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804C0CF0;
    }
}

loc_804C0D04:
{
    r25_addic_src_2 = r25;
    r25 = (r25_addic_src_2 + -1);
}

loc_804C0D08:
{
    if ((static_cast<int32_t>(r25) > static_cast<int32_t>(0))) {
        goto loc_804C0BB4;
    }
}

loc_804C0D0C:
{
    goto loc_804C0E7C;
}

loc_804C0D10:
{
    r4 = 65536;
    r3 = 1;
    r8 = (r4 + -1);
    r7 = r8;
    r6 = r8;
    // nop
}

loc_804C0D28:
{
    r4 = MemoryInline::FlatRead8((r24 + -136));
    r24 = (r24 + -176);
    r0 = MemoryInline::FlatRead8((r26 + 92));
}

loc_804C0D38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_804C0D44;
    }
}

loc_804C0D3C:
{
    MemoryInline::FlatWrite8((r26 + 92), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r26 + 1365), static_cast<uint8_t>(r3));
}

loc_804C0D44:
{
    r0 = MemoryInline::FlatRead8((r24 + 41));
    r4 = MemoryInline::FlatRead8((r24 + 40));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C0D68;
    }
}

loc_804C0D54:
{
}

loc_804C0D58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-7))) {
        goto loc_804C0DA4;
    }
}

loc_804C0D5C:
{
}

loc_804C0D60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_804C0DA4;
    }
}

loc_804C0D64:
{
    goto loc_804C0DAC;
}

loc_804C0D68:
{
}

loc_804C0D6C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_804C0D7C;
    }
}

loc_804C0D70:
{
    r7 = MemoryInline::FlatRead16(r24);
    r8 = 0;
    goto loc_804C0DA4;
}

loc_804C0D7C:
{
}

loc_804C0D80:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_804C0D90;
    }
}

loc_804C0D84:
{
    r0 = (r4 + -16);
}

loc_804C0D8C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_804C0D9C;
    }
}

loc_804C0D90:
{
    r8 = MemoryInline::FlatRead16((r24 + 42));
    r7 = 0;
    goto loc_804C0DA4;
}

loc_804C0D9C:
{
    r8 = 0;
    r7 = 0;
}

loc_804C0DA4:
{
    r0 = MemoryInline::FlatRead16(r24);
    r6 = (r0 & 40735);
}

loc_804C0DAC:
{
    r25_addic_src_4 = r25;
    r25 = (r25_addic_src_4 + -1);
}

loc_804C0DB0:
{
    if ((static_cast<int32_t>(r25) > static_cast<int32_t>(0))) {
        goto loc_804C0D28;
    }
}

loc_804C0DB4:
{
}

loc_804C0DB8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(65535))) {
        goto loc_804C0DC4;
    }
}

loc_804C0DBC:
{
    r0 = MemoryInline::FlatRead32(r26);
    r6 = (r0 & 40735);
}

loc_804C0DC4:
{
}

loc_804C0DC8:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(65535))) {
        goto loc_804C0DD0;
    }
}

loc_804C0DCC:
{
    r7 = MemoryInline::FlatRead32(r26);
}

loc_804C0DD0:
{
}

loc_804C0DD4:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(65535))) {
        goto loc_804C0DDC;
    }
}

loc_804C0DD8:
{
    r8 = MemoryInline::FlatRead32((r26 + 96));
}

loc_804C0DDC:
{
    r3 = r26;
    r5 = r22;
    if constexpr (KnownRegArgsCpuCall<0x804BE170u>(&func_804BE170)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804BE170_AA84 = func_804BE170_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804BE170_AA84;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BE170u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r20 = r22;
    r25 = 0;
    r24 = 22;
}

loc_804C0DF4:
{
    r0 = MemoryInline::FlatRead8((r27 + -135));
    r27 = (r27 + -176);
    MemoryInline::FlatWrite8((r26 + 93), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::FlatRead8((r27 + 54));
    MemoryInline::FlatWrite8((r26 + 95), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C0E1C;
    }
}

loc_804C0E10:
{
}

loc_804C0E14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-7))) {
        goto loc_804C0E28;
    }
}

loc_804C0E18:
{
    goto loc_804C0E44;
}

loc_804C0E1C:
{
    r3 = r26;
    r4 = r27;
    ctx->lr = 0x804C0E28u;
    if constexpr (KnownRegArgsCpuCall<0x804BFF10u>(&func_804BFF10)) {
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
        ctx->ctr = ctr;
        const auto regargs_result_804BFF10_B285 = func_804BFF10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BFF10_B285);
        r4 = static_cast<uint32_t>(regargs_result_804BFF10_B285 >> 32);
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x804BFF10u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804C0E28:
{
    r3 = r26;
    r4 = r27;
    ctx->lr = 0x804C0E34u;
    if constexpr (KnownRegArgsCpuCall<0x804BE5A0u>(&func_804BE5A0)) {
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
        const auto regargs_result_804BE5A0_BC23 = func_804BE5A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BE5A0_BC23);
        r4 = static_cast<uint32_t>(regargs_result_804BE5A0_BC23 >> 32);
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BE5A0u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r26;
    r4 = r27;
    ctx->lr = 0x804C0E40u;
    if constexpr (KnownRegArgsCpuCall<0x804BF730u>(&func_804BF730)) {
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
        const auto regargs_result_804BF730_C566 = func_804BF730_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804BF730_C566);
        r4 = static_cast<uint32_t>(regargs_result_804BF730_C566 >> 32);
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804BF730u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_804C0E50;
}

loc_804C0E44:
{
}

loc_804C0E48:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804C0E50;
    }
}

loc_804C0E4C:
{
    MemoryInline::FlatWrite8((r26 + 94), static_cast<uint8_t>(r25));
}

loc_804C0E50:
{
    r5 = (r27 + -4);
    r4 = (r26 + -4);
    ctr = r24;
    // nop
}

loc_804C0E60:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804C0E60;
    }
}

loc_804C0E74:
{
    r20_addic_src_2 = r20;
    r20 = (r20_addic_src_2 + -1);
}

loc_804C0E78:
{
    if ((static_cast<int32_t>(r20) > static_cast<int32_t>(0))) {
        goto loc_804C0DF4;
    }
}

loc_804C0E7C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1279), static_cast<uint8_t>(r0));
}

loc_804C0E84:
{
}

loc_804C0E88:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_804C0EF4;
    }
}

loc_804C0E8C:
{
}

loc_804C0E90:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_804C0ECC;
    }
}

loc_804C0E94:
{
}

loc_804C0E98:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804C0EC4;
    }
}

loc_804C0E9C:
{
    r0 = 22;
    r5 = (r29 + -4);
    r4 = (r1 + 4);
    ctr = r0;
    // nop
}

loc_804C0EB0:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804C0EB0;
    }
}

loc_804C0EC4:
{
    r23 = -1;
    goto loc_804C0EF4;
}

loc_804C0ECC:
{
}

loc_804C0ED0:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(-2))) {
        goto loc_804C0EF4;
    }
}

loc_804C0ED4:
{
}

loc_804C0ED8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804C0EF4;
    }
}

loc_804C0EDC:
{
    r4 = 253;
    r3 = 0;
    r0 = -1;
    MemoryInline::FlatWrite8((r29 + 92), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r29 + 95), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 93), static_cast<uint8_t>(r0));
}

loc_804C0EF4:
{
}

loc_804C0EF8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804C0F00;
    }
}

loc_804C0EFC:
{
    MemoryInline::FlatWrite32(r30, r23);
}

loc_804C0F00:
{
    r11 = (r1 + 240);
    r3 = r22;
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C07F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C07F0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C07F0 func_804C07F0 preserves=true fpr_mask=0x00000000
