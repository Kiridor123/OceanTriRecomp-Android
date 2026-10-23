#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80060538(CpuContext* ctx);
extern "C" uint64_t func_80060538_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8008338C(CpuContext* ctx);
extern "C" uint64_t func_8008338C_ra38_1ee_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_800844D0(CpuContext* ctx);
extern "C" uint64_t func_800844D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80082848_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint32_t r10 = ctx->gpr[10];
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

    goto loc_80082848;

loc_80082848:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r31 = r1;
    r22 = r3;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r29 = 0;
    r3 = 10380;
    // inline leaf 0x80082B18 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x80082B18
    r16 = r3;
    r3 = (r3 + 24);
    // inline leaf 0x80082B18 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x80082B18
    r17 = r3;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    // inline leaf 0x80082B18 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x80082B18
    r18 = r3;
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + r0);
    // inline leaf 0x80082B18 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x80082B18
    r19 = r3;
    r0 = (r26 * 68);
    r3 = (r3 + r0);
    // inline leaf 0x80082B18 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x80082B18
    r20 = r3;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    // inline leaf 0x80082B18 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x80082B18
    r21 = r3;
    r0 = (r27 * 12);
    r3 = (r3 + r0);
    // inline leaf 0x80082B18 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x80082B18
    r28 = r3;
}

loc_800828EC:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_800829E0;
    }
}

loc_800828F0:
{
    r0 = 1;
    r3 = 1;
    r4 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r5 = (r23 & -16777216);
    r6 = (r5 + -2147483648);
}

loc_80082914:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(0))) {
        goto loc_8008292C;
    }
}

loc_80082918:
{
    r6 = (r23 & -8388608);
    r6 = (r6 + 2130706432);
}

loc_80082924:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(0))) {
        goto loc_8008292C;
    }
}

loc_80082928:
{
    r9 = 0;
}

loc_8008292C:
{
}

loc_80082930:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80082948;
    }
}

loc_80082934:
{
    r6 = (r23 & -134217728);
    r6 = (r6 + 1879048192);
}

loc_80082940:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(0))) {
        goto loc_80082948;
    }
}

loc_80082944:
{
    r8 = 0;
}

loc_80082948:
{
}

loc_8008294C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80082960;
    }
}

loc_80082950:
{
    r5 = (r5 + 1073741824);
}

loc_80082958:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(0))) {
        goto loc_80082960;
    }
}

loc_8008295C:
{
    r7 = 0;
}

loc_80082960:
{
}

loc_80082964:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008297C;
    }
}

loc_80082968:
{
    r5 = (r23 & -8388608);
    r5 = (r5 + 1056964608);
}

loc_80082974:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(0))) {
        goto loc_8008297C;
    }
}

loc_80082978:
{
    r4 = 0;
}

loc_8008297C:
{
}

loc_80082980:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80082998;
    }
}

loc_80082984:
{
    r4 = (r23 & -134217728);
    r4 = (r4 + 805306368);
}

loc_80082990:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(0))) {
        goto loc_80082998;
    }
}

loc_80082994:
{
    r3 = 0;
}

loc_80082998:
{
}

loc_8008299C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800829B4;
    }
}

loc_800829A0:
{
    r3 = (r23 & -16384);
    r3 = (r3 + 536870912);
}

loc_800829AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(0))) {
        goto loc_800829B4;
    }
}

loc_800829B0:
{
    r0 = 0;
}

loc_800829B4:
{
}

loc_800829B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800829DC;
    }
}

loc_800829BC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -784);
    r4 = 74;
    r5 = 0x80590000u;
    r5 = (r5 + -768);
    r6 = r23;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800829DCu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800829DC:
{
    MemoryInline::FlatWrite32(r23, r28);
}

loc_800829E0:
{
}

loc_800829E4:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80082AF4;
    }
}

loc_800829E8:
{
    r3 = r22;
    r4 = r28;
    ctx->lr = 0x800829F4u;
    if constexpr (KnownRegArgsCpuCall<0x80060538u>(&func_80060538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80060538_21B2 = func_80060538_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80060538_21B2);
        r4 = static_cast<uint32_t>(regargs_result_80060538_21B2 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80060538u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r23 = r3;
    r0 = (r23 & 3);
}

loc_80082A00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80082A20;
    }
}

loc_80082A04:
{
    r3 = 0x80590000u;
    r3 = (r3 + -784);
    r4 = 85;
    r5 = 0x80590000u;
    r5 = (r5 + -716);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80082A20u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80082A20:
{
}

loc_80082A24:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_80082A30;
    }
}

loc_80082A28:
{
    r3 = 0;
    goto loc_80082AF8;
}

loc_80082A30:
{
    r28 = (r23 + r18);
    r3 = 24;
    r18 = (r23 + r16);
    r4 = r18;
    // inline leaf 0x8007B8D4 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x8007B8D4
    r16 = r3;
}

loc_80082A4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80082A84;
    }
}

loc_80082A50:
{
    MemoryInline::FlatWriteRam32((r31 + 60), r1);
    r4 = r28;
    r5 = (r28 + r30);
    r6 = r25;
    ctx->lr = 0x80082A64u;
    if constexpr (KnownRegArgsCpuCall<0x800844D0u>(&func_800844D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_800844D0_2F7A = func_800844D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800844D0_2F7A);
        r4 = static_cast<uint32_t>(regargs_result_800844D0_2F7A >> 32);
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
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800844D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80082A84:
{
    r18 = (r23 + r19);
    r19 = (r23 + r20);
    r20 = (r23 + r21);
    r3 = 10380;
    r4 = r23;
    // inline leaf 0x80060530 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x80060530
    r29 = r3;
}

loc_80082AA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80082AF4;
    }
}

loc_80082AA8:
{
    MemoryInline::FlatWriteRam32((r31 + 36), r1);
    MemoryInline::FlatWriteRam32((r1 + 8), r19);
    MemoryInline::FlatWriteRam32((r1 + 12), r20);
    r4 = r22;
    r5 = r16;
    r6 = (r23 + r17);
    r7 = r24;
    r8 = r26;
    r9 = r27;
    r10 = r18;
    ctx->lr = 0x80082AD4u;
    if constexpr (KnownRegArgsCpuCall<0x8008338Cu>(&func_8008338C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_8008338C_366E = func_8008338C_ra38_1ee_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8008338C_366E);
        r4 = static_cast<uint32_t>(regargs_result_8008338C_366E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008338Cu>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_80082AF4:
{
    r3 = r29;
}

loc_80082AF8:
{
    r10 = r31;
    r11 = (r10 + 128);
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r1 = r10;
    ctx->lr = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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

extern "C" void func_80082848(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80082848_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80082848 func_80082848 preserves=true fpr_mask=0x00000000
