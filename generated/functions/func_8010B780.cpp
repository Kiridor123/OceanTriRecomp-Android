#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013599C(CpuContext* ctx);
extern "C" uint64_t func_8013599C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8018297C(CpuContext* ctx);
extern "C" uint64_t func_8018297C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8010B780_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_8010B780;

loc_8010B780:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r26 = r3;
    r3 = (r1 + 40);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 28);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 16);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 56);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r28 = MemoryInline::FlatRead32((r26 + 48));
    r27 = MemoryInline::FlatRead32((r26 + 56));
    r3 = r28;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl5_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl5_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x8012D088;
    }
}

loc_inl5_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl5_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl5_0x8012D088;
    }
}

loc_inl5_0x8012D080:
{
    r3 = 0;
    goto loc_inl5_cont_8012D068;
}

loc_inl5_0x8012D088:
{
    r3 = 1;
}

loc_inl5_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_8010B7CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8010B7F0;
    }
}

loc_8010B7D0:
{
    r3 = MemoryInline::FlatRead8((r26 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 6), static_cast<uint8_t>(r0));
    r0 = 20;
    MemoryInline::FlatWrite32((r26 + 16), r0);
    goto loc_8010BA94;
}

loc_8010B7F0:
{
    r0 = MemoryInline::FlatRead8((r28 + 481));
    MemoryInline::FlatWrite8((r26 + 68), static_cast<uint8_t>(r0));
    r3 = r28;
    ctx->lr = 0x8010B800u;
    if constexpr (KnownRegArgsCpuCall<0x8018297Cu>(&func_8018297C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8018297C_10F5 = func_8018297C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8018297C_10F5);
        r4 = static_cast<uint32_t>(regargs_result_8018297C_10F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8018297Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    r0 = (r3 & 255);
}

loc_8010B80C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8010B81C;
    }
}

loc_8010B810:
{
}

loc_8010B814:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8010B83C;
    }
}

loc_8010B818:
{
    goto loc_8010B848;
}

loc_8010B81C:
{
    r0 = MemoryInline::FlatRead8((r26 + 8));
}

loc_8010B824:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8010B830;
    }
}

loc_8010B828:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 7), static_cast<uint8_t>(r0));
}

loc_8010B830:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 68), static_cast<uint8_t>(r0));
    goto loc_8010B864;
}

loc_8010B83C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 68), static_cast<uint8_t>(r0));
    goto loc_8010B864;
}

loc_8010B848:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r27 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 8));
}

loc_8010B858:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B864;
    }
}

loc_8010B85C:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r26 + 7), static_cast<uint8_t>(r0));
}

loc_8010B864:
{
    r0 = MemoryInline::FlatRead8((r26 + 7));
}

loc_8010B86C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B884;
    }
}

loc_8010B870:
{
}

loc_8010B874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8010B890;
    }
}

loc_8010B878:
{
}

loc_8010B87C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8010B8C0;
    }
}

loc_8010B880:
{
    goto loc_8010B8F0;
}

loc_8010B884:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 69), static_cast<uint8_t>(r0));
    goto loc_8010B8F0;
}

loc_8010B890:
{
    r3 = MemoryInline::FlatRead32((r26 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 16), r0);
}

loc_8010B8A0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(25))) {
        goto loc_8010B8AC;
    }
}

loc_8010B8A4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r26 + 7), static_cast<uint8_t>(r0));
}

loc_8010B8AC:
{
    r3 = (r13 + -30216);
    r4 = MemoryInline::FlatRead32((r26 + 16));
    ctx->lr = 0x8010B8B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800FA95Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    MemoryInline::FlatWrite8((r27 + 69), static_cast<uint8_t>(r3));
    goto loc_8010B8F0;
}

loc_8010B8C0:
{
    r3 = MemoryInline::FlatRead32((r26 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r26 + 16), r0);
}

loc_8010B8D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8010B8E0;
    }
}

loc_8010B8D4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 7), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r26 + 16), r0);
}

loc_8010B8E0:
{
    r3 = (r13 + -30216);
    r4 = MemoryInline::FlatRead32((r26 + 16));
    ctx->lr = 0x8010B8ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800FA95Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    MemoryInline::FlatWrite8((r27 + 69), static_cast<uint8_t>(r3));
}

loc_8010B8F0:
{
    r0 = MemoryInline::FlatRead8((r27 + 68));
}

loc_8010B8F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B910;
    }
}

loc_8010B8FC:
{
}

loc_8010B900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8010B920;
    }
}

loc_8010B904:
{
}

loc_8010B908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8010B930;
    }
}

loc_8010B90C:
{
    goto loc_8010B954;
}

loc_8010B910:
{
    r30 = 0;
    r29 = 4;
    r0 = 1;
    goto loc_8010B958;
}

loc_8010B920:
{
    r30 = 4;
    r29 = MemoryInline::FlatRead32(r27);
    r0 = 1;
    goto loc_8010B958;
}

loc_8010B930:
{
    r0 = MemoryInline::FlatRead8((r26 + 7));
}

loc_8010B938:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B94C;
    }
}

loc_8010B93C:
{
    r0 = 1;
    r30 = 4;
    r29 = MemoryInline::FlatRead32(r27);
    goto loc_8010B958;
}

loc_8010B94C:
{
    r0 = 0;
    goto loc_8010B958;
}

loc_8010B954:
{
    r0 = 0;
}

loc_8010B958:
{
}

loc_8010B95C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8010BA90;
    }
}

loc_8010B960:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 69));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = 3;
    r5 = (r26 + 24);
    ctx->lr = 0x8010B988u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_8013599C_2B8B = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_2B8B);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_2B8B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r3 = 0x805A0000u;
    r0 = (r3 + -1212);
    r23 = (r0 + r4);
    r3 = 0x805A0000u;
    r0 = (r3 + -864);
    r22 = (r0 + r4);
    r3 = 0x805A0000u;
    r0 = (r3 + -892);
    r21 = (r0 + r4);
    r20 = (r27 + r4);
    r3 = 0x805A0000u;
    r0 = (r3 + -836);
    r19 = (r0 + r4);
    r18 = (r20 + 4);
    r24 = 0;
    r25 = 2;
    r27 = MemoryInline::FlatRead32((r1 + 12));
    goto loc_8010BA88;
}

loc_8010B9D4:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead32(r23);
    r5 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    r3 = (r1 + 40);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29376));
    f2.d = MemoryInline::FlatReadFloat32(r21);
    f3.d = MemoryInline::FlatReadFloat32(r22);
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 40);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 56);
    r4 = (r1 + 40);
    // inline leaf 0x8010148C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x8010148C
    r3 = MemoryInline::FlatRead32((r20 + 4));
    r4 = (r1 + 56);
    ctx->lr = 0x8010BA1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800A5420u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = MemoryInline::FlatRead32((r20 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r19);
    ctx->lr = 0x8010BA28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800F9B24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = MemoryInline::FlatRead32((r20 + 4));
    ctx->lr = 0x8010BA30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
}

loc_8010BA34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8010BA40;
    }
}

loc_8010BA38:
{
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r25));
}

loc_8010BA40:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r27);
    r3 = MemoryInline::FlatRead32((r20 + 4));
    r4 = (r26 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x8010BA54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = r26;
    r4 = r18;
    r5 = 1;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x8010BA6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r23 = (r23 + 4);
    r22 = (r22 + 4);
    r21 = (r21 + 4);
    r20 = (r20 + 4);
    r19 = (r19 + 4);
    r18 = (r18 + 4);
    r30 = (r30 + 1);
}

loc_8010BA88:
{
}

loc_8010BA8C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r29))) {
        goto loc_8010B9D4;
    }
}

loc_8010BA90:
{
    MemoryInline::FlatWrite8((r26 + 8), static_cast<uint8_t>(r31));
}

loc_8010BA94:
{
    r11 = (r1 + 160);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010B780(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010B780_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8010B780 func_8010B780 preserves=true fpr_mask=0x00000000
