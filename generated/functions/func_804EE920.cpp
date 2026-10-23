#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804ED6D0(CpuContext* ctx);
extern "C" uint64_t func_804ED6D0_ra188_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804EE800(CpuContext* ctx);
extern "C" uint64_t func_804EE800_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EFAC0(CpuContext* ctx);
extern "C" uint64_t func_804EFAC0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804FA160(CpuContext* ctx);
extern "C" void func_804FA160_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804EE920_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

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

    goto loc_804EE920;

loc_804EE920:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r11 = (r1 + 192);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = 0x80630000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_804EE93C:
{
    r31 = (r31 + -14352);
    r27 = MemoryInline::FlatRead8((r3 + 86));
    r30 = r3;
    r28 = r4;
    r3 = (r31 + 464);
    r4 = (r13 + -19548);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804EE95C;
    }
}

loc_804EE958:
{
    r4 = (r13 + -19556);
}

loc_804EE95C:
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
}

loc_804EE968:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804EEBBC;
    }
}

loc_804EE96C:
{
    r3 = r30;
    ctx->lr = 0x804EE974u;
    if constexpr (KnownRegArgsCpuCall<0x804EE800u>(&func_804EE800)) {
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
        const auto regargs_result_804EE800_159E = func_804EE800_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EE800_159E);
        r4 = static_cast<uint32_t>(regargs_result_804EE800_159E >> 32);
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
        InvokeDirectCpu<0x804EE800u>(ctx);
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

loc_804EE978:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_804EEDBC;
    }
}

loc_804EE980:
{
    r4 = 0x80760000u;
    r4 = (r4 + -6240);
    r4_addr_1 = (r4 + r27);
    MemoryInline::FlatWrite8(r4_addr_1, static_cast<uint8_t>(r3));
    ctx->lr = 0x804EE990u;
    if constexpr (KnownRegArgsCpuCall<0x804ED6D0u>(&func_804ED6D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804ED6D0_2090 = func_804ED6D0_ra188_1e_18_0(ctx, r3, r7, r8, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804ED6D0_2090);
        r4 = static_cast<uint32_t>(regargs_result_804ED6D0_2090 >> 32);
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804ED6D0u>(ctx);
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = 0x80760000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -10352);
    r3 = r30;
    r4_addr_2 = (r4 + r0);
    r29 = MemoryInline::FlatRead32(r4_addr_2);
    r4 = (r31 + 484);
    r5 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8045BD3C_2970 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_2970);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_2970 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804EE9B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804EE9C8;
    }
}

loc_804EE9B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 2241), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r29 + 2232), r0);
    goto loc_804EEA10;
}

loc_804EE9C8:
{
    r3 = r30;
    r4 = (r31 + 444);
    r5 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8045BD3C_2EEE = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_2EEE);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_2EEE >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804EE9DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804EEA00;
    }
}

loc_804EE9E0:
{
    // inline leaf 0x804FA1B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -14056));
    // end of inlined leaf 0x804FA1B0
}

loc_804EE9E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804EEA00;
    }
}

loc_804EE9EC:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 2241), static_cast<uint8_t>(r0));
    r0 = 12;
    MemoryInline::FlatWrite32((r29 + 2232), r0);
    goto loc_804EEA10;
}

loc_804EEA00:
{
    r0 = 251;
    MemoryInline::FlatWrite8((r29 + 2241), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 2232), r0);
}

loc_804EEA10:
{
    MemoryInline::FlatWrite8((r29 + 2243), static_cast<uint8_t>(r27));
    r10 = 1;
    r6 = 0x804F0000u;
    r9 = 0;
    MemoryInline::FlatWrite32((r29 + 2264), r10);
    r4 = 100;
    r6 = (r6 + -8448);
    r8 = 6000;
    MemoryInline::FlatWrite32((r29 + 2236), r9);
    r7 = 23;
    r0 = 6;
    r3 = (r1 + 20);
    MemoryInline::FlatWrite8((r29 + 2435), static_cast<uint8_t>(r4));
    r4 = (r1 + 12);
    r5 = 4;
    MemoryInline::FlatWrite8((r29 + 2438), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r29 + 2445), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead8((r29 + 2241));
    MemoryInline::FlatWrite8((r29 + 2448), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam32((r1 + 12), r8);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r10));
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 60), r6);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r30 = (r29 + 2356);
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead32((r1 + 12));
    r11 = MemoryInline::FlatRead32((r1 + 16));
    r10 = MemoryInline::FlatRead32((r1 + 20));
    r9 = MemoryInline::FlatRead32((r1 + 24));
    r8 = MemoryInline::FlatRead32((r1 + 28));
    r7 = MemoryInline::FlatRead32((r1 + 32));
    r6 = MemoryInline::FlatRead32((r1 + 36));
    r5 = MemoryInline::FlatRead32((r1 + 40));
    r4 = MemoryInline::FlatRead32((r1 + 48));
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::FlatWriteRam32((r1 + 44), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r12);
    MemoryInline::FlatWriteRam32((r1 + 64), r11);
    MemoryInline::FlatWriteRam32((r1 + 68), r10);
    MemoryInline::FlatWriteRam32((r1 + 72), r9);
    MemoryInline::FlatWriteRam32((r1 + 76), r8);
    MemoryInline::FlatWriteRam32((r1 + 80), r7);
    MemoryInline::FlatWriteRam32((r1 + 84), r6);
    MemoryInline::FlatWriteRam32((r1 + 88), r5);
    MemoryInline::FlatWriteRam32((r1 + 92), r30);
    MemoryInline::FlatWriteRam32((r1 + 96), r4);
    MemoryInline::FlatWriteRam32((r1 + 100), r12);
    MemoryInline::FlatWriteRam32((r1 + 104), r3);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r30 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(0))) {
        goto loc_804EEB20;
    }
}

loc_804EEB14:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r31 + r0);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804EEB20:
{
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
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r3 + -1);
}

loc_804EEB30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_804EEB40;
    }
}

loc_804EEB34:
{
    r3 = r30;
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
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 1);
}

loc_inl5_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804EEBB4;
}

loc_804EEB40:
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
    r4 = (r1 + 64);
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
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
}

loc_inl6_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804EEBB4:
{
    // inline leaf 0x804E9820 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14260), r0);
    r3 = 1;
    // end of inlined leaf 0x804E9820
    goto loc_804EEDBC;
}

loc_804EEBBC:
{
    r3 = 0x80760000u;
    r4 = -1;
    r3 = (r3 + -6240);
    r3_addr_1 = (r3 + r27);
    r30 = MemoryInline::FlatRead8(r3_addr_1);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r3_addr_2 = (r3 + r27);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r4));
}

loc_804EEBD8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(-1))) {
        goto loc_804EEDB0;
    }
}

loc_804EEBDC:
{
    r3 = 0x80760000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + -10352);
    r3_addr_3 = (r3 + r0);
    r29 = MemoryInline::FlatRead32(r3_addr_3);
    MemoryInline::FlatWrite32((r29 + 2236), r4);
    r12 = MemoryInline::FlatRead32((r29 + 2204));
}

loc_804EEBF8:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804EEC10;
    }
}

loc_804EEBFC:
{
    r3 = r30;
    r4 = -1;
    ctr = r12;
    ctx->lr = 0x804EEC0Cu;
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
    goto loc_804EECE4;
}

loc_804EEC10:
{
    r12 = MemoryInline::FlatRead32((r29 + 2472));
}

loc_804EEC18:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804EECE4;
    }
}

loc_804EEC1C:
{
    r3 = r30;
    r4 = -1;
    ctr = r12;
    ctx->lr = 0x804EEC2Cu;
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
    goto loc_804EECE4;
}

loc_804EEC30:
{
    r12 = MemoryInline::FlatRead32((r1 + 156));
}

loc_804EEC38:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804EEC4C;
    }
}

loc_804EEC3C:
{
    r3 = r30;
    r4 = -1;
    ctr = r12;
    ctx->lr = 0x804EEC4Cu;
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
}

loc_804EEC4C:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_13 & 1);
    // end of inlined leaf 0x804D12F0
    r27 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_14 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_804EEC78;
    }
}

loc_804EEC6C:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r28 + r0);
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804EEC78:
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
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_15 & 1);
}

loc_inl10_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804EEC80:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_804EEC90;
    }
}

loc_804EEC84:
{
    r3 = r27;
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
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_16 & 1);
}

loc_inl11_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804EECE4;
}

loc_804EEC90:
{
    r0 = MemoryInline::FlatRead8((r29 + 352));
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
    r0 = MemoryInline::FlatRead8((r29 + 352));
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r29 + 352), static_cast<uint8_t>(r0));
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
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_17 & 1);
}

loc_inl12_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804EECE4:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8((r29 + 352));
    r0 = MemoryInline::FlatRead8((r29 + 353));
    r0 = (r0 - r4);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_804EED08;
    }
}

loc_804EECFC:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r0 = (r27 + r0);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804EED08:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl14_0x804D1330:
{
}

loc_inl14_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl14_0x804D1344;
    }
}

loc_inl14_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl14_0x804D1348;
}

loc_inl14_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl14_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_9 & 1);
}

loc_inl14_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804EED10:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_804EED1C;
    }
}

loc_804EED14:
{
    r0 = 0;
    goto loc_804EED50;
}

loc_804EED1C:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead8((r29 + 352));
    r27 = r3;
    r4 = MemoryInline::FlatRead32((r29 + 356));
    r3 = (r1 + 112);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5 = 48;
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r27;
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
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_11 & 1);
}

loc_inl16_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = 1;
}

loc_804EED50:
{
}

loc_804EED54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804EEC30;
    }
}

loc_804EED58:
{
    r3 = (r31 + 504);
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
    r4 = MemoryInline::FlatRead32((r29 + 2220));
}

loc_804EED6C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804EED7C;
    }
}

loc_804EED70:
{
    r5 = MemoryInline::FlatRead32((r29 + 2228));
    r3 = r30;
    ctx->lr = 0x804EED7Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EFAC0u>(&func_804EFAC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EFAC0_8676 = func_804EFAC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EFAC0_8676);
        r4 = static_cast<uint32_t>(regargs_result_804EFAC0_8676 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EFAC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804EED7C:
{
    r3 = r30;
    ctx->lr = 0x804EED84u;
    if constexpr (KnownRegArgsCpuCall<0x804ED6D0u>(&func_804ED6D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804ED6D0_8C53 = func_804ED6D0_ra188_1e_18_0(ctx, r3, r7, r8, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804ED6D0_8C53);
        r4 = static_cast<uint32_t>(regargs_result_804ED6D0_8C53 >> 32);
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804ED6D0u>(ctx);
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r13 + -14136);
    r0 = 0;
    r3_addr_4 = (r3 + r30);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32((r29 + 2212));
}

loc_804EED98:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804EEDBC;
    }
}

loc_804EED9C:
{
    r3 = r30;
    r4 = -1;
    ctr = r12;
    ctx->lr = 0x804EEDACu;
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
    goto loc_804EEDBC;
}

loc_804EEDB0:
{
    r3 = (r31 + 528);
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
}

loc_804EEDBC:
{
    r11 = (r1 + 192);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
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

extern "C" void func_804EE920(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EE920_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EE920 func_804EE920 preserves=true fpr_mask=0x00000000
